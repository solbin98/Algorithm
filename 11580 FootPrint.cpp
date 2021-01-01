//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	int l, idx = 1;
//	int a[1001][2] = { 0 };
//	char str[1001];
//	cin >> l;
//	cin >> str;
//	for (int i = 0; i < l; i++)
//	{
//		int y = a[i][0], x = a[i][1];
//
//		if (str[i] == 'S') y--;
//		else if (str[i] == 'E') x++;
//		else if (str[i] == 'N') y++;
//		else x--;
//
//		a[i + 1][0] = y, a[i + 1][1] = x;
//	}
//	int ans = 1;
//	for (int i = 1; i <= l; i++)
//	{
//		if (a[i][0] == 0 && a[i][1] == 0) continue;
//		ans++;
//		for (int j = i + 1; j <= l; j++)
//		{
//			if (a[i][0] == a[j][0] && a[i][1] == a[j][1]) a[j][0] = 0, a[j][1] = 0;
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}