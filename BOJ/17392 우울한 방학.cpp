//#include<iostream>
//#include<cstdio>
//#define N 1000
//using namespace std;
//int a[N + 1], sums[N + 1];
//int main()
//{
//	int n, m, sum = 0;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]), sum += a[i] + 1;
//	if (m - sum <= 0) printf("0");
//	else
//	{
//		int tmp = 0;
//		int val = m - sum;
//
//		if (n >= val) printf("%d", val);
//		else
//		{
//			for (int i = 1; i <= val; i++) sums[i] = sums[i - 1] + i * i;
//			tmp += sums[val / (n + 1)] * (n + 1);
//			tmp += ((val / (n + 1)) + 1)* ((val / (n + 1)) + 1) * (val % (n + 1));
//			printf("%d", tmp);
//		}
//	}
//	return 0;
//}