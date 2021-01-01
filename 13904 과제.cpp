//#include<iostream>
//#include<cstdio>
//#define N 1000
//#define INF 987654321
//using namespace std;
//int a[N + 1][2], ans_list[N + 1];
//int ind = 0;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int t1, t2, index1 = i;
//		scanf("%d %d", &t1, &t2);
//		while (1)
//		{
//			if (a[index1 - 1][0] == t1)
//			{
//				if (a[index1 - 1][1] > t2) break;
//			}
//			else if (a[index1 - 1][0] < t1) break;
//			a[index1][0] = a[index1 - 1][0], a[index1][1] = a[index1 - 1][1];
//			index1--;
//		}
//		a[index1][0] = t1, a[index1][1] = t2;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (ind == a[i][0])
//		{
//			int min = INF, min_index = INF;
//			for (int j = 1; j <= ind; j++)
//			{
//				if (min > ans_list[j]) min = ans_list[j], min_index = j;
//			}
//			if (min < a[i][1]) ans_list[min_index] = a[i][1];
//		}
//		else
//		{
//			ans_list[++ind] = a[i][1];
//		}
//	}
//
//	int sum = 0;
//	for (int i = 1; i <= n; i++) sum += ans_list[i];
//	printf("%d", sum);
//	return 0;
//}