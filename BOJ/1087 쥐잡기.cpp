//#include<iostream>
//#include<cstdio>
//#define N 50
//using namespace std;
//double pos[N + 1][2], v[N + 1][2];
//
//double max_len(double time, int n)
//{
//	double new_pos[N + 1][2];
//	for (int i = 1; i <= n; i++)
//	{
//		new_pos[i][0] = pos[i][0] + v[i][0] * time;
//		new_pos[i][1] = pos[i][1] + v[i][1] * time;
//	}
//
//	double max_x = -1e15, min_x = 1e15;
//	double max_y = -1e15, min_y = 1e15;
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (max_x < new_pos[i][0]) max_x = new_pos[i][0];
//		if (min_x > new_pos[i][0]) min_x = new_pos[i][0];
//		if (max_y < new_pos[i][1]) max_y = new_pos[i][1];
//		if (min_y > new_pos[i][1]) min_y = new_pos[i][1];
//	}
//
//	double garo = max_x - min_x;
//	double sero = max_y - min_y;
//
//	if (garo == sero) return garo;
//	else if (garo > sero) return garo;
//	else return sero;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	for (int i = 1; i <= n; i++) 
//		cin >> pos[i][0] >> pos[i][1] >> v[i][0] >> v[i][1];
//	
//	double low = 0, high = 1e15;
//	while(high - low >= 0.000000000001)
//	{
//		double pos1 = (low*2 + high) / 3;
//		double pos2 = (low + high * 2) / 3;
//
//		if (max_len(pos1, n) > max_len(pos2, n)) low = pos1;
//		else high = pos2;
//	}
//
//	printf("%.9lf", max_len(low,n));
//	return 0;
//}