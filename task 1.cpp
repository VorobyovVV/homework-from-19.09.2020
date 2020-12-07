// ConsoleApplication20.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


int main()
{
    const int n = 4, m = 5;
    
    int M[n][m];
    int k = 0, c = 0,  i = 0, j = 0, I = 1, s_n = n, s_m = m;
 
   
    while (I < n * m) {
        while (j < s_m) {
            M[i][j] = I;
            ++j;
            ++I;
        }
        --j;
        ++k;
        while (i < s_n - 1) {
            ++i;
            M[i][j] = I;
            ++I;
        }
        --s_m;
        --s_n;
        while (j > c) {
            --j;
            M[i][j] = I;
            ++I;
        }
        ++c;
        while (i > k) {
            --i;
            M[i][j] = I;
            ++I;
        }
        ++j;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << M[i][j] << '\t';
        }
        std::cout << std::endl;
    }
}
