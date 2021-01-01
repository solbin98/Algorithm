//#include<iostream>
//#include<cstdio>
//#define N 100000
//using namespace std;
//int arr[N + 1];
//int main()
//{
//	int n, s, ans = 987654321;
//	cin >> n >> s;
//	for (int i = 1; i <= n; i++) scanf("%d", &arr[i]);
//
//	int low = 1, high = n, mid = 0;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		int sum = 0, flag = 0;
//		for (int i = 1; i < mid; i++) sum += arr[i];
//		for (int i = mid; i <= n; i++)
//		{
//			sum -= arr[i - mid];
//			sum += arr[i];
//			if (sum >= s)
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			if (ans > mid) ans = mid;
//			high = mid - 1;
//		}
//		else low = mid + 1;
//	}
//	if (ans == 987654321) ans = 0;
//	printf("%d", ans);
//	return 0;
//}