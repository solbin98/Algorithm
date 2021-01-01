//#include<iostream>
//#include<cstdio>
//#define N 1000
//#define M 200
//#define INF 987654321
//using namespace std;
//int dp[N + 1][11][M + 1], a[N + 1];
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//
//	for (int i = 0; i <= n; i++)
//		for (int j = 0; j <= 10; j++)
//			for (int k = 0; k <= m; k++)
//				dp[i][j][k] = INF;
//
//	dp[1][a[1]][m] = 0;
//	for (int i = 2; i <= n; i++)
//		for (int j = a[i]; j <= 10; j++)
//			for (int k = a[i - 1]; k <= 10; k++)
//				for (int l = 0; l <= m; l++)
//				{
//					if (l - (j - a[i]) >= 0)
//					{
//						int tmp = k - j;
//						if (tmp <= 0) tmp = 0;
//						if (dp[i][j][l - (j - a[i])] > dp[i - 1][k][l] + tmp * tmp) dp[i][j][l - (j - a[i])] = dp[i - 1][k][l] + tmp * tmp;
//					}
//				}
//	int ans = INF;
//	for(int j=0;j<=10;j++)
//		for (int k = 0; k <= m; k++)
//			if (ans > dp[n][j][k]) ans = dp[n][j][k];
//
//	printf("%d", ans);
//	return 0;
//}