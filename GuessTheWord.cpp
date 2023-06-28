#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string S, Q;
    cin >> S >> Q;
    int N = S.length();

    vector<string> matches(N, "absent");  // Создаем вектор из N элементов со значением "absent"

    // Проходимся по символам строк S и Q
    for (int i = 0; i < N; i++) {
        if (Q[i] == S[i]) {
            matches[i] = "correct";
        }
        else {
            for (int j = 0; j < N; j++) {
                if (Q[i] == S[j]) {
                    matches[i] = "present";
                    break;
                }
            }
        }
    }

    // Выводим результат совпадения в каждой позиции
    for (const string& match : matches) {
        cout << match << endl;
    }

    return 0;
}