//#include<iostream>
//#include<cstdio>
//#define N 200000
//#define Q 200000
//using namespace std;
//int n, q, s = 0;
//int arr[N + 1], sum[N + 1];
//int main()
//{
//	cin >> n >> q;
//	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
//	for (int i = 0; i < n; i++)
//	{
//		int tmp = 1;
//		for (int j = i; j <= i + 3; j++) tmp *= arr[j%n];
//		s += tmp;
//		sum[i] = tmp;
//	}
//	for (int i = 1; i <= q; i++)
//	{
//		int tmp;
//		scanf("%d", &tmp);
//		tmp--;
//		for (int j = 3; j >= 0; j--)
//		{
//			s -= 2*sum[(tmp - j + n) % n];
//			sum[(tmp - j + n) % n] *= -1;
//		}
//		printf("%d\n", s);
//	}
//}