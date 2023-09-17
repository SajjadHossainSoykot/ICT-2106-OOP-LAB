#include <iostream>
#include <string>
using namespace std;
const int MAX_ITEMS = 10;

class ITEMS
{
private:
    int itemCode[MAX_ITEMS];
    double itemPrice[MAX_ITEMS];
    int count;

public:
    void CNT() { count = 0; }
    void getitem();
    void displaySum();
    void remove();
    void displayItems();
};

void ITEMS::getitem()
{

    cout << "Enter item code: ";
    cin >> itemCode[count];
    cout << "Enter item price: ";
    cin >> itemPrice[count];
    count++;
}

void ITEMS::displaySum()
{
    double sum = 0.0;
    for (int i = 0; i < count; i++)
    {
        sum += itemPrice[i];
    }
    cout << "Total value: " << sum << endl;
}

void ITEMS::remove()
{
    int a;
    cout << "Enter item code to remove: ";
    cin >> a;

    for (int i = 0; i < count; i++)
    {
        if (itemCode[i] == a)
        {
            for (int j = i; j < count - 1; j++)
            {
                itemCode[j] = itemCode[j + 1];
                itemPrice[j] = itemPrice[j + 1];
            }
            count--;
            cout << "Item removed successfully." << endl;
            return;
        }
    }
    cout << "Item not found" << endl;
}

void ITEMS::displayItems()
{
    cout << "Shopping List:" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << "Item Code: " << itemCode[i] << ", Price: $" << itemPrice[i] << endl;
    }
}


int main()
{
    ITEMS order;
    order.CNT();
    int x;
    do
    {
        cout << "\nMenu:\n";
        cout << "1. Add item\n";
        cout << "2. Display total sum of prices\n";
        cout << "3. Remove item\n";
        cout << "4. Display items\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> x;

        switch (x)
        {
        case 1:
            order.getitem();
            break;
        case 2:
            order.displaySum();
            break;
        case 3:
            order.remove();
            break;
        case 4:
            order.displayItems();
            break;
        case 5:
            order.CNT();
            break;
        case 6:
            cout << "Exiting.\n";
            break;
        default:
            cout << "Invalid Choice.\n";
        }
    } while (x != 5);

    return 0;
}
