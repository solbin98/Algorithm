//#include<iostream>
//#include<cstdio>
//#include<queue>
//#define N 1000
//
//using namespace std;
//
//char map[N + 1][N + 1];
//int visit[N + 1][N + 1][3], d[2][2] = { {0,-1},{0,1} };
//int n, m, l, r, start = 0;
//queue<pair<int, int>> queues;
//
//int main()
//{
//	cin >> n >> m;
//	cin >> l >> r;
//
//	for (int i = 0; i < n; i++) scanf("%s", map[i]);
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			if (map[i][j] == '2')
//				visit[i][j][0] = 1, visit[i][j][1] = l, visit[i][j][2] = r, start = j, queues.push({ i,j });
//
//	int ans = 0;
//	while (queues.empty() == 0)
//	{
//		pair<int, int> top = queues.front();
//		ans++;
//		queues.pop();
//
//		int py = top.first-1, px = top.second;
//		while (py >= 0 && map[py][px] != '1' && visit[py][px][0] == 0) // 현 위치에서 위쪽으로 쭉 방문
//		{
//			visit[py][px][0] = 1;
//			visit[py][px][1] = visit[top.first][top.second][1];
//			visit[py][px][2] = visit[top.first][top.second][2];
//			queues.push({py,px});	
//			py--;
//		}
//
//		py = top.first + 1;
//		while (py < n && map[py][px] != '1' && visit[py][px][0] == 0) // 현 위치에서 아래쪽으로 쭉 방문
//		{
//			visit[py][px][0] = 1;
//			visit[py][px][1] = visit[top.first][top.second][1];
//			visit[py][px][2] = visit[top.first][top.second][2];
//			queues.push({ py,px });	
//			py++;
//		}
//
//		for (int i = 0; i < 2; i++) // 왼쪽, 오른쪽 방문
//		{
//			int py = top.first + d[i][0], px = top.second + d[i][1];
//			if (py >= 0 && py < n && px >= 0 && px < m)
//			{
//				if (visit[py][px][0] == 0 && map[py][px] != '1')
//				{
//					visit[py][px][0] = 1;
//					visit[py][px][1] = visit[top.first][top.second][1];
//					visit[py][px][2] = visit[top.first][top.second][2];
//
//					if (i == 0) visit[py][px][1]--;
//					if (i == 1) visit[py][px][2]--;
//					if(visit[py][px][1] >= 0 && visit[py][px][2] >= 0) queues.push({ py,px });
//				}
//			}
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}