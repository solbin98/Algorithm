//#include<iostream>
//#include<cstdio>
//#define N 3000
//using namespace std;
//int arr[N + 1];
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int a, b, idx, cnts = 0;
//		cin >> a >> b;
//		idx = a;
//		for (int i = a; i <= b; i++) arr[i] = 1;
//		while (cnts < 9)
//		{
//			if ((idx - 1) % 100 >= 60) idx = ((a / 100) - 1) * 100 + 59;
//			else idx--;
//			arr[idx] = 1;
//			cnts++;
//		}
//		cnts = 0, idx = b;
//		while (cnts <= 9)
//		{
//			if ((idx + 1) % 100 >= 60) idx = ((b / 100) + 1) * 100;
//			else idx++;
//			arr[idx] = 1;
//			cnts++;
//		}
//	}
//
//
//	arr[1000] = 1;
//	int idx = 1000, cnt = 0, ans = 0;
//	while (idx <= 2200)
//	{
//		if (idx % 100 >= 60)
//		{
//			idx++;
//			continue;
//		}
//		if (arr[idx] == 0) cnt++;
//		if (ans < cnt) ans = cnt;
//		if (arr[idx] == 1) cnt = 0;
//		idx++;
//	}
//	printf("%d", ans);
//	return 0;
//}