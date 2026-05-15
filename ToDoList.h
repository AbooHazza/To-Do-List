#ifndef TODOLIST_H
#define TODOLIST_H

#include <iostream>
using namespace std;

class Node
{
public:

    string task;
    Node* next;
};

class ToDoList
{
private:

    Node* head;

public:

    ToDoList();

    void addTask();

    void showTasks();

    void deleteTask();
};

#endif