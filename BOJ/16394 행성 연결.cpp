//#include<iostream>
//#include<cstdio>
//#define N 1000
//#define INF 900000000000
//using namespace std;
//int links[N + 1][N + 1];
//long long dist[N + 1];
//bool visit[N + 1];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		dist[i] = INF;
//		for (int j = 1; j <= n; j++)
//		{
//			int a;
//			scanf("%d",&links[i][j]);
//		}
//	}
//
//
//	dist[1] = 0;
//	long long ans = 0;
//	while (1)
//	{
//		long long min = INF, min_index = 0;
//
//		for (int i = 1; i <= n; i++)
//			if (min > dist[i] && visit[i] == 0) min = dist[i], min_index = i;
//
//		if (min == INF) break;
//		visit[min_index] = 1;
//
//		ans += min;
//		for (int i = 1; i <= n; i++)
//			if (links[min_index][i] != 0 && visit[i] == 0)
//				if (dist[i] > links[min_index][i]) dist[i] = links[min_index][i];
//	}
//	printf("%lld", ans);
//	return 0;
//}