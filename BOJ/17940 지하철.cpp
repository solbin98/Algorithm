//#include<iostream>
//#include<cstdio>
//#define N 1000
//#define INF 987654321
//using namespace std;
//bool chk[N + 1], visit[N + 1];
//int cost1[N+1][N+1], cost2[N + 1][N + 1], dist[N + 1][2];
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++) scanf("%d", &chk[i]);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (i == j) continue;
//			if (chk[i] == chk[j]) cost1[i][j] = 0;
//			else cost1[i][j] = 1;
//		}
//	}
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			scanf("%d", &cost2[i][j]);
//
//	for (int i = 1; i <= n; i++) dist[i][0] = INF, dist[i][1] = INF;
//	dist[1][0] = 0, dist[1][1] = 0;
//
//	while (1)
//	{
//		int min1 = INF, min2 = INF, min_idx = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			if (min1 > dist[i][0] && visit[i] == 0)
//				min1 = dist[i][0], min2 = dist[i][1], min_idx = i;
//			else if (min1 == dist[i][0] && visit[i] == 0 && min2 > dist[i][1])
//				min1 = dist[i][0], min2 = dist[i][1], min_idx = i;
//		}
//		if (min1 == INF) break;
//		visit[min_idx] = 1;
//		for (int i = 1; i <= n; i++)
//		{
//			if (cost2[min_idx][i] != 0)
//			{
//				if (dist[i][0] > dist[min_idx][0] + cost1[min_idx][i])
//				{
//					dist[i][0] = dist[min_idx][0] + cost1[min_idx][i];
//					dist[i][1] = dist[min_idx][1] + cost2[min_idx][i];
//				}
//				else if (dist[i][0] == dist[min_idx][0] + cost1[min_idx][i])
//				{
//					if (dist[i][1] > dist[min_idx][1] + cost2[min_idx][i])
//						dist[i][1] = dist[min_idx][1] + cost2[min_idx][i];
//				}
//			}
//		}
//	}
//	printf("%d %d", dist[m+1][0], dist[m+1][1]);
//	return 0;
//}