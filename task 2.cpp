// ConsoleApplication22.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


    int main()
    {
        
        const int n = 5, m = 6;
        int M[n][m];

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                M[i][j] = rand() % 10000;
            }
        }
        
        for (int i = 0; i < n; ++i) {
            int k = 0;
            for (int j = 0; j < n; ++j) {
                int h = 0, k = 0, s = 0;
                for (int i = 0; i < n; ++i) {
                    if (h < M[i][k])h = M[i][k]; 
                }
                while (h > 0) {
                    h /= 10;
                    ++k;    
                }
                s = M[j][i];
                while (s > 0) {
                    s /= 10; 
                    ++h;
                }
                std::cout << M[j][i];
                for (int i = 0; i <= k - h; ++i) {
                    std::cout << " ";
                }
                ++k;
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;

       
        for (int i = 0; i < n; ++i) {
            int k = 0;
            for (int j = 0; j < n; ++j) {
                int h = 0, k = 0, s = 0;
                for (int i = 0; i < n; ++i) {
                    if (h < M[i][k])h = M[i][k];
                }
                while (h > 0) {
                    h /= 10;
                    ++k;   
                }
                s = M[j][i];
                while (s) {
                    s /= 10;
                    ++h;
                }

                for (int i = 0; i <= k - h; ++i) {
                    std::cout << " ";
                }
                std::cout << M[j][i];
                ++k;
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
    
