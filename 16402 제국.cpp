//#include<iostream>
//#include<cstdio>
//#include<string>
//#include<string.h>
//#include<vector>
//#include<algorithm>
//
//#define N 500
//using namespace std;
//char kingdom[N + 1][51];
//int n, m;
//
//vector <int> sets[N + 1];
//bool is_jong[N + 1];
//int kingdom_set[N + 1];
//
//int find_idx(char* string)
//{
//	for (int i = 1; i <= n; i++)
//		if (strlen(kingdom[i]) == strlen(string))
//		{
//			int flag = 0;
//			for (int j = 0; kingdom[i][j] != '\0'; j++)
//			{
//				if (kingdom[i][j] != string[j])
//				{
//					flag = 1;
//					break;
//				}
//			}
//			if (flag == 0) return i;
//		}
//}
//
//int main()
//{
//	cin >> n >> m;
//	getc(stdin);
//	for (int i = 1; i <= n; i++)
//	{
//		kingdom_set[i] = i;
//		sets[i].push_back(i);
//		is_jong[i] = 1;
//		fgets(kingdom[i], sizeof(kingdom[i]), stdin);
//		int len = strlen(kingdom[i]);
//		kingdom[i][len-1] = '\0';
//	}
//
//	for (int i = 1; i <= m; i++)
//	{
//		char str[200];
//		char kingdom1[31], kingdom2[31];
//		fgets(str, sizeof(str), stdin);
//		int len = strlen(str);
//		str[len - 1] = '\0';
//
//		int idx1 = 0, idx2 = 0;
//		while (str[idx1] != ',') idx1++;
//		for (int i = 0; i < idx1; i++) kingdom1[i] = str[i];
//		kingdom1[idx1] = '\0';
//		idx2 = idx1+1;
//		while (str[idx2] != ',') idx2++;
//		for (int i = idx1 + 1; i < idx2; i++) kingdom2[i-idx1-1] = str[i];
//		kingdom2[idx2-idx1-1] = '\0';
//		int win = str[idx2 + 1] - '0';
//
//		if (win == 1) idx1 = find_idx(kingdom1), idx2 = find_idx(kingdom2);
//		else idx1 = find_idx(kingdom2), idx2 = find_idx(kingdom1);
//
//		int winner_set = kingdom_set[idx1];
//		int loser_set = kingdom_set[idx2];
//
//		if (is_jong[idx1] == 1 && is_jong[idx2] == 1)
//		{
//			for (int i = 0; i < sets[loser_set].size(); i++)
//			{
//				sets[winner_set].push_back(sets[loser_set][i]);
//				kingdom_set[sets[loser_set][i]] = winner_set;
//			}
//			is_jong[idx2] = 0;
//			sets[loser_set].clear();
//		}
//		else if (is_jong[idx1] == 0 && is_jong[idx2] == 1)
//		{
//			if (kingdom_set[idx1] == kingdom_set[idx2]) is_jong[idx2] = 0, is_jong[idx1] = 1;
//			else
//			{
//				for (int i = 0; i < sets[loser_set].size(); i++)
//				{
//					sets[winner_set].push_back(sets[loser_set][i]);
//					kingdom_set[sets[loser_set][i]] = winner_set;
//				}
//				is_jong[idx2] = 0;
//				sets[loser_set].clear();
//			}
//		}
//		else if (is_jong[idx1] == 1 && is_jong[idx2] == 0)
//		{
//			if (kingdom_set[idx1] != kingdom_set[idx2])
//			{
//				for (int i = 0; i < sets[loser_set].size(); i++)
//				{
//					if (is_jong[sets[loser_set][i]] == 1) is_jong[sets[loser_set][i]] = 0;
//					sets[winner_set].push_back(sets[loser_set][i]);
//					kingdom_set[sets[loser_set][i]] = winner_set;
//				}
//				sets[loser_set].clear();
//			}
//		}
//	}
//
//	int ans = 0;
//	string out[N + 1];
//	int idx = 0;
//	for (int i = 1; i <= n; i++)
//		if (is_jong[i] == 1) out[++idx] = kingdom[i];
//
//	printf("%d\n", idx);
//	sort(out + 1, out + idx+1);
//	for (int i = 1; i <= idx; i++) cout << out[i] << endl;
//	return 0;
//}