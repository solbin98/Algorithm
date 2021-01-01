//#include<iostream>
//#include<cstdio>
//#define N 100000
//#define INF 987654321
//
//using namespace std;
//int a[N + 1][3], dp[N + 1][3];
//
//int main()
//{
//	int tmp, index = 1;
//	while (1)
//	{
//		scanf_s("%d", &tmp);
//		if (tmp == 0) break;
//		for (int i = 1; i <= tmp; i++)
//			scanf_s("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
//		dp[1][0] = INF, dp[1][1] = a[1][1], dp[1][2] = a[1][1] + a[1][2];
//		for (int i = 2; i <= tmp; i++)
//		{
//			int min = INF;
//			if (min > dp[i - 1][0]) min = dp[i-1][0];
//			if (min > dp[i - 1][1]) min = dp[i - 1][1];
//			dp[i][0] = min + a[i][0];
//
//			min = INF;
//			if (min > dp[i][0]) min = dp[i][0];
//			if (min > dp[i - 1][0]) min = dp[i - 1][0];
//			if (min > dp[i - 1][1]) min = dp[i - 1][1];
//			if (min > dp[i - 1][2]) min = dp[i - 1][2];
//			dp[i][1] = min + a[i][1];
//
//			min = INF;
//			if (min > dp[i][1]) min = dp[i][1];
//			if (min > dp[i - 1][1]) min = dp[i - 1][1];
//			if (min > dp[i - 1][2]) min = dp[i - 1][2];
//			dp[i][2] = min + a[i][2];
// 		}
//
//		printf("%d. %d\n",index, dp[tmp][1]);
//		index++;
//	}
//
//
//	return 0;
//}