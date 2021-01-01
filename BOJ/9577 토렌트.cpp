//#include<iostream>
//#include<cstdio>
//#define N 100
//using namespace std;
//int n, m;
//int time[100][2], links[N + 1][N + 1], match[N + 1], t_link[N + 1][N + 1];
//bool visited[N + 1];
//
//int dfs(int num)
//{
//	visited[num] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		if (t_link[num][i] <= 0) continue;
//		if (match[i] == -1)
//		{
//			match[i] = num;
//			return 1;
//		}
//		else
//		{
//			if (visited[match[i]] == 0)
//			{
//				if (dfs(match[i]) == 1)
//				{
//					match[i] = num;
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
//	int T, max = 0;
//	cin >> T;
//	while (T--)
//	{
//		cin >> n >> m;
//
//		for (int i = 0; i <= N; i++) match[i] = -1;
//		for (int i = 0; i <= N; i++)
//			for (int j = 0; j <= N; j++)
//				links[j][i] = 0, t_link[i][j] = 0;
//
//		int max = 0, ans = -1;
//
//		for (int i = 1; i <= m; i++)
//		{
//			int tmp, t;
//			cin >> time[i][0] >> time[i][1];
//			cin >> tmp;
//			for (int j = 1; j <= tmp; j++)
//			{
//				cin >> t;
//				links[i][t] = 1;
//			}
//			if (time[i][1] > max) max = time[i][1];
//		}
//
//		for (int tim = 0; tim < max; tim++)
//			for (int j = 1; j <= m; j++)
//			{
//				if (time[j][0] <= tim && time[j][1] > tim )
//				{
//					for (int k = 1; k <= n; k++)
//					{
//						t_link[tim][k] += links[j][k];
//					}
//				}
//			}
//
//		int count = 0;
//		for (int i = 0; i < max; i++)
//		{
//			count += dfs(i);
//			for (int j = 0; j <= N; j++) visited[j] = 0;
//			if (count == n)
//			{
//				ans = i+1;
//				break;
//			}
//		}
//		printf("%d\n", ans);
//	}
//}