//#include<iostream>
//#include<cstdio>
//#include<string.h>
//#define N 205
//using namespace std;
//char str1[N + 1], str2[N + 1], tmp[500 + 1];
//int dp[N + 1][N + 1], len1, len2;
//bool flag = 0;
//
//int solve(int a, int b, int n)
//{
//	if (dp[a][b] != -1) return dp[a][b];
//	if (a == len1 && b == len2) return dp[a][b] = 1;
//	int flag = 0;
//	if ((str1[a] == tmp[a + b])) flag |= solve(a + 1, b, n + 1);
//	if ((str2[b] == tmp[a + b])) flag |= solve(a, b + 1, n + 1);
//	return dp[a][b] = flag;
//}
//
//int main()
//{
//	int T, idx = 0;
//	cin >> T;
//	while (T--)
//	{
//		flag = 0;
//		idx++;
//		for (int i = 0; i <= N; i++)
//			for (int j = 0; j <= N; j++)
//				dp[i][j] = -1;
//		cin >> str1 >> str2 >> tmp;
//		len1 = strlen(str1), len2 = strlen(str2);
//		if (solve(0, 0, 0)) printf("Data set %d: yes\n", idx);
//		else printf("Data set %d: no\n", idx);
//	}
//}