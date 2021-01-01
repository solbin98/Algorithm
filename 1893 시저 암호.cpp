//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<vector>
//#include<map>
//#define N 500000
//#define M 50000
//#define K 63
//using namespace std;
//char A[K + 1], W[M + 1], S[N + 1];
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//
//		cin >> A >> W >> S;
//		int len_a = strlen(A), len_w = strlen(W), len_s = strlen(S);
//		int hashed[500] = { 0 };
//		for (int i = 0; i < len_a; i++) hashed[A[i]] = i;
//
//		vector<int> ans;
//		for (int n = 0; n < len_a; n++)
//		{
//			int fail[M + 1] = { 0 };
//			int cnts = 0;
//
//			for (int i = 1, j = 0; i < len_w; i++)
//			{
//				while (j > 0 && W[i] != W[j]) j = fail[j - 1];
//				if (W[i] == W[j]) fail[i] = ++j;
//			}
//
//			for (int i = 0, j = 0; i < len_s; i++)
//			{					
//				while (j > 0 && A[(hashed[S[i]] - n + len_a)%len_a] != W[j]) j = fail[j - 1];
//				if (A[(hashed[S[i]] - n + len_a) % len_a] == W[j])
//				{
//					if (j == (len_w - 1))
//					{
//						cnts++;
//						j = fail[j];
//					}
//					else j++;
//				}
//			}
//			if (cnts == 1) ans.push_back(n);
//		}
//
//		if (ans.size() == 0) printf("no solution");
//		else if (ans.size() > 1) printf("ambiguous: ");
//		else printf("unique: ");
//
//		for (int i = 0; i < ans.size(); i++) printf("%d ", ans[i]);
//		printf("\n");
//	}
//
//	return 0;
//}