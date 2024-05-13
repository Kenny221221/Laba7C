
#include <iostream>
#include <ctime>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void PrintStack();
void FillStack(int count);
int Size();
void Clear();
int Peek();
bool isEmpty();
int Pop();
void Push(int value);
