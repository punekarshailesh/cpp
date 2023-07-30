#include <iostream>
#include <stack>
using namespace std;


/*  stack using header file inbuilt stack 
        LIFO - Last in First Out
*/

int main()
{
    stack<char> st;
    st.push('a');
    st.push('3');
    st.pop();

    if(st.empty())
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    cout << st.top() << endl;



    return 0;
}