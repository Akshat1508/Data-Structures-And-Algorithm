//Implemntation of stack using array

#include <iostream>
using namespace std;

#define n 100

class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "No element to pop" << endl;
            return;
        }
        top--;
    }
    void Top()
    {
        if (top == -1)
        {
            cout << "No element in stack" << endl;
            return;
        }
        cout << arr[top] << endl;
    }
    bool empty()
    {
        return top == -1;
    }
};
int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.Top();
    st.pop();
    st.Top();
    st.pop();
    cout << st.empty();
    st.pop();
    cout << endl;
    cout << st.empty();
    return 0;
}