//#include<iostream>
//#include<cstdio>
//#define N 3000
//using namespace std;
//int chk[1000001], a[N + 1];
//bool visit[N + 1] = { 0 };
//int flag = 0;
//long long solve(int num, int abs)
//{
//	long long out = 0;
//	flag++;		
//	if (num - abs <= 0) return num;
//	if (chk[num - abs] != 0) out += solve(num - abs, abs);
//	return out + num;
//}
//
//int main()
//{
//	int n;
//	long long ans = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]), chk[a[i]] = i;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = i-1; j >= 1; j--)
//		{
//			flag = 0;
//			long long tmp = solve(a[j], a[i] - a[j]) + a[i];
//			if (flag >= 2)
//				if (ans < tmp) ans = tmp;
//		}
//	}
//	printf("%lld", ans);
//	return 0;
//}