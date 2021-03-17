// Sortare_selectie_directa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n, a[50], aux;
    cout << "Introduceti numarul de elemente din tablou:";
    cin >> n;
    cout << "Introduceti numerele:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}


