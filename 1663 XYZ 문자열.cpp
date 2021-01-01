//#include<iostream>
//#include<cstdio>
//#define N 100
//using namespace std;
//long long d[N + 1][4] = { 0 }, dp[N + 1];
//char str[4][4];
//void print_alpha(long long k, int n)
//{
//	if (n <= 3)
//	{	
//		printf("%c", str[n][k]);
//		return;
//	}
//	else
//	{
//		if (k > dp[n - 3]) print_alpha(k - dp[n - 3], n-2);
//		else print_alpha(k, n-3);
//	}
//}
//
//int main()
//{
//	str[1][1] = 'X', str[2][1] = 'Y', str[2][2] = 'Z', str[3][1] = 'Z', str[3][2] = 'X';
//
//	d[1][1] = 1;
//	dp[1] = 1;
//	for (int i = 2; i <= N; i++)
//	{
//		d[i][1] = d[i - 1][3];
//		d[i][2] = d[i - 1][1];
//		d[i][3] = d[i - 1][1] + d[i - 1][2];
//		dp[i] = d[i][1] + d[i][2] + d[i][3];
//	}
//	int question, n;
//	cin >> question;
//	cin >> n;
//
//	if (question == 1)
//	{
//		printf("%lld", dp[n]);
//	}
//	else if (question == 2)
//	{
//		long long k;
//		cin >> k;
//		print_alpha(k, n);
//	}
//	else
//	{
//		int ans = 0;
//		char tmp;
//		cin >> tmp;
//		ans = tmp - 'X' + 1;
//		printf("%lld", d[n][ans]);
//	}
//	return 0;
//}