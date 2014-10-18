#include<iostream>
#include<iomanip>
using namespace std;
void getNext(char *p,int *next);
int main(void)
{
	char p[]={'#','a','b','a','b','a','a','a','b','a'};
	int next[10];
	next[0]=-1;
	getNext(p,next);
	return 0;
}

void getNext(char *p,int *next)
{
    int j,k;
    //next[0]=-1;
	next[1]=0;
    //j=0;
	j=1;
    //k=-1;
	k=0;
    while(j<strlen(p)-1)
    {
        if(/*k==-1*/k==0||p[j]==p[k])    //匹配的情况下,p[j]==p[k]
        {
            j++;
            k++;
            next[j]=k;
        }
        else                   //p[j]!=p[k]
            k=next[k];
    }
	for(int i=0;i<10;i++)
		cout<<"next数组下标为"<<i<<"的值为:"<<setw(4)<<next[i]<<endl;
}