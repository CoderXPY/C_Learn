#define   _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include<iostream>
#include<bitset> 
using namespace std;
bitset<10011>a, b;
int main()
{
	int l, n;
	scanf("%d%d", &l, &n);
	a.set();
	b.set();
	//(0,0)��Ѩ (1,1)�� (1,0)���� 
	int x, y, z;
	int ans1 = 0, ans2 = 0;
	//	cout<<a<<endl<<b<<endl; 
	for (int i = 1; i <= n; i++)
	{
		scanf("%d%d%d", &x, &y, &z);
		if (x == 0)
		{
			for (int i = y; i <= z; i++)
			{
				ans2 += a[i] ^ b[i];
				a.reset(i);
				b.reset(i);
			}
		}
		if (x == 1)
			for (int i = y; i <= z; i++)
				a.set(i);
		//		cout<<a<<endl<<b<<endl; 
	}
	for (int i = 0; i <= l; i++)
		ans1 += a[i] ^ b[i];
	printf("%d\n%d\n", ans1, ans2);
	return 0;
}