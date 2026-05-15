#include "ToDoList.h"

int main()
{
    ToDoList list;

    int choice;

    cout << "=========================" << endl;
    cout << "       TO DO LIST" << endl;
    cout << "=========================" << endl;

    do
    {
        cout << "\n----------- MENU -----------\n";

        cout << "1 - Add Task\n";
        cout << "2 - Show Tasks\n";
        cout << "3 - Delete Task\n";
        cout << "4 - Exit\n";

        cout << "----------------------------\n";

        cout << "Enter your choice: ";
        cin >> choice;

        cout << endl;

        switch(choice)
        {
            case 1:

                cout << "===== ADD TASK =====\n";
                list.addTask();
                break;

            case 2:

                cout << "===== TASK LIST =====\n";
                list.showTasks();
                break;

            case 3:

                cout << "===== DELETE TASK =====\n";
                list.deleteTask();
                break;

            case 4:

                cout << "Program closed.\n";
                break;

            default:

                cout << "Invalid choice.\n";
        }

    } while(choice != 4);

    return 0;
}