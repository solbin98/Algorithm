//#include<iostream>
//#define N 100
//using namespace std;
//long long dp[N + 1][21], a[N + 1];
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	dp[0][0] = 1;
//	for (int i = 1; i <= n-1; i++)
//	{
//		long long tmp[21] = {0};
//		if (i == 1 && a[i] == 0)
//		{
//			dp[i][0] = 1;
//			continue;
//		}
//		for (int j = 20; j >= 0; j--)
//		{
//			if (dp[i - 1][j] != 0 )
//			{
//				if (j + a[i] <= 20) tmp[j + a[i]] += dp[i - 1][j];
//				if (j - a[i] >= 0) tmp[j - a[i]] += dp[i - 1][j];
//			}
//		}
//		for (int j = 0; j <= 20; j++) dp[i][j] = tmp[j];
//	}
//	long long sum = 0;
//	printf("%lld", dp[n-1][a[n]]);
//	return 0;
//}