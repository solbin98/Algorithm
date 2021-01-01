//#include<iostream>
//#include<cstdio>
//#define N 100000
//using namespace std;
//int need[N + 1], save[N + 1];
//int main()
//{
//	int n, m, k;
//	cin >> n >> m >> k;
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		need[b] = a;
//	}
//
//	for (int i = 1; i <= k; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		if (a == 1)
//		{
//			if (save[need[b]] > 0 || need[b] == 0) save[b]++;
//			else
//			{
//				printf("Lier!");
//				return 0;
//			}
//		}
//		else
//		{
//			if (save[b] <= 0)
//			{
//				printf("Lier!");
//				return 0;
//			}
//			else save[b]--;
//		}
//	}
//	printf("King-God-Emperor");
//	return 0;
//}