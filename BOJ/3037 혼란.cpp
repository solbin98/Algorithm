//#include<iostream>
//#include<cstdio>
//#define N 1000
//#define M 10000
//#define MOD 1000000007
//using namespace std;
//long long dp[N + 1][M + 1];
//int main()
//{
//	int n, r;
//	cin >> n >> r;
//	dp[0][0] = 1;
//	for (int i = 1; i <= n; i++) dp[i][0] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= r; j++)
//		{
//				long long a=0, b=0, c=0;
//				a = dp[i - 1][j], b = dp[i][j - 1];
//				if (j - i >= 0) c = -dp[i - 1][j - i];
//				dp[i][j] = (a + b + MOD + c)%MOD;
//		}
//	}
//
//	printf("%lld", dp[n][r]);
//	return 0;
//}