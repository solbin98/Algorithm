//#include<iostream>
//#include<cstdio>
//#define N 1024
//using namespace std;
//int map[N + 1][N + 1];
//int d[3][2] = { {0,1},{1,0},{1,1} };
//int main()
//{
//    int n, k = 0, number;
//    cin >> n;
//    number = n;
//    while (number != 1) number /= 2, k++;
//
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= n; j++)
//            scanf("%d", &map[i][j]);
//
//
//    for (int p = 1; p <= k; p++)
//    {
//        for (int i = 1; i <= n; i += 2)
//        {
//            for (int j = 1; j <= n; j += 2)
//            {
//                int number[5] = { 1000000 };
//                number[1] = map[i][j];
//                for (int k = 0; k < 3; k++)
//                {
//                    int idx = k + 1;
//                    int new_num = map[i + d[k][0]][j + d[k][1]];
//                    while (number[idx] < new_num)
//                        number[idx + 1] = number[idx], idx--;
//                    number[++idx] = new_num;
//                }
//                map[((i - 1) / 2) + 1][((j - 1) / 2) + 1] = number[2];
//                
//            }
//        }
//        n /= 2;        
//    }
//
//    printf("%d", map[1][1]);
//    return 0;
//}