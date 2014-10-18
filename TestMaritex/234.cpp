#include <iostream>
#include<iomanip>
using namespace std;
#define M 3
#define N 4
#define S 2
int main(void)//两个矩阵相乘算法C[i][j]+=A[i][k]*B[k][j]
{
	int A[M][N]={0},B[N][S]={0},C[M][S]={0},i,j,k;
	
	cout<<"PLS input value to Maritex A:"<<endl;
	for(i=1;i<=M;i++)
		for(j=1;j<=N;j++)
			cin>>A[i][j];

	cout<<"显示矩阵A的值:"<<endl;
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

	cout<<"显示矩阵B的值:"<<endl;
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
			for(k=1;k<=N;k++)//实现的重点在于k的自加，实现对矩阵C的赋值
			C[i][j]+=A[i][k]*B[k][j];

	cout<<"输出C[M][S]=A*B矩阵的值:"<<endl;
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