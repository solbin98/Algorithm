//#include<iostream>
//#include<cstdio>
//#define N 2000
//using namespace std;
//char str[N + 1][N + 1];
//int map[N + 1][N + 1], d[4][2] = { {-1,0},{0,-1},{0,1},{1,0} };
//int ans[N + 1][N + 1];
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) scanf("%s", str[i]);
//	for (int i = 1; i <= n; i++)
//		for (int j = 0; j < m; j++)
//			if (str[i][j] == 'B') map[i][j + 1] = 1;
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{				
//			ans[i][j] = 2;
//			for (int k = 0; k < 4; k++)
//			{
//					int py = i + d[k][0], px = j + d[k][1];
//					if (py >= 1 && py <= n && px >= 1 && px <= m)
//					{
//						map[py][px] = !map[py][px];
//					}
//			}
//		}
//	}
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//		{
//			if (map[i][j] == 1) ans[i][j] = 3;
//		}
//	
//	printf("1\n");
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++) printf("%d",ans[i][j]);
//		printf("\n");
//	}
//	return 0;
//}