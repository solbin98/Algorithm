//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<queue>
//#define N 100
//using namespace std;
//int dir[6][2] = { {-1,-1},{-1,1},{0,-1},{0,1},{1,-1},{1,1} };
//int dfs(short num, vector<int> links[], short matched[], bool visit[])
//{
//	visit[num] = 1;
//	for (int i = 0; i < links[num].size(); i++)
//	{
//		if (matched[links[num][i]] == 0)
//		{
//			matched[links[num][i]] = num;
//			return 1;
//		}
//		else
//		{
//			if (visit[matched[links[num][i]]] == 0)
//			{
//				int res = dfs(matched[links[num][i]],links,matched,visit);
//				if (res == 1)
//				{
//					matched[links[num][i]] = num;
//					return 1;
//				}
//			}
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		
//		int n, m;
//		short tmp[N + 1][N + 1] = { 0 };
//		short matched[N * N + 1] = { 0 };
//		char map[N + 1][N + 1];
//		vector <int> links[N * N + 1];
//
//		cin >> n >> m;
//		for (int i = 0; i < n; i++) scanf("%s", map[i]);
//
//		int idx = 0;
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < m; j++)
//				if (map[i][j] != 'x') tmp[i + 1][j + 1] = ++idx;
//
//		for (int j = 1; j <= m; j+=2)
//			for (int i = 1; i <= n; i++)
//				for (int k = 0; k < 6; k++)
//				{
//					int py = i + dir[k][0], px = j + dir[k][1];
//					if (py >= 1 && py <= n && px >= 1 && px <= m)
//						if (map[py - 1][px - 1] != 'x' && map[i-1][j-1] != 'x')
//						{
//							links[tmp[i][j]].push_back(tmp[py][px]);
//						}
//				}
//
//		int ans = 0;
//		for (int j = 1; j <= m; j += 2)
//			for (int i = 1; i <= n; i++)
//			{
//				if (map[i - 1][j - 1] == 'x') continue;
//				bool visit[N * N + 1] = { 0 };
//				ans += dfs(tmp[i][j],links,matched,visit);
//			}
//
//		printf("%d\n", idx - ans);
//	}
//	return 0;
//}