#include<iostream>
using namespace std;
int BFMatch(char* s,char* p);
int main(void)
{
	char A[]="ababcababa";
	char B[]="ababa";
	int index=BFMatch(A,B);
	if(index!=-1)
		cout<<"Æ¥Åä³É¹¦£¡"<<endl;
	return 0;
}
int BFMatch(char* s,char* p)
{
	int i,j;
	i=0;
	while(i<strlen(s))
	{
		j=0;
		while(s[i]==p[j]&&j<strlen(p))
		{
			i++;
			j++;
		}
		if(j==strlen(p))
			return i-strlen(p);
		i=i-j+1;
	}
	return -1;
}