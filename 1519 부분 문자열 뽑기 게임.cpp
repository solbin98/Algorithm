//#include<iostream>
//#include<cstdio>
//#define N 1000000
//using namespace std;
//int dp[N + 1] = { -1 }, n, ans = N * 9;
//int tmp[N + 1][10];
//
//int solve(int num)
//{
//	if (dp[num] != 0) return dp[num];
//	int idx = 0, t_num = num;
//	while (t_num != 0) tmp[num][++idx] = t_num % 10, t_num /= 10;
//	for (int len = 1; len < idx; len++)
//	{
//		for (int s = 1; s <= idx - len + 1; s++)
//		{
//			int t_idx = 0, r = 1, diff = 0;
//
//			for (int i = s; i <= s + len - 1; i++)
//			{
//				diff += r * tmp[num][i];
//				r *= 10;
//			}			
//			if (diff == 0) continue;
//			int ref = solve(num - diff);
//			if (ref == -1)
//			{
//				if (num == n)
//				{
//					if (diff < ans) ans = diff;
//				}
//				return dp[num] = 1;
//			}
//		}
//	}
//	return dp[num] = -1;
//}
//
//
//int main()
//{
//	for (int i = 0; i <= 9; i++) dp[i] = -1;
//	cin >> n;
//	for(int i=1;i<=n;i++) solve(i);
//	if (dp[n] == -1) ans = -1;
//	printf("%d", ans);
//	return 0;
//}