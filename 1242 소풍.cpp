//#include<iostream>
//#include<cstdio>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n, m, k;
//	cin >> n >> m >> k;
//	int len = n, pos = k, cnt = 0;
//	while (1)
//	{
//		cnt++;
//		int delte = m % len;
//		if (delte == 0) delte = len;
//
//		if (delte == pos || len == 1)
//		{
//			printf("%d", cnt);
//			break;
//		}
//		else if (delte > pos) pos = len - (delte - pos);
//		else pos = pos - delte;
//		len--;
//	}
//	return 0;
//}