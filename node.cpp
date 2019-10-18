#include "node.h"

Node::Node()
{

}
Node *Node::MontaNode(int *dat)
{
    Node *p = new Node;

    if(p)
    {
        p->D = *dat;
        p->next = nullptr;
        p->prev = nullptr;
    }
    return p;
}
void Node::DesmontaNode(int *dat, Node *p)
{
    if(p)
    {
        *dat = p->D;
        delete p;
    }
}
