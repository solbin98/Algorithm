//#include<iostream>
//#include<cstdio>
//#define N 10000
//using namespace std;
//long long dp[N + 1], a[N + 1][2];
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	for (int i = 1; i <= k; i++)
//		scanf("%d %d", &a[i][0], &a[i][1]);
//
//	for (int i = 1; i <= k; i++)
//	{
//		for (int j = n; j >= a[i][1]; j--)
//		{
//			if (j-a[i][1] == 0 || dp[j - a[i][1]] != 0)
//			{
//				if (dp[j - a[i][1]] + a[i][0] > dp[j])
//					dp[j] = dp[j - a[i][1]] + a[i][0];
//			}
//		}
//	}
//
//	long long ans = 0;
//	for (int i = n; i >= 1; i--)
//	{
//		if (dp[i] > ans) ans = dp[i];
//	}
//	printf("%lld", ans);
//	return 0;
//}