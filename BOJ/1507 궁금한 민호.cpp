//#include<iostream>
//#include<cstdio>
//#define N 20
//
//using namespace std;
//
//int cost[N + 1][N + 1], tmp[N + 1][N + 1];
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			cin >> cost[i][j];
//		
//	
//	for (int k = 1; k <= n; k++)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				if (i != k && j != k && cost[i][j] == cost[i][k] + cost[k][j])
//				{
//					tmp[i][j] = -1;
//				}
//
//				else if (cost[i][j] > cost[i][k] + cost[k][j])
//				{
//					printf("-1");
//					return 0;
//				}
//			}
//		}
//	}
//
//	int sum = 0;
//	
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = i; j <= n; j++)
//		{
//			if(tmp[i][j] != -1)
//				sum += cost[i][j];
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}
//
