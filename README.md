# homework-from-19.09.2020
task 1 -. Для n=7, m=9 заполнить матрицу из n строк и m столбцов числами от 1 до m*n по улитке.
task 2 - Дана матрица
const int n=5, m=6;
int M[n][m];
for(int i =0; i<n; ++i)
 for(int j =0; j<n; ++j)
 M[i][j] = rand()%10000;
Вывести матрицу на экран, выровняв столбцы по левому краю.
10 23456 13
1013 12 145
1 234 7
40726 12 4567
После этого вывести матрицу на экран, выровняв столбцы по правому краю.
 10 23456 13
1013 12 145
 1 234 7
40726 12 4567
