//#include<iostream>
//#include<cstdio>
//#define N 40
//using namespace std;
//char str[N + 1];
//int dp[N + 1] = { 1 }, a[N + 1];
//int main()
//{
//	int idx = 0;
//	cin >> str;
//	for (int i = 0; str[i] != '\0'; i++) a[i+1] = str[i] - '0', idx++;
//	for (int i = 1; i <= idx; i++)
//	{
//		if (a[i] == 0)
//		{
//			if (a[i - 1] <= 3) dp[i] += dp[i - 2];
//		}
//		else
//		{
//			if (a[i - 1] != 0 && a[i - 1] * 10 + a[i] <= 34) dp[i] += dp[i - 2];
//			dp[i] += dp[i - 1];
//		}
//	}
//	printf("%d", dp[idx]);
//	return 0;
//}