#ifndef NODE_H
#define NODE_H


class Node
{
private:

public:
    int D;
    Node *next;
    Node *prev;
    static Node *MontaNode(int *dat);
    static void DesmontaNode(int *dat, Node *p);
    Node();
};

#endif // NODE_H
