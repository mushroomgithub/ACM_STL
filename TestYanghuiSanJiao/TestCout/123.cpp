//#include "stdafx.h"
#include <iostream>
using namespace std;
int main()//���1,2,3,4��������������ɵ����ظ����ֵ������͸���
{ 
	int sum = 0;
	//ѭ��
	for(int i=1;i != 5;++i )
		for(int j = 1; j!= 5; ++j)
			for(int k = 1;k!=5;++k)
				if(i!=j && i!=k && j!=k){
					cout<<i<<j<<k<<endl;
					++sum;
				}
				cout<<"sum:"<<sum<<endl;
				system("pause");
	return 0;
}