#include <iostream>
using namespace std;

class Node
{
    public:

string task;
Node*next;
};
 
class ToDoList
{
private:
Node*head;

public:

ToDoList()
{
head = NULL;
}

void addTask()
{
string name;
      cout<<" Enter The Task : "<<endl;
      cin>>name;
                   
      Node*newNode = new Node();
      newNode->task = name ;
      newNode->next = NULL ; 
      
      if(head == NULL)
      {
        head = newNode;
      }
      else
      {
        Node*temp = head ; 

        while (temp->next != NULL)
        {
            
         temp = temp->next;

        }
        temp->next = newNode;
      }
      cout<<"Task Added "<<endl;

}

void showTasks()
{
       if (head == NULL) {

            cout << "No tasks found.\n";
            return;
        }
        else
        {

    Node*temp = head ; 
    int i = 0;
cout<<" ====== Task's ======= "<<endl;
    while(temp != NULL)
    {
     cout<<i+1<<": "<< temp->task<<" ."<<endl;
     temp = temp->next ;
     i++; 
    }
  }
}

  void deleteTask() {

        if (head == NULL) {

            cout << "No tasks to delete . "<<endl;
            return;
        }
       
          int Location;

        showTasks();

        cout << "Enter The Task You Want To Delete! : ";
        cin >> Location;

             if (Location == 1) {

                 Node* temp = head;  

                 head = head->next;

              delete temp;

            cout << "Task deleted "<<endl;

            return;

        }

     Node* current = head;
        Node* previous = NULL;

        int count = 1;

        while (current != NULL && count < Location) {

            previous = current;

            current = current->next;

            count++;
        }

        if (current == NULL) {

            cout << "Invalid number.\n";
            return;
        }

        previous->next = current->next;

        delete current;

        cout << "Task deleted.\n";
    }



};






int main() {

    ToDoList list;

    int choice;

    cout << "========================="<<endl;
    cout << "      TO DO LIST"<<endl;
    cout << "========================="<<endl;

    do {

        cout << "\n----------- MENU -----------\n";

        cout << "1 - Add Task\n";
        cout << "2 - Show Tasks\n";
        cout << "3 - Delete Task\n";
        cout << "4 - Exit\n";

        cout << "----------------------------\n";

        cout << "Enter your choice: ";
        cin >> choice;

        cout << endl;

        switch(choice) {

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