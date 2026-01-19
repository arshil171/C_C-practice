#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class ArrayCRUD {
private:
    int arr[MAX_SIZE];
    int size;

public:
    ArrayCRUD() {
        size = 0;
    }

    void initialInsert() {
        int n;
        cout << "Enter the number of elements you want to insert initially: ";
        cin >> n;

        if (n < 0 || n > MAX_SIZE) {
            cout << "Invalid number! Maximum allowed is " << MAX_SIZE << ".\n";
            n = 0;
        }

        cout << "Enter " << n << " elements one by one:\n";
        for (int i = 0; i < n; i++) {
            int value;
            cout << "Element " << (i + 1) << ": ";
            cin >> value;
            arr[size] = value;
            size++;
        }

        cout << "\nInitial elements inserted successfully!\n\n";
        display();  // Show array after initial insertion
    }

    void create(int value) {
        if (size >= MAX_SIZE) {
            cout << "Array is full! Cannot insert.\n";
            return;
        }
        arr[size] = value;
        size++;
        cout << value << " inserted at the end.\n";
    }

    void insertAtPosition(int pos, int value) {
        if (pos < 0 || pos > size) {
            cout << "Invalid position!\n";
            return;
        }
        if (size >= MAX_SIZE) {
            cout << "Array is full!\n";
            return;
        }
        for (int i = size; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = value;
        size++;
        cout << value << " inserted at position " << pos << ".\n";
    }

    void display() {
        if (size == 0) {
            cout << "Array is empty!\n";
            return;
        }
        cout << "Array elements (" << size << "): ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    int search(int value) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == value) {
                return i;
            }
        }
        return -1;
    }

    void update(int pos, int newValue) {
        if (pos < 0 || pos >= size) {
            cout << "Invalid position!\n";
            return;
        }
        cout << "Old value: " << arr[pos] << " -> New value: " << newValue << "\n";
        arr[pos] = newValue;
        cout << "Updated successfully.\n";
    }

    void deleteAtPosition(int pos) {
        if (pos < 0 || pos >= size) {
            cout << "Invalid position!\n";
            return;
        }
        cout << arr[pos] << " deleted from position " << pos << ".\n";
        for (int i = pos; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    void deleteByValue(int value) {
        int pos = search(value);
        if (pos == -1) {
            cout << value << " not found!\n";
            return;
        }
        deleteAtPosition(pos);
    }

    int getSize() {
        return size;
    }
};

int main() {
    ArrayCRUD array;

    cout << "=== 1D Array CRUD Operations ===\n\n";

    // Step 1: Initial insertion without menu
    array.initialInsert();

    // Step 2: Now show menu for further operations
    int choice, value, pos;

    while (true) {
        cout << "\n--- Menu ---\n";
        cout << "1. Insert at end\n";
        cout << "2. Insert at position\n";
        cout << "3. Display array\n";
        cout << "4. Search element\n";
        cout << "5. Update element\n";
        cout << "6. Delete by position\n";
        cout << "7. Delete by value\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                array.create(value);
                array.display();
                break;

            case 2:
                cout << "Enter position (0 to " << array.getSize() << "): ";
                cin >> pos;
                cout << "Enter value: ";
                cin >> value;
                array.insertAtPosition(pos, value);
                array.display();
                break;

            case 3:
                array.display();
                break;

            case 4:
                cout << "Enter value to search: ";
                cin >> value;
                pos = array.search(value);
                if (pos != -1)
                    cout << value << " found at position " << pos << ".\n";
                else
                    cout << value << " not found.\n";
                break;

            case 5:
                cout << "Enter position to update: ";
                cin >> pos;
                cout << "Enter new value: ";
                cin >> value;
                array.update(pos, value);
                array.display();
                break;

            case 6:
                cout << "Enter position to delete: ";
                cin >> pos;
                array.deleteAtPosition(pos);
                array.display();
                break;

            case 7:
                cout << "Enter value to delete: ";
                cin >> value;
                array.deleteByValue(value);
                array.display();
                break;

            case 8:
                cout << "\nGoodbye! Final array:\n";
                array.display();
                return 0;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
