//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<algorithm>
//
//#define N 500
//#define MOD 522
//using namespace std;
//int dp[N + 1][N + 1][3];
//int a[N + 1], b[N + 1], calc_val[N + 1];
//vector<int> link[N + 1];
//int calc_mod(int number)
//{
//	if (number < 0)
//	{
//		int len = number / MOD;
//		len *= -1;
//		number += MOD * (len + 1);
//	}
//	return number % MOD;
//}
//
//int main()
//{
//	int n, m, ans = 0, ans_idx = 0, ans_val = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//	cin >> m;
//	for (int i = 1; i <= m; i++) scanf("%d", &b[i]), calc_val[i] = calc_mod(b[i]);
//
//	for (int i = n; i >= 1; i--)
//		for (int j = 1; j <= m; j++)
//			if (a[i] == b[j]) ans = 1, ans_idx = j, ans_val = i, link[j].push_back(i), dp[j][i][0] = 1;
//
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = 0; j < link[i].size(); j++)
//		{
//			bool visit[MOD + 1] = { 0 };
//			for (int k = i-1; k >= 1; k--)
//			{
//				if (b[k] >= b[i] || visit[calc_val[k]] == 1) continue;
//				visit[calc_val[k]] = 1;
//				for (int l = 0; l < link[k].size(); l++)
//				{
//					if (link[i][j] > link[k][l])
//					{
//						if (dp[i][link[i][j]][0] <= dp[k][link[k][l]][0] + 1)
//						{
//							dp[i][link[i][j]][0] = dp[k][link[k][l]][0] + 1;
//							if (ans < dp[i][link[i][j]][0]) ans = dp[i][link[i][j]][0], ans_idx = i, ans_val = link[i][j];
//							dp[i][link[i][j]][1] = link[k][l], dp[i][link[i][j]][2] = k;
//						}					
//					}
//				}
//			}
//		}
//	}	
//	if (ans == 0) printf("0");
//	else
//	{	
//		printf("%d\n", ans);
//		int tmp[N + 1];
//		int idx = 0;
//		int now_idx = ans_idx, now_val = ans_val;
//		while (now_idx != 0)
//		{
//			tmp[++idx] = b[now_idx];
//			int t1 = now_idx, t2 = now_val;
//			now_idx = dp[t1][t2][2], now_val = dp[t1][t2][1];
//		}
//		for (int i = idx; i >= 1; i--) printf("%d ", tmp[i]);
//	}
//	return 0;
//}