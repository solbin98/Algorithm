//#include<iostream>
//#include<cstdio>
//#define N 100
//using namespace std;
//int main()
//{
//    int T;
//    cin >> T;
//    while (T--)
//    {
//        int n, cnt = 0;
//        bool check[N + 1] = { 0 }, flag = 0;
//        cin >> n;
//        while (1)
//        {
//            flag = 0;
//            int chk[N + 1] = { 0 };
//            for (int i = 1; i < n; i++)
//                for (int j = i + 1; j <= n; j++)
//                    if (check[i] == 0 && check[j] == 0 && check[i ^ j] == 0 && (i^j) <=n) 
//                        chk[i ^ j]++, flag = 1;
//           
//             if (flag == 0) break; 
//            int max = 0, max_idx = 0;
//            for (int i = 1; i <= n; i++)
//            {               
//                if (check[i] == 1) continue;
//                int cnts = 0;
//                for (int j = 1; j <= n; j++)
//                {
//                    if (i == j || check[j] == 1) continue;
//                    if ((i ^ j) <= n) cnts++;
//                }
//                if (chk[i] + cnts > max) max = chk[i] + cnts, max_idx = i;
//            }
//            check[max_idx] = 1;
//            cnt++;
//        }
//
//        printf("%d\n", n - cnt);
//        for (int i = 1; i <= n; i++)
//        {
//            if (check[i] == 0) printf("%d ", i);
//        }
//        printf("\n");
//    }
//}