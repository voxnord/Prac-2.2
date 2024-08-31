#include <iostream>
#include <Windows.h>

using namespace std;

int function(unsigned int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n > 0 && n % 3 == 0)
    {
        return (n + function(n - 3));
    }
    else if (n % 3 > 0)
    {
        return (n + function(n - (n % 3)));
    }
}

int factorial(unsigned int n)
{
    if (n < 0)
    {
        return 0;
    }

    else if (n == 0)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}

int minimum(int arr[], int n)
{
    if (n == 1) // Проверяет, что размер массива больше 1 элемента
    {
        return arr[0];
    }
    
    int Min = minimum(arr, n - 1);

    return min(arr[n - 1], Min); // Возвращает минимальный элемент, сравнивая их между собой
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    SetConsoleTitle(L"Семестр 2. Практическая работа 2");

    cout << "Вариант 4" << endl;

    int n1 = 22;
    cout << "1) При значении n = 22 функция F(n) = " << function(n1) << endl;

    int n2 = 6;
    cout << "2) Значение при n = 6 факториала F(n) = " << factorial(n2) << endl;

    int arr[] = { 1,2,3,4,5,6,7 }; 
    int n = sizeof(arr) / sizeof(arr[0]); // Размер массива
    int ElMin = minimum(arr, n);

    cout << "3) Минимальный элемент массива []: " << ElMin << endl;

    return 0;
}
