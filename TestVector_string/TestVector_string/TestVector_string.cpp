// TestVector_string.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include <string>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	/*vector<string> v;//string ������Ϊvector������Ԫ��
	v.push_back("Jack");
	v.push_back("Mark");
	v.push_back("Tom");
	cout<<v[0]<<endl;
	cout<<v[1]<<endl;
	cout<<v[2]<<endl;
	cout<<v[0][0]<<endl;
	cout<<v[1][0]<<endl;
	cout<<v[2][0]<<endl;
	cout<<v[2].length()<<endl;*/

	/*string s;
	//s="1234059";//�����24
	s="4453121";//�����20
	int sum=0;
	for(int i=0;i<s.length();i++)//string���͵����ֻ�����������Ҫ����������ֵ�ÿλ��������������ȡȡ��ķ��������ѵ�ʱ��ͻ�̫��
											//���ʱ�����ǿ��Խ���������ݵ����ַ��������������ͷ��㣬ʡʱ���ˡ�
	{
		if(s[i]=='0') sum+=0;
		else if(s[i]=='1') sum+=1;
		else if(s[i]=='2') sum+=2;
		else if(s[i]=='3') sum+=3;
		else if(s[i]=='4') sum+=4;
		else if(s[i]=='5') sum+=5;
		else if(s[i]=='6') sum+=6;
		else if(s[i]=='7') sum+=7;
		else if(s[i]=='8') sum+=8;
		else if(s[i]=='9') sum+=9;
	}
	cout<<sum<<endl;*/

	string s;
	char ss[100];
	scanf("%s",&ss);
	s=ss;
	printf("%s",s.c_str());//printf����ַ���������Ҫ����c_str()����
	//printf(s.c_str());
	cout<<endl;
	printf("%s",ss);
	cout<<endl;
	cout<<s<<endl;
	cout<<ss<<endl;
	return 0;
}

