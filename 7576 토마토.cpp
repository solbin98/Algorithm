//#include<cstdio>
//#include<iostream>
//
//#define N 1000
//using namespace std;
//
//int map[N + 1][N + 1], dir[4][2] = { {-1,0},{0,-1},{0,1},{1,0} };
//int q[N * N + 1][2];
//bool visit[N + 1][N+1];
//
//int main()
//{
//	int n, m, index = 1, now, level = 0, sum = 0, ans = -1;
//	cin >> m >> n;
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			scanf_s("%d", &map[i][j]);
//	
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			if (map[i][j] == 1)
//			{
//				q[index][0] = i, q[index++][1] = j, visit[i][j] = 1;
//				level++;
//			}
//
//	now = 1;
//	while (now < index)
//	{
//		for (int i = 0; i < 4; i++)
//		{
//			int py = q[now][0] + dir[i][0], px = q[now][1] + dir[i][1];
//			if (py <= n && py >= 1 && px <= m && px >= 1)
//			{
//				if (visit[py][px] == 0 && map[py][px] == 0)
//				{
//					map[py][px] = 1;
//					q[index][0] = py;
//					q[index++][1] = px;
//					visit[py][px] = 1;
//					sum++;
//				}
//			}
//		}
//	
//		if (now == level)
//		{
//			level += sum;
//			sum = 0;
//			ans++;
//		}
//		now++;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (map[i][j] == 0)
//			{
//				printf("-1");
//				return 0;
//			}
//		}
//	}
//
//	printf("%d", ans);
//	return 0;
//}