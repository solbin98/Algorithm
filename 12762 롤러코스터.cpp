//#include<iostream>
//#include<cstdio>
//#define N 1001
//using namespace std;
//int arr[N + 1], dp1[N + 1], dp2[N + 1];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d", &arr[i]);
//	arr[0] = 100000;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j < i; j++)
//			if (arr[j] > arr[i]) if (dp1[j] > dp1[i]) dp1[i] = dp1[j];
//		dp1[i]++;
//	}
//
//	arr[n + 1] = 100000;
//	for (int i = n; i >= 1; i--)
//	{
//		for (int j = n+1; j > i; j--)
//			if (arr[j] > arr[i]) if (dp2[j] > dp2[i]) dp2[i] = dp2[j];
//		dp2[i]++;
//	}
//
//	int ans = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (ans < dp1[i] + dp2[i] - 1) ans = dp1[i] + dp2[i] - 1;
//	}
//	printf("%d", ans);
//	return 0;
//}