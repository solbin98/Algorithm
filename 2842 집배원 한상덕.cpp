//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<algorithm>
//#include<queue>
//#define N 50
//#define M 2500
//using namespace std;
//char map[N + 1][N + 1];
//
//int n, idx = 0, init_val;
//int init_y = 0, init_x = 0;
//int link[N + 1][N + 1], sorted[M + 1];
//int d[8][2] = { {-1,-1},{-1,0},{-1,1}, {0,-1},{0,1},{1,-1},{1,0},{1,1} };
//vector<pair<int, int>> K_list;
//
//void dfs(int y, int x, int mins, int maxs, bool (*visit)[N+1])
//{
//	visit[y][x] = 1;
//	for (int i = 0; i < 8; i++)
//	{
//		int px = x + d[i][0], py = y + d[i][1];
//		if (py >= 0 && py < n && px >= 0 && px < n)
//		{
//			if (visit[py][px] == 1) continue;
//			if (link[py + 1][px + 1] >= mins && link[py + 1][px + 1] <= maxs) dfs(py, px, mins, maxs, visit);
//		}
//	}
//}
//
//bool chk(int mins, int maxs)
//{
//	bool visit[N + 1][N + 1] = { 0 };
//	dfs(init_y, init_x, mins, maxs, visit);
//	for (int i = 0; i < K_list.size(); i++)
//		if (visit[K_list[i].first][K_list[i].second] == 0) return 0;
//	return 1;
//}
//
//
//
//int main()
//{
//	int out = 1e9;
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> map[i];
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//		{
//			scanf("%d", &link[i][j]);
//			sorted[++idx] = link[i][j];
//			if (map[i - 1][j - 1] == 'P') init_val = link[i][j], init_y = i - 1, init_x = j - 1;
//			if (map[i - 1][j - 1] == 'K') K_list.push_back({ i - 1, j - 1 });
//		}
//	sort(sorted + 1, sorted + 1 + n * n);
//	for (int i = 1; i <= n * n; i++)
//	{
//		if (sorted[i] > init_val) break;
//		int lo = i, hi = n * n, mid;
//		int ans = -1;
//		while (lo <= hi)
//		{
//			mid = (lo + hi) / 2;
//			if (out < (sorted[mid] - sorted[i]) || chk(sorted[i], sorted[mid]) == 1 && sorted[mid] >= init_val)
//			{
//				ans = mid;
//				hi = mid - 1;
//			}
//			else lo = mid + 1;
//		}
//		if (ans != -1 && out > sorted[ans] - sorted[i])
//			out = sorted[ans] - sorted[i];
//	}
//	printf("%d", out);
//	return 0;
//}