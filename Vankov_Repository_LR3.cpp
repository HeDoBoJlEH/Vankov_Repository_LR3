#include <iostream>
#include <limits>

using namespace std;

int a, b = 0;

int CorrectInt(string message, int leftBorder=INT_MIN, int rightBorder=INT_MAX)
{
    int i;

    cout << message;

    while (!(cin >> i) || cin.peek() != '\n' || i < leftBorder || i >= rightBorder)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << message;
    }

    return i;
}

// Function to set value of variable "a"
void EnterA()
{
    a = CorrectInt("Enter value \"a\": ");
}

// Function to set value of variable "b"
void EnterB()
{
    b = CorrectInt("Enter value \"b\": ");
}

// Function to sum up variables "a" and "b"
void ExecutePlus()
{
    cout << "Sum of \"a\" and \"b\": " << a + b << endl;
}

// Function to minus variables "a" and "b"
void ExecuteMinus()
{
    // Must be developed by Tarakanov T. T.
}

int main()
{   
    int choice;

    for (;;)
    {
        cout << "Task 1: Enter A" << endl;
        cout << "Task 2: Enter B" << endl;
        cout << "Task 3: Execute \"+\"" << endl;
        cout << "Task 4: Execute \"-\"\n" << endl;

        choice = CorrectInt("Enter the number of task or 0 to exit: ", 0, 5);

        switch (choice)
        {
            case 0:
                return 0;
            
            case 1:
                EnterA();
                break;
            
            case 2:
                EnterB();
                break;
            
            case 3:
                ExecutePlus();
                break;

            case 4:
                ExecuteMinus();
                break;
        }
    }
}