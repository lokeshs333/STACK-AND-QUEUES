// 1) push() which adds an element to the top of stack.
// 2) pop() which removes an element from top of stack.
// 3) findMiddle() which will return middle element of the stack.
// 4) deleteMiddle() which will delete the middle element.
#include <iostream>
using namespace std;
struct stack
{
    int *arr;
    int top;
    int size;
};
void findmiddle(stack *ptr)
{
    if (ptr->size % 2 == 1)
    {
        cout << "middle element is " << ptr->arr[(ptr->size) / 2] << endl;
        // cout << ptr->arr[(ptr->size) / 2] << endl
        //      << endl;
    }
    if (ptr->size % 2 == 0)
    {
        cout << "middle element are " << ptr->arr[(ptr->size) / 2 - 1] << " and " << ptr->arr[(ptr->size) / 2] << endl;
        // cout << "your value is " << ptr->arr[(ptr->size)] << endl;
    }
}
void middle(stack *ptr)
{
    if (ptr->top == 0)
    {
        cout << "you cannot find the element middle cuz its empty" << endl;
    }
    // else
    // {
    //     cout << "total element in an stack" << ptr->top << endl;
    // }
    if (ptr->top % 2 == 1)
    {
        cout << "middle elements are " << ptr->arr[ptr->top / 2] << " and and " << ptr->arr[ptr->top / 2 + 1] << endl;
    }
    if (ptr->top % 2 == 0)
    {
        cout << "middle elements is  " << ptr->arr[ptr->top / 2] << endl;
    }
}
int empty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int full(struct stack *ptr)
{
    if (ptr->top >= ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr, int val)
{
    if (full(ptr))
    {
        cout << "we cannot push the element further because it is full" << endl;
    }

    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
        cout << "pushed element is " << val << endl;
    }
}
void pop(struct stack *ptr)
{
    if (empty(ptr))
    {
        cout << "you cannot pop because it is already empty" << endl;
    }
    else
    {
        cout << "popped element is pooooppped    " << ptr->arr[ptr->top] << endl;
        ptr->top--;
    }
}
void peek(struct stack *ptr, int seek)
{
    int s = ptr->top - seek + 1;
    if (s < 0)
    {
        cout << "invalaid " << endl;
    }
    else
    {
        cout << "element at index " << seek << " is " << ptr->arr[s] << endl;
    }
}
int main()
{
    return 0;
}