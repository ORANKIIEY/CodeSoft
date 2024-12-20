#include <iostream>
#include <string>

using namespace std;

// Maximum capacity for tasks
const int maximum_tasks = 10;

int main() {
    string tasks[maximum_tasks ]; // Array to hold tasks
    int taskCount = 0;       // Counter for current number of tasks
    int choice;              // User's menu choice

    do {
        // Display menu
        cout << "\n=== Simple To-Do List Management ===" << endl;
        cout << "1. Add A New Task" << endl;
        cout << "2. View All Tasks" << endl;
        cout << "3. Delete A Task" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;

        // Menu options
        switch (choice) {
            case 1: { // Add a new task
                if (taskCount < maximum_tasks ) {
                    cout << "Enter the task: ";
                    cin.ignore(); // Clear the input buffer
                    getline(cin, tasks[taskCount]); // Read the task
                    taskCount++;
                    cout << "Task added successfully!" << endl;
                } else {
                    cout << "Task list is full. Cannot add more tasks." << endl;
                }
                break;
            }

            case 2: { // View all tasks
                if (taskCount == 0) {
                    cout << "No tasks in the list." << endl;
                } else {
                    cout << "\n=== Current Tasks ===" << endl;
                    for (int i = 0; i < taskCount; ++i) {
                        cout << i + 1 << ". " << tasks[i] << endl;
                    }
                }
                break;
            }

            case 3: { // Delete a task
                if (taskCount == 0) {
                    cout << "No tasks to delete." << endl;
                } else {
                    int taskIndex;
                    cout << "Enter the task number to delete: ";
                    cin >> taskIndex;

                    if (taskIndex > 0 && taskIndex <= taskCount) {
                        // Shift tasks to fill the gap
                        for (int i = taskIndex - 1; i < taskCount - 1; ++i) {
                            tasks[i] = tasks[i + 1];
                        }
                        taskCount--; // Reduce task count
                        cout << "Task deleted successfully!" << endl;
                    } else {
                        cout << "Invalid task number. Please try again." << endl;
                    }
                }
                break;
            }

            case 0: // Exit the program
                cout << "Exiting program. Goodbye!" << endl;
                break;

            default: // Invalid choice
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}


