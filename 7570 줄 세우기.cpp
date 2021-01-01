//#include<iostream>
//#include<cstdio>
//#define N 1000
//#define M 1000000
//using namespace std;
//int a[M + 1], index[M + 1];
//int dp[M + 1];
//int main()
//{
//	int n, ans = 0, top = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &a[i]);
//		dp[i] = 1;
//		index[a[i]] = i;
//	}
//	for (int i = 2; i <= n; i++)
//	{
//		if (index[i - 1] < index[i]) dp[i] += dp[i - 1];
//		if (dp[i] > ans) ans = dp[i];
//	}
//	printf("%d", n - ans);
//	return 0;
//}