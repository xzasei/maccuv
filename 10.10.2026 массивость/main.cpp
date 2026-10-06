#include <iostream>
#include <windows.h>

/*
1 задача
массивность: 40 54 77 70 12 31 74 23 85 44
мин элемент: 12
мак элемент: 85

2 задача
Введите начало диапазона: 15
Введите конец диапазона: 19
Введите пороговое: 123

Массив: 17 19 15 15 18 17 15 18 17 16
Сумма элементн меньше 123: 510

3 задача
Введите прибыль фирмы за каждый из 12 месяцев:
1 месяц: 123
2 месяц: 124
3 месяц: 125
4 месяц: 1267
5 месяц: 21454
6 месяц: 123434
7 месяц: 2341
8 месяц: 12
9 месяц: 2334
10 месяц: 543
11 месяц: 56431
12 месяц: 123456

Введите диапазон месяцев для поиска
 (например, 3 и 6):
Начало диапазона: 1
Конец диапазона: 12

Результат с 1 по 12 месяц:
Макс в 12 месяце.
Мин в 8 месяце.
*/


int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    srand(time(NULL));


    // zadacha 1 
    const int size = 10;
    int arr[size];
    std::cout << "1 задача\n";
    std::cout << "массивность: ";
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min= arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    std::cout << "мин элемент: " << min << "\n";
    std::cout << "мак элемент: " << max << "\n\n";



    // azadacha 2
    std::cout << "2 задача\n";
    int mina, maxa, posos;
    std::cout << "Введите начало диапазона: ";
    std::cin >> mina;
    std::cout << "Введите конец диапазона: ";
    std::cin >> maxa;
    std::cout << "Введите пороговое: ";
    std::cin >> posos;

    std::cout << "\n";

    const int sizee = 10;
    int arr2[sizee];

    std::cout << "Массив: ";
    for (int i = 0; i < sizee; i++) {
        arr2[i] = rand() % (maxa - mina + 1) + mina;
        std::cout << arr2[i] << " ";
    }
    std::cout << "\n";

    int sum = 0;
    for (int i = 0; i < sizee; i++) {
        if (arr2[i] < posos) {
            sum += arr[i];
        }
    }
    std::cout << "Сумма элементн меньше " << posos << ": " << sum <<"\n\n";



    // 3 zadacha
    std::cout << "3 задача\n";


    const int mecytc = 12;
    double pribil[mecytc];

    std::cout << "Введите прибыль фирмы за каждый из 12 месяцев:" << "\n";
    for (int i = 0; i < mecytc; i++) {
        std::cout << i + 1 << " месяц: ";
        std::cin >> pribil[i];
    }

    int start, end;
    std::cout << "\nВведите диапазон месяцев для поиска \n (например, 3 и 6): " << "\n";
    std::cout << "Начало диапазона: ";
    std::cin >> start;
    std::cout << "Конец диапазона: ";
    std::cin >> end;


    start = start - 1;
    end = end - 1;

    int minx = start;
    int maxx = start;

    for (int i = start + 1; i <= end; i++) {
        if (pribil[i] < pribil[minx]) {
            minx = i;
        }
        if (pribil[i] > pribil[maxx]) {
            maxx = i;
        }
    }

    std::cout << "\nРезультат с " << start + 1 << " по " << end + 1 << " месяц:" << "\n";
    std::cout << "Макс в " << maxx + 1 << " месяце." << "\n";
    std::cout << "Мин в " << minx + 1 << " месяце." << "\n\n\n\n";




    return 0;
}
