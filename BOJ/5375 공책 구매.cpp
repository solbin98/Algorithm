//#include<iostream>
//#include<cstdio>
//#define N 10000
//#define M 100
//#define INF 9876543210000
//using namespace std;
//long long dp[N + 1], s[M + 1], p[M + 1], o[M + 1];
//
//long long min(long long a, long long b)
//{
//	if (a > b) return b;
//	else return a;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		long long n, m, ans = INF;
//		cin >> n >> m;
//		for (int i = 1; i <= N; i++) dp[i] = INF;
//
//		for (int i = 1; i <= m; i++)
//		{
//			long long a, b, c, idx = i;
//			scanf("%lld %lld %lld", &a, &b, &c);
//
//			while (p[idx - 1] > b) p[idx] = p[idx - 1], s[idx] = s[idx - 1], o[idx] = o[idx - 1], idx--;
//			p[idx] = b, s[idx] = a, o[idx] = c;
//		}
//
//		for (long long i = 1; i <= m; i++)
//		{
//			if (s[i] == 0) continue;
//
//			for (long long j = 0; j <= n; j++)
//			{
//				if (n - j <= s[i] && n - j != 0)
//				{
//					if (dp[j] + p[i] * (n - j) + o[i] < ans) ans = dp[j] + p[i] * (n - j) + o[i];
//				}
//				else if (n - j > s[i]) break;
//			}
//
//			for (long long j = n; j >= 0; j--)
//			{
//				if (dp[j] != INF)
//				{
//					if (j + min(n, s[i]) <= n)
//					{
//						if (dp[j + min(n, s[i])] > dp[j] + min(n, s[i]) * p[i] + o[i]) dp[j + min(n, s[i])] = dp[j] + min(n, s[i]) * p[i] + o[i];
//					}
//				}
//			}
//		}
//		if (dp[n] < ans) ans = dp[n];
//		printf("%lld\n", ans);
//	}
//
//	return 0;
//}