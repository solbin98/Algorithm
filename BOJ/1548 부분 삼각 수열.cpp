//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#define N 50
//using namespace std;
//int a[N + 1];
//int main()
//{
//	int n, ans = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	if (n <= 2)
//	{
//		printf("%d", n);
//		return 0;
//	}
//	sort(a + 1, a + n + 1);
//	for (int i = 1; i <= n; i++)
//	{
//		int min1 = a[i], min2 = a[i + 1];
//		int tmp = 2;
//		for (int j = i + 2; j <= n; j++)
//			if (min1 + min2 > a[j]) tmp++;
//		if (tmp > ans) ans = tmp;
//	}
//	printf("%d", ans);
//	return 0;
//}