#include "stack.h"
#include "Node.h"

#include <iostream>
using namespace std;


int main()
{
    stack obj;
    while (true)
    {
        cout << "Menue \n"
            << "******************* \n"
            << "Enter 1 To Add Element in Stack \n"
            << "Enter 2 To cheack Stack Is Empty Or NOt \n"
            << "Enter 3 To Print Element Of Stack \n"
            << "Enter 4 To Pop Element \n"
            << "Enter 5 To Retuern Top Item \n"
            << "Enter 6 to Returen Size Of Stack \n"
            << "Enter 7 to Search \n"
            << "Enter 8 Exit \n";
        int choice;

        cin >> choice;
        switch (choice)
        {
        case 1 :
        {
            int item;
            cout << "Enter New Item \n";
            cin >> item;
            obj.push(item);
            cout << "Element Added Successfully ! \n";
            break;

        }
        case 2:
        {
            if (obj.isEmptyStack())
                cout << "Stack Is Empty \n";
            else
            {
                cout << "Stack Contien item \n ";

            }
            break;
        }
        case 3:
        {
            obj.display();
            break;
        }
        case 4:
        {
            obj.pop();
            
            break;

        }
        case 5:
        {
            obj.topElement();
            break;
        }
        case 6:
        {
            obj.sizeOfStack();
            break;
        }
        case 7:
        {
            int item;
            cout << "Enter Item to search \n";
            cin >> item;
            if (obj.isFound(item))
                cout << "Item Found in Stack \n";
            else
                cout << "Item no Found \n";

        }
        case 8:
            return 0;
        default:
            cout << "invalid info";
            break;

        }
    }

}