//#include<iostream>
//#include<cstdio>
//#define N 7
//using namespace std;
//int row[N + 1], arr[N + 1][N + 1], chk[N + 1][N + 1];
//int k, num, ans = 0;
//
//void calc(int i, int j)
//{
//	if (i > k)
//	{
//		ans++;
//		return;
//	}
//	if (j > row[i])
//	{
//		calc(i + 1, 1);
//		return;
//	}
//
//	int n = 1;
//	if (i > 1) n = arr[i - 1][j] + 1;
//	if (n < arr[i][j - 1]) n = arr[i][j - 1];
//	for (int l = n; l <= num; l++)
//	{
//		if (chk[i][j] - i + l > num) return;
//		arr[i][j] = l;
//		calc(i, j + 1);
//	}
//}
//int main()
//{
//	while (1)
//	{
//		ans = 0;
//		cin >> k;
//		if (cin.eof() == true) break;
//		for (int i = 1; i <= k; i++) cin >> row[i];
//		for (int j = 1; j <= row[1]; j++)
//		{
//			int t = 0;
//			for (int i = k; i >= 1; i--)
//			{
//				chk[i][j] = i + t;
//				if (j <= row[i]) t++;
//			}
//		}
//
//		cin >> num;
//		calc(1, 1);
//		printf("%d\n", ans);
//	}
//	return 0;
//}