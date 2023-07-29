#include <iostream>
using namespace std;
/*  
    Implementation of stack using array
*/
class stack{
private:
    int top;
    int size;
    int * ar;

public:

    // constructor
    stack(int input_size)
    {
        this->size = input_size;
        this->top = -1;
        this->ar = new int[this->size];
    }

    bool isFull();
    bool isEmpty();
    void PUSH(int x);
    void POP();
    int PEEK();
};

bool stack :: isEmpty()
{
    if(this->top == -1)
    {
        // cout << "Stack is empty" << endl;
        return true;
    }
    else
    {
        return false;
    }
}

bool stack :: isFull()
{
    if(this->top == this->size-1)
    {
        // stack is full
        return true;
    }
    else
    {
        // stack is not full
        return false;
    }
}

void stack :: PUSH(int x)
{
    if(isFull())
    {
        // stack is full
        cout << "Stack Overflow" << endl;
    }
    else
    {
        // stack is not full
        top++;
        ar[top] = x;
    }
}

int stack :: PEEK()
{
    if(isEmpty())
    {
        return -1;
    }
    else
    {
        return ar[top];
    }

} 

void stack :: POP()
{
    if(isEmpty())
    {
        cout << "Stack is underflow" << endl;
    }
    else
    {
        cout << "Deleted element : " << this->ar[this->top] << endl;
        this->top--;
    }
}

int main()
{
    stack st(5);
    
    cout << st.isEmpty() << endl;

    st.PUSH(3);
    st.PUSH(443);

    cout << st.PEEK() << endl;
    st.POP();
    return 0;
}