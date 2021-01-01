//#include<iostream>
//#include<cstdio>
//#define N 10
//#define INF 987654321
//using namespace std;
//char map[N + 1][N + 1];
//int d[4][2] = { {-1,0},{0,-1},{0,1},{1,0} };
//int num_map[N + 1][N + 1];
//int main()
//{
//	int ans = INF;
//
//	for (int i = 0; i < 10; i++) cin >> map[i];
//	for (int i = 0; i < 10; i++)
//		for (int j = 0; j < 10; j++)
//			if (map[i][j] == 'O')
//				num_map[i + 1][j + 1] = 1;
//
//
//	for (int i = 0; i < 1024; i++)
//	{
//		int new_map[N + 1][N + 1] = { 0 };
//
//		for (int i = 1; i <= N; i++)
//			for (int j = 1; j <= N; j++)
//				new_map[i][j] = num_map[i][j];
//
//		int bits[N + 1] = { 0 };
//		int idx = 0, num = i, count = 0;
//
//		while (num != 0)
//		{
//			bits[++idx] = num % 2;
//			if (bits[idx]) count++;
//			num /= 2;
//		}
//
//		for (int i = 1; i <= N; i++)
//		{
//			if (bits[i])
//			{
//				for (int k = 0; k < 4; k++)
//				{
//					int py = 1 + d[k][0], px = i + d[k][1];
//					if (py >= 1 && py <= N && px >= 1 && px <= N)
//						new_map[py][px] = !new_map[py][px];
//				}
//				new_map[1][i] = !new_map[1][i];
//			}
//		}
//
//		for (int i = 2; i <= N; i++)
//			for (int j = 1; j <= N; j++)
//			{
//				if (new_map[i - 1][j] == 1)
//				{
//					count++;
//					for (int k = 0; k < 4; k++)
//					{
//						int py = i + d[k][0], px = j + d[k][1];
//						if (py >= 1 && py <= N && px >= 1 && px <= N)
//							new_map[py][px] = !new_map[py][px];
//					}
//					new_map[i][j] = !new_map[i][j];
//				}
//				
//			}
//	
//		bool fail = 0;
//		for (int i = 1; i <= N; i++)
//			for (int j = 1; j <= N; j++)
//				if (new_map[i][j]) fail = 1;
//
//		if (fail == 0 && ans > count) ans = count;
//	}
//	if (ans == INF) ans = -1;
//	printf("%d", ans);
//	return 0;
//}