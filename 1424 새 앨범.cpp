//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	int n, l, c;
//	cin >> n;
//	cin >> l;
//	cin >> c;
//
//	int max_cnt = 1;
//	while (l * max_cnt + (max_cnt - 1) <= c) max_cnt++;
//	max_cnt--;
//	if (max_cnt % 13 == 0) max_cnt--;
//	int tmp = n / (max_cnt);
//
//	if ((n % max_cnt) % 13 != 0) printf("%d", (n / max_cnt) + 1);
//	else
//	{
//		if ((n / max_cnt) * (max_cnt) == n) printf("%d", n / max_cnt);
//		else if ((max_cnt - 1) % 13 == 0)
//		{
//			if ((n % max_cnt) + 2 <= max_cnt) printf("%d", (n / max_cnt)+1);
//			else printf("%d", (n / max_cnt) + 2);
//		}
//		else
//		{
//			printf("%d", (n / max_cnt) + 1);
//		}
//	}
//	return 0;
//}