#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
bool Comp(const int &a,const int &b)//�Լ���Ƶ�����ȽϺ�������Ԫ�ص�ֵ���н�������
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
	//sort(v.begin(),v.end());//Ĭ������������
	sort(v.begin(),v.end(),Comp);//ָ��������򣬽�������
	for(it=v.begin();it!=v.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	return 0;
}