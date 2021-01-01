//#include<iostream>
//#include<cstdio>
//#include<vector>
//#define N 100000	
//#define M 100
//#define INF 987654321
//using namespace std;
//vector <int> elve[M + 1];
//vector <int> flro[N + 1];
//
//int chk_elve[M + 1], chk_flro[N+1], dist_elve[M + 1], dist_flro[N + 1];
//int queue[N * M + 1];
//int front = 1, tail = 0, nex = 0, sum = 0;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b, tmp = 0, idx = 1;
//		scanf("%d %d", &a, &b);
//		tmp = a;
//		while (tmp <= n)
//		{
//			flro[tmp].push_back(i);
//			elve[i].push_back(tmp);
//			tmp = a + b * (idx - 1);
//			idx++;
//		}
//	}
//
//	for (int i = 0; i <= N; i++) dist_flro[i] = INF;
//	for (int i = 0; i <= M; i++) dist_elve[i] = INF;
//
//	int a1, a2, flag = 1;
//	cin >> a1 >> a2;
//	dist_flro[a1] = 0;
//
//	for (int i = 0; i < flro[a1].size(); i++)
//	{
//		queue[++tail] = flro[a1][i];
//		dist_elve[flro[a1][i]] = 1;
//		chk_elve[flro[a1][i]] = flro[a1][i];
//		nex = tail, sum = nex;
//	}
//
//	while (front <= tail)
//	{
//		if (flag == 1)
//		{
//			int now_num = queue[front];
//			for (int i = 0; i < elve[now_num].size(); i++)
//			{
//				if (dist_flro[elve[now_num][i]] > dist_elve[now_num])
//				{
//					sum++;
//					dist_flro[elve[now_num][i]] = dist_elve[now_num];
//					queue[++tail] = elve[now_num][i];
//					chk_flro[elve[now_num][i]] = now_num;
//				}
//			}
//		}
//		else
//		{
//			int now_num = queue[front];
//			if (now_num == a2)
//			{
//				printf("%d\n", dist_flro[now_num]);
//				int now = chk_flro[now_num];
//				int ans[M + 1] = { 0 };
//				int idx = 1;
//				while (1)
//				{
//					ans[idx++] = now;
//					if (now == chk_elve[now]) break;
//					now = chk_elve[now];
//				}
//				for (int i = idx - 1; i >= 1; i--) printf("%d\n", ans[i]);
//				return 0;
//			}
//			for (int i = 0; i < flro[now_num].size(); i++)
//			{
//				if (dist_elve[flro[now_num][i]] > dist_flro[now_num] + 1)
//				{
//					sum++;
//					dist_elve[flro[now_num][i]] = dist_flro[now_num] + 1;
//					queue[++tail] = flro[now_num][i];
//					chk_elve[flro[now_num][i]] = chk_flro[now_num];
//				}
//			}
//		}
//		if (front == nex) flag = !(flag), nex = sum;
//		front++;
//	}
//
//	printf("-1");
//	return 0;
//}
