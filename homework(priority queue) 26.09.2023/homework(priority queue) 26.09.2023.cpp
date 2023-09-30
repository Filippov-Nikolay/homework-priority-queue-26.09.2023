#include <iostream>
#include "PriorityQueue.h"

using namespace std;

/*

Разработать приложение, имитирующее очередь печати принтера.
Должны быть клиенты, посылающие запросы на принтер, у каждого из которых есть свой приоритет.
Каждый новый клиент попадает в очередь в зависимости от своего приоритета.
Необходимо сохранять статистику печати (пользователь, время) в отдельной очереди.

Предусмотреть вывод статистики на экран.

*/

int main() {
    setlocale(0, "");

    PriorityQueue a(5);
    string tempName;
    int tempPriority;

    for (int i = 0; i < 4; i++) {
        cout << "Введите имя: ";
        cin >> tempName;
        do {
            cout << "Введите приоритет (1-10): ";
            cin >> tempPriority;

            if (tempPriority > 10 || tempPriority < 1)
                cout << "Вы ввели неверный приоритет!" << endl << endl;
        } while (tempPriority > 10 || tempPriority < 1);
        
        a.Add(tempName, tempPriority);
    }
    cout << endl;

    a.Show();
    cout << endl;

    cout << "Статистика приоритетов: " << endl;
    for (int i = 0; i < 4; i++)
        cout << i + 1 << ". " << a.Extract() << endl;

    return 0;
}