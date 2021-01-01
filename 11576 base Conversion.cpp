//#include<iostream>
//#include<cstdio>
//#define N 30
//using namespace std;
//int A[N], B[N];
//int main()
//{
//	int a, b, l;
//	cin >> a >> b;
//	cin >> l;
//	for (int i = 1; i <= l; i++) cin >> A[i];
//	int r = 1;
//	int sum = 0;
//	for (int i = l; i >= 1; i--)
//	{
//		sum += r * A[i];
//		r *= a;
//	}
//	int idx = 0;
//	while (sum != 0)
//	{
//		B[++idx] = sum % b;
//		sum /= b;
//	}
//	for (int i = idx; i >= 1; i--) printf("%d ", B[i]);
//	return 0;
//}