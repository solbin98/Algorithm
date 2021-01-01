//#include<iostream>
//#include<cstdio>
//#include<vector>
//#define M 605
//using namespace std;
//short dp[M + 1][M + 1], a[200 + 1][2];
//
//int main()
//{
//	int w, h, n;
//
//	cin >> w >> h;
//	cin >> n;
//
//	for (int i = 1; i <= n; i++) scanf("%d %d", &a[i][0], &a[i][1]);
//
//	for (int i = 1; i <= w; i++)
//	{
//		for (int j = 1; j <= h; j++)
//		{
//			int min = i * j;
//			for (int k = 1; k <= n; k++)
//			{
//				if (i - a[k][0] >= 0 && j - a[k][1] >= 0)
//				{
//					if (min > dp[i-a[k][0]][a[k][1]] + dp[i][j - a[k][1]]) min = dp[i-a[k][0]][a[k][1]] + dp[i][j - a[k][1]];
//					if (min > dp[a[k][0]][j-a[k][1]] + dp[i - a[k][0]][j]) min = dp[a[k][0]][j-a[k][1]] + dp[i - a[k][0]][j];
//				}
//			}
//			dp[i][j] = min;
//		}
//	}
//
//	printf("%d", dp[w][h]);
//	return 0;
//}