#include "BST.h"
#include "Node.h"
#include <iostream>
using namespace std;

int main()
{
    BST tree;

    while (true)
    {
        cout << "Menue \n"
            << "******************* \n"
            << "Enter 1 To Add element in Tree \n"
            << "Enter 2 To display PreOrder Tree \n"
            << "Enter 3 To display inOrder Tree \n"
            << "Enter 4 To display postOrder \n"
            << "Enter 5 To Search For \n"
            << "Enter 6 To FindMin \n"
            << "Enter 7 To FindMax \n"
            << "Enter 8 To Delete \n"
            << "Enter 9 To Exit \n";
   
        int choice;

        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int item;
            cout << "Enter Item to add in Tree /n";
            cin >> item;
            tree.insert(item);
            cout << "Element Added Successfully ! \n";
            break;
        }
        case 2:
        {
            cout << "Display the Tree Contenet\n";
            tree.preOrder(tree.root);
            cout << "\n******************";
            cout << endl;
            break;
        }
        case 3 :
        {
            cout << "Display the Tree Contenet InOrder\n";
            tree.inOrder(tree.root);
            cout << "\n******************";
            cout << endl;
            break;
        }
        case 4:
        {
            cout << "Display the Tree Contenet postOrder\n";
            tree.postOrder(tree.root);
            cout << "\n******************";
            cout << endl;
            break;
        }
        case 5:
        {
            int key;
            cout << "Enter item to search \n";
            cin >> key;
            if (tree.search(key))
                cout << "item is found \n";
            else
                cout << "item not found \n";
            break;
        }
        case 6:
        {
            Node* min = tree.findMin(tree.root);
            if (min == 0)
                cout << "No Items Exist \n";
            else
                cout << "Minimum is " << min->data << endl;
            break;

        }
        case 7:
        {
            Node* max = tree.findMax(tree.root);
            if (max == 0)
                cout << "No Items Exist \n";
            else
                cout << "Maxmum is " << max->data << endl;
            break;
        }
        case 8:
        {
            int key;
            cout << "Emter item to Delete \n";
            cin >> key;
            Node* result = tree.Delete(tree.root, key);
      
            result = tree.Delete(tree.root, key);
            cout << "PreOrdwe after Delete key \n";
            tree.preOrder(result);
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
