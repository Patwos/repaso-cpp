class Arreglo{
    int n;
    int *p;

public:
    Arreglo(int tam);

    Arreglo(Arreglo& a) : n(a.n), p(new int[a.n]){
    for(int i = 0; i < n; ++i)
        p[i] = a.p[i];
    }

    Arreglo& operator=(const Arreglo& a){
        if(this == &a) return *this;

        delete[] p;

        n = a.n;
        p = new int[n];

        for(int i = 0; i < n; i++)
            p[i] = a.p[i];

        return *this;
    }

    ~Arreglo();

    void set(int pos, int val);
    int* get(int pos);
    int tam();
};