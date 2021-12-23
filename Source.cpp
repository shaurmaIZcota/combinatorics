#include <iostream>
#include <math.h>
using namespace std;

long long factor(int N)
{
    int F = 1;
    for (int i = 1; i <= N; i++){
        F *= i; 
    }
    return F;
}
long long accommodation(int a, int b) {
    return factor(a) / factor(a - b);
}
long long combinations (int a, int b) {
    return factor(a) / (factor(b) * factor(a - b));
}
long long permutations (int a, int b) {
    return factor(a);
}

long long rep_accommodation(int a, int b) {
    return pow(a,b);
}
long long rep_combinations(int a, int b) {
    return factor(a+b-1) / (factor(b) * factor(a - 1 ));
}
long long rep_permutations(int a, int b) {
    return factor(a);
}

int main() {
    setlocale(LC_ALL, "Russian");
    int a = 0, b = 0;
    int in;
    bool repetitions=0;
    cout << "Программа формул комбинаторики"<<endl;
    cout << "Введите соответствующие число" << endl;
    cout << "1) Размещения\n2) Сочетания\n3) Перестановки\n";
    cin >> in;
    cout << "Есть ли повторения? Введите если да- введите 1, если нет - введите 0: ";
    cin >> repetitions;
    do {
        cout << "Введите 2 числа, первое из них должно быть больше второго: ";
        cin >> a >> b;
    } while (a <= 0 || b <= 0 || b>a);
    if (repetitions) {
        if (in == 1) { cout << "Ответ: " << rep_accommodation(a, b); }
        if (in == 2) { cout << "Ответ: " << rep_combinations(a, b); }
        if (in == 3) { cout << "Ответ: " << rep_permutations(a, b); }
    }
    else{
        if (in == 1) { cout << "Ответ: " << accommodation(a, b); }
        if (in == 2) { cout << "Ответ: " << combinations(a, b); }
        if (in == 3) { cout << "Ответ: " << permutations(a, b); }
    }

    

    return 0;
}
