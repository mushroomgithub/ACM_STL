#include<iostream>
#include<iomanip>
using namespace std;

int KMPMatch(char *s,char *p);
//void getNext(char *p,int *next);//递推法
void getNext(char *p,int *next);//直接求解法
bool equals(char *p,int i,int j);//判断p[0...j-1]与p[i-j...i-1]是否相等

int main(void)
{
	char *A="ababcababa";
	char *B="ababa";
	int index=KMPMatch(A,B);
	if(index!=-1)
		cout<<setw(4)<<"匹配成功"<<endl;
	else
		cout<<setw(4)<<"匹配不成功"<<endl;
	return 0;
}

int KMPMatch(char *s,char *p)	//KMP字符串匹配算法
{
    int next[100];
    int i,j;
    i=0;
    j=0;
    getNext(p,next);	//可以使用递推法，也可使用直接求解法
    while(i<strlen(s))
    {
        if(j==-1||s[i]==p[j])
        {
            i++;
            j++;
        }
        else
        {
            j=next[j];       //消除了指针i的回溯
        }
        if(j==strlen(p))
            return i-strlen(p);
    }
    return -1;
}

/*void getNext(char *p,int *next)  //递推法
{
int j,k;
next[0]=-1;
j=0;
k=-1;
while(j<strlen(p)-1)
{
if(k==-1||p[j]==p[k])    //匹配的情况下,p[j]==p[k]
{
j++;
k++;
next[j]=k;
}
else                   //p[j]!=p[k]
k=next[k];
}
}
*/
void getNext(char *p,int *next)  //直接求解法
{
    int i,j,temp;
    for(i=0;i<strlen(p);i++)
    {
        if(i==0)
        {
            next[i]=-1;     //next[0]=-1
        }
        else if(i==1) 
        {
            next[i]=0;      //next[1]=0
        }
        else
        {
            temp=i-1;
            for(j=temp;j>0;j--)
            {
                if(equals(p,i,j))
                {
                    next[i]=j;   //找到最大的k值
                    break;
                }
            }
            if(j==0)
                next[i]=0;
        }
    }
}

bool equals(char *p,int i,int j)     //判断p[0...j-1]与p[i-j...i-1]是否相等  
{
    int k=0;
    int s=i-j;
    for(;k<=j-1&&s<=i-1;k++,s++)
    {
        if(p[k]!=p[s])
            return false;
    }
    return true;
}