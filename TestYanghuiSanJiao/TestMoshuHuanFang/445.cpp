#include<iostream>
#include<iomanip>//C++���I/O������ͷ�ļ�,��ϣ����ʽ�����ʱʹ��,��������ʹ���˸�ͷ�ļ��е�setW(n)�����������Ϊn���ַ�
using namespace std;
int main()
{
	int array[80][80];//����÷�
	int num;//�÷��Ľ���
	int i;//ѭ������
	int row,col;//�У���
	cout<<"������ħ���÷��Ľ�����";
	cin>>num;
	while(num%2!=1)
	{
		cout<<"���������� ! ! !"<<endl<<"������ħ���÷��Ľ�����";
		cin>>num;
	}
	cout<<endl<<endl;
	for(row=0; row<80; row++)//��ʼ������arry[80][80]
	{ 
		for(col=0; col<80; col++)
		{
			array[row][col]=0;
		}
	}
	
	row=0;
	col=num/2;
	for(i=1; i<=num*num; i++)
	{
		array[row][col]=i;
		if(row==0&&col==num-1)
		{ 
			row++;
		}
		else
		{
			row--;
			col++;
			if(row<0)
			{
				row=num-1;
			}
			if(col==num)
			{
				col=0;
			}
			if(array[row][col]!=0)
			{
				row=row+2;col--;
			}
		}
	}
	for(row=0; row<num; row++)
	{
		for(col=0; col<num; col++)
		{
			cout<<setw(4)<<array[row][col];
		}
		cout<<endl;
	}
	return 0;
}