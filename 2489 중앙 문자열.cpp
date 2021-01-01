//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<queue>
//#define N 100000
//using namespace std;
//char str[4][N+1], ans[N + 1];
//priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//vector<int> idx_list[5];
//int cnt[4];
//int main()
//{
//	for (int i = 1; i <= 3; i++) cin >> str[i];
//	for (int j = 0; str[1][j] != '\0'; j++)
//	{
//		if (str[1][j] == str[2][j] && str[2][j] == str[3][j])
//		{
//			ans[j] = str[1][j];
//			continue;
//		}
//		else if (str[1][j] == str[2][j])
//		{
//			ans[j] = str[1][j];
//			idx_list[1].push_back(j);
//			cnt[3]++;
//		}
//		else if (str[1][j] == str[3][j])
//		{
//			ans[j] = str[1][j];
//			idx_list[2].push_back(j);
//			cnt[2]++;
//		}
//		else if (str[2][j] == str[3][j])
//		{
//			ans[j] = str[2][j];
//			idx_list[3].push_back(j);
//			cnt[1]++;
//		}
//		else idx_list[4].push_back(j);
//	}	
//	//printf("%d %d %d\n", cnt[1], cnt[2], cnt[3]);
//	for (int i = 1; i <= 3; i++) pq.push({ cnt[i], i });
//	int len = idx_list[4].size();
//	for (int i = 0; i < len; i++)
//	{
//		pair<int, int> max1, max2;
//		max1 = pq.top(), pq.pop();
//		max2 = pq.top(), pq.pop();
//		max1.first++, max2.first++;
//
//		int i1 = max1.second, i2 = max2.second;
//		if (i1 > i2)
//		{
//			int tmp = i1;
//			i1 = i2;
//			i2 = tmp;
//		}
//
//		cnt[i1]++, cnt[i2]++;
//		if (i1 == 1 && i2 == 2) ans[idx_list[4][i]] = str[3][idx_list[4][i]], cnt[3];
//		else if (i1 == 1 && i2 == 3) ans[idx_list[4][i]] = str[2][idx_list[4][i]], cnt[2];
//		else if (i1 == 2 && i2 == 3) ans[idx_list[4][i]] = str[1][idx_list[4][i]], cnt[1];
//		pq.push(max1), pq.push(max2);
//	}
//	//printf("%d %d %d\n", cnt[1], cnt[2], cnt[3]);
//	int max = 0, max_idx = 0;
//	for (int i = 1; i <= 3; i++)
//		if (max <= cnt[i]) max = cnt[i], max_idx = i;
//
//	int real_idx = 0;
//	if (max_idx == 1) real_idx = 3;
//	else if (max_idx == 2) real_idx = 2;
//	else real_idx = 1;
//
//	for (int i = 0; i < idx_list[real_idx].size(); i++)
//	{
//		bool flag = 0;
//		for (int j = 1; j <= 3; j++)
//		{
//			if (max_idx == j) continue;
//			if (cnt[j] + 1 >= cnt[max_idx]) flag = 1;
//		}
//		if (flag == 1) break;
//
//		for (int j = 1; j <= 3; j++)
//		{
//			if (max_idx == j)
//			{
//				cnt[j]--;
//				continue;
//			}
//			else cnt[j]++;
//		}
//
//		int idx = idx_list[real_idx][i];
//		if (real_idx == 1) ans[idx] = str[3][idx];
//		else if (real_idx == 2) ans[idx] = str[2][idx];
//		else ans[idx] = str[1][idx];
//	}
//
//	max = 0;
//	for (int i = 1; i <= 3; i++)
//		if (max < cnt[i]) max = cnt[i];
//
//	printf("%d\n", max);
//	for (int i = 0; str[1][i] != '\0'; i++) printf("%c", ans[i]);
//	return 0;
//}