//#include<iostream>
//#include<cstdio>
//#define N 100005
//using namespace std;
//long long arr[N + 1];
//long long sum[N + 1];
//
//long long max(long long a, long long b)
//{
//	if (a > b) return a;
//	else return b;
//}
//
//long long min(long long a, long long b)
//{
//	if (a < b) return a;
//	else return b;
//}
//
//long long find_mid_max(long long s, long long e)
//{
//	long long L = (s + e) / 2, R = L + 1;
//	long long min_now = min(arr[L], arr[R]);
//	long long ret = 0;
//	while (1)
//	{
//		long long tmp_sum = (sum[R] - sum[L - 1]) * min_now;
//		if (ret < tmp_sum) ret = tmp_sum;
//		if ((arr[L - 1] >= arr[R + 1] && L > s) || (R == e && L > s))
//		{
//			if (min_now > arr[L - 1]) min_now = arr[L - 1];
//			L--;
//		}
//		else if ((arr[L - 1] <= arr[R + 1] && R < e) || (L == s && R < e))
//		{
//			if (min_now > arr[R + 1]) min_now = arr[R + 1];
//			R++;
//		}
//		else break;
//	}
//	return ret;
//}
//
//long long divide(long long s, long long e)
//{
//	if (s == e) return arr[s] * arr[s];
//	long long mid = (s + e)/ 2, ret = 0;
//	ret = max(divide(s, mid), divide(mid+1, e));
//	ret = max(ret, find_mid_max(s, e));
//	return ret;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%lld", &arr[i]), sum[i] = sum[i - 1] + arr[i];
//	arr[0] = -1, arr[n + 1] = -1;
//	printf("%lld", divide(1, n));
//	return 0;
//}