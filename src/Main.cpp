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
        simpleList.find_userList();
        simpleList.print_menu();
        // data.write(simpleList.list);
        //   data.read();
    }
    else
    {
        cout << "Username not supplied... Exiting the program."
             << endl;
    }

    return 0;
}
