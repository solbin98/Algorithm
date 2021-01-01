//#include<iostream>
//#include<cstdio>
//#define N 100000
//using namespace std;
//int dp[N + 1], a[N + 1], sum[N + 1];
//
//int max(int a, int b)
//{
//	if (a > b) return a;
//	else return b;
//}
//
//int main()
//{
//	int n, m, ans = 0;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]), sum[i] = sum[i - 1] + a[i];
//	dp[m - 1] = -987654321;
//	for (int i = m; i <= n; i++)
//	{
//		dp[i] = max(sum[i] - sum[i-m], dp[i - 1] + a[i]);
//		if (ans < dp[i]) ans = dp[i];
//	}
//	printf("%d", ans);
//	return 0;
//}