#include<iostream>
#include<fstream>
using namespace std;
int main(void)
{
	ifstream cin("aaa.txt");//输入设备修改为文本aaa.txt，初始输入设备室键盘
	int a,b;
	while(cin>>a>>b)
	{
		cout<<a+b<<endl;
	}
	return 0;
}