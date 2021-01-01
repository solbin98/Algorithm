//#include<iostream>
//#include<cstdio>
//#define N 40000
//using namespace std;
//int a[N + 1];
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int tmp[N + 1] = { 0 };
//		int n, top = 0;
//		cin >> n;
//		for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//		for (int i = 1; i <= n; i++)
//		{
//			int idx = top;
//			while (tmp[idx] > a[i]) idx--;
//			tmp[++idx] = a[i];
//			if (idx > top) top = idx;
//		}
//
//		printf("%d\n", top);
//	}
//
//	return 0;
//}