//#include<iostream>
//#include<cstdio>
//#define N 1600
//using namespace std;
//int dp[N + 1][N + 1], len;
//char str[N + 1];
//
//void solve(int s, int e)
//{	
//	dp[s][e] = 1;
//	if (s >= e) return;
//	int now = len - (e - s + 1);
//	if (now % 3 == 0)
//	{
//		if (s + 1 < len && str[s] == 'B' && dp[s + 1][e] == 0) solve(s + 1, e);
//		if (e - 1 >= 0 && str[e] == 'B' && dp[s][e - 1] == 0) solve(s, e - 1);
//	}
//	else if (now % 3 == 1)
//	{
//		if (s + 1 < len && str[s] == 'L' && dp[s + 1][e] == 0) solve(s + 1, e);
//		if (e - 1 >= 0 && str[e] == 'L' && dp[s][e - 1] == 0) solve(s, e - 1);
//	}
//	else
//	{
//		if (s + 1 < len && str[s] == 'D' && dp[s + 1][e] == 0) solve(s + 1, e);
//		if (e - 1 >= 0 && str[e] == 'D' && dp[s][e - 1] == 0) solve(s, e - 1);
//	}
//}
//
//int main()
//{
//	int ans = 0;
//	cin >> len;
//	cin >> str;
//	len *= 3;
//	solve(0, len - 1);
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = i; j < len; j++)
//		{
//			if (!dp[i][j]) continue;
//			int now = (len - (j - i + 1));
//			if (now % 3 == 0)
//			{
//				if (str[i] == 'B' || str[j] == 'B')
//					if (ans < now + 1) ans = now + 1;
//			}
//			else if (now % 3 == 1)
//			{
//				if (str[i] == 'L' || str[j] == 'L')
//					if (ans < now + 1) ans = now + 1;
//			}
//			else
//			{
//				if (str[i] == 'D' || str[j] == 'D')
//					if (ans < now + 1) ans = now + 1;
//			}
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}