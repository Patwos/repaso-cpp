int pares(const int v[], int n) { // B
    int c = 0;
    for (int i = 0; i < n; i++)
        if (v[i] % 2 == 0) c++;
    return c;
}

int main(){
    int v[] = {1, 2, 3, 4, 5};
    int n = 5;
    return 0;
}