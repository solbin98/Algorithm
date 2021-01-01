//#include<iostream>
//#include<cstdio>
//#define N 105
//#define INF 987654321
//using namespace std;
//int d[N + 1][N + 1];
//int cost[N + 1][N + 1];
//int main()
//{
//	int v, m, s, e;
//	cin >> v >> m;
//
//	for (int i = 1; i <= N; i++)
//		for (int j = 1; j <= N; j++)
//			if(i != j) d[i][j] = INF;
//
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b, c;
//		scanf("%d %d %d", &a, &b, &c);
//		d[a][b] = c, d[b][a] = c;
//	}
//	cin >> s >> e;
//	for (int k = 1; k <= v; k++)
//		for (int i = 1; i <= v; i++)
//			for (int j = 1; j <= v; j++)
//			{
//				if (d[i][j] > d[i][k] + d[k][j]) d[i][j] = d[i][k] + d[k][j];
//			}
//
//	for (int i = 1; i <= v; i++)
//	{
//		for (int j = 1; j <= v; j++) printf("%d ", d[i][j]);
//		printf("\n");
//	}
//	int ans = INF, ans_idx = -1;
//	for (int i = 1; i <= v; i++)
//	{
//		if (i == s || i == e) continue;
//		if (d[s][i] + d[e][i] < ans) ans = d[s][i] + d[e][i];
//	}
//
//	int min_val = INF;
//	for (int i = 1; i <= v; i++)
//	{
//		if (i == s || e == i) continue;
//		if (ans != d[s][i] + d[e][i]) continue;
//		if (d[s][i] > d[e][i]) continue;
//		if (min_val > d[s][i]) {
//			ans_idx = i;
//			min_val = d[s][i];
//		}
//	}
//	printf("%d", ans_idx);
//	return 0;
//}