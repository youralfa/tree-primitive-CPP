#include "head15.h"

adrNode newNode(infotype x){
    adrNode N = new Node;
    info(N) = x;
    left(N) = NIL;
    right(N) = NIL;
    return N;

}
adrNode findNode(adrNode root, infotype x){
    if(info(root)== x || root == NIL){
        return root;
    }else{
        if (info(root) > x){
            return findNode(left(root), x);
        }else if(info(root) < x){
            return findNode(right(root), x);
        }
    }
}
void insertNode(adrNode &root, adrNode p){
    if(root == NIL){
        root =  p;
    }else{
        if (info(root) > info(p)){
            insertNode(left(root), p);
        }else if(info(root) < info(p)){
            insertNode(right(root), p);
        }else{
            cout << "Duplicate" << endl;
        }
    }
}
void printPreOrder(adrNode root){
    if(root != NIL){
        cout << info(root) <<" ";
        printPreOrder(left(root));
        printPreOrder(right(root));
    }
}

void printInOrder(adrNode root){
    if(root != NIL){
        printPreOrder(left(root));
        cout << info(root) <<" ";
        printPreOrder(right(root));
    }
}
void printPostOrder(adrNode root){
    if(root != NIL){
        printPreOrder(left(root));
        printPreOrder(right(root));
        cout << info(root) <<" ";
    }
}
void printDescendant(adrNode root, infotype x){
    if (root != NIL){
        printDescendant(left(root), x);
        printDescendant(right(root), x);
        if(info(root) == x){
            printPreOrder(left(root));
            printPreOrder(right(root));
        }
    }
}
int sumNode(adrNode root){
    if(root != NIL){
        return (info(root) +  sumNode(left(root)) +  sumNode(right(root)));
    }
    return 0;
}
int countLeaves(adrNode root){
    if (root == NIL){
        return 0;
    }
    if(left(root) == NIL && right(root) == NIL){
        return 1;
    }else{
        return countLeaves(left(root)) + countLeaves(right(root));
    }
}
int heightTree(adrNode root){
    int sumHeight = 0;
    if (root != NIL){
        int left = heightTree(left(root));
        int Max = left;
        sumHeight = Max + 1;
    }
    return sumHeight;
}

int InternalNode (adrNode root){
    if (root == NIL){
        return 0;
    }
    if (left(root) != NIL || right(root) != NIL){
        return info(root);
    }
    InternalNode(left(root));
    InternalNode(right(root));
}

