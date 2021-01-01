//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#define MOD 1000000
//#define N 4000
//#define M 200
//using namespace std;
//int cnts[M + 1], dp[M+1][N+1];
//int arr[N + 1];
//int main()
//{
//	int t, a, s, b;
//	cin >> t >> a >> s >> b;
//	for (int i = 1; i <= a; i++) scanf("%d", &arr[i]);
//	sort(arr,arr+a+1);
//	int idx = arr[1];
//
//	for (int i = 1; i <= a; i++)
//	{
//		if (idx != arr[i]) cnts[++idx]++;
//		else cnts[idx]++;
//	}
//
//	for (int i = 0; i <= idx; i++) dp[i][0] = 1;
//
//	for (int i = 1; i <= idx; i++)
//		for (int j = 1; j <= a; j++)
//		{
//			long long a=0, b=0, c=0;
//			a = dp[i][j - 1], b = dp[i - 1][j];
//			if (j - cnts[i] - 1 >= 0) c = dp[i - 1][j - cnts[i] - 1];
//			dp[i][j] = (a + b - c + MOD) % MOD;
//		}
//
//	long long sum = 0;
//	for (int j = s; j <= b; j++)
//	{
//		sum += dp[idx][j];
//		sum %= MOD;
//	}
//	
//	printf("%lld", sum);
//	return 0;
//}