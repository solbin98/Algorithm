//#include<iostream>
//#include<cstdio>
//#define N 100
//using namespace std;
//long long map[N + 1][N + 1];
//int main()
//{
//	int n, m, k;
//	cin >> n >> m >> k;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			cin >> map[i][j], map[i][j] += map[i][j - 1];
//	
//	for (int j = 1; j <= m; j++)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			if (map[i][j] >= k)
//			{
//				printf("%d %d", i, j);
//				return 0;
//			}
//		}
//	}
//		
//	return 0;
//}