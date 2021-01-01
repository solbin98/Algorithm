//#include<iostream>
//#include<cstdio>
//#define N 100
//using namespace std;
//int map[N + 1][N + 1], sum[N + 1][N + 1];
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		map[a][b]++;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			int r = 0;
//			if (map[i][j] == 0) r = 1;
//			sum[i][j] = sum[i - 1][j] + sum[i][j - 1] + r - sum[i - 1][j - 1];
//		}
//	}
//
//
//	int ans = 98876544;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (i * j < m) continue;
//			for (int k = 1; k <= n; k++)
//			{
//				if (m % k == 0)
//				{
//					if (j - (m/k) >= 0 && i - k >= 0)
//					{
//						int val = sum[i][j] - sum[i][j - (m / k)] - sum[i - k][j] + sum[i - k][j - (m / k)];	
//						if (ans > val) ans = val;
//					}
//				}
//
//			}
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}