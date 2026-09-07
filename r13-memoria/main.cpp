#include <iostream>
#include "arreglo.h"

using namespace std;

int main(){

    Arreglo a(3);

    a.set(0, 10);
    a.set(1, 20);
    a.set(2, 30);

    Arreglo b = a;

    b.set(0, 99);

    cout << "a[0] = " << *a.get(0) << endl;
    cout << "b[0] = " << *b.get(0) << endl;

    return 0;
}