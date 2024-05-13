#include "Header.h"

Node* top = nullptr;

// Добавление элемента на вершину
void Push(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

// Удаление элемента с вершины
int Pop() {
    if (top == nullptr) {
        cerr << "Стек пуст!" << endl;
        return -1;
    }
    else {
        Node* tempNode = top;
        int tempData = tempNode->data;
        top = tempNode->next;
        delete tempNode;
        return tempData;
    }
}

bool isEmpty() {
    return top == nullptr;
}

// Выводит значение вершины
int Peek() {
    if (top == nullptr) {
        cerr << "Стек пуст!" << endl;
        return -1;
    }
    else {
        return top->data;
    }
}

// Удаление стека
void Clear() {
    while (!isEmpty()) {
        Pop();
    }
}

int Size() {
    int count = 0;
    Node* current = top;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}

void FillStack(int count) {
    srand(time(NULL));

    for (int i = 0; i < count; ++i) {
        Push(rand() % 100);
    }
}

void PrintStack() {
    cout << "Содержимое стека:" << endl;
    Node* tempTop = top;
    while (tempTop != nullptr) {
        cout << tempTop->data << endl;
        tempTop = tempTop->next;
    }
}
