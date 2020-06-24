#include "include/List.h"
#include "include/Database.h"

int main(int arg_count, char *args[])
{
    List simpleList;
    Database data;

    if (arg_count > 1)
    {
        simpleList.name = string(args[1]);
        simpleList.mainList = data.read();

        bool userFound = simpleList.find_userList();
        if (!userFound)
        {
            cout << "New user added\n";
        }
        simpleList.print_menu();
        data.write(simpleList.mainList);
    }
    else
    {
        cout << "Username not supplied... Exiting the program."
             << endl;
    }

    return 0;
}
