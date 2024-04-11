#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    // constructor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    // destractor
    ~Node() {
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory is free"<< value << endl;
    }
};

void insertNode(Node* &tail, int element, int d){
    
    // if empty
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        // if non empty
        // assuming the elemenet is present already
        Node* curr = tail;

        while(curr -> data != element){
            curr = curr -> next;
        }

        // element is found
        Node* temp =new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void print(Node* tail){
    Node* temp = tail;

    do{
        cout<< tail -> data <<" ";
        tail = tail-> next;
    }while(tail != temp );
    cout<<endl;
}

int main() {
    
    Node* tail = NULL;

    insertNode(tail,5, 3);
    print(tail);

    insertNode(tail,3, 5);
    print(tail);

    return 0;
}