#include <iostream>
#include <vector>
using namespace std;

void print_menu();
void print_list();
void add_item();
void delete_item();

vector<string> list;
string name;
int main(int arg_count, char *args[])
{
    if (arg_count > 1)
    {
        name = string(args[1]);
        print_menu();
    }
    else
    {
        cout << "Username not supplied... Exiting the program." << endl;
    }

    return 0;
}

void print_menu()
{
    int choice;
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
        exit(0);
    }
    else
    {
        cout << "Sorry, choice not implemented yet...\n";
    }
}

void addItem()
{
    cout << "\n\n\n\n\n";
    cout << "*** Add Item ***\n";
    cout << "Type in an item and press enter: \n";
    string item;
    cin >> item;

    list.push_back(item);

    cout << "Successfully added an item to the list \n\n\n";
    cin.clear();

    print_menu();
}

void delete_item()
{
    cout << "*** Delete Item ***";
    cout << " Select an item index number to delete\n";
    if (list.size() > 0)
    {
    }
}