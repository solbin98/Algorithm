//#include<iostream>
//#include<cstdio>
//#define N 5
//#define INF 987654321
//using namespace std;
//char str[N + 1][N + 1];
//int map[N + 1][N + 1];
//bool visit[N + 1][N + 1];
//
//int path[N + 1][2], list[N + 1][2], d[4][2] = { {-1,0},{0,-1},{0,1},{1,0} };
//int counts, ans = INF;
//
//int dist(int y1, int x1, int y2, int x2)
//{
//	int diff_y = y1 - y2, diff_x = x2 - x1;
//	if (diff_y < 0) diff_y *= -1;
//	if (diff_x < 0) diff_x *= -1;
//	return diff_y + diff_x;
//}
//
//int chk_dfs(int now, bool (*link)[N+1], bool visits[])
//{
//	int sum = 1;
//	visits[now] = 1;
//	for (int i = 1; i <= 5; i++)
//	{
//		if (link[now][i] && visits[i] == 0)
//			sum += chk_dfs(i, link, visits);
//	}
//	return sum;
//}
//
//bool chk(int cnts)
//{
//	bool link[N + 1][N + 1] = { 0 };
//	bool visits[N + 1] = { 0 };
//
//	for (int i = 1; i <= cnts; i++)
//		for (int j = i+1; j <= cnts; j++)
//			for (int k = 0; k < 4; k++)
//			{
//				int py = path[i][0] + d[k][0], px = path[i][1] + d[k][1];
//				if (path[j][0] == py && path[j][1] == px)
//				{
//					link[i][j] = 1, link[j][i] = 1;
//					break;
//				}
//			}
//
//	int sum = chk_dfs(1, link, visits);
//	if (sum == cnts) return 1;
//	else return 0;
//}
//
//void calc(int cnt)
//{
//	if (cnt == counts)
//	{
//		int sum = 0;		
//		if (chk(cnt) == 0) return;
//		for (int i = 1; i <= cnt; i++) sum += dist(path[i][0], path[i][1], list[i][0], list[i][1]);
//		if (sum < ans) ans = sum;
//		return;
//	}
//
//	for (int i = 1; i <= 5; i++)
//		for (int j = 1; j <= 5; j++)
//		{
//			if (visit[i][j] == 0)
//			{
//				visit[i][j] = 1;
//				path[cnt + 1][0] = i, path[cnt + 1][1] = j;
//				calc(cnt + 1);
//				visit[i][j] = 0;
//			}
//		}
//}
//
//int main()
//{
//	for (int i = 0; i < 5; i++) cin >> str[i];
//	for (int i = 1; i <= 5; i++)
//		for (int j = 1; j <= 5; j++)
//			if (str[i - 1][j - 1] == '*') map[i][j] = 1, list[++counts][0] = i, list[counts][1] = j;
//
//	calc(0);
//
//	printf("%d", ans);
//	return 0;
//}