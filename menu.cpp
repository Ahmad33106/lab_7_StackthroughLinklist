
#include "mai.cpp"

int main()
{
    Stack st;
    int choice, value;

    do
    {
        cout << "\n----- Stack Menu -----" << endl;
        cout << "1. Push element" << endl;
        cout << "2. Pop element" << endl;
        cout << "3. View top element" << endl;
        cout << "4. Check if empty" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            st.push(value);
            break;

        case 2:
            st.pop();
            break;

        case 3:
            if (!st.isempty())
                cout << "Top element: " << st.peek() << endl;
            else
                cout << "Stack is empty!" << endl;
            break;

        case 4:
            if (st.isempty())
                cout << "Stack is empty." << endl;
            else
                cout << "Stack is NOT empty." << endl;
            break;

        case 5:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 5);

    return 0;
}
