//#include<iostream>
//#include<cstdio>
//#define N 100
//using namespace std;
//double arr[N + 1], ans[N + 1];
//int main()
//{
//	int n, m, k;
//	cin >> n >> m >> k;
//	for (int i = 1; i <= m; i++)
//		for (int j = 1; j <= n; j++)
//		{
//			int a; 
//			double b;
//			scanf("%d %lf", &a, &b);
//			if (arr[a] < b) arr[a] = b;
//		}
//	
//	int index = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ans[index++] = arr[i];
//	}
//	index--;
//	for (int i = index - 1; i >= 1; i--)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			if (ans[j] < ans[j + 1])
//			{
//				double tmp = ans[j];
//				ans[j] = ans[j + 1];
//				ans[j + 1] = tmp;
//			}
//		}
//	}
//	double sum = 0;
//	for (int i = 1; i <= k; i++) sum += ans[i];
//	printf("%.1lf", sum);
//	return 0;
//}