//#include<iostream>
//#include<cstdio>
//#define N 102
//using namespace std;
//
//int ans[N + 1];
//
//int main()
//{
//	int n, m, c = 0;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		int a, b, t, num;
//		int cnt[N + 1] = { 0 };
//		cin >> a >> b;
//		for (int j = 1; j <= a; j++) scanf("%d", &t), cnt[t]++;
//		for (int j = 36; j >= 1 && b > 0; j--)
//		{
//			if (cnt[j] != 0)
//			{
//				b -= cnt[j];
//				num = j;
//			}
//		}
//		if (b > 0) num = 1;
//		ans[num]++;
//	}
//
//	for (int i = 1; i <= 36; i++)
//	{
//		while (m - i>= 0 && ans[i] > 0)
//		{
//			m -= i;
//			ans[i]--;
//			c++;
//		}
//	}
//
//	cout << c;
//	return 0;
//}