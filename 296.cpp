#include <iostream>
using namespace std;
struct stack
{
    int size;
    int *arr;
    int top;
};
int isempty(stack *ptr)
{
    if (ptr->top == -1)
    {
        // cout << "stack is empty" << endl;
        return 1;
    }
    else
    {
        // cout << "not empty" << endl;
        return 0;
    }
}
int isfull(stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        // cout << "your stack is full" << endl;
        return 1;
    }
    else
    {
        // cout << "your stack is not full" << endl;
        return 0;
    }
}
void push(stack *ptr, int val)
{
    if (isfull(ptr))
    {
        cout << "stack overflow cannot be pushed further" << endl;
        cout << "cannot be pushed in this stack  = " << val << endl;
    }
    else
    {
        ptr->top = ptr->top + 1;
        ptr->arr[ptr->top] = val;
        cout << "pushed element is = " << val << endl;
    }
}
void pop(stack *ptr)
{
    int a;
    if (isempty(ptr))
    {
        cout << "your stack is already empty" << endl;
        // return 0;
    }
    else
    {
        a = ptr->arr[ptr->top];
        ptr->top = ptr->top - 1;
        cout << "pooped element is " << a << endl;
        // return a;
    }
}
void peek(stack *ptr, int i)
{
    int ind = ptr->top - i + 1;
    if (ind < 0)
    {
        cout << "invalaid position" << endl;
    }
    else
    {
        cout << "element at index " << i << " is " << ptr->arr[ind] << endl;
    }
}
int main()
{

    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    push(sp, 11);
    push(sp, 21);
    push(sp, 31);
    push(sp, 41);
    push(sp, 51);
    push(sp, 61);
    push(sp, 71);
    push(sp, 81);
    push(sp, 91);
    push(sp, 101);

    for (int i = 1; i <= sp->size; i++)
    {
        peek(sp, i);
    }
    return 0;
}