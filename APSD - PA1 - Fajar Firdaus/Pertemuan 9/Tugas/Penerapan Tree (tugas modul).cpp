#include <iostream>
using namespace std;

// Struktur node untuk Binary Search Tree
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

// Fungsi untuk menyisipkan data ke BST
Node* insert(Node* root, int value) {
    if (root == NULL) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }

    return root;
}

// Pre-order traversal
void preorder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// In-order traversal
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Post-order traversal
void postorder(Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    Node* root = NULL;
    int n, value;

    cout << "Masukkan jumlah angka yang ingin dimasukkan: ";
    cin >> n;

    cout << "Masukkan " << n << " angka:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        root = insert(root, value);
    }

    cout << "\nHasil Pre-order traversal  : ";
    preorder(root);
    cout << "\nHasil In-order traversal   : ";
    inorder(root);
    cout << "\nHasil Post-order traversal : ";
    postorder(root);
    cout << endl;

	return 0;
}
