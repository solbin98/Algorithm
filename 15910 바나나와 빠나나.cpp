//#include<iostream>
//#include<cstdio>
//#include<string.h>
//#define N 100000
//#define INF 987654321
//using namespace std;
//int dp[N + 1][7];
//char str[N + 1];
//
//int min(int a, int b)
//{
//	if (a < b) return a;
//	else return b;
//}
//int main()
//{
//	int len;
//	cin >> str;
//	len = strlen(str);
//
//	for (int i = 0; str[i] != '\0'; i++)
//		for (int j = 1; j <= 6; j++) dp[i + 1][j] = INF;
//	
//	if (str[0] != 'B') dp[1][1] = 1;
//	else dp[1][1] = 0;
//
//	for (int i = 1; str[i] != '\0'; i++)
//	{
//		int chk = 0;
//		if (str[i] != 'B') chk = 1;
//		dp[i + 1][1] = min(dp[i][1], dp[i][6]) + chk;
//
//		chk = 0;
//		if (str[i] != 'A') chk = 1;
//		dp[i + 1][2] = dp[i][1] + chk;
//		dp[i + 1][4] = dp[i][3] + chk;
//		dp[i + 1][6] = dp[i][5] + chk;
//
//		chk = 0;
//		if (str[i] != 'N') chk = 1;
//		dp[i + 1][3] = dp[i][2] + chk;
//		dp[i + 1][5] = min(dp[i][4], dp[i][6]) + chk;
//	}
//
//	printf("%d", dp[len][6]);
//	return 0;
//}