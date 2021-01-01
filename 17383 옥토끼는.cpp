//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//const int N = 1e5;
//int arr[N + 1], n;
//
//bool chk(int x, int *arr)
//{
//	int sum = 0, cnt = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (arr[i] > x)
//		{
//			cnt++;
//			if ((arr[i] % x) != 0) sum += (arr[i] / x);
//			else sum += (arr[i]/x) - 1;
//		}
//	}
//	
//	//printf("x : %d, cnt : %d\n", x, cnt);
//	if (sum - (cnt - 1) <= (n - cnt)) return 1;
//	else return 0;
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf_s("%d", &arr[i]);
//	sort(arr + 1, arr + n + 1);
//
//	int low = 1, high = 1e9, mid;
//	int ans = 2e9;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		if (chk(mid, arr) == 1)
//		{
//			if (ans > mid) ans = arr[mid];
//			high = mid - 1;
//		}
//		else low = mid + 1;
//	}
//
//	printf("%d", ans);
//	return 0;
//}