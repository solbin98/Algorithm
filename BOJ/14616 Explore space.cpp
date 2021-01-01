//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#define N 100000
//#define LEFT -1
//#define RIGHT 1
//using namespace std;
//class point
//{
//public:
//	double x, y;
//};
//
//double a[N + 1][4];
//pair<double, double> b[N + 1];
//
//int ccw(point p1, point p2)
//{
//	double tmp = p1.x * p2.y - p1.y * p2.x;
//	if (tmp == 0) return 0;
//	else if (tmp > 0) return RIGHT;
//	else return LEFT;
//}
//
//int g(int i, int mid)
//{
//	point p1, p2, p3;
//	p1.x = a[i][0], p1.y = a[i][1], p2.x = a[i][2], p2.y = a[i][3];
//	p3.x = b[mid].first, p3.y = b[mid].second;
//	int t1 = ccw(p3, p1), t2 = ccw(p3, p2);
//
//	if (t1 * t2 < 0) return 0;
//	else if (t1 * t2 == 0) return 0;
//	else
//	{
//		if (t1 > 0 && t2 > 0) return LEFT;
//		else return RIGHT;
//	}
//}
//
//bool compare(pair<double, double> a, pair<double, double> b)
//{
//	if ((a.second / a.first) == (b.second / b.first)) return a.first < b.first;
//	else return (a.second / a.first) < (b.second / b.first);
//}
//
//int main()
//{
//	int n, m, ans = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%lf %lf %lf %lf", &a[i][0], &a[i][1], &a[i][2], &a[i][3]);
//	cin >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		double t1, t2;
//		scanf("%lf %lf", &b[i].first, &b[i].second);
//	}
//	sort(b + 1, b + m + 1, compare);
//
//	for (int i = 1; i <= n; i++)
//	{
//		int low = 1, high = m, mid;
//		bool flag = 0;
//		while (low <= high)
//		{
//			mid = (low + high) / 2;
//			if (g(i,mid) == 0)
//			{
//				flag = 1;
//				break;
//			}
//			else if (g(i, mid) == LEFT) low = mid + 1;
//			else high = mid - 1;
//		}
//		if (flag == 0) ans++;
//	}
//	printf("%d", ans);
//	return 0;
//}