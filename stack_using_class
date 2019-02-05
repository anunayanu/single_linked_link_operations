#include <iostream>
using namespace std;

#define MAX 2

class stack{

int top ;
int arr[MAX];

public :
    stack()
    {
        top = -1;

    }

    bool push(int x);
    int pop();
    bool isEmpty();
    int peep();
};

bool stack::push(int x)
{
    if(top == MAX-1)
    {
        cout<<"Stack is Full, Nothing can be pushed more !"<<endl;
    }
    else
    {
        arr[++top] = x;
    }
}

int stack::pop()
{
    if(isEmpty())
    {
        cout<<"Stack is Empty, Nothing can be taken out !"<<endl;

    }
    else
    {
        cout<< arr[top--]<<"  Poped out"<<endl;
    }
}

int stack::peep()
{
    if(isEmpty())
    {
        cout<<"Stack is Empty, Nothing can be taken out !"<<endl;

    }
    else
    {
        cout<< arr[top]<<" is in stack"<<endl;
    }
}
bool stack::isEmpty()
{
    return top == -1;
}

int main()
{
    stack s ;
     system("cls");
    int choice,n;
    while(1)
    {
        cout<<".......menu........\n"<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Peep"<<endl;
        cout<<"0.exit"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>choice;
        switch(choice)
        {
        
            case 1:cout<<"enter the value which you want to insert"<<endl;
            cin>>n;
            s.push(n);
			break;
			
            case 2:
			s.pop();
			break;
			
            case 3:
			s.peep();
			break;
			
            case 0:
			break;
            default:cout<<"wrong entry try again"<<endl;

        }

    }
    return 0;
}
