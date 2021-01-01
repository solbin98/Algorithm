//#include<iostream>
//#define N 20
//
//using namespace std;
//char map[N + 1][N + 1];
//int marking[26], dir[4][2] = { {-1,0},{0,-1},{0,1},{1,0}};
//int n, m, ans;
//
//void dfs(int y, int x, int count)
//{
//	marking[map[y][x]] = 1;
//	if (count > ans) ans = count;
//	for (int i = 0; i < 4; i++)
//	{
//		int py = y + dir[i][0], px = x + dir[i][1];
//		if (py >= 0 && py < n && px >= 0 && px < m)
//		{
//			if (marking[map[py][px]] == 0)
//			{
//				dfs(py, px, count + 1);
//			}
//		}
//	}
//	marking[map[y][x]] = 0;
//}
//
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) cin >> map[i];
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			map[i][j] -= 'A';
//	marking[map[0][0]] = 1;
//	dfs(0, 0, 1);
//	printf("%d", ans);
//	return 0;
//}