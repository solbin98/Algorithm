//#include<cstdio>
//#include<iostream>
//
//#define INF 987654321
//using namespace std;
//
//int a[7], links[7][7];
//long long min1 = INF, min2 = INF, min3 = INF;
//long long max_1, sum = 0;
//
//int main()
//{
//	long long n;
//	cin >> n;
//	for (int i = 1; i <= 6; i++)
//	{
//		cin >> a[i];
//		sum += a[i];
//		if (min1 > a[i]) min1 = a[i];
//		if (max_1 < a[i]) max_1 = a[i];
//	}
//	
//	links[1][6] = -1, links[2][5] = -1, links[3][4] = -1;
//	links[4][3] = -1, links[5][2] = -1, links[6][1] = -1;
//
//	for (int i = 1; i <= 6; i++)
//	{
//		for (int j = 1; j <= 6; j++)
//		{
//			if (i != j)
//			{
//				if (links[i][j] == 0)
//				{
//					if (a[i] + a[j] < min2) min2 = a[i] + a[j];
//				}
//			}
//
//			for (int k = 1; k <= 6; k++)
//			{
//				if (i != k && i != j && j != k)
//				{
//					if (links[i][j] == 0 && links[i][k] == 0 && links[k][j] == 0)
//					{
//						if (min3 > a[i] + a[j] + a[k]) min3 = a[i] + a[j] + a[k];
//					}
//				}
//			}
//		}
//	}
//	if (n != 1)
//	{
//		printf("%lld", min1 *((n-2)*(n-2) + 4*(n-1)*(n-2)) + min2*(4*(n-1) + 4*(n-2)) + min3 * 4);
//	}
//	else
//	{
//		printf("%lld", sum - max_1);
//	}
//	return 0;
//}