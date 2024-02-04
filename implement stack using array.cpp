// Stack class.
#include <bits/stdc++.h>
using namespace std;
class Stack {
    
public:
   int Top;
   int* arr;
   int size;
    
    Stack(int capacity) {
        // Write your code here.
        size=capacity;
        Top=-1;
        arr = new int[capacity];
    }

    void push(int num) {
        // Write your code here.
        if(isFull())return;
        Top++;
        arr[Top]=num;
    }

    int pop() {
        // Write your code here.
        if(isEmpty())return -1;
        int x = arr[Top];
        Top--;
        return x;
    }
    
    int top() {
        // Write your code here.
        if(isEmpty())return -1;
        else
        return arr[Top];
    }
    
    int isEmpty() {
        // Write your code here.
        if(Top==-1)return 1;
        else return 0;
    }
    
    int isFull() {
        // Write your code here.
        if(Top==size-1)return 1;
        else return 0;
    }
    
};
