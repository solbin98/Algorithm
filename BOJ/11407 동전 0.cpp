//#include<iostream>
//#include<cstdio>
//#define N 10
//
//using namespace std;
//int coins[N + 1];
//int main()
//{
//	int n, k, ans = 0;
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++) cin >> coins[i];
//	for (int i = n; i >= 1; i--)
//	{
//		if (k == 0) break;
//		while (k - coins[i] >= 0)
//		{
//			k -= coins[i];
//			ans++;
//		}
//	}
//	cout << ans;
//	return 0;
//}