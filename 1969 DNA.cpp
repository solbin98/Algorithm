//#include<iostream>
//#include<cstdio>
//#define N 1000
//#define M 50
//
//using namespace std;
//char str[M + 1][N + 1];
//char ans[N + 1];
//int main()
//{
//	int n, m, sum = 0;
//	int ans_i = 0;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) cin >> str[i];
//	for (int j = 0; j < m; j++)
//	{
//		int cnt[27] = { 0 };
//		for (int i = 1; i <= n; i++) cnt[str[i][j]-'A']++;
//		int max = 0, max_index = 0;
//		for (int i = 0; i < 27; i++) if (max < cnt[i]) max = cnt[i], max_index = i;
//		sum += (n - max);
//		printf("%c", max_index + 'A');
//	}
//	cout << endl;
//	printf("%d", sum);
//	return 0;
//}