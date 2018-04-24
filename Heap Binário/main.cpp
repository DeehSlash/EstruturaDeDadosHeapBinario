#include <iostream>
#include "Heap binario.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    Dado<string> d;
    Heap<string> heap;
    inicializarHeap(heap, 'm');
    menu(heap);
}
