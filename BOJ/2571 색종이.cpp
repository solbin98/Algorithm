//#include<iostream>
//#include<cstdio>
//#define N 100
//using namespace std;
//int map[N + 1][N + 1], sum[N + 1][N + 1];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//
//		for (int i = a; i < a + 10; i++)
//			for (int j = b; j < b + 10; j++) 
//				map[i][j] = 1;
//	}
//
//	for(int i=1;i<=N;i++)
//		for (int j = 1; j <= N; j++)
//		{
//			if (map[i][j] == 1) sum[i][j] = sum[i][j - 1] + map[i][j];
//			
//		}
//
//	int ans(100);
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = i; j <= N; j++)
//		{				
//			int tmp = 0;
//			for (int h = 1; h <= N; h++)
//			{
//				if (tmp > ans) ans = tmp;
//				if (sum[h][j] - sum[h][j - i] == i) tmp += i;
//				else tmp = 0;
//			}
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}