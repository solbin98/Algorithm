//#include<iostream>
//#include<cstdio>
//#define N 1005
//
//using namespace std;
//
//int uni[N + 1], a[N + 1], uc[N + 1];
//int dp[N + 1][N + 1], tmp[N + 1];
//int index = 1;
//bool visit[N + 1];
//
//int dfs(int now)
//{
//	if (visit[now] == 1) return index;
//	else if (uni[now] != 0) return uni[now];
//	
//	visit[now] = 1;
//	int tmp = dfs(a[now]);
//	uni[now] = tmp;
//	return uni[now];
//}
//
//void calc(int n, int count)
//{
//	visit[n] = 1;
//	if (visit[a[n]] == 0) calc(a[n], count + 1);
//	else dp[uni[n]][count] = 1;
//}
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//	for (int i = 1; i <= n; i++)
//	{
//		int tmp = dfs(i);
//		if (tmp == index) index++;
//		uc[tmp]++;
//		for (int j = 1; j <= n; j++) visit[j] = 0;
//		calc(i, 1);
//		for (int j = 1; j <= n; j++) visit[j] = 0;
//		dp[i][0] = 1;
//	}
//
//	
//	for (int i = 1; i < index; i++)
//		for (int j = uc[i]; j >= 1; j--)
//		{
//			if (dp[i][j] == 0) dp[i][j] = 1;
//			else break;
//		}
//		
//	for (int i = 1; i < index; i++)
//	{
//		for (int j = 0; j <= m; j++)
//		{
//			if (dp[i][j] != 1) continue;
//			for (int k = 0; k <= m; k++)
//			{
//				if (j + k > m) break;
//				if (dp[i + 1][k] == 1)
//				{
//					tmp[j + k] = 1;
//				}
//			}
//		}
//		for (int j = 0; j <= m; j++) dp[i + 1][j] = dp[i + 1][j] | tmp[j], tmp[j] = 0;
//	}
//
//
//	for (int i = m; i >= 0; i--)
//	{
//		if (dp[index-1][i] == 1)
//		{
//			printf("%d", i);
//			return 0;
//		}
//	}
//	return 0;
//}