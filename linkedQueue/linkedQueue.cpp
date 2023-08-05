#include "Queue.h"
#include "Node.h"

#include <iostream>
using namespace std;

int main()
{
    Queue queue;
    while (true)
    {
        cout << "Menue \n"
            << "******************* \n"
            << "Enter 1 To Add element in Queue \n"
            << "Enter 2 To cheack Queue Is Empty Or NOt \n"
            << "Enter 3 To Display Queue \n"
            << "Enter 4 To Dequeue Element \n"
            << "Enter 5 To Search Item \n"
            << "Enter 6 to Retuern Size \n"
            << "Enter 7 to Clear Q ueu \n"
            << "Enter 8 Exit \n";
        int choice;

        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int item;
            cout << "Enter Item  \n";
            cin >> item;
            queue.Enqueue(item);
            cout << "Element Added Successfully ! \n";
            break;
        }
        case 2:
        {
            if (queue.isEmpty())
                cout << "Queue Is Empty \n";
            else
            {
                cout << "Queue Contien Element "  << endl;

            }
            break;
        }
        case 3:
        {
            queue.displey();
            break;
        }
        case 4:
        {
            queue.Dequeue();
            cout << "Element Dequeue Successfully ! \n";
            break;
        }
        case 5:
        {
            int key;
            cout << "Enter Element To Search \n ";
            cin >> key;
            if (queue.isFound(key))
                cout << "Element Is Found " << endl;
            else
                cout << "Element Not Found \n";
            break;
        }
        case 6 :
        {
            queue.Size();
            break;
        }
        case 7:
        {
            queue.Clear();
            cout << "Queue Cleared Successfully ! \n";
            break;
        }
        case 8:
            return 0;
        default:
            cout << "invalid info";
            break;
        }
    }
}

