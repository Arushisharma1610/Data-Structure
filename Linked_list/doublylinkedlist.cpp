#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;
    Node* temp;

    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

// to traverse the linked list

void print(Node* head){
    Node* temp = head;
    
    while(temp != NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

// for finding the length of the linked list

int getLength(Node* head){
     int len = 0;
    Node* temp = head;
     while(temp != NULL){
        len++;
        temp = temp->next;
    }
   return len;

}

// insertion at the head position
void insertAt(Node* &head, Node* &tail, int d){
    if(head==NULL){
         Node* temp = new Node(d);
         head = temp;
         tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
   }
}

// insertion at tail/end of the linked list
void insertAtTail(Node* &tail, Node* &head, int d){
     if(tail==NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

// inserion at any given position 
void insertAtPosition(Node* &tail, Node* &head, int pos, int d){

    if(pos==1){
        insertAt(head,tail, d);
        return;
    }
    Node* temp = head;
    int cnt =1;

    while(cnt < pos -1){
        temp = temp -> next;
        cnt++;
    }

    // inserting at the end 
    if(temp -> next == NULL){
        insertAtTail(tail,head, d);
        return;
    }

    // inserting at node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(int pos, Node* & head) { 

    //deleting first or start node
    if(pos == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < pos) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;

    }
}

int main(){
    Node* node1 = new Node(19);
    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    cout<<getLength(head)<<endl;

    insertAt(head,tail, 15);
    print(head);

    insertAtTail(tail,head, 20);
    print(head);

    insertAtPosition(tail, head, 2, 100);
    print(head);

    deleteNode(2, head);
    print(head);

    return 0;
}