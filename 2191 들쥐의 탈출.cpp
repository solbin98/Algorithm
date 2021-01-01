//#include<cstdio>
//#include<iostream>
//#include<math.h>
//
//#define N 100
//using namespace std;
//double rats[N + 1][2], hole[N + 1][2], dist[N + 1][N + 1];
//bool visited[N + 1];
//int matched[N + 1];
//int n, m, s, v;
//
//int dfs(int num)
//{
//	visited[num] = 1;
//	for (int i = 1; i <= m; i++)
//	{
//		if (dist[num][i] == 1)
//		{
//			if (matched[i] == 0)
//			{
//				matched[i] = num;
//				return 1;
//			}
//			else
//			{
//				if (visited[matched[i]] == 0)
//				{
//					if (dfs(matched[i]) == 1)
//					{
//						matched[i] = num;
//						return 1;
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//
//double calc(double y, double x)
//{
//	return sqrt(y*y + x*x);
//}
//
//int main()
//{
//	cin >> n >> m >> s >> v;
//
//	for (int i = 1; i <= n; i++) cin >> rats[i][0] >> rats[i][1];
//	for (int i = 1; i <= m; i++) cin >> hole[i][0] >> hole[i][1];
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//		{
//			dist[i][j] = calc(rats[i][0] - hole[j][0], rats[i][1] - hole[j][1]);
//			if ((dist[i][j] / v) > s) dist[i][j] = -1;
//			else dist[i][j] = 1;
//		}
//
//	for (int i = 1; i <= n; i++)
//	{
//		dfs(i);
//		for (int i = 1; i <= n; i++) visited[i] = 0;
//	}
//		
//	int ans = 0;
//	for (int i = 1; i <= m; i++)
//	{
//		if (matched[i] != 0) ans++;
//	}
//	printf("%d", n - ans);
//	return 0;
//}