//#include<iostream>
//#include<cstdio>
//#define N 50000
//#define INF 987654321
//using namespace std;
//int a[N + 1][2];
//bool m_visit[N + 1], p_visit[N + 1];
//int main()
//{
//	int n;
//	int pmax = -INF, pmin = INF;
//	int m_max1 = -INF, m_max1_idx = 0, m_max2 = -INF;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d %d", &a[i][0], &a[i][1]);
//	for (int i = 1; i <= n; i++)
//	{
//		if (m_max1 < (a[i][0] - a[i][1]))
//		{
//			m_max1 = a[i][0] - a[i][1];
//			m_visit[m_max1_idx] = 0;
//			m_max1_idx = i;
//			m_visit[m_max1_idx] = 1;
//		}
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (m_visit[i] == 0 && m_max2 < (a[i][1] - a[i][0]))
//		{
//			m_max2 = a[i][1] - a[i][0];
//		}
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (pmax < a[i][0] + a[i][1]) pmax = a[i][0] + a[i][1];
//		if (pmin > a[i][0] + a[i][1]) pmin = a[i][0] + a[i][1];
//	}
//	if (n == 1) printf("0");
//	else
//	{
//		if (pmax - pmin > m_max1 + m_max2) printf("%d", pmax - pmin);
//		else printf("%d", m_max1 + m_max2);
//	}
//	return 0;
//}