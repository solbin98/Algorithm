//#include<iostream>
//#include<cstdio>
//#define N 10000
//#define MOD 987654321
//using namespace std;
//long long dp[N + 1];
//int main()
//{
//	int n;
//	cin >> n;
//	dp[2] = 1, dp[0] = 1;
//	for (int i = 3; i <= n; i++)
//	{
//		if (i % 2 == 1) continue;
//		for (int j = i - 1; j >= 1; j -= 2)
//		{
//			dp[i] += dp[i - j - 1] * dp[j - 1];
//			dp[i] %= MOD;
//		}
//	}
//	printf("%lld", dp[n]);
//	return 0;
//}