//#include<iostream>
//#include<cstdio>
//#define N 100
//#define INF 987654321
//using namespace std;
//int main()
//{
//	int T;
//	cin >> T;
//
//	while (T--)
//	{
//		float C, D, d;
//		int a_i = 1, b_i = 1;
//		float a[N + 1] = { 0 }, b[N + 1] = { 0 };
//		float dp[N + 1][N + 1] = { 0 };
//
//		scanf("%f %f %f", &C, &D, &d);
//		while (1)
//		{
//			float tmp;
//			scanf("%f", &tmp);
//			if (tmp == 0) break;
//			a[a_i++] = tmp;
//		}
//
//		while (1)
//		{
//			float tmp;
//			scanf("%f", &tmp);
//			if (tmp == 0) break;
//			b[b_i++] = tmp;
//		}
//		a_i--, b_i--;
//
//		for (int i = 1; i <= a_i; i++) dp[i][0] = C * (float)i + D + d * (float)i;
//		for (int i = 1; i <= b_i; i++) dp[0][i] = C * (float)i + D + d * (float)i;
//
//		for (int i = 1; i <= a_i; i++)
//		{
//			for (int j = 1; j <= b_i; j++)
//			{
//				float min = INF;
//				for (int k = 1; k <= j; k++)
//				{
//					float cost = 0;
//					if (a[i] == b[k]) cost = dp[i - 1][k - 1] + C + ((j != k) * (D + ((j - k) * d))) + (j - k) * C;
//					else cost = dp[i - 1][k - 1] + (C * 2) + ((j != k) * (D + ((j - k) * d))) + (j - k) * C;
//					if (cost < min) min = cost;
//				}
//
//				for (int k = 1; k <= i; k++)
//				{
//					float cost = 0;
//					if (b[j] == a[k]) cost = dp[k-1][j-1] + C + ((i != k) * (D + ((i - k) * d))) + (i - k) * C;
//					else cost = dp[k-1][j-1] + (C * 2) + ((i != k) * (D + ((i - k) * d))) + (i - k) * C;
//					if (cost < min) min = cost;
//				}
//
//				if (min > D + d + dp[i - 1][j] + C) min = D + d + dp[i - 1][j] + C;
//				if (min > D + d + dp[i][j - 1] + C) min = D + d + dp[i][j - 1] + C;
//				if (min > dp[i][0] + dp[0][j]) min = dp[i][0] + dp[0][j];
//
//				dp[i][j] = min;
//			}
//		}
//		printf("%.f\n", dp[a_i][b_i]);
//
//	}
//}