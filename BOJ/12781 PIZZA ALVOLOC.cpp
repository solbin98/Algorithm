//#include<iostream>
//#define N 8
//using namespace std;
//int arr[N + 1];
//class point
//{
//public:
//	long long y, x;
//};
//
//long long ccw(point a, point b, point c)
//{
//	return (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
//}
//
//int main()
//{
//	int idx = 0;
//	point pos[5];
//	for (int i = 1; i <= N; i++)
//	{
//		cin >> arr[i];
//		if (i % 2 == 0) pos[++idx].x = arr[i - 1], pos[idx].y = arr[i];
//	}
//
//	long long val1 = ccw(pos[1], pos[2], pos[3]);
//	long long val2 = ccw(pos[1], pos[2], pos[4]);
//	if (val1 * val2 < 0) printf("1");
//	else printf("0");
//	return 0;
//}