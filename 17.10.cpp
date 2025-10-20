#include <iostream>
using namespace std;
//1
int main() {
    setlocale(LC_ALL, "ru");
    int A, B;
    cout << "Введите A и B: ";
    cin >> A >> B;

    for (int i = A; i <= B; i++) {
        cout << "Делители числа " << i << ": ";
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
//2
int main() {
    setlocale(LC_ALL, "ru");
    for (int i = 2; i <= 1000; i++) {
        bool simple = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                simple = false;
                break;
            }
        }
        if (simple)
            cout << i << " ";
    }
    return 0;
}
//3
int main() {
    setlocale(LC_ALL, "ru");
    int size;
    cout << "Введите нечетное положительное число: ";
    cin >> size;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == 0 || i == size - 1  j == 0  j == size - 1  i == j || i + j == size - 1)
                cout << "*";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
//4
int main() {
    setlocale(LC_ALL, "ru");
    int count = 0;
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = 0; k <= 9; k++) {
                if (i != j && i != k && j != k) {
                    cout << i << j << k << endl;
                    count++;
                }
            }
        }
    }
    cout << "Всего комбинаций: " << count << endl;
    cout << "Максимальное время (3 секунды на попытку): " << count * 3 << " секунд" << endl;
    return 0;
}
//5
int main() {
    setlocale(LC_ALL, "ru");
    const int N = 12;
    double sum_all = 0;

    for (int i = 1; i <= N; i++) {
        double march, april, may;
        cout << "Введите зарплату сотрудника " << i << " за март, апрель и май: ";
        cin >> march >> april >> may;

        double total = march + april + may;
        cout << "Квартальная зарплата сотрудника " << i << ": " << total << endl;

        sum_all += total;
    }

    cout << "\nОбщая выплата всем сотрудникам: " << sum_all << endl;
    return 0;
}