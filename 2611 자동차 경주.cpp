//#include<iostream>
//#include<cstdio>
//#define N 1000
//using namespace std;
//
//int dp[N + 1], links[N + 1][N + 1], chk[N + 1];
//int visit[N + 1];
//
//int dfs(int num, int n)
//{
//	if (dp[num] != 0) return dp[num];
//	int max = 0, max_index = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (links[num][i] == 0) continue;
//		if (i == 1)
//		{
//			if (max < links[num][1]) max = links[num][1], max_index = 1;
//		}
//		else
//		{
//			if (max < dfs(i, n) + links[num][i]) max = dfs(i, n) + links[num][i], max_index = i;
//		}
//	}
//	dp[num] = max;
//	chk[num] = max_index;
//	return max;
//}
//
//int main()
//{
//	int n, m;
//	cin >> n;
//	cin >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b, c;
//		scanf("%d %d %d", &a, &b, &c);
//		links[a][b] = c;
//	}
//	dfs(1, n);
//	printf("%d\n",dp[1]);
//
//	int now = 1;
//	while (1)
//	{	
//		
//		printf("%d ", now);
//		now = chk[now];
//		if (now == 1) break;
//	}
//	printf("1");
//	return 0;
//}