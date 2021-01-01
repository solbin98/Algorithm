//#include<iostream>
//#include<cstdio>
//#define N 1000
//using namespace std;
//int arr[N + 1][N + 1];
//int main()
//{
//	int n, k;
//	cin >> n;
//	cin >> k;
//
//	int y = (n + 1) / 2, x = (n + 1) / 2;
//	arr[y][x] = 1;
//	int dis = 0, num = 2;
//	while (1)
//	{
//		dis++;
//
//		int flag = 0;
//		for (int i = 1; i <= dis; i++)
//		{
//			if (y - i <= 0)
//			{
//				flag = 1;
//				break;
//			}
//			arr[y - i][x] = num++;
//		}
//		if (flag == 1) break;
//		y -= dis;
//
//		for (int i = 1; i <= dis; i++) arr[y][x+i] = num++;
//		x += dis;
//
//		dis++;
//
//		for (int i = 1; i <= dis; i++) arr[y + i][x] = num++;
//		y += dis;
//
//		for (int i = 1; i <= dis; i++) arr[y][x - i] = num++;
//		x -= dis;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			if (arr[i][j] == k) printf("%d %d", i, j);
//	
//	return 0;
//}