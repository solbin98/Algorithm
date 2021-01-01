//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<vector>
//#define N 100000
//#define M 10000
//#define K 500
//using namespace std;
//
//int dp[N + 1], last_pos[K + 1], lens[K + 1];
//int fail[K + 1][M + 1];
//char str[N + 1];
//char tmp[K + 1][N + 1];
//
//int max(int a, int b)
//{
//	if (a > b) return a;
//	else return b;
//}
//
//int main()
//{
//	cin >> str;
//	int n, len1 = strlen(str);
//	cin >> n;
//	for (int p = 1; p <= n; p++)
//	{
//		scanf("%s", tmp[p]);
//		int len2 = strlen(tmp[p]);
//		lens[p] = len2;
//		for (int i = 1, j = 0; i < len2; i++)
//		{
//			while (j > 0 && tmp[p][i] != tmp[p][j]) j = fail[p][j - 1];
//			if (tmp[p][i] == tmp[p][j]) fail[p][i] = ++j;
//		}
//	}
//
//	for (int p = 1; p <= len1; p++)
//	{
//		dp[p] = dp[p - 1];
//		for (int k = 1; k <= n; k++)
//		{		
//			int len2 = lens[k];
//			while (last_pos[k] > 0 && str[p-1] != tmp[k][last_pos[k]]) last_pos[k] = fail[k][last_pos[k] - 1];
//			if (str[p-1] == tmp[k][last_pos[k]])
//			{
//				if (last_pos[k] == len2 - 1)
//				{
//					dp[p] = max(dp[p - len2] + len2, dp[p]);
//					last_pos[k] = fail[k][last_pos[k]];
//				}
//				else last_pos[k]++;
//			}
//		}
//	}
//
//	printf("%d", dp[len1]);
//	return 0;
//}