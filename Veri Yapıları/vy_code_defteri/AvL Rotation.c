struct Node {
    int key;
    struct Node *left;
    struct Node *right;
    int height;
};

int height(struct Node *N) {
    if (N == NULL) return 0;
    return N->height;
}

// MAX fonksiyonu
int max(int a, int b) {
    return (a > b) ? a : b;
}

//(Right Rotate)
// Y: root X: left child
struct Node *rightRotate(struct Node *y) {
    struct Node *x = y->left;
    struct Node *T2 = x->right; // if X have right child

    x->right = y;   // X new root, Y right child
    y->left = T2;

    // Updated height
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x; // return new root
}

//  (Left Rotate)
// X: Unbalanced root, Y: Right child
struct Node *leftRotate(struct Node *x) {
    struct Node *y = x->right;
    struct Node *T2 = y->left;

    //Rotation
    y->left = x;
    x->right = T2;


    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y; // new root
}
