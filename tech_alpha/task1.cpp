/*
Build a console-based to-do list Application. Users should
be able to add tasks, mark them as completed, and view
their current tasks.
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class ToDoList {
private:
    vector<string> tasks;
    vector<bool> completed;

public:
    void addTask(string task) {
        tasks.push_back(task);
        completed.push_back(false);
        cout << "Task added successfully!" << endl;
    }

    void markTaskCompleted(int index) {
        if (index >= 0 && index < tasks.size()) {
            completed[index] = true;
            cout << "Task marked as completed!" << endl;
        } else {
            cout << "Invalid task index!" << endl;
        }
    }

    void displayTasks() {
        if (!tasks.empty()) {
            cout << "Current Tasks:" << endl;
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". ";
                if (completed[i]) cout << "[Done] ";
                else cout << "[Not Done] ";
                cout << tasks[i] << endl;
            }
        } else {
            cout << "No tasks added yet!" << endl;
        }
    }
};

int main() {
    ToDoList todoList;

    int choice;
    do {
        cout << "\n--- ToDo List Menu ---" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. Mark Task as Completed" << endl;
        cout << "3. View Tasks" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string task;
                cout << "Enter the task: ";
                cin.ignore(); // Clear input buffer
                getline(cin, task);
                todoList.addTask(task);
                break;
            }
            case 2: {
                int index;
                cout << "Enter the index of the task to mark as completed: ";
                cin >> index;
                todoList.markTaskCompleted(index - 1);
                break;
            }
            case 3:
                todoList.displayTasks();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
