//#include<iostream>
//#include<cstdio>
//#define N 1000
//#define INF 987654321
//using namespace std;
//int dp[N + 1][N + 1];
//int main()
//{
//	int n, m, tmp;
//	cin >> n >> m;
//	if (n > m) tmp = n, n = m, m = tmp;
//
//	for (int j = 1; j <= m; j++)
//	{
//		for (int i = 1; i <= j; i++)
//		{
//			if (i == j) dp[i][j] = 1;
//			else if (i == 1) dp[i][j] = j;
//			else if (j % i == 0) dp[i][j] = j / i;
//			else
//			{
//				int min = INF;
//				for (int k = 1; k <= j / 2; k++)
//				{
//					int a = i, b = j - k, c = i, d = k;
//					int tmp = 0;
//					if (a > b) tmp = a, a = b, b = tmp;
//					if (c > d) tmp = c, c = d, d = tmp;
//					if (min > dp[a][b] + dp[c][d]) min = dp[a][b] + dp[c][d];
//				}
//
//				for (int k = 1; k <= i / 2; k++)
//				{
//					int a = i-k, b = j, c = k, d = j;
//					int tmp = 0;
//					if (a > b) tmp = a, a = b, b = tmp;
//					if (c > d) tmp = c, c = d, d = tmp;
//					if (min > dp[a][b] + dp[c][d]) min = dp[a][b] + dp[c][d];
//				}
//				dp[i][j] = min;
//			}
//		}
//	}
//	printf("%d", dp[n][m]);
//	return 0;
//}