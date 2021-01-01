//#include<iostream>
//#include<cstdio>
//#define N 50
//
//using namespace std;
//int cost[N + 1];
//
//int main()
//{
//	int n, m, min = 51;
//	int len = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> cost[i];
//		if (cost[i] < min && i != 1) min = cost[i];
//	}
//	cin >> m;
//
//	if (m - min < 0)
//	{
//		len = m / cost[1];
//		printf("0");
//		return 0;
//	}
//	else if (min > cost[1]) len = ((m - min) / cost[1]) + 1;
//	else len = (m / min);
//	for (int i = n; i >= 1; i--)
//	{
//		int tmp = 0;
//		min = 51;
//		for (int j = 1; j <= i; j++)
//			if (cost[j] < min) min = cost[j];
//
//		for (int j = 1; j <= len; j++)
//		{
//			if (m - cost[i] * j < 0) break;
//			if (((m - cost[i] * j) / min) >= len - j) tmp = j;
//			else break;
//		}
//		len -= tmp;
//		m -= tmp * cost[i];
//		for (int k = 1; k <= tmp; k++) printf("%d", i - 1);
//	}
//	return 0;
//}