//#include<iostream>
//#include<cstdio>
//#define N 100
//#define M 300
//using namespace std;
//int a[N + 1][2];
//int dp[M + 1][M + 1];
//int main()
//{
//	int n, m, k, ans = 0;
//	cin >> n >> m >> k;
//	
//	for (int i = 1; i <= n; i++)
//	{
//		int t1, t2;
//		scanf("%d %d", &t1, &t2);
//		a[i][0] = t1, a[i][1] = t2;
//	}
//	
//	for (int i = 0; i <= m; i++)
//		for (int j = 0; j <= k; j++)
//			dp[i][j] = -1;
//
//	dp[0][0] = 0;
//	for (int l = 1; l <= n; l++)
//		for (int i = m; i >= 0; i--)
//			for (int j = k; j >= 0; j--)
//			{
//				if (i + a[l][0] > m || j + a[l][1] > k) continue;
//				if (dp[i][j] != -1 && ( (dp[i][j] + 1 > dp[i + a[l][0]][j + a[l][1]]) || (dp[i+a[l][0]][j+a[l][1]]) == -1))
//					dp[i + a[l][0]][j + a[l][1]] = dp[i][j] + 1;
//			}
//
//	for (int i = 0; i <= m; i++)
//		for (int j = 0; j <= k; j++)
//			if (ans < dp[i][j]) ans = dp[i][j];
//	
//	printf("%d", ans);
//	return 0;
//}