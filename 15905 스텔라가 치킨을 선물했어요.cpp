//#include<iostream>
//#include<cstdio>
//#define N 66
//using namespace std;
//int arr[N + 1][2];
//
//int chk(int i1, int a, int b)
//{
//	if (arr[i1][0] < a)
//	{
//		return 1;
//	}
//	else if (arr[i1][0] == a)
//	{
//		if (arr[i1][0] > b) return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	arr[0][0] = 987654321;
//	for (int i = 1; i <= n; i++)
//	{
//		int idx = i, a, b;
//		scanf("%d %d", &a, &b);
//		while (chk(idx - 1, a, b) == 1) arr[idx][0] = arr[idx - 1][0], arr[idx][1] = arr[idx - 1][1], idx--;
//		arr[idx][0] = a, arr[idx][1] = b;
//	}
//
//	int cnt = 0;
//	for (int i = 6; i <= n; i++)
//	{
//		if (arr[i][0] == arr[5][0]) cnt++;
//	}
//	printf("%d", cnt);
//	return 0;
//}