//#include<cstdio>
//#include<string.h>
//#define N 2500
//#define INF 987654321
//
//int is_palin[N + 1][N + 1];
//int dp[N + 1];
//
//int main()
//{
//	char str[N + 1];
//	scanf_s("%s", str,sizeof(str));
//	int L = strlen(str);
//	for (int j = 1; j <= L; j++)
//		for (int i = j; i >= 1; i--)
//		{
//			if (i == j) is_palin[i][j] = 1;
//			else
//			{
//				if (str[i - 1] == str[j - 1])
//				{
//					if (i + 1 > j - 1 || is_palin[i + 1][j - 1] == 1) is_palin[i][j] = 1;
//				}
//			}
//		}
//	
//	for (int j = 1; j <= L; j++)
//	{
//		int min = INF;
//		for (int i = j; i >= 1; i--)
//		{
//			if (is_palin[i][j] == 1)
//			{
//				if (min > 1 + dp[i - 1]) min = dp[i - 1] + 1;
//			}
//		}
//		dp[j] = min;
//	}
//	printf("%d", dp[L]);
//	return 0;
//}