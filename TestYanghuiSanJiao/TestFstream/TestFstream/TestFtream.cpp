#include<iostream>
#include<fstream>
using namespace std;
int main(void)
{
	ifstream cin("aaa.txt");//�����豸�޸�Ϊ�ı�aaa.txt����ʼ�����豸�Ҽ���
	int a,b;
	while(cin>>a>>b)
	{
		cout<<a+b<<endl;
	}
	return 0;
}