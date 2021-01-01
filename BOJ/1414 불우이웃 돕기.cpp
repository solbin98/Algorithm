//#include<iostream>
//#include<cstdio>
//#define N 100
//#define INF 987654321
//using namespace std;
//char map[N + 1][N + 1];
//int links[N + 1][N + 1], dist[N + 1];
//bool visit[N + 1];
//int main()
//{
//	int n, ans = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> map[i];
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//		{
//			int val = 0;
//			if (map[i][j] >= 'a' && map[i][j] <= 'z') val = map[i][j] - 'a' + 1;
//			else if (map[i][j] >= 'A' && map[i][j] <= 'Z') val = map[i][j] - 'A' + 27;
//			else if (map[i][j] == '0') val = INF;		
//			if(val != INF) ans += val;
//
//			if (links[i + 1][j + 1] == 0 || links[i + 1][j + 1] > val) links[i + 1][j + 1] = val, links[j + 1][i + 1] = val;
//		}
//	int cnt = 0;
//	for (int i = 1; i <= n; i++) dist[i] = INF;
//	dist[1] = 0;
//	while (1)
//	{
//		int min = INF, min_idx;
//		for (int i = 1; i <= n; i++)
//			if (visit[i] == 0 && dist[i] < min) min = dist[i], min_idx = i;
//		
//		if (min == INF) break;
//		visit[min_idx] = 1, cnt++;
//		ans -= min;
//		for (int i = 1; i <= n; i++)
//		{
//			if (links[min_idx][i] != INF)
//			{
//				if (dist[i] > links[min_idx][i]) dist[i] = links[min_idx][i];
//			}
//		}
//	}
//	if (cnt < n) ans = -1;
//	printf("%d", ans);
//	return 0;
//}