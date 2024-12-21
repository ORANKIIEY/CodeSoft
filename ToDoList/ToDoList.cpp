#include <iostream>
#include <string>

using namespace std;

void print_task(string task[], int task_count)
{
    cout << "Task to Do: " << endl;
    cout << "----------------------------------------" << endl;
    for (int i = 0; i < task_count; i++)
    {
        cout << "Task " << i + 1 << " : " << task[i] << endl;
    }
    cout << "----------------------------------------" << endl;
}

int main()
{
    string tasks[10]; 

    int task_count = 0; // Counter for current number of task
    int chosen  = -1;
    while (chosen != 0) // The menu will be be using a while loop
    {
        cout << "------Welcome To The Do List------" << endl; // Display Menu 
        cout << "1 --- Add A New Task ---" << endl;
        cout << "2 --- View The Tasks ---" << endl;
        cout << "3 --- Delete A Task ---" << endl;
        cout << "0 --- Exit ---" << endl;
        cin >> chosen;
        switch (chosen)
        {
        case 1:
        {
            if (task_count > 9)
            {
                cout << "Task List Is Full. You cant add a new task" << endl;
            }
            else
            {
                cout << "Enter New Task: ";
                cin.ignore(); // Added cin.ignore() to clear the input buffer
                getline(cin, tasks[task_count]); 
                task_count++;
                 cout << "Task added successfully!" << endl;
            }
            break;
        }
        case 2:
            system("cls");
            print_task(tasks, task_count);
            if (task_count == 0) {
                    cout << "No tasks in the list." << endl;
                } else {
                    cout << "\n=== The Tasks Are ===" << endl;
                    for (int i = 0; i < task_count; ++i) {
                        cout << i + 1 << ". " << tasks[i] << endl;
                    }
                }
            break;
    

        case 3:
        {
           if (task_count == 0) {
                    cout << "No Tasks To Be Delete." << endl;
                } else {
                    int deleteTask;
                    cout << "Enter The Task Number That You Want To Delete: ";
                    cin >> deleteTask;

                    if (deleteTask > 0 && deleteTask<= task_count) {
                       
                        for (int i = deleteTask - 1; i < task_count - 1; ++i) {
                            tasks[i] = tasks[i + 1];
                        }
                        task_count--; // Reduce task count
                        cout << "Task deleted successfully!" << endl;
                    } else {
                        cout << "Invalid task number. Please try again." << endl;
                    }
                }
                    }
                break;
        
        case 0:
            cout << "\n\t\t-------------------END PROGRAM-----------------" << endl;
            break;

        default:
            cout << "Invalid Value" << endl;
        }
    }

    return 0;
}
