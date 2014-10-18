// TestString.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<iostream>
#include<string>
#include<algorithm>//为了使用算法reverse算法反向排序字符串,需要声明#include<algorithm>头文件
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	string s;
	s="123434";
	string::iterator it;
	it=s.begin();
	s.replace(3,3,"good");//从第3个开始，将连续的3个字符替换为“good”
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
	cout<<"当前字符串的长度为："<<s.length()<<endl;
	cout<<s.empty()<<endl;//输出0表示字符串不为空
	s="";//清空字符串
	cout<<s.empty()<<endl;//输出为1,表示字符串为空

	cout<<"开始一个新字符串"<<endl;
	s="cat dog cat";
	cout<<s.find('c')<<endl;//查找第一个字符‘c’，返回下标值0
	cout<<s.find("c")<<endl;//查找第一个子字符串"c"，返回下标值0
	cout<<s.find("cat")<<endl;//查找第一个子串"cat",返回下标值0
	cout<<s.find("dog")<<endl;//查找第一个子串"dog"，返回下标值4
	cout<<s.find("dogc")<<endl;//查找第一个子串"dogc"，查不到则返回4294967295

	cout<<s.compare("cat")<<endl;//s大，返回1
	cout<<s.compare("cat dog cat")<<endl;//两者相等。返回0
	cout<<s.compare("dog")<<endl;//s小，返回-1
	reverse(s.begin(),s.end());
	cout<<"反向排序之后的字符串为："<<s<<endl;
	return 0;
}