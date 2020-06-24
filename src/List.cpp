#include "include/List.h"

void List::print_menu()
{
    int choice;
    cout << "\n\n\n";
    cout << "********* Menu for " << name << " **********\n";
    cout << " 1 - Print list.\n";
    cout << " 2 - Add to list.\n";
    cout << " 3 - Delete from list.\n";
    cout << " 4 - Quit\n";
    cout << " Enter your choice and press return: ";

    // Read user input
    cin >> choice;

    if (choice == 4)
    {
        return;
    }
    else if (choice == 3)
    {
        delete_item();
    }
    else if (choice == 2)
    {
        add_item();
    }
    else if (choice == 1)
    {
        print_list();
    }
    else
    {
        cout << "Sorry, choice not implemented yet...\n";
    }
}

void List::add_item()
{
    cout << "\n\n\n\n\n";
    cout << "*** Add Item ***\n";
    cout << "Type in an item and press enter: \n";
    string item;
    cin >> item;

    list.push_back(item);

    cout << "Successfully added an item to the list \n\n\n";

    go_to_menu();
}

void List::delete_item()
{
    cout << "*** Delete Item ***\n";
    cout << " Select an item index number to delete\n";
    if (list.size())
    {
        for (int i = 0; i < (int)list.size(); i++)
        {
            cout << i << ": " << list[i] << "\n";
        }

        int choiceIndex;
        cin >> choiceIndex;

        if (choiceIndex >= (int)list.size())
        {
            cout << choiceIndex << ": is not a valid index, quiting program...";
            return;
        }

        list.erase(list.begin() + choiceIndex);
        cout << "Item at index: " << choiceIndex << " successfully deleted.\n";
        go_to_menu();
    }
    else
    {
        cout << "No items to delete, list was empty ... \n";
    }
}

void List::print_list()
{
    cout << "\n\n\n\n\n\n";
    cout << "*** Print List ***\n";

    for (int list_index = 1; list_index < (int)list.size(); list_index++)
    {
        cout << " - "
             << list[list_index] << "\n";
    }

    go_to_menu();
}

void List::find_userList()
{
    bool foundUser = false;
    cout << "\n\n\n\n\n\n\n\n";
    cout << "**** Welcome " << name << "****\n";

    for (int user_index = 0; user_index < (int)mainList.size(); user_index++)
    {
        cout << mainList[user_index][0] << "\n";

        if (mainList[user_index][0] == name)
        {
            cout << "User has been found: " << mainList[user_index][0] << "\n";
            list = mainList[user_index];
            foundUser = true;
            break;
        }
    }
}