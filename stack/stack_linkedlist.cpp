#include <iostream>
using namespace std;
/*  Stack using linked list in cpp */

class Node
{
    // private:
public:
    int data;
    Node *next;

    // create constructor
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }

    // No need to define destructor

    
};

class stack
{
private:
    Node *top;

public:
    // constructor for stack
    stack()
    {
        this->top = NULL;
    }
    bool isEmpty()
    {
        if (this->top == NULL)
            return true;
        else
            return false;
    }
    void PUSH(int val)
    {
        // Create a new node and allocate memory in heap
        /*
            To check wheteher the stack is full  or not we have to check 
            whether the memory is allocated or not in heap?
            agar heap full ho gaya toh stack overflow condition aa jayegi
        */

        Node *newnode = new Node(val);

        /*
            Check if the stack (heap) is full
            so inserting a new element would lead to stack overflow
        */
       if(!newnode)
       {
        cout << "Stack Overflow";
        exit(1);
       }

        newnode->next = this->top;
        this->top = newnode;
        cout << "Recently inserted : " << top->data << endl;
    }

    void POP()
    {
        if (isEmpty())
        {
            cout << "-1" << endl;
            // exit(1);
        }
        else
        {
            Node *temp = this->top;
            cout << "Recently deleted " << temp->data << endl;
            this->top = (this->top)->next;

            /*  Releasing the memory */
            temp->next = NULL;
            delete temp;
            // cout << temp->data << endl;
        }
    }


    int PEEK()
    {
        if(!isEmpty())
        {
            return top->data;
        }
        else
        {
            return -1;
        }
    }

    // outside class stack
    // void  ELEMENTS();
};



int main()
{

    // creating object of class stack
    stack st;

    char opt;
    while (1)
    {
        int val;
        scanf("%c", &opt);
        switch (opt)
        {
        case 'i':
        // i to insert an element
            scanf(" %d", &val);
            st.PUSH(val);
            break;
        case 'd':
        // d to pop the element 
            st.POP();
            break;
        case 'e':
            if (st.isEmpty())
            {
                cout << "-1 and stack underflow condition" << endl;
            }
            else
            {
                cout << "Stack is not empty" << endl;
            }
            break;
        case 'p':
            // to get peek element
            cout << "Peek element : " << st.PEEK() << endl;
            break;
        case 't':
            exit(0);
        }
    }
}
