//#include<cstdio>
//#include<iostream>
//
//#define N 100
//#define INF 987654321
//
//using namespace std;
//int map[N + 1][N + 1];
//int main()
//{
//	int n, m;
//	cin >> n;
//	cin >> m;
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			map[i][j] = INF;
//
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		map[a][b] = 1;
//	}
//
//	for(int k=1;k<=n;k++)
//		for(int i=1;i<=n;i++)
//			for (int j = 1; j <= n; j++)
//			{
//				int min = INF;
//				if (min > map[i][k] + map[k][j]) min = map[i][k] + map[k][j];
//				if (min > map[i][j]) min = map[i][j];
//				map[i][j] = min;
//			}
//
//	for (int i = 1; i <= n; i++)
//	{
//		int cnt = 0;
//		for (int j = 1; j <= n; j++)
//		{
//			if (map[i][j] != INF || map[j][i] != INF) cnt++;
//		}
//		printf("%d\n", n - 1 - cnt);
//	}
//	return 0;
//}