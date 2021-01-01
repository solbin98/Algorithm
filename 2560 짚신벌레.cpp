//#include<iostream>
//#include<cstdio>
//#define N 1000000
//#define MOD 1000
//using namespace std;
//int dp[N + 1][2];
//int main()
//{
//	int a, b, d, n;
//	cin >> a >> b >> d >> n;
//	dp[0][1] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		if (i - a >= 0) dp[i][0] += dp[i - a][1];
//		if (i - d >= 0) dp[i][0] += -dp[i - d][1];
//		dp[i][0] = (dp[i][0] + dp[i-1][0] + MOD) % MOD;
//		int t1 = 0, t2 = 0, t3 = 0;			
//		if (i - a >= 0)
//		{		
//			if(i != 1) t1 = dp[i - 1][1];
//			if (i - b >= 0) t2 = -dp[i - b][1];		
//			t3 = dp[i - a][1];
//		}		
//		dp[i][1] = (t1 + t2 + t3 + MOD) % MOD;
//	}
//	int sum = (dp[n][0] + dp[n][1])%MOD;
//	for (int i = n - 1; i >= n - a + 1; i--) sum += dp[i][1], sum %= MOD;
//	printf("%d", sum);
//	return 0;
//}