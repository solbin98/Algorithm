//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<queue>
//
//#define N 500
//#define UP 0
//#define DOWN 1
//#define LEFT 2
//#define RIGHT 3
//#define INF 987654321
//
//using namespace std;
//int arr[N + 1][N + 1], link[N + 1][N + 1][4][2];
//int dp[N + 1][N + 1][2] = { 0 }, d[4][2] = { {-1,0},{0,-1},{0,1},{1,0} };
//
//pair<int, int> point[N + 1];
//char map[N + 1][N + 1];
//
//int main()
//{
//	int n, t, r, c, idx = 0;
//
//	cin >> n >> t >> r >> c;
//
//	for (int i = 1; i <= n; i++) scanf("%s", map[i]);
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//		{
//			dp[i][j][0] = INF, dp[i][j][1] = INF;
//			if (map[i][j - 1] == '#')
//			{
//				for (int k = j - 1; k >= 1; k--)
//				{
//					link[i][k][RIGHT][0] = i, link[i][k][RIGHT][1] = j;
//					if (map[i][k - 1] == '#') break;
//				}
//				for (int k = j + 1; k <= n; k++)
//				{
//					link[i][k][LEFT][0] = i, link[i][k][LEFT][1] = j;
//					if (map[i][k - 1] == '#') break;
//				}
//				for (int k = i - 1; k >= 1; k--)
//				{
//					link[k][j][UP][0] = i, link[k][j][UP][1] = j;
//					if (map[k][j - 1] == '#') break;
//				}
//				for (int k = i + 1; k <= n; k++)
//				{
//					link[k][j][DOWN][0] = i, link[k][j][DOWN][1] = j;
//					if (map[k][j - 1] == '#') break;
//				}
//			}
//		}
//
//	typedef struct
//	{
//		int y, x, chk;
//	}info;
//
//	queue <info> queues;
//	info first = { 1,1,0 };
//	queues.push(first);
//	dp[1][1][0] = 0;
//	while (queues.empty() == 0)
//	{
//		info front = queues.front();
//		int y = front.y, x = front.x, m = front.chk;
//		queues.pop();
//		for (int i = 0; i < 4; i++)
//		{
//			int py = front.y + d[i][0], px = front.x + d[i][1];
//			if (py >= 1 && py <= n && px >= 1 && px <= n)
//			{
//				if (dp[py][px][0] > dp[y][x][m] + 1)
//				{
//					dp[py][px][0] = dp[y][x][m] + 1;
//					queues.push({ py,px,0 });
//				}
//			}
//		}
//
//		int val = 0;
//		if (front.chk == 0) val = t;
//		for (int i = 0; i < 4; i++)
//		{
//			if (link[y][x][i][0] != 0)
//			{
//				int py = link[y][x][i][0], px = link[y][x][i][1];
//
//				if (dp[py][px][1] > dp[y][x][m] + 1 + val)
//				{
//					dp[py][px][1] = dp[y][x][m] + 1 + val, queues.push({ py,px,1 });
//				}
//			}
//		}
//	}
//	int ans = 0;
//	if (dp[r][c][0] > dp[r][c][1]) ans = dp[r][c][1];
//	else ans = dp[r][c][0];
//	printf("%d", ans);
//	return 0;
//}