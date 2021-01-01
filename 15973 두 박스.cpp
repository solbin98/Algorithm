//#include<iostream>
//using namespace std;
//int main()
//{
//	int x1, y1, x2, y2;
//	int x3, y3, x4, y4;
//
//	cin >> x1 >> y1 >> x2 >> y2;
//	cin >> x3 >> y3 >> x4 >> y4;
//
//	int x_first, x_last;
//	int y_first, y_last;
//
//	if (x1 > x3) x_first = x1;
//	else x_first = x3;
//
//	if (x2 < x4) x_last = x2;
//	else x_last = x4;
//
//	if (y1 > y3) y_first = y1;
//	else y_first = y3;
//
//	if (y2 < y4) y_last = y2;
//	else y_last = y4;
//
//	int x = x_last - x_first, y = y_last - y_first;
//	if (x < 0 || y < 0) printf("NULL");
//	else if (x == 0 && y == 0) printf("POINT");
//	else if (x == 0 && y >= 1) printf("LINE");
//	else if (x >= 1 && y == 0) printf("LINE");
//	else printf("FACE");
//
//	return 0;
//}