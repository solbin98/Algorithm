//#include<iostream>
//#include<cstdio>
//#define N 10
//#define INF 987654321
//using namespace std;
//int map[N + 1][N + 1];
//int idx[N + 1][N + 1], dir[14][2] = { {-1,0},{0,-1},{0,1},{1,0} };
//bool visit[N + 1][N + 1];
//int ans = INF, n;
//int solve(int i, int j, int cnt, int sum)
//{
//	if (cnt == 3)
//	{
//		if (sum < ans) ans = sum;
//		return 0;
//	}
//
//	if (i == n - 1 && j == n) return 0;
//	if (j == n)
//	{
//		solve(i + 1, 2, cnt, sum);
//		return 0;
//	}
//
//	bool chk = 0;
//	for (int k = 0; k < 4; k++)
//	{
//		int py = i + dir[k][0], px = j + dir[k][1];
//		if (visit[py][px] == 1)
//		{
//			chk = 1;
//			break;
//		}
//	}
//	if (visit[i][j] == 1) chk = 1;
//	if (chk == 0)
//	{
//		int tmp = 0;
//		for (int k = 0; k < 4; k++)
//		{
//			int py = i + dir[k][0], px = j + dir[k][1];
//			visit[py][px] = 1, tmp += map[py][px];
//		}
//		visit[i][j] = 1, tmp += map[i][j];
//		solve(i, j + 1, cnt+1, sum + tmp);
//		for (int k = 0; k < 4; k++)
//		{
//			int py = i + dir[k][0], px = j + dir[k][1];
//			visit[py][px] = 0;
//		}
//		visit[i][j] = 0;
//	}
//	solve(i, j+1, cnt, sum);
//	return 0;
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			scanf("%d", &map[i][j]);
//
//	solve(2, 2, 0, 0);
//	printf("%d", ans);
//	return 0;
//}