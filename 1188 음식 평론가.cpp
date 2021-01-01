//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int cb = 0;
//	for (int i = 1; i <= n * m; i++)
//		if (i % n == 0 && i % m == 0)
//		{
//			cb = i;
//			break;
//		}
//	cb /= m;
//	int sum = cb, cnt = 0;
//	while (sum < n) cnt++, sum += cb;
//	printf("%d", m - 1 - cnt);
//	return 0;
//}