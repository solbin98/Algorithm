//#include<iostream>
//#include<cstdio>
//#define N 100000
//#define M 20
//#define INF 987654321
//using namespace std;
//int cnt[N + 1][2], a[N + 1];
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{	
//		int dp1[N + 1] = { 0 }, dp2[N + 1] = { 0 };
//		for (int i = 0; i <= N; i++) dp1[i] = INF, dp2[i] = INF, cnt[i][0] = 0, cnt[i][1] = 0;
//
//		int n, k;
//		cin >> n >> k;
//		for (int i = 1; i <= n; i++)
//		{
//			scanf("%d", &a[i]);
//			int tmp = a[i], num = 2;
//			while (tmp % num == 0) cnt[i][0]++, tmp /= num;
//			num = 5;
//			while (tmp % num == 0) cnt[i][1]++, tmp /= num;
//		}
//
//		dp1[1] = cnt[1][0];
//		for (int i = 2; i <= n; i++)
//		{
//			int min = INF;
//			for (int j = i - 1; j >= i - k && j >= 1; j--)
//				if (min > dp1[j]) min = dp1[j];
//			dp1[i] = min + cnt[i][0];
//		}
//
//		dp2[1] = cnt[1][1];
//		for (int i = 2; i <= n; i++)
//		{
//			int min = INF;
//			for (int j = i - 1; j >= i - k && j >= 1; j--)
//				if (min > dp2[j]) min = dp2[j];
//			dp2[i] = min + cnt[i][1];
//		}
//		if (dp1[n] > dp2[n]) printf("%d\n", dp2[n]);
//		else printf("%d\n", dp1[n]);
//	}
//}