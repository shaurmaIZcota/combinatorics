#include <iostream>
using namespace std;

int factor(int N)
{
    int F = 1;
    for (int i = 1; i <= N; i++){
        F *= i; 
    }
    return F;
}
int accommodation(int a, int b) {
    return factor(a) / factor(a - b);
}
int combinations (int a, int b) {
    return factor(a) / (factor(b) * factor(a - b));
}
int permutations (int a, int b) {
    return factor(a);
}
int main() {
    setlocale(LC_ALL, "Russian");
    int a = 0, b = 0;
    int in;
    cout << "Программа формул комбинаторики"<<endl;
    cout << "Введите соответствующие число" << endl;
    cout << "1) Размещения\n2) Сочетания\n3) Перестановки\n";
    cin >> in;
    cout << "Введите числа: ";
    do {
        cin >> a >> b;
    } while (a <= 0 && b <= 0);
    if (in == 1) { cout << "Ответ: " << accommodation(a, b); }
    if (in == 2) { cout << "Ответ: " << combinations(a, b); }
    if (in == 3) { cout << "Ответ: " << permutations(a, b); }
    

    return 0;
}
