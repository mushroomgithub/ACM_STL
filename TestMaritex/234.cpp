#include <iostream>
#include<iomanip>
using namespace std;
#define M 3
#define N 4
#define S 2
int main(void)//������������㷨C[i][j]+=A[i][k]*B[k][j]
{
	int A[M][N]={0},B[N][S]={0},C[M][S]={0},i,j,k;
	
	cout<<"PLS input value to Maritex A:"<<endl;
	for(i=1;i<=M;i++)
		for(j=1;j<=N;j++)
			cin>>A[i][j];

	cout<<"��ʾ����A��ֵ:"<<endl;
	for(i=1;i<=M;++i)
	{
		for(j=1;j<=N;++j)
		{
			cout<<setw(4)<<A[i][j];
		}
		 cout<<endl;
	}
	cout<<"PLS input value to Maritex B:"<<endl;
	for(i=1;i<=N;i++)
		for(j=1;j<=S;j++)
			cin>>B[i][j];

	cout<<"��ʾ����B��ֵ:"<<endl;
	for(i=1;i<=N;++i)
	{
		for(j=1;j<=S;++j)
		{
			cout<<setw(4)<<B[i][j];
		}
		 cout<<endl;
	}

	for(i=1;i<=M;i++)
		for(j=1;j<=S;j++)
			for(k=1;k<=N;k++)//ʵ�ֵ��ص�����k���Լӣ�ʵ�ֶԾ���C�ĸ�ֵ
			C[i][j]+=A[i][k]*B[k][j];

	cout<<"���C[M][S]=A*B�����ֵ:"<<endl;
	for(i=1;i<=M;++i)
	{
		for(j=1;j<=S;++j)
		{
			cout<<setw(4)<<C[i][j];
		}
		 cout<<endl;
	}
	cout<<endl;
	system("pause");
	return 0;
}