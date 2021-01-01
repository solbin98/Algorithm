//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#define N 100
//using namespace std;
//int arr[N + 1][3];
//int main()
//{
//	arr[0][2] = 100000;
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int a, b, c, idx = i;
//		cin >> a >> b >> c;
//		while (arr[idx - 1][2] < c)
//			arr[idx][0] = arr[idx - 1][0], arr[idx][1] = arr[idx - 1][1], arr[idx][2] = arr[idx - 1][2], idx--;
//		arr[idx][0] = a, arr[idx][1] = b, arr[idx][2] = c;
//	}
//
//	int ans[4][2] = { 0 };
//
//	int chk = 0, idx = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int cnt = 0;
//		for (int j = 1; j <= idx; j++)
//			if (ans[j][0] == arr[i][0]) cnt++;
//
//		if (cnt < 2)
//		{
//			chk++; idx++;
//			ans[idx][0] = arr[i][0], ans[idx][1] = arr[i][1];
//			printf("%d %d\n", arr[i][0], arr[i][1]);
//		}
//		if (chk == 3) break;
//	}
//	return 0;
//}