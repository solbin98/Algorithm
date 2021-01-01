//#include<iostream>
//#include<cstdio>
//#define N 5000
//using namespace std;
//int d[N + 1][N + 1];
//char str[N + 1];
//int main()
//{
//	int n, ans = 987654321;
//	cin >> n;
//	cin >> str;
//
//	for (int i = n; i >= 1; i--)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (i > j) continue;
//			if (str[i - 1] == str[j - 1]) d[i][j] = d[i + 1][j - 1];
//			else
//			{
//				int min = ans;
//				if (min > d[i + 1][j] + 1) min = d[i + 1][j] + 1;
//				if (min > d[i][j - 1] + 1) min = d[i][j - 1] + 1;
//				if (min > d[i + 1][j - 1] + 2) min = d[i + 1][j - 1] + 2;
//				d[i][j] = min;
//			}
//		}
//	}
//
//	printf("%d", d[1][n]);
//	return 0;
//}