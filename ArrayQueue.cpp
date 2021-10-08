#include<iostream>
using namespace std;

#define n 30

class queue{
    int *arr;
    int front;
    int back;
    public:
    queue(){
        arr=new int[n];
        front =-1;
        back=-1;
    }
    void push(int x){
        if(back==n-1){
            cout<<"Queue full"<<endl;
        }
        else{
            back++;
            arr[back]=x;
            //condition for 1st input only 
            if(front==-1){
                front++;
            }
        }
        }

    void pop(){
        if(front==-1 || front>back){
            cout<<"Empty"<<endl;
            return;
        }
        else 
            front++;
    }

    int peek(){
        if(front==-1 || front>back){
            cout<<"NO Element";
            return -1;
        }
        return arr[front];

    }

    bool empty(){
        if(front==-1 || front>back){
            // cout<<"EMPTY";
            return true;
        }
        else 
         return false;
    }

};


int main(){

queue q;
q.push(1);
q.push(10);
q.push(100);

cout<<q.peek()<<endl;
cout<<q.empty()<<endl;
q.pop();
q.pop();
q.pop();
cout<<q.empty();

}