#include <iostream>
#include <windows.h>

/*
1 задача
массивность: 65 33 93 57 14 55 17 53 13 41
мин элемент: 13
мак элемент: 93

2 задача
Введите начало диапазона: 12
Введите конец диапазона: 23
Введите пороговое: 54

Массив: 17 22 21 16 15 18 15 19 13 22
Сумма элементов меньше 54: 441

3 задача
Введите прибыль фирмы за каждый из 12 месяцев:
1-й месяц: 123
2-й месяц: 1234
3-й месяц: 1235
4-й месяц: 1264
5-й месяц: 12376
6-й месяц: 123464
7-й месяц: 123431
8-й месяц: 123461
9-й месяц: 4523
10-й месяц: 632
11-й месяц: 1204
12-й месяц: 234

Введите диапазон месяцев для поиска (например, 3 и 6):
Начало диапазона: 1 12
Конец диапазона:
Результат с 1 по 12 месяц:
Макс в 6-м месяце.
Мин в 1-м месяце.
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
    std::cout << "Сумма элементов меньше " << posos << ": " << sum <<"\n\n";



    // 3 zadacha
    std::cout << "3 задача\n";


    const int mecytc = 12;
    double pribil[mecytc];

    std::cout << "Введите прибыль фирмы за каждый из 12 месяцев:" << "\n";
    for (int i = 0; i < mecytc; i++) {
        std::cout << i + 1 << "-й месяц: ";
        std::cin >> pribil[i];
    }

    int start, end;
    std::cout << "\nВведите диапазон месяцев для поиска (например, 3 и 6): " << "\n";
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
    std::cout << "Макс в " << maxx + 1 << "-м месяце." << "\n";
    std::cout << "Мин в " << minx + 1 << "-м месяце." << "\n\n\n\n";




    return 0;
}
