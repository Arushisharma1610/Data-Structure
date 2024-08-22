// #include<iostream>
// #include<queue>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* left;
//     node* right;

//     node(int d){
//         this -> data = d;
//         this -> left = NULL;
//         this -> right = NULL;
//     }
// };

// node* buildTree(node* root){

//     cout<<"Enter the data: "<< endl;
//     int data;
//     cin>> data;
//     root = new node(data);

//     if(data== -1)
//     {
//         return NULL;
//     }

//     cout<< "enter the data inserting in left of  "<<data<<endl;
//     root->left = buildTree(root->left);
//     cout<<"enter data for internsinh in right of  "<< data << endl;
//     root->right = buildTree(root->right);
//     return root;
// }

// int main(){
//     node* root = NULL;

//     // creating a tree
//     root = buildTree(root);

//     return 0;
// }








#include <iostream>
#include <queue>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree() {
    cout << "Enter the data (-1 for no node): ";
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    node* root = new node(data);

    cout << "Enter data for left child of " << data << ": ";
    root->left = buildTree();
    cout << "Enter data for right child of " << data << ": ";
    root->right = buildTree();

    return root;
}

// inorder travesal

void printInOrder(node* root) {
    if (root == NULL) return;
    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}


// preorder travesal

void printPreOrder(node* root){
    if(root == NULL) return;
    cout<< root->data << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

// postorder traversal

void printPostOrder(node* root){
    if(root == NULL) return;
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout<< root->data << " ";
}

void levelOrderTraversal(node* root) {
    if (root == NULL) return;

    queue<node*> q;
    q.push(root);
    q.push(NULL); // Marker for end of level

    while (!q.empty()) {
        node* temp = q.front();
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

// void node* buildFromLevelOrder(node* &root){
//     queue<node*> q;
//     cout<<"enter data for the root" <<endl;
//     int data;
//     cin>> data;
//     root = new node(data);
//     q.push(root);

//     while(!q.empty()){
//         node* temp = q.front();
//         q.pop();

//         cout<<"enter left node for : "<< root->data<<endl;
//         int leftData;
//         cin >> leftData;

//         if(leftData != -1){
//             temp -> left = new node(leftData);
//             q.push(temp->left);

//         }

//         cout<<"enter right node for: "<<root->data <<endl;
//         int rightData;
//         cin >> rightData;

        
//         if(rightData != -1){
//             temp -> right = new node(rightData);
//             q.push(temp->right);

//         }
//     }
// };

int main() {
    node* root = NULL;

    // Creating a tree
    root = buildTree();

    
    cout << "Level-order traversal of the tree: "<<endl;
    levelOrderTraversal(root);
    cout << endl;

    cout << "In-order traversal of the tree: ";
    printInOrder(root);
    cout << endl;

    cout << "pre-order traversal of the tree: ";
    printPreOrder(root);
    cout << endl;

    cout << "post-order traversal of the tree: ";
    printPostOrder(root);
    cout << endl;


    return 0;
}
