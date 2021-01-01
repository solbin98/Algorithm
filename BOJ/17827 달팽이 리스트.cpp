//#include<iostream>
//#include<cstdio>
//#define N 200000
//using namespace std;
//int arr[N + 1];
//int main()
//{
//	int n, m, v;
//	cin >> n >> m >> v;
//	for (int i = 1; i <= n; i++) scanf("%d", &arr[i]);
//	for (int i = 1; i <= m; i++)
//	{
//		int k;
//		scanf("%d", &k);
//
//		if (k <= v) printf("%d\n", arr[k + 1]);
//		else
//		{
//			k -= (v - 1);
//			printf("%d\n", arr[v + (k % (n - v + 1))]);
//		}
//	}
//	return 0;
//}