//#include<iostream>
//#include<cstdio>
//#include<math.h>
//using namespace std;
//int main()
//{
//	double x, y, d, t;
//	double ans;
//	cin >> x >> y >> d >> t;
//	double distance = sqrt(x * x + y * y);
//	ans = distance;
//	for (double k = 1; k <= 2000; k++)
//	{
//		double t_dist = d * k;
//		if (k == 1)
//		{
//			if (t_dist >= distance)
//			{
//				if (ans > t + (t_dist - distance)) ans = t + (t_dist - distance);
//			}
//			else
//			{
//				if (ans > t + (distance - t_dist)) ans = t + (distance - t_dist);
//			}
//		}
//		else
//		{
//			if (t_dist >= distance)
//			{
//				if (ans > k* t) ans = k * t;
//			}
//			else
//			{
//				if (ans > k* t + (distance - t_dist)) ans = k * t + (distance - t_dist);
//			}
//		}
//	}
//	printf("%.15lf", ans);
//	return 0;
//}