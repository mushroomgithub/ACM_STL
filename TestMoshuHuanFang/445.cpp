#include<iostream>
#include<iomanip>//C++里的I/O流控制头文件,当希望格式化输出时使用,本函数中使用了该头文件中的setW(n)函数设置域宽为n个字符
using namespace std;
int main()
{
	int array[80][80];//储存幻方
	int num;//幻方的阶数
	int i;//循环变量
	int row,col;//行，列
	cout<<"请输入魔术幻方的阶数：";
	cin>>num;
	while(num%2!=1)
	{
		cout<<"请输入奇数 ! ! !"<<endl<<"请输入魔术幻方的阶数：";
		cin>>num;
	}
	cout<<endl<<endl;
	for(row=0; row<80; row++)//初始化数组arry[80][80]
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