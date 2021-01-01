//#include<iostream>
//#include<cstdio>
//#define N 1000	
//#define INF 98765432100000
//using namespace std;
//long long dp[N], cost[N + 1];
//bool links[N + 1][N + 1], visit[N + 1];
//
//long long solve(int number)
//{
//	if (visit[number] == 1) return dp[number];
//	visit[number] = 1;
//
//	long long max = 0;
//	for (int i = 1; i <= N; i++)
//	{
//		if (links[number][i])
//		{
//			if(max < solve(i)) max = solve(i);
//		}
//	}
//	return dp[number] = max + cost[number];
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		for (int i = 0; i <= N; i++)
//		{
//			dp[i] = 0, visit[i] = 0;
//			for (int j = 0; j <= N; j++)
//				links[i][j] = 0;
//		}
//		int n, k;
//		cin >> n >> k;
//		for (int i = 1; i <= n; i++) scanf("%d", &cost[i]);
//		for (int i = 1; i <= k; i++)
//		{
//			int a, b;
//			scanf("%d %d", &a, &b);
//			links[b][a] = 1;
//		}
//		int number;
//		cin >> number;
//		solve(number);
//		printf("%lld\n", dp[number]);
//	}
//
//	return 0;
//}