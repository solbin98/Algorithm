//#include<iostream>
//#include<cstdio>
//#include<string.h>
//#define N 100
//using namespace std;
//
//char a[N + 1], str[2][N+1];
//int dp[2][N + 1][N + 1], len = 0;
//bool visit[2][N + 1][N + 1];
//
//int dps(int pos, int idx1, int idx2)
//{
//	if (idx2 == strlen(a)-1) return 1;
//	if (dp[pos][idx1][idx2] != 0 || visit[pos][idx1][idx2] == 1) return dp[pos][idx1][idx2];
//	visit[pos][idx1][idx2] = 1;
//	int sum = 0;
//	for (int i = idx1 + 1; i < len; i++)
//	{
//		if (str[!pos][i] == a[idx2+1])
//		{
//			sum += dps(!pos, i, idx2 + 1);
//		}
//	}
//	dp[pos][idx1][idx2] = sum;
//	return sum;
//}
//
//
//int main()
//{
//	cin >> a;
//	cin >> str[0];
//	cin >> str[1];
//	len = strlen(str[0]);
//	int ans = 0;
//	for (int i = 0; str[0][i] != '\0'; i++)
//		if (str[0][i] == a[0])
//			ans += dps(0, i, 0);
//		
//	for (int i = 0; str[1][i] != '\0'; i++)
//		if (str[1][i] == a[0])
//			ans += dps(1, i, 0);
//
//	printf("%d", ans);
//	return 0;
//}