#include<iostream>
#include<cstdio>

#define N 1000000
using namespace std;
int links[N + 1][2], match[N + 1], anss[N + 1], chk[N + 1];
bool visit[N + 1];

int dfs(int num)
{
	visit[num] = 1;
	for (int i = 0; i < 2; i++)
	{
		if (match[links[num][i]] == 0)
		{
			match[links[num][i]] = num;
			return 1;
		}
	}
	for (int i = 0; i < 2; i++)
	{
		if (visit[match[links[num][i]]] == 0)
		{
			if (dfs(match[links[num][i]]) == 1)
			{
				match[links[num][i]] = num;
				return 1;
			}
		}
	}
	return 0;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) scanf_s("%d %d", &links[i][0], &links[i][1]);
	for (int i = 1; i <= n; i++)
	{
		if (dfs(i) == 0)
		{
			printf("-1");
			return 0;
		}
		for (int i = 0; i <= N; i++) visit[i] = 0;
	}
	for (int i = 1; i <= N; i++)
	{
		if (match[i] > 0) printf("%d\n", i);
	}
	return 0;
}