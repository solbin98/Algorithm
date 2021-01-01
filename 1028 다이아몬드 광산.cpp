//#include<iostream>
//#include<cstdio>
//#define N 750
//
//using namespace std;
//char str[N + 1];
//int map[N + 1][N + 1], dp[N + 1][N + 1][2];
//
//int min(int a, int b)
//{
//	if (a > b) return b;
//	else return a;
//}
//
//int main()
//{
//	int r, c, ans = 0;
//	cin >> r >> c;
//	for (int i = 0; i < r; i++)
//	{
//		scanf_s("%s", str, sizeof(str));
//		for (int j = 0; j < c; j++) map[i + 1][j + 1] = str[j] - '0';
//	}
//
//	for (int i = 1; i <= r;i++)
//	{
//		for (int j = 1; j <= c; j++)
//		{
//			if (map[i][j] == 1)
//			{
//				dp[i][j][0] = dp[i - 1][j - 1][0] + 1;
//				dp[i][j][1] = dp[i - 1][j + 1][1] + 1;
//			}
//
//			int tmp = min(dp[i][j][0], dp[i][j][1]);
//			tmp--;
//			for (int k = tmp; k >= 0; k--)
//			{
//				if (i - k >= 1 && j - k >= 1 && j + k <= c)
//				{
//					if (dp[i - k][j - k][1] >= k + 1 && dp[i - k][j + k][0] >= k + 1)
//					{
//						if (ans < k + 1) ans = k + 1;
//						break;
//					}
//				}
//			}
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}