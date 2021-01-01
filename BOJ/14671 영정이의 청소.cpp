//#include<iostream>
//#include<cstdio>
//#include<queue>
//
//#define N 1000
//using namespace std;
//int ans[2][2];
//
//int main()
//{
//	int n, m, k;
//	cin >> n >> m >> k;
//	for (int i = 1; i <= k; i++)
//	{
//		int y, x;
//		scanf("%d %d", &y, &x);
//		if (y % 2 == x % 2)
//		{
//			if (x % 2 == 0) ans[0][0] = 1;
//			else ans[0][1] = 1;
//		}
//		else
//		{
//			if (x % 2 == 0) ans[1][0] = 1;
//			else ans[1][1] = 1;
//		}
//	}
//
//	int sum = 0;
//	for (int i = 0; i < 2; i++)
//		for (int j = 0; j < 2; j++)
//			sum += ans[i][j];
//
//	if (sum == 4) printf("YES");
//	else printf("NO");
//}