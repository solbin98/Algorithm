//#include<cstdio>
//#include<iostream>
//
//using namespace std;
//#define N 16
//
//char strs[N + 1], mo[5] = {'a','e','i','o','u'};
//char tmp[N + 1];
//int chk[26], l, c;
//
//void dfs(int n, int z, int m)
//{
//	if ((z + m == l) && (z >= 2) && (m >= 1))
//	{
//		for (int i = 1; i <= l; i++) printf("%c", tmp[i]);
//		printf("\n");
//		return;
//	}
//	for (int i = n + 1; i <= c; i++)
//	{
//		int t = chk[strs[i] - 'a'];
//		tmp[z + m + 1] = strs[i];
//		if (t == 0) dfs(i, z + 1, m);
//		else dfs(i, z, m + 1);
//	}
//}
//
//
//int main()
//{
//	cin >> l >> c;
//	for (int i = 0; i < 26; i++)
//		for (int j = 0; j < 5; j++)
//			if (mo[j] - 'a' == i)
//			{
//				chk[i] = 1;
//				break;
//			}
//
//	for (int i = 1; i <= c; i++)
//	{
//		char tmp;
//		cin >> tmp;
//		int index = i;
//		while (index > 1 && strs[index - 1] > tmp) strs[index] = strs[index - 1], index--;
//		strs[index] = tmp;
//	}
//	dfs(0, 0, 0);
//	return 0;
//}