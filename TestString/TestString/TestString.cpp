// TestString.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include<iostream>
#include<string>
#include<algorithm>//Ϊ��ʹ���㷨reverse�㷨���������ַ���,��Ҫ����#include<algorithm>ͷ�ļ�
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	string s;
	s="123434";
	string::iterator it;
	it=s.begin();
	s.replace(3,3,"good");//�ӵ�3����ʼ����������3���ַ��滻Ϊ��good��
	cout<<s<<endl;
	s.insert(it+1,'p');
	cout<<s<<endl;
	/*s.replace(3,3,"good");
	cout<<s<<endl;*/
	/*s+=" Hello,Mogu";
	cout<<s<<endl;
	s.append(" HeHe");
	cout<<s<<endl;*/
	s.erase(it+3);
	cout<<s<<endl;
	s.erase(it,it+4);
	cout<<s<<endl;
	cout<<"��ǰ�ַ����ĳ���Ϊ��"<<s.length()<<endl;
	cout<<s.empty()<<endl;//���0��ʾ�ַ�����Ϊ��
	s="";//����ַ���
	cout<<s.empty()<<endl;//���Ϊ1,��ʾ�ַ���Ϊ��

	cout<<"��ʼһ�����ַ���"<<endl;
	s="cat dog cat";
	cout<<s.find('c')<<endl;//���ҵ�һ���ַ���c���������±�ֵ0
	cout<<s.find("c")<<endl;//���ҵ�һ�����ַ���"c"�������±�ֵ0
	cout<<s.find("cat")<<endl;//���ҵ�һ���Ӵ�"cat",�����±�ֵ0
	cout<<s.find("dog")<<endl;//���ҵ�һ���Ӵ�"dog"�������±�ֵ4
	cout<<s.find("dogc")<<endl;//���ҵ�һ���Ӵ�"dogc"���鲻���򷵻�4294967295

	cout<<s.compare("cat")<<endl;//s�󣬷���1
	cout<<s.compare("cat dog cat")<<endl;//������ȡ�����0
	cout<<s.compare("dog")<<endl;//sС������-1
	reverse(s.begin(),s.end());
	cout<<"��������֮����ַ���Ϊ��"<<s<<endl;
	return 0;
}