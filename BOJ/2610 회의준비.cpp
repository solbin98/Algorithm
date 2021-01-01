//#include<iostream>
//#include<cstdio>
//#define N 100
//#define INF 987654321
//using namespace std;
//int links[N + 1][N + 1], ans_ary[N + 1];
//int dp[N + 1][N + 1], ind = 1, maxs, max_index = 0;
//bool visit[N + 1];
//
//int dfs(int now, int n)
//{
//	visit[now] = 1;
//	int t = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (now != i && dp[now][i] != INF && dp[now][i] > t) t = dp[now][i];
//	}
//
//	if (t < maxs)
//	{
//		maxs = t;
//		max_index = now;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (visit[i] == 0 && dp[now][i] != INF)
//		{
//			int tmp = dfs(i, n);
//			if (maxs > tmp) maxs = tmp;
//		}
//	}
//	return maxs;
//}
//
//int main()
//{
//	int n, m;
//	cin >> n;
//	cin >> m;
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			dp[i][j] = INF, links[i][j] = INF;
//
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		links[a][b] = 1, links[b][a] = 1;
//	}
//
//	for(int k=1;k<=n;k++)
//		for(int i=1;i<=n;i++)
//			for (int j = 1; j <= n; j++)
//			{
//				int min = INF;
//				if (min > dp[i][k] + dp[k][j]) min = dp[i][k] + dp[k][j];
//				if (min > links[i][j]) min = links[i][j];
//				if (dp[i][j] > min) dp[i][j] = min;
//			}
//
//	
//	for (int i = 1; i <= n; i++)
//	{
//		maxs = INF;
//		if (visit[i] == 0) dfs(i, n), ans_ary[max_index]++, ind++;
//	}
//	printf("%d\n", ind - 1);
//	for (int i = 1; i <= n; i++)
//	{
//		if (ans_ary[i] != 0)
//		{
//			printf("%d\n",i);
//		}
//	}
//	return 0;
//}
