#include <iostream>
#include <listad.h>

using namespace std;

int main()
{
    int elemento = 1;
    int elemento2 = 2;
    int result;

    ListaD lista;

    cout<<lista.inserir(&elemento);
    cout<<lista.inserir(&elemento2);
    cout<<lista.busca(&result, 2);
    cout<<result;
    cout<<lista.remover(&result, 1);
    cout<<result;
}
