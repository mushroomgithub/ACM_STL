#include<vector>
#include<iostream>
using namespace  std;
int main(void)
{
	vector<int> v(10);
	for(int i=0;i<10;i++)
		v[i]=i;
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	v.erase(v.begin()+2);
	for(it=v.begin();it!=v.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	v.erase(v.begin()+1,v.begin()+5);
		for(it=v.begin();it!=v.end();it++)
			cout<<*it<<" ";
	cout<<endl;
	cout<<v.size()<<endl;
	v.clear();
	cout<<v.size()<<endl;
	return 0;
}