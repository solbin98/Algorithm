//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#define N 100000
//using namespace std;
//int pare[N + 1], ranks[N + 1];
//
//typedef struct xpos
//{
//    int x1, x2, num;
//}xpos;
//
//struct xpos X[N + 1];
//bool compare(xpos xs, xpos xss)
//{
//    if (xs.x2 == xss.x2) return xs.x1 < xss.x1;
//    return xs.x2 < xss.x2;
//}
//
//int find(int now)
//{
//    if (pare[now] == now) return now;
//    else return pare[now] = find(pare[now]);
//}
//
//void unions(int a, int b)
//{
//    int pa = find(a), pb = find(b);
//    if (pa == pb) return;
//    if (ranks[pa] < ranks[pb])
//    {
//        int t = pa;
//        pa = pb;
//        pb = t;
//    }
//    if (ranks[pa] == ranks[pb]) ranks[pa]++;
//    ranks[pb] = 0;
//    pare[pb] = pa;
//}
//
//int stack[N + 1][3];
//int top = 0;
//
//int main()
//{
//    int n, q;
//    cin >> n >> q;
//    for (int i = 1; i <= n; i++) pare[i] = i;
//    for (int i = 1; i <= n; i++)
//    {
//        int xs, xss, y;
//        scanf("%d %d %d", &xs, &xss, &y);
//        X[i].x1 = xs, X[i].x2 = xss, X[i].num = i;
//    }
//
//    sort(X + 1, X + n + 1, compare);
//    for (int i = 1; i <= n; i++)
//    {
//        while (top > 0 && stack[top][1] >= X[i].x1)
//        {
//            unions(stack[top][2], X[i].num);
//            top--;
//        }
//        stack[++top][0] = X[i].x1;
//        stack[top][1] = X[i].x2;
//        stack[top][2] = X[i].num;
//    }
//
//    for (int i = 1; i <= q; i++)
//    {
//        int q1, q2;
//        scanf("%d %d", &q1, &q2);
//        if (find(q1) == find(q2)) printf("1\n");
//        else printf("0\n");
//    }
//}