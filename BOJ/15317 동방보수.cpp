//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<algorithm>
//#define N 100000
//using namespace std;
//long long a[N + 1], b[N + 1];
//long long n, m, x;
//long long calc(long long num, long long money)
//{
//	for (int i = 1; i <= num; i++)
//	{
//		if (b[m - i + 1] < a[num - i + 1]) money -= a[num - i + 1] - b[m - i + 1];
//	}
//	if (money < 0) return 0;
//	else return 1;
//}
//
//long long min(long long a, long long b)
//{
//	if (a < b) return a;
//	else return b;
//}
//
//int main()
//{
//	cin >> n >> m >> x;
//	for (int i = 1; i <= n; i++) scanf("%lld", &a[i]);
//	for (int i = 1; i <= m; i++) scanf("%lld", &b[i]);
//	sort(a + 1, a + n + 1), sort(b+1, b +1 +m);
//
//	long long low = 1, high = min(n, m), mid;
//	long long max = 0;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		if (calc(mid, x) == 1)
//		{
//			low = mid + 1;
//			if (max < mid) max = mid;
//		}
//		else high = mid - 1;
//	}
//	printf("%lld", max);
//	return 0;
//}