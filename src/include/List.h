#include <iostream>
#include <vector>
using namespace std;

class List
{
private:
    void go_to_menu()
    {
        cout << "M - Menu \n";
        char choice;
        cin >> choice;
        if (choice == 'M' || choice == 'm')
        {
            print_menu();
        }
        else
        {
            cout << "Invalid Choice, quiting now ...\n";
            exit(0);
        }
    }

protected:
public:
    List()
    {
    }
    List(string name)
    {
        List::name = name;
    }
    ~List()
    {
        //destructor
    }
    vector<string> list;
    string name;

    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
};