#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
bool Comp(const int &a,const int &b)//自己设计的排序比较函数，对元素的值进行降序排列
{
	if(a!=b) 
		return a>b;
	else 
		return a>b;
}
int main(void)
{
	vector<int> v;
	for(int i=0;i<10;i++)
		v.push_back(i);
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	//sort(v.begin(),v.end());//默认是升序排列
	sort(v.begin(),v.end(),Comp);//指定排序规则，降序排列
	for(it=v.begin();it!=v.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	return 0;
}