//#include<iostream>
//#include<cstdio>
//using namespace std;
//int map[3000][3000];
//int main()
//{
//	int n;
//	cin >> n;
//	int len = 1;
//	map[1][1] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= len; j++)
//		{
//			for (int k = 1; k <= len; k++)
//			{
//				map[j][k + len] = map[j][k];
//				map[j + len][k] = map[j][k];
//			}
//		}
//		len *= 2;
//	}
//
//	for (int i = 1; i <= len; i++)
//	{
//		for (int j = 1; j <= len-i+1; j++)
//		{
//			if (map[i][j] == 1) printf("*");
//			else printf(" ");
//		}
//		if(i != len)printf("\n");
//	}
//	return 0;
//}