#ifndef HEAD15_H_INCLUDED
#define HEAD15_H_INCLUDED

#include <iostream>
using namespace std;

#define info(N) (N)->info
#define left(N) (N)->left
#define right(N) (N)->right
#define NIL NULL

typedef int infotype;
typedef struct Node *adrNode;

struct Node{
    infotype info;
    adrNode left;
    adrNode right;
};

adrNode newNode(infotype x);
adrNode findNode(adrNode root, infotype x);
void insertNode(adrNode &root, adrNode p);
void printPreOrder(adrNode root);
void printDescendant(adrNode root, infotype x);
int sumNode(adrNode root);
int countLeaves(adrNode root);
int heightTree(adrNode root);
int InternalNode (adrNode root);
void printInOrder(adrNode root);
void printPostOrder(adrNode root);

#endif // HEAD15_H_INCLUDED
