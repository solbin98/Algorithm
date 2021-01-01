//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//double h[51];
//
//int chk(int i, int j)
//{
//	if (i > j)
//	{
//		int tmp = i;
//		i = j, j = tmp;
//	}
//	double x1 = i, y1 = h[i];
//	double x2 = j, y2 = h[j];
//
//	double m = (y2 - y1) / (x2 - x1);
//	double b = y1 - m * x1;
//
//	bool chk = 1;
//	for (int s = i + 1; s < j; s++)
//	{
//		if (m * (double)s + b <= h[s])
//		{
//			chk = 0;
//			break;
//		}
//	}
//	return chk;
//}
//int main()
//{
//	int n, ans = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> h[i];
//	for (int i = 1; i <= n; i++)
//	{
//		int cnt = 0;
//		for (int j = 1; j < i; j++)
//			if (chk(i, j) == 1) cnt++;
//
//		for (int j = i + 1; j <= n; j++)
//			if (chk(i, j) == 1) cnt++;
//		
//		if (cnt > ans) ans = cnt;
//	}
//	printf("%d", ans);
//	return 0;
//}