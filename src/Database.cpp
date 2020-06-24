#include "include/Database.h"

void Database::write(vector<vector<string>> mainList)
{
    ofstream db;
    db.open("db/lists.sl");

    if (db.is_open())
    {
        for (int user_index = 0; user_index < (int)mainList.size(); user_index++)
        {
            for (int list_index = 0; list_index < (int)mainList[user_index].size(); list_index++)
            {
                if (list_index == 0)
                {
                    db << "#" << mainList[user_index][list_index] << "\n";
                }
                else
                {
                    db << mainList[user_index][list_index] << "\n";
                }
            }
            db << "%\n";
        }
    }
    else
    {
        cout << "Cannot open file for writing\n";
    }

    db.close();
}

vector<vector<string>> Database::read()
{
    ifstream db;
    vector<string> userList;

    db.open("db/lists.sl");

    if (db.is_open())
    {
        string line;

        while (getline(db, line, '\n'))
        {
            if (line.front() == '#')
            {
                cout << "Found a Hastag: " << line << "\n";
                line.erase(line.begin());
                userList.push_back(line);
            }
            else if (line.front() == '%')
            {
                cout << "Found a percentage: " << line << "\n";
                mainList.push_back(userList);
                userList.clear();
            }
            else
            {
                cout << "Found an item: " << line << "\n";
                userList.push_back(line);
            }
        }
    }
    else
    {
        cout << "Cannot open file for reading\n";
    }

    db.close();

    return mainList;
}