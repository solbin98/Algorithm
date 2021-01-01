//#include<iostream>
//#include<cstdio>
//#define N 100
//#define M 10
//#define max 1024
//using namespace std;
//int arr[N + 1][M + 1], cnt_arr[N + 1];
//int dp[N + 1][max + 1];
//
//int pows(int r)
//{
//	int n = 1;
//	for (int i = 1; i <= r; i++) n *= 2;
//	return n;
//}
//
//int main()
//{
//	int n, m, maxi;
//	cin >> n >> m;
//	maxi = pows(m);
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> cnt_arr[i];
//		for (int j = 1; j <= m; j++)
//			scanf("%d", &arr[i][j]);
//	}
//	
//	dp[0][0] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j < maxi - 1; j++)
//		{
//			int tmp[15] = { 0 };
//			int idx = 0, number = j, cnt = 0;		
//			bool chk1 = 0;
//
//			while (number != 0)
//			{
//				tmp[++idx] = number % 2;
//				number /= 2;
//			}
//
//			for (int k = 1; arr[i][k] != -1 && k <= m; k++)
//			{
//				if (arr[i][k] != tmp[k])
//				{
//					chk1 = 1;
//					break;
//				}
//			}
//			for (int k = 1; k <= idx; k++) cnt += tmp[k];
//	
//			if (cnt != cnt_arr[i] || chk1 == 1) continue;
//
//			for (int k = 0; k <= maxi-1; k++)
//			{
//				if (dp[i - 1][k] == 1) dp[i][k | j] = 1;
//			}
//		}
//	}
//
//
//	if (dp[n][maxi - 1] == 0) printf("NO");
//	else printf("YES");
//	return 0;
//}