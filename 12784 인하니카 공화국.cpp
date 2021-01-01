//#include<iostream>
//#include<cstdio>
//#define N 1000
//#define INF 987654321
//using namespace std;
//int dp[N + 1], links[N + 1][N + 1] = { 0 };
//bool visit[N + 1] = { 0 };
//int T, n, m;
//
//int min(int a, int b) { if (a < b) return a; else return b; }
//int dfs(int now)
//{
//	int sum = 0;
//	visit[now] = 1;
//
//	for (int i = 1; i <= n; i++)
//		if (links[now][i] != 0 && visit[i] == 0)
//			sum += min(dfs(i), links[now][i]);
//
//	if (sum == 0) sum = INF;
//	return dp[now] = sum;
//}
//
//int main()
//{
//	cin >> T;
//	while (T--)
//	{
//		for (int i = 0; i <= N; i++)
//			for (int j = 0; j <= N; j++)
//				links[i][j] = 0, dp[i] = 0, visit[i] = 0;
//
//		cin >> n >> m;
//		if (n == 1 || m == 0)
//		{
//			printf("0\n");
//			continue;
//		}
//		for (int i = 1; i <= m; i++)
//		{
//			int t1, t2, t3;
//			scanf("%d %d %d", &t1, &t2, &t3);
//			links[t1][t2] = t3, links[t2][t1] = t3;
//		}
//		printf("%d\n", dfs(1));
//	}
//	return 0;
//}