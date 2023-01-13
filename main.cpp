#include "head15.h"

int main()
{
    adrNode root = NIL;
    adrNode P;
    int dataNode[9] = {5,3,9,10,4,7,1,8,6};
     /* Tampilkan isi dari array */
        for (int i = 0; i <= 8; i++){
            cout << dataNode[i] << " ";
        }
        cout << endl;
     /* 1. Tambahkan setiap elemen array x kedalam BST secara berurutan */
    /* sehingga dihasilkan BST seperti Gambar 1, gunakan looping*/
        for (int i = 0; i <= 8; i++){
            P = newNode(dataNode[i]);
            insertNode(root, P);
        }
    /* 2. Tampilkan node dari BST secara Pre-Order */
    cout <<"Pre Order\t\t: ";
    printPreOrder(root);
    cout <<"\nPre Order\t\t: ";
    printInOrder(root);
    cout <<"\nPre Order\t\t: ";
    printPostOrder(root);
    cout << endl;
    /* 3. Tampilkan keturunan dari node 9*/
    printf("Descendent of Node 9\t: ");
    printDescendant(root, 9);
    cout << endl;
     /* 4. Tampilkan total info semua node pada BST */
    cout << "Sum of BST Info\t\t: ";
    cout << sumNode(root) << endl;
     /* 5. Tampilkan banyaknya daun dari BST */
    cout << "Number of Leaves\t: ";
    cout << countLeaves(root) << endl;
    /* 4. Tampilkan Tinggi dari Tree*/
    cout <<"Height of Tree\t\t: ";
    cout << heightTree(root) << endl;

    cout <<"InternalNode\t\t: ";
    cout << InternalNode(root) << endl;
    return 0;
}
