//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#define N 100000
//using namespace std;
//pair<long long, long long> a[N + 1];
//unsigned long long sum[N + 1];
//int main()
//{
//	int n;	
//	cin >> n;
//	for (int i = 1; i <= n; i++)  scanf("%lld %lld", &a[i].first, &a[i].second);
//	sort(a + 1, a + n + 1);
//	for (int i = 1; i <= n; i++) sum[i] = sum[i - 1] + a[i].second;
//	for (int i = 1; i <= n; i++)
//	{
//		long long M = (sum[n] - sum[i]), P = sum[i];
//		if (P > M)
//		{
//			printf("%d", a[i].first);
//			return 0;
//		}
//	}
//	return 0;
//}