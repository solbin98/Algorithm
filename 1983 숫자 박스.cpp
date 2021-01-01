//#include<iostream>
//#include<cstdio>
//#define N 400
//using namespace std;
//short dp[N + 1][N + 1][N + 1], a[N + 1], b[N + 1];
//int main()
//{
//	int n, tmp, a_idx = 0, b_idx = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &tmp);
//		if (tmp != 0) a[++a_idx] = tmp;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &tmp);
//		if (tmp != 0) b[++b_idx] = tmp;
//	}
//
//	for (int idx = 1; idx <= n; idx++)
//	{
//		for (int i = 1; i <= a_idx; i++)
//		{
//			for (int j = 1; j <= b_idx; j++)
//			{
//				int max = -50000;
//				if (idx < i || idx < j) continue;
//				if (max < dp[i - 1][j - 1][idx - 1] + a[i] * b[j]) max = dp[i - 1][j - 1][idx - 1] + a[i] * b[j];
//				if (idx - i >= 1)
//				{
//					if (max < dp[i][j - 1][idx - 1]) max = dp[i][j - 1][idx - 1];
//				}
//				if (idx - j >= 1)
//				{
//					if (max < dp[i - 1][j][idx - 1]) max = dp[i - 1][j][idx - 1];
//				}
//				if (idx - i >= 1 && idx - j >= 1)
//				{
//					if (max < dp[i][j][idx - 1]) max = dp[i][j][idx - 1];
//				}
//				dp[i][j][idx] = max;
//			}
//		}
//	}
//	printf("%d", dp[a_idx][b_idx][n]);
//	return 0;
//}