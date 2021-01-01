//#include<iostream>
//#include<cstdio>
//#define N 500
//#define MOD 1000
//
//using namespace std;
//int dp[N + 1][N + 1], n;
//int arr[N + 1][3];
//bool visit[N + 1][N + 1] = { 0 };
//
//int max(int a, int b)
//{
//	if (a > b) return a;
//	else return b;
//}
//
//int calc(int a, int b)
//{
//	if (dp[a][b] != -1) return dp[a][b];
//
//	int sum = 0;	
//	if (arr[a][0] + arr[a][1] >= arr[n][0] && arr[n][0] - arr[n][1] <= arr[b][0]) sum++;
//	for (int i = max(a, b) + 1; i < n; i++)
//	{
//		if (arr[a][0] + arr[a][1] >= arr[i][0])
//		{
//			sum += calc(i, b);
//			sum %= MOD;
//		}
//		if (arr[b][0] >= arr[i][0] - arr[i][1] && arr[i][2] == 1)
//		{
//			sum += calc(a, i);
//			sum %= MOD;
//		}
//	}
//	return dp[a][b] = sum;
//}
//
//int main()
//{
//	for (int i = 0; i <= N; i++)
//		for (int j = 0; j <= N; j++)
//			dp[i][j] = -1;
//
//	cin >> n;
//	dp[n][n] = 1;
//
//	for (int i = 1; i <= n; i++) scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
//	printf("%d", calc(0, 0));
//	return 0;
//}