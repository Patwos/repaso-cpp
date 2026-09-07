#include "arreglo.h"

Arreglo::Arreglo(int tam){
    this->n = tam;
    this->p = new int[tam];
}

int* Arreglo::get(int pos){
    return &this->p[pos];
}

Arreglo::~Arreglo(){
    delete[] this->p;
}

void Arreglo::set(int pos, int val){
    if(pos > this->n - 1) return;
    this->p[pos] = val;
}

int Arreglo::tam(){
    return this->n;
}