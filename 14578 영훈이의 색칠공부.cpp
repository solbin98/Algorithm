//#include<iostream>
//#include<cstdio>
//#define mod 1000000007
//#define N 100000
//using namespace std;
//long long dp[N + 1];
//int main()
//{
//	int n;
//	long long ans = 1;
//	cin >> n;
//
//	dp[2] = 1;
//	dp[1] = 0;
//	for (int i = 3; i <= n; i++)
//	{
//		dp[i] = (i - 1) * (dp[i - 1]);
//		dp[i] %= mod;
//		dp[i] += (i - 1) * dp[i - 2];
//		dp[i] %= mod;
//	}
//	long long r = 1;
//	for (int i = 1; i <= n; i++) r *= i, r %= mod;
//
//	printf("%lld", (dp[n] * r)%mod);
//	return 0;
//}