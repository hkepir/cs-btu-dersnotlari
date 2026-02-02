struct Node {
    int key;
    struct Node *left;
    struct Node *right;
    int height; // AVL için yükseklik bilgisi þarttýr
};

// Yükseklik alma yardýmcýsý (NULL kontrolü ile)
int height(struct Node *N) {
    if (N == NULL) return 0;
    return N->height;
}

// MAX fonksiyonu
int max(int a, int b) {
    return (a > b) ? a : b;
}

// --- SAÐA DÖNDÜRME (Right Rotate) ---
// Y: Dengesiz düðüm (Kök), X: Sol çocuk
struct Node *rightRotate(struct Node *y) {
    struct Node *x = y->left;
    struct Node *T2 = x->right; // X'in sað alt dalý (varsa)

    // Döndürme Ýþlemi (Pointer deðiþimi)
    x->right = y;   // X yeni kök olur, Y onun saðýna geçer
    y->left = T2;   // Y'nin solu boþaldý, T2 oraya geçer

    // Yükseklikleri Güncelle (Önce alt, sonra üst)
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x; // Yeni kökü döndür
}

// --- SOLA DÖNDÜRME (Left Rotate) ---
// X: Dengesiz düðüm (Kök), Y: Sað çocuk
struct Node *leftRotate(struct Node *x) {
    struct Node *y = x->right;
    struct Node *T2 = y->left; // Y'nin sol alt dalý

    // Döndürme
    y->left = x;    // Y yeni kök, X onun soluna geçer
    x->right = T2;  // X'in saðý boþaldý, T2 oraya geçer

    // Güncelleme
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y; // Yeni kök
}
