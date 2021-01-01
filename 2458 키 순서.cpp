//#include<iostream>
//#include<cstdio>
//#define N 500
//using namespace std;
//int link[N + 1][N + 1], cnts[N + 1];
//bool visit[N + 1];
//int n, m;
//
//int dfs1(int now)
//{
//	int cnt = 1;
//	visit[now] = 1;
//	for (int i = 1; i <= n; i++)
//		if (link[now][i] == 1 && visit[i] == 0) cnt += dfs1(i);
//	return cnt;
//}
//
//int dfs2(int now)
//{
//	int cnt = 1;
//	visit[now] = 1;
//	for (int i = 1; i <= n; i++)
//		if (link[i][now] == 1 && visit[i] == 0) cnt += dfs2(i);
//	return cnt;
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		link[a][b] = 1;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j <= N; j++) visit[j] = 0;
//		cnts[i] += dfs1(i);
//		for (int j = 0; j <= N; j++) visit[j] = 0;
//		cnts[i] += dfs2(i); 
//		cnts[i] -= 2;
//	}
//
//	int ans = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (cnts[i] == n-1) ans++;
//	}
//	printf("%d", ans);
//	return 0;
//}