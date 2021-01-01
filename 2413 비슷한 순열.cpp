//#include<iostream>
//#include<cstdio>
//#define N 50000	
//using namespace std;
//int arr[N + 1], cnt[N + 1];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d", &arr[i]), cnt[arr[i]] = i;
//	for (int i = 1; i <= n; i++)
//	{
//		if (i < cnt[arr[i] - 1] && cnt[arr[i]] != -1)
//		{
//			int tmp = arr[i];
//			arr[i] = arr[cnt[arr[i] - 1]];
//			arr[cnt[arr[i]]] = tmp;
//			cnt[arr[i] + 1] = -1;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}