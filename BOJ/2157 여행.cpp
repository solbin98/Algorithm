//#include<iostream>
//#include<cstdio>
//#define N 300
//using namespace std;
//int links[N + 1][N + 1], dp[N+1][N+1];
//bool visit[N + 1][N + 1];
//
//int dfs(int num, int cnts, int n)
//{
//	if (num == n) return 0;
//	if (cnts == 0) return -1;
//	if (dp[num][cnts] != 0 || visit[num][cnts] != 0) return dp[num][cnts];
//	visit[num][cnts] = 1;
//
//	int max = 0;
//	for (int i = num + 1; i <= n; i++)
//	{
//		if (links[num][i] == 0) continue;
//		int tmp = dfs(i, cnts - 1, n);
//		if (tmp == -1)  continue;
//		if (max < tmp + links[num][i]) max = tmp + links[num][i];
//	}
//	dp[num][cnts] = max;
//	return max;
//}
//
//int main()
//{
//	int n, m, k;
//	int ans = 0;
//	cin >> n >> m >> k;
//	for (int i = 1; i <= k; i++)
//	{
//		int a, b, c;
//		scanf("%d %d %d", &a, &b, &c);
//		if (links[a][b] < c) links[a][b] = c;
//	}
//	printf("%d", dfs(1, m - 1, n));
//	return 0;
//}