//#include<iostream>
//#include<cstdio>
//#define N 200000
//#define INF 9877534121
//using namespace std;
//int a[N + 1];
//int main()
//{
//	int n, point = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &a[i]);
//		if (a[i] == -1) point = i;
//	}
//
//	int min_left = INF, min_right = INF;
//	for (int i = 1; i < point; i++)
//	{
//		if (min_left > a[i]) min_left = a[i];
//	}
//	for (int i = point + 1; i <= n; i++)
//	{
//		if (min_right > a[i]) min_right = a[i];
//	}
//	printf("%d", min_left + min_right);
//	return 0;
//}