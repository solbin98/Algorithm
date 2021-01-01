//#include<iostream>
//#include<cstdio>
//#define MOD 10000003
//#define N 100
//#define M 100000
//using namespace std;
//long long dp[N + 1][M+1], a[N + 1];
//
//long long gcd(long long a, long long b)
//{
//	long long r = 0;
//	if (a < b)
//	{
//		long long tmp = a;
//		a = b;
//		b = tmp;
//	}
//	while (a % b != 0)
//	{
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	return b;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	for (int i = 1; i <= n; i++) scanf("%lld", &a[i]);	
//
//	long long ans = 0;
//	for (long long i = 1; i <= n; i++)
//	{
//		for (long long j = 1; j <= M; j++)
//		{
//			dp[i][j] += dp[i - 1][j];
//			if (dp[i - 1][j] != 0)
//			{
//				long long val = gcd(j, a[i]);
//				dp[i][val] += dp[i - 1][j];
//				dp[i][val] %= MOD;
//			}
//		}
//		dp[i][a[i]]++;
//		dp[i][a[i]] %= MOD;
//	}
//	printf("%lld", dp[n][1]);
//	return 0;
//}