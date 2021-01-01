//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#define N 250000
//using namespace std;
//long long sum = 0;
//long long arr_3[N + 1], arr_5[N + 1];
//long long sum_3[N + 1], sum_5[N + 1];
//int idx3, idx5;
//int main()
//{
//	long long n, w;
//	cin >> n >> w;
//	for (int i = 1; i <= n; i++)
//	{
//		long long t1, t2;
//		scanf("%lld %lld", &t1, &t2);
//		if (t1 == 3) arr_3[++idx3] = t2;
//		else if (t1 == 5) arr_5[++idx5] = t2;
//	}
//
//	sort(arr_3 + 1, arr_3 + idx3 + 1);
//	sort(arr_5 + 1, arr_5 + idx5 + 1);
//
//	for (int i = 1; i <= idx3; i++) sum_3[i] = sum_3[i - 1] + arr_3[idx3 - i + 1];
//	for (int i = 1; i <= idx5; i++) sum_5[i] = sum_5[i - 1] + arr_5[idx5 - i + 1];
//
//	long long max = 0;
//	for (long long i = 0; i <= idx3; i++)
//	{
//		if (w - (i * 3) < 0) break;
//		int maxi = 0;
//		if (idx5 < (w - (i * 3)) / 5) maxi = idx5;
//		else maxi = (w - (i * 3)) / 5;
//		if (max < sum_3[i] + sum_5[maxi]) max = sum_3[i] + sum_5[maxi];
//	}
//	printf("%lld", max);
//	return 0;
//}