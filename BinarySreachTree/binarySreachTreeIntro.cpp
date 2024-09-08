#include<iostream>
#include<queue>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function for level order traversal
void levelOrderTraversal(Node* root) {
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL); // Marker for end of level

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL); // Marker for next level
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}

// Function to insert a value into the BST
Node* insertIntoBST(Node* root, int d) {
    if (root == NULL) {
        root = new Node(d);
        return root;
    }
    if (d > root->data) {
        root->right = insertIntoBST(root->right, d);
    } else {
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}


// inorder travesal

void printInOrder(Node* root) {
    if (root == NULL) return;
    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}


// preorder travesal

void printPreOrder(Node* root){
    if(root == NULL) return;
    cout<< root->data << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

// postorder traversal

void printPostOrder(Node* root){
    if(root == NULL) return;
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout<< root->data << " ";
}

// minimum value
Node* minVal(Node* root){
    Node* temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

// maximum value
Node* maxval(Node* root){
    Node* temp = root;

    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

Node* deleteFromBST(Node* root, int val) {
    // base case
    if (root == NULL)
        return root;

    if (root->data == val) {
        // 0 child
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }

        // 1 child

        // left child
        if (root->left != NULL && root->right == NULL) {
            Node* temp = root->left; // Corrected typo from "root->keft"
            delete root;
            return temp;
        }

        // right child
        if (root->left == NULL && root->right != NULL) {
            Node* temp = root->right; // Corrected typo from "root->lright"
            delete root;
            return temp;
        }

        // 2 children
        if (root->left != NULL && root->right != NULL) {
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }

    } else if (val < root->data) {
        root->left = deleteFromBST(root->left, val);
    } else {
        root->right = deleteFromBST(root->right, val);
    }

    return root;
}



// Function to take input and build the BST
void takeInput(Node* &root) {
    int data;
    cin >> data;

    while (data != -1) {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

int main() {
    Node* root = NULL;

    cout << "Enter data to create BST (end with -1):" << endl;
    takeInput(root);

    cout << "Printing the BST in level order:" << endl;
    levelOrderTraversal(root);

    cout<<"Printing inorder of the BST"<<endl;
    printInOrder(root);

    cout<<"Printing preorder of the BST"<<endl;
    printPreOrder(root);

    cout<<"Printing postorder of the BST"<<endl;
    printPostOrder(root);

    cout<<"Minmum value of BST  "<<minVal(root)->data<<endl;

    cout<<"Maximum value of BST  "<<maxval(root)->data<<endl;

    return 0;
}
