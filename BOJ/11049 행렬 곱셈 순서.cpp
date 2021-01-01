//#include<iostream>
//#include<cstdio>
//#define N 500
//#define INF 987654321
//using namespace std;
//int dp[N + 1][N + 1], a[N + 1][2];
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d %d", &a[i][0], &a[i][1]);
//	for (int j = 1; j <= n; j++)
//		for (int i = j-1; i >= 1; i--)
//		{
//			int min = INF;
//			for (int k = i; k < j; k++)
//			{
//				if (dp[i][k] + dp[k + 1][j] + a[i][0] * a[k][1] * a[j][1] < min) min = dp[i][k] + dp[k + 1][j] + a[i][0] * a[k][1] * a[j][1];
//			}
//			dp[i][j] = min;
//		}
//	printf("%d", dp[1][n]);
//}