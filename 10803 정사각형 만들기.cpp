//#include<iostream>
//#include<cstdio>
//#define N 10002
//#define M 102
//#define INF 987654321
//using namespace std;
//int dp[N + 1][M + 1];
//int calc(int i, int j)
//{
//	if (i < j) 
//	{
//		int tmp = i;
//		i = j;
//		j = tmp;
//	}
//
//	if (i % j == 0) return dp[i][j] = (i / j);
//	if (3 * i > j*j) return dp[i][j] = calc(i - j, j) + 1;
//	if (dp[i][j] != 0) return dp[i][j];
//
//	int min = INF;
//	for (int k = 1; k <= j / 2; k++)
//	{
//		if (min > calc(i, k) + calc(i, j - k)) min = calc(i, k) + calc(i, j - k);
//	}
//	for (int k = 1; k <= i / 2; k++)
//	{
//		if (min > calc(k, j) + calc(i - k, j)) min = calc(k, j) + calc(i - k, j);
//	}
//	if(i <= 100) dp[j][i] = min;
//	return dp[i][j] = min;
//}
//
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	if (n < m)
//	{
//		int tmp = n;
//		n = m;
//		m = tmp;
//	}
//	calc(n, m);
//	printf("%d", dp[n][m]);
//	return 0;
//}