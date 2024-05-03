#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(11);
    cout<<"front of the queue is"<<q.front()<<endl;
    cout<<"reare of the queue is "<<q.back()<<endl;
    q.push(2);
    cout<<"front of the queue is"<<q.front()<<endl;
    cout<<"reare of the queue is "<<q.back()<<endl;
    q.push(1);
    cout<<"front of the queue is"<<q.front()<<endl;
    cout<<"reare of the queue is "<<q.back()<<endl;
    q.push(2);
    cout<<"front of the queue is"<<q.front()<<endl;
    cout<<"reare of the queue is "<<q.back()<<endl;

    cout << "Size of the queue is: " << q.size() << endl;

    q.pop();

    cout << "Size of the queue is: " << q.size() << endl;

    if(q.empty()){
        cout<<"queue is empty" <<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;   
    }

    return 0;
}
