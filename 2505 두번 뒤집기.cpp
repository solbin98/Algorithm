//#include<iostream>
//#include<cstdio>
//#define N 20000
//using namespace std;
//int arr[N + 1], idx[N + 1];
//int list[N + 1][2];
//
//int calc(int L, int R, int i)
//{
//	int mid = (L + R + 1) / 2;
//	if ((R - L + 1) % 2 == 0)
//	{
//		if (i >= mid) return mid - (i - mid + 1);
//		else if (i < mid) return mid + (mid - i - 1);
//	}
//	else
//	{
//		if (i >= mid) return mid - (i - mid);
//		else if (i < mid) return mid + (mid - i);
//	}
//}
//
//int main()
//{
//	int n, index = 0;
//	bool chk = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d", &arr[i]), idx[arr[i]] = i;
//	for (int i = 1; i <= n; i++)
//	{
//		int state = idx[i];
//		for (int j = 1; j <= index; j++)
//		{
//			if (list[j][0] <= state && list[j][1] >= state)
//				state = calc(list[j][0], list[j][1], state);
//		}
//		if (state != i) list[++index][0] = i, list[index][1] = state;
//		if (index > 2)
//		{
//			chk = 1;
//			break;
//		}
//	}
//	if (chk == 0)
//	{
//		if (index == 0)
//		{
//			printf("1 1\n1 1");
//			return 0;
//		}
//		for (int i = 1; i <= index; i++) printf("%d %d\n", list[i][0], list[i][1]);
//		if (index == 1) printf("1 1");
//		return 0;
//	}
//
//
//	chk = 0, index = 0;
//	for (int i = n; i >= 1; i--)
//	{
//		int state = idx[i];
//		for (int j = 1; j <= index; j++)
//		{
//			if (list[j][0] <= state && list[j][1] >= state)
//				state = calc(list[j][0], list[j][1], state);
//		}
//		if (state != i) list[++index][0] = state, list[index][1] = i;
//		if (index > 2)
//		{
//			chk = 1;
//			break;
//		}
//	}
//
//	if (chk == 0)
//	{
//		if (index == 0)
//		{
//			printf("1 1\n1 1");
//			return 0;
//		}
//		for (int i = 1; i <= index; i++) printf("%d %d\n", list[i][0], list[i][1]);
//		if (index == 1) printf("1 1");
//	}
//
//	return 0;
//}