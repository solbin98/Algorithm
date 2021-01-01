//#include<iostream>
//#include<cstdio>
//#define N 5000000
//using namespace std;
//long long a[N + 1], s, e;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//	s = -2000000000, e = a[1];
//	for (int i = 2; i <= n+1; i++)
//	{
//		long long new_s = 0, new_e = 0;
//		new_s = 2 * a[i-1] - e, new_e = 2 * a[i-1] - s;
//		if (new_e > a[i] && i != n+1) new_e = a[i];
//		s = new_s, e = new_e;
//	}
//	if (e - s + 1 < 0)  printf("0");
//	else printf("%lld", e - s + 1);
//	return 0;
//}