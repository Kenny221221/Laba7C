#include "Header.h"


int main() {
    
    setlocale(LC_ALL, "RU");
    srand(time(NULL));

    FillStack(20);

    PrintStack();

    cout << "Извлеченные элементы:" << endl;
    for (int i = 0; i < 5; ++i) {
        int poppedValue = Pop();
        if (poppedValue != -1) {
            cout << poppedValue << endl;
        }
    }

    if (!isEmpty()) {
        cout << "Новая вершина стека: " << Peek() << endl;
    }
    else {
        cout << "Стек пуст" << endl;
    }

    return 0;
}
