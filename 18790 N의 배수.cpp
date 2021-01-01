//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#define N 506
//using namespace std;
//bool dp[2][N + 1][N + 1];
//short path[N + 1][N + 1][3];
//int a[N * 2];
//
//int min(int a, int b)
//{
//	if (a < b) return a;
//	else return b;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	int len = 2 * n - 1;
//	for (int i = 1; i <= len; i++) scanf("%d", &a[i]);
//	sort(a + 1, a + len+1);
//	dp[0][0][0] = 1;
//
//	for (int i = 1; i <= len; i++)
//	{
//		int now = !(i % 2), next = !(now), maxi = min(i, n);
//		for (int j = 0; j <= maxi; j++)
//		{
//			for (int k = 0; k < n; k++)
//				if (dp[now][j][k] == 1)
//				{
//					dp[next][j][k] = 1;
//					if (dp[next][j + 1][(k + a[i]) % n] == 0 && dp[now][j+1][(k+a[i])%n] == 0)
//					{
//						dp[next][j + 1][(k + a[i]) % n] = 1;
//						path[j + 1][(k + a[i]) % n][0] = j, path[j + 1][(k + a[i]) % n][1] = k; path[j + 1][(k + a[i]) % n][2] = i;
//					}
//				}
//		}
//	}
//
//	if (dp[(len%2)][n][0] == 0)
//	{
//		printf("-1");
//		return 0;
//	}
//
//	int ans[N + 1] = { 0 };
//	int idx = 0, y = n, x = 0;
//	while (1)
//	{
//		if (path[y][x][0] == y && path[y][x][1] == x) break;
//		ans[++idx] = path[y][x][2];
//		int ty = path[y][x][0], tx = path[y][x][1];
//		y = ty, x = tx;
//	}
//	for (int i = 1; i <= idx; i++) printf("%d ", a[ans[i]]);
//	return 0;
//}