//#include<cstdio>
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//#define N 1000
//int dp[N + 1][N + 1];
//int main()
//{
//	char str[N + 1];
//	cin >> str;
//	int n = strlen(str);
//
//	for (int j = 1; j <= n; j++)
//		for (int i = j; i >= 1; i--)
//		{
//			if (i == j)
//			{
//				dp[i][j] = 1;
//				continue;
//			}
//
//			if (str[i - 1] == str[j - 1])
//			{
//				if (i + 1 <= j - 1 && dp[i + 1][j - 1] == 0) dp[i][j] = 0;
//				else dp[i][j] = 1;
//			}
//		}
//
//
//	int cnt = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (dp[i][n] == 0) cnt++;
//		else break;
//	}
//	printf("%d", cnt+n);
//	return 0;
//}