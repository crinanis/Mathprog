#include <iostream>
#include <iomanip> 
#include "Salesman.h"

#define N 5

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int d[N][N] = {
                  {   INF,     4,      23,    INF,     2},
                  {   2,       INF,    17,    66,      82},
                  {   4,       6,     INF,    86,      51},
                  {   19,      56,     8,    INF,      6},
                  {   91,      68,     52,    15,      INF}
    };

    int r[N];

    int s = salesman(
        N,          // [in]  количество городов 
        (int*)d,    // [in]  массив [n*n] расстояний 
        r           // [out] массив [n] маршрут 0 x x x x  

    );

    cout << " -- Задача коммивояжера -- ";
    cout << endl << " -- количество  городов: " << N;
    cout << endl << " -- матрица расстояний : ";

    for (int i = 0; i < N; i++)
    {
        cout << endl;

        for (int j = 0; j < N; j++)

            if (d[i][j] != INF)
                cout << setw(5) << d[i][j] << " ";

            else
                cout << setw(5) << "INF" << " ";
    }

    cout << endl << " -- оптимальный маршрут: ";

    for (int i = 0; i < N; i++)
        cout << r[i] << "-->";
    cout << 0;
    cout << endl << " -- длина маршрута     : " << s;
    cout << endl;

    system("pause");
    return 0;
}