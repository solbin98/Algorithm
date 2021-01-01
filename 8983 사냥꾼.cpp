//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//
//#define N 100000
//#define INF 2000000000
//
//using namespace std;
//int fire[N + 1], animals[N + 1][2];
//
//int diff(int a, int b)
//{
//	int out = a - b;
//	if (out < 0) out *= -1;
//	return out;
//}
//
//int main()
//{
//	int m, n, l, cnt = 0;
//	cin >> m >> n >> l;
//	for (int i = 1; i <= m; i++) scanf("%d", &fire[i]);
//	fire[m + 1] = INF;
//	for (int i = 1; i <= n; i++) scanf("%d %d", &animals[i][0], &animals[i][1]);
//	sort(fire + 1, fire + m + 1);
//	for (int i = 1; i <= n; i++)
//	{
//		int x = animals[i][0], y = animals[i][1];
//
//		int low = 1, high = m, mid;
//		int min = INF, flag = 0;
//		while (low <= high)
//		{
//			mid = (low + high) / 2;
//			if (diff(fire[mid], x) + y <= l)
//			{
//				flag = 1;
//				break;
//			}
//			if (diff(fire[mid], x) + y < diff(fire[mid + 1], x) + y) high = mid - 1;
//			else low = mid + 1;
//		}
//		if (flag == 1) cnt++;
//	}
//	printf("%d", cnt);
//	return 0;
//}