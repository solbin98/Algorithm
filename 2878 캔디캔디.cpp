//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#define N 100005
//
//using namespace std;
//unsigned long long a[N + 1], sum[N + 1], result[N + 1];
//int compare(const void *a, const void *b){ return (*((unsigned long long *)a) - *((unsigned long long *)b)); }
//
//int main()
//{
//	unsigned long long m, n;
//	unsigned long long removed = 0;
//
//	cin >> m >> n;
//	for (int i = 1; i <= n; i++) scanf("%llu", &a[i]);
//	qsort(&a[1], n, sizeof(a[0]), compare);
//	for (int i = 1; i <= n+1; i++) sum[i] = sum[i - 1] + a[i];	
//	for (unsigned long long i = n-1; ;)
//	{
//		if (a[i] == a[i + 1])
//		{
//			i--;
//			continue;
//		}
//		unsigned long long cost;
//		if (i == 0) cost = sum[n] - sum[i] - removed;
//		else cost = ((sum[n] - sum[i]) - removed) - ( (a[i]) * (n -i) );	
//		if (cost > m)
//		{
//			if ((n - i) > m)
//			{
//				for (int j = n; j >= i + m + 1; j--) result[j] = a[i+1];
//				for (int j = i + 1; j <= i + m; j++) result[j] = a[i+1]-1;
//				for (int j = 1; j <= i; j++)result[j] = a[j];
//				break;
//			}
//			else
//			{
//				unsigned long long h = m / (n - i), tmod = m % (n - i);
//				if (tmod == 0)
//				{
//					for (int j = n; j >= i+1; j--) result[j] = a[i+1] - h;
//					for (int j = 1; j <= i; j++) result[j] = a[j];
//					break;
//				}
//				else
//				{
//					for (int j = i + 1; j <= n; j++) result[j] = a[i + 1] - h;
//					for (unsigned long long j = i + 1; j <= i + 1 + tmod - 1; j++) result[j]--;
//					for (int j = 1; j <= i; j++) result[j] = a[j];
//					break;
//				}
//			}
//		}
//		else
//		{
//			m -= cost;
//			removed += (n - i) * (a[i + 1] - a[i]);
//			if (m == 0)
//			{
//				for (int j = i; j <= n; j++) result[j] = a[i];
//				for (int j = 1; j < i; j++) result[j] = a[j];
//				break;
//			}
//		}
//
//		if (i == 0) break;
//		i--;
//	}
//
//	unsigned long long ans = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		ans += result[i] * result[i];
//		ans %= 18446744073709551615;
//	}
//	printf("%llu", ans);
//	return 0;
//}