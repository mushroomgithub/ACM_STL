//¡¾3n+1¡¿
/*===========================================================================*\
* POJ 1207 The 3n + 1 problem
* @author CocoonFan
* @date 3/2/13
\*===========================================================================*/
#include<iostream> 
using namespace std; 
int steps(int n); 
int main()
{
	int i,j,n,k;
	int i1,j1; 
	while(cin >> i >> j)
	{
		int max = 0;
		i1 = i;
		j1 = j;
		if(i>j)
		{
			int t = i;i = j;j = t;
		} 
		max = steps(i1);
		for(k = i+1; k <= j; ++k)
		{
			if(max < steps(k)) max = steps(k);
		} 
		cout << i1 << " " << j1 << " " << max << endl;
	} 
	return 0;
} 
int steps(int n)
{
	int count = 1;
	while(n != 1)
	{
		if(n%2)
		{ //[3(2k+1)+1]/2 = 3k +2 /// ---- k = n/2
			n = n/2*3 +2;
			count += 2;
		} 
		else 
		{
			n /= 2;
			count++;
		}
	}
	return count;
}