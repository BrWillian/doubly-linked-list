#ifndef LISTAD_H
#define LISTAD_H
#include <node.h>

class ListaD
{
private:
    Node *primeiro;
    Node *ultimo;
public:
    ListaD();
    bool inserir(int *dat);
    bool remover(int *dat, int k);
    bool busca(int *dat, int k);
};

#endif // LISTAD_H
