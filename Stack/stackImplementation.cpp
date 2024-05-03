#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
        int size;
        int top;
        int *arr;

        Stack(int size){
            this -> size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int element){
            if(size-top > 1){
                top++;
                arr[top]= element;
            }
            else{
                cout<<"array overflow"<<endl;
            }
        }

        void pop(){
            if(top >= 0){
                top--;
            }
            else{
                cout<<"array unerflow"<<endl;
            }
        }

        int peek(){
            if(top >= 0){
                return arr[top];
            }
            else{
                cout<<"array is empty"<<endl;
            }
        }

        bool isEmpty(){
            if(top== -1)
                return true;
            else
                return false;
        }
};

int main() {
    int size;
    cout<<"enter the size of the stack"<<endl;
    cin>>size;

    Stack st(size);

    int numElement;
    cout<<"enter the element to be pushed into the stack"<<endl;
    cin>>numElement;

    for(int i=1; i<numElement ; i++){
        int element;
        cout<<"enter element"<<(i+1)<<endl;
        cin>>element;
        st.push(element);
    }

    cout << "Top element: " << st.peek() << endl;

    // Removing the element (call pop function without `cout`)
    st.pop();

    cout << "Top element: " << st.peek() << endl;

    // Check if stack is empty
    if (st.isEmpty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }




    return 0;
}