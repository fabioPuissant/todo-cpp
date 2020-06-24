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
            return;
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
    vector<vector<string>> mainList;
    string name;
    int currentUserIndex;

    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
    bool find_userList();
    void save_list();
};