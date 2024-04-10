#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this-> data = data;
        this->next = NULL;
    }

    // distractor
    ~Node() {
        int value = this -> data;
        // memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"memory is free for node with data"<<value <<endl;
    }

};

// insetion at start/begin/head

void insertAtHead(Node* &head, int d){
    // creating new node
    Node* temp = new Node(d);
    temp-> next = head;
    head=temp;

}

// insertion at end/tail

void insertAtTail(Node* &tail, int d){
    // tail creation
    Node* temp = new Node(d);
    tail-> next = temp;
    tail = temp;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;  
}

void insertAtPosition( Node* &tail, Node* &head, int pos, int d){
   
    // insertion at the starting postion
    if(pos==1){
        insertAtHead(head, d);
        return;
    }

    // insertion in the middle of linked list

    Node* temp = head;
    int cnt = 1;

    while(cnt < pos-1){
        temp = temp -> next;
        cnt++;
    }

    // insertinf at last position
    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return;
    }

    // creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert; 
}

// deletion from the singly linked list

void deleteNode(int pos, Node* & head){
    // deleting from the begning
    if(pos==1){
        Node* temp = head;
        head = head-> next;
        // memory free from starting node
        temp -> next =NULL;
        delete temp;
    }
    else{
        // deleting from any position
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < pos){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}


int main(){

    //  creating a new node
    Node* node1 = new Node(10);
    // cout<< node1 -> data <<endl;
    // cout<< node1 -> next <<endl;

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 24);
    print(head);

    insertAtPosition( tail, head, 4, 22);
    print(head);

    deleteNode(1, head);
    print(head);

    return 0;
}