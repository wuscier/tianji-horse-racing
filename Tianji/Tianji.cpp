//格式要好，自己明白每一句什么意思,不能乱写
//要写的简单简单简单，别太长
//藕才俊 
#include "stdafx.h"

#include<iostream>
#include<algorithm>
#define N 1010
using namespace std;
bool cmp(int a, int b)
{
	return a>b;
}
int main()
{
	int T[N];
	int K[N];
	int ti, tj, ki, kj, win, n, i;
	while (scanf("%d", &n) && n != 0)
	{
		for (int i = 0; i<n; i++)
		{
			scanf("%d", &T[i]);
		}
		for (i = 0; i<n; i++)
		{
			scanf("%d", &K[i]);
		}
		sort(T, T + n, cmp);
		sort(K, K + n, cmp);
		ti = ki = 0;
		tj = kj = n - 1;
		for (i = 0, win = 0; i<n; i++)
		{
			if (T[ti]>K[ki])
			{
				ti++;
				ki++;
				win++;
			}
			else if (T[ti]<T[ki])
			{
				tj--;
				ki++;
				win--;
			}
			else
			{
				if (T[tj]>K[kj])
				{
					tj--;
					kj--;
					win++;
				}
				else if (T[tj]<K[kj])
				{
					tj--;
					ki++;
					win--;
				}
				else
				{
					if (T[tj]<K[ki])
					{
						tj--;
						ki++;
						win--;
					}
				}
			}
		}
		printf("%d\n", win * 200);
	}
	return 0;
}
