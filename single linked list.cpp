#include<iostream>

 using namespace std;

 struct node
 {
     int data;
     node *next;

 };

 class list
 {
     node *head;
     node *tail;
     node *temp;

 public :
   bool isEmpty()
    {
    return head == NULL;

    }

    list()
    {
        head = NULL;
        tail = NULL;
    }

  void insertAtEnd(int x)
    {
        temp = new node();
        temp->data = x;
        temp->next = NULL;

    if(isEmpty())
    {
        head = temp;
        tail=temp;

    }
    else
    {
        tail->next = temp;
        tail=temp;
    }
    }

    void insertAtBeg(int x)
    {
    temp = new node();
    temp->data = x;


    if(isEmpty())
    {
   
    temp->next =  NULL;
    tail = temp;
    }
    else
        temp->next =  head;
    head = temp;
    }

    void insertAtPos(int pos, int x)
    {
            node *prev = new node();
            node *current = new node();
            current = head;
            temp = new node();
            temp->data = x;

            int tempPos = 0;   // Traverses through the list
 
            if(head != NULL)
            {
               while(current != NULL && tempPos != pos)
               {
                   prev = current;
                   current = current->next;
                   tempPos++;
               }

               if(pos == 0)
               {
                   cout << "Adding at Head! " << endl;
                   insertAtBeg(x);
               }
               else if(current->next == NULL && pos == tempPos+1)
               {
                   cout << "Adding at Last! " << endl;
                   insertAtEnd(x);
               }
               else if(pos>tempPos+1)
               {
                   cout << "Position is out of bound : " << endl;
               }

               else{
                prev->next = temp;
                temp->next = current;
                cout << "Node added at position: " << pos << endl;
               }

            }
            else
            {
                head = temp;
                temp->next = NULL;
                tail = temp;
                cout << "Added at head as list is empty! " << endl;

            }

    }

 void display()
 {
    if(!isEmpty())
    {
    	cout<<"Elements of list are :-  ";
    temp = head;

    while(temp!=NULL)
    {
    cout<<temp->data<<" ";
    temp=temp->next;
    }
    cout<<endl;
    }

    else
        cout<<"Sorry List is Empty, Nothing to display !\n"<<endl;
 }

 void deleteAtBeg()
 {
 if(isEmpty())
    cout<<"Sorry List is Empty, nothing to delete"<<endl;
 else
 {
     temp=head;
     head = temp->next;
     delete temp;
     }
 }

 void deleteAtEnd()
 {
     if(isEmpty())
     cout<<"Sorry List is Empty, nothing to delete"<<endl;
 else
 {
     node *prev = new node();
     temp = head;
     while(temp->next != NULL)
     {
         prev = temp;
         temp = temp->next;

     }
     prev->next = NULL;
     tail = prev;
     delete temp;
 }
 }

 void deleteAtPos(int pos)
 {
     if(!isEmpty())
     {
         int tempPos=0;

         if(pos == 0)
         {
             deleteAtBeg();
         }
         else {

        node* prev = new node();
        node* current = new node();
        current = head;

        while(current->next != NULL && tempPos != pos)
        {
            prev = current;
            current = current->next;
            tempPos++;

        }

        if(pos > tempPos+1)
        {
            cout<<"Position is out of scope, Nothing can be deleted ! "<<endl;
        }
        else{

            prev->next = current->next;
            delete current;
        }

         }
     }
     else
        cout<<"Sorry List is Empty, nothing to delete"<<endl;
 }

 };

 int main()
 {
     list l;
     system("cls");
    int choice,n,pos;
    while(1)
    {
        cout<<".......menu........\n"<<endl;
        cout<<"1. insert at beginning"<<endl;
        cout<<"2. insert at end"<<endl;
        cout<<"3. insert at specific postion"<<endl;
        cout<<"4. delete at beginning"<<endl;
        cout<<"5. delete at end"<<endl;
        cout<<"6. delete at specific postion"<<endl;
        cout<<"7. display"<<endl;
        cout<<"0.exit"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>choice;
        switch(choice)
        {
        
            case 1:cout<<"enter the value which you want to insert"<<endl;
            cin>>n;
            l.insertAtBeg(n);break;
            case 2:cout<<"enter the value which you want to insert"<<endl;
            cin>>n;
            l.insertAtEnd(n);break;
            case 3:cout<<"enter the value which you want to insert and insert postion"<<endl;
            cin>>n>>pos;
            l.insertAtPos(n,pos);break;
            case 4:l.deleteAtBeg();break;
            case 5:l.deleteAtEnd();break;
            case 6:cout<<"enter the position where you want to delete"<<endl;
            cin>>pos;
            l.deleteAtPos(pos);break;
            case 7:l.display();break;
            case 0:break;
            default:cout<<"wrong entry try again"<<endl;

        }

    }
    return 0;
 }
