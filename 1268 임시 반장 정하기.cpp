//#include<iostream>
//#include<cstdio>
//#define N 1000
//using namespace std;
//int arr[N + 1][6];
//int main()
//{
//	int n, max = -1, max_index = -1;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= 5; j++)
//			scanf("%d", &arr[i][j]);
//
//	for (int i = 1; i <= n; i++)
//	{
//		int ans = 0;
//		bool visit[N + 1] = { 0 };
//		for (int j = 1; j <= 5; j++)
//		{
//			for (int k = 1; k <= n; k++)
//			{
//				if (i == k || visit[k] == 1) continue;
//				if (arr[i][j] == arr[k][j])
//				{
//					ans++;
//					visit[k] = 1;
//				}
//			}
//		}
//
//		if (ans > max)
//		{
//			max = ans, max_index = i;
//		}
//	}
//	
//	printf("%d", max_index);
//	return 0;
//}