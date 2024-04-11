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

    //empty list
    if(tail == NULL){
        cout<<"list is empty"<<endl;
        return;
    }

    do{
        cout<< tail -> data <<" ";
        tail = tail-> next;
    }while(tail != temp );
    cout<<endl;
}

void deleteNode (Node* &tail, int value){

    // if empty list
    if(tail == NULL){
        cout<<"list is already empyt"<<endl;
        return;
    }

    else  {
        // not empty 
        // assuming the element we are searching for is already present in the list

        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;
        //  for single node linked list
        if(curr == prev){
            tail = NULL;
        }

        // for than one node linked list
        else if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

int main() {
    
    Node* tail = NULL;

    insertNode(tail,5, 12);
    print(tail);

    insertNode(tail,12, 5);
    print(tail);

    insertNode(tail,5, 6);
    print(tail);

    insertNode(tail,6, 7);
    print(tail);

    insertNode(tail,7, 23);
    print(tail);

    deleteNode(tail, 12);
    print(tail);


    return 0;
}