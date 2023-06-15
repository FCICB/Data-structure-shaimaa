#include "LinkedList.h"
#include "Node.h"
#include <iostream>
using namespace std;
int main()
{
    LinkedList list;
    /*
    int item;
    cout << "Enter Item" << endl;
    cin >> item;
    list.insertFirst(item);
    list.display();
    if (list.isEmpty())
        cout << "list Is Empty";
    else
        cout << "list contain element" << list.Size() << endl;*/
    while (true)
    {
        cout << "Menue \n"
            << "******************* \n"
            << "Enter 1 To Add element in first \n"
            << "Enter 2 To cheack list Is Empty Or NOt \n"
            << "Enter 3 To Search \n"
            << "Enter 4 To Print Element \n"
            << "Enter 5 To Insert Before Item \n"
            << "Enter 6 to Apend \n"
            << "Enter 7 to Delete \n"
            << "Enter 8 to Destroy List \n"
            << "Enter 9 Exit \n";
        int choice;
     
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int item;
            cout << "Enter Element you went add in list" << endl;
            cin >> item;
            list.insertFirst(item);
            cout << "Element Added Successfully ! \n";
            break;
        }
        case 2:
        {
            if (list.isEmpty())
                cout << "List Is Empty \n";
            else
            {
                cout << "List Contien " << list.Size() << endl;
                
            }
            break;
        }
        case 3:
        {
            int key;
            cout << "Enter Element To Search \n ";
            cin >> key;
            if (list.isFound(key))
                cout << "Element Is Found " << endl;
            else
                cout << "Element Not Found \n";
            break;
        }
        case 4:
        {
            list.display();
            break;
        }
        case 5:
        {
            int item, newItem;
            cout << "Enter Item \n";
            cin >> item;
            cout << "Enter New Item \n";
            cin >> newItem;
            list.insertBeforItem(item, newItem);
            break;
        }
        case 6:
        {
            int item;
            cout << "Enter Item To Insert \n";
            cin >> item;
            list.insertLast(item);
            break;
        }
        case 7:
        {
            int item;
            cout << "Enter Item To Delete \n";
            cin >> item;
            list.deleteItem(item);
            break;


        }
        case 8:
        {
            list.distroy();
            break;
        }
        case 9:
            return 0;
        default:
            cout << "invalid info";
            break;
        }
    }
    
}


