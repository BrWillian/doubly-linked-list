#include "listad.h"

ListaD::ListaD()
{
    primeiro = ultimo = nullptr;
}
bool ListaD::inserir(int *dat)
{
    Node *p = Node::MontaNode(dat);

    if(!p)
    {
        return false;
    }
    p->next = primeiro;
    if(!primeiro)
    {
        ultimo = p;
    }else {
        primeiro->prev = p;
    }
    primeiro = p;
    return true;
}
bool ListaD::remover(int *dat, int k)
{
    Node *p = primeiro;

    while(p && p->D != k)
    {
        p = p->next;
    }
    if(!p)
    {
        return false;
    }
    if(p->prev)
    {
        (p->prev)->next = p->next;
    }else {
        primeiro = p->next;
    }
    if(p->next)
    {
        (p->next)->prev = p->prev;
    }else {
        ultimo = p->prev;
    }
    Node::DesmontaNode(dat, p);
    return true;
}
bool ListaD::busca(int *dat, int k)
{
    Node *p = primeiro;

    if(p && p->D != k)
    {
        p = p->next;
    }
    if(p && p->D == k)
    {
        *dat = p->D;
        return true;
    }
    return false;
}
