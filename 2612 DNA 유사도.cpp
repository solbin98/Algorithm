//#include<iostream>
//#include<cstdio>
//#define N 1000
//using namespace std;
//char str1[N + 1], str2[N + 1];
//int dp[N + 1][N + 1], chk[N + 1][N + 1][2];
//int show[N + 1][2];
//int main()
//{
//	int n, m;
//	cin >> n;
//	cin >> str1;
//	cin >> m;
//	cin >> str2;
//
//
//	for (int i = 0; str1[i] != '\0'; i++)
//	{
//		for (int j = 0; str2[j] != '\0'; j++)
//		{
//			int plus = 0;
//			if (str1[i] != str2[j]) plus = -2;
//			else plus = 3;
//
//			if (plus < plus + dp[i][j])
//				dp[i + 1][j + 1] = plus + dp[i][j], chk[i + 1][j + 1][0] = i, chk[i + 1][j + 1][1] = j;
//			else
//			{
//				dp[i + 1][j + 1] = plus;
//				chk[i + 1][j + 1][0] = i + 1;
//				chk[i + 1][j + 1][1] = j + 1;
//			}
//			if (dp[i + 1][j + 1] < dp[i][j + 1] - 2) dp[i + 1][j + 1] = dp[i][j + 1] - 2, chk[i + 1][j + 1][0] = i, chk[i + 1][j + 1][1] = j + 1;
//			if (dp[i + 1][j + 1] < dp[i + 1][j] - 2) dp[i + 1][j + 1] = dp[i + 1][j] - 2, chk[i + 1][j + 1][0] = i + 1, chk[i + 1][j + 1][1] = j;
//		}
//	}
//
//	int ans = 0, now_i = 0, now_j = 0, index = 1;
//	int tmp[N + 1][2];
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			if (dp[i][j] > ans) ans = dp[i][j], now_i = i, now_j = j;
//	
//	while (1)
//	{
//		int t1, t2;
//		show[now_i][0]++;
//		show[now_j][1]++;
//		if ((now_i == chk[now_i][now_j][0]) && (now_j == chk[now_i][now_j][1])) break;
//		t1 = chk[now_i][now_j][0];
//		t2 = chk[now_i][now_j][1];
//		now_i = t1;
//		now_j = t2;
//	}
//	index--;
//	printf("%d\n", ans);
//	for (int i = 1; i <= n; i++)
//	{
//		if (show[i][0] != 0)
//			printf("%c", str1[i - 1]);
//	}
//	cout << endl;
//	for (int i = 1; i <= m; i++)
//	{
//		if (show[i][1] != 0)
//			printf("%c", str2[i - 1]);
//	}
//	return 0;
//}