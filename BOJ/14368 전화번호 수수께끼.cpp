//#include<iostream>
//#include<cstdio>
//#define N 2000
//using namespace std;
//int main()
//{
//	int t, idx = 0;
//	cin >> t;
//	while (t--)
//	{
//		idx++;
//		int cnts[27] = { 0 }, ans[10] = { 0 };
//		char str[N + 1];
//		cin >> str;
//		for (int i = 0; str[i] != '\0'; i++) cnts[str[i] - 'A' + 1]++;
//		
//		ans[0] = cnts['Z' - 'A' + 1];
//		ans[2] = cnts['W' - 'A' + 1];
//		ans[4] = cnts['U' - 'A' + 1];
//		ans[6] = cnts['X' - 'A' + 1];
//		ans[8] = cnts['G' - 'A' + 1];
//		ans[1] = cnts['O' - 'A' + 1] - (cnts['W' - 'A' + 1] + cnts['U' - 'A' + 1] + cnts['Z' - 'A' + 1]);
//		ans[3] = cnts['T' - 'A' + 1] - (cnts['G' - 'A' + 1] + cnts['W' - 'A' + 1]);
//		ans[5] = cnts['F' - 'A' + 1] - cnts['U' - 'A' + 1];
//		ans[7] = cnts['S' - 'A' + 1] - cnts['X' - 'A' + 1];
//		ans[9] = cnts['I' - 'A' + 1] - (ans[8] + ans[5] + ans[6]);
//		printf("Case #%d: ", idx);
//		for (int i = 0; i < 10; i++)
//		{
//			while (ans[i] > 0)
//			{
//				printf("%d",i);
//				ans[i]--;
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}