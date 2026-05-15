#include "ToDoList.h"

ToDoList::ToDoList()
{
    head = NULL;
}

void ToDoList::addTask()
{
    string name;

    cout << "Enter The Task : " << endl;
    cin >> name;

    Node* newNode = new Node();

    newNode->task = name;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
    }

    else
    {
        Node* temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    cout << "Task Added" << endl;
}

void ToDoList::showTasks()
{
    if(head == NULL)
    {
        cout << "No tasks found.\n";
        return;
    }

    Node* temp = head;

    int i = 0;

    while(temp != NULL)
    {
        cout << i + 1
             << ": "
             << temp->task
             << "." << endl;

        temp = temp->next;

        i++;
    }
}

void ToDoList::deleteTask()
{
    if(head == NULL)
    {
        cout << "No tasks to delete." << endl;
        return;
    }

    int Location;

    showTasks();

    cout << "Enter The Task You Want To Delete!: ";
    cin >> Location;

    if(Location == 1)
    {
        Node* temp = head;

        head = head->next;

        delete temp;

        cout << "Task deleted" << endl;

        return;
    }

    Node* current = head;
    Node* previous = NULL;

    int count = 1;

    while(current != NULL && count < Location)
    {
        previous = current;

        current = current->next;

        count++;
    }

    if(current == NULL)
    {
        cout << "Invalid number.\n";
        return;
    }

    previous->next = current->next;

    delete current;

    cout << "Task deleted.\n";
}