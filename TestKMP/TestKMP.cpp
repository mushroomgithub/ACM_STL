#include<iostream>
#include<iomanip>
using namespace std;

int KMPMatch(char *s,char *p);
//void getNext(char *p,int *next);//���Ʒ�
void getNext(char *p,int *next);//ֱ����ⷨ
bool equals(char *p,int i,int j);//�ж�p[0...j-1]��p[i-j...i-1]�Ƿ����

int main(void)
{
	char *A="ababcababa";
	char *B="ababa";
	int index=KMPMatch(A,B);
	if(index!=-1)
		cout<<setw(4)<<"ƥ��ɹ�"<<endl;
	else
		cout<<setw(4)<<"ƥ�䲻�ɹ�"<<endl;
	return 0;
}

int KMPMatch(char *s,char *p)	//KMP�ַ���ƥ���㷨
{
    int next[100];
    int i,j;
    i=0;
    j=0;
    getNext(p,next);	//����ʹ�õ��Ʒ���Ҳ��ʹ��ֱ����ⷨ
    while(i<strlen(s))
    {
        if(j==-1||s[i]==p[j])
        {
            i++;
            j++;
        }
        else
        {
            j=next[j];       //������ָ��i�Ļ���
        }
        if(j==strlen(p))
            return i-strlen(p);
    }
    return -1;
}

/*void getNext(char *p,int *next)  //���Ʒ�
{
int j,k;
next[0]=-1;
j=0;
k=-1;
while(j<strlen(p)-1)
{
if(k==-1||p[j]==p[k])    //ƥ��������,p[j]==p[k]
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
void getNext(char *p,int *next)  //ֱ����ⷨ
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
                    next[i]=j;   //�ҵ�����kֵ
                    break;
                }
            }
            if(j==0)
                next[i]=0;
        }
    }
}

bool equals(char *p,int i,int j)     //�ж�p[0...j-1]��p[i-j...i-1]�Ƿ����  
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