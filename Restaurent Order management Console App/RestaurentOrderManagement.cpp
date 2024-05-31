#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

struct OrderItem {
    string name;
    int quantity;
    double price;

    OrderItem(string n, double p) : name(n), quantity(0), price(p) {}
};

class Restaurant {
protected:
    string customerName;
    string customerMobile;
    int tableNumber;
    vector<OrderItem> order;

public:
     void welcomeMessage() {
        string str="Welcome to Snippet Restaurant!";
         string *ptr=&str;
    //  cout << "Welcome to CDAC canteen " << endl;
         cout << *ptr<< endl;
    }


    void mainMenu() {
        int choice;
        cout << "1. Book a Table" << endl;
        cout << "2. Order Food" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // To ignore the newline character left in the buffer

        cout << "Enter your name: ";
        getline(cin, customerName);
        cout << "Enter your mobile number: ";
        getline(cin, customerMobile);

        switch (choice) {
        case 1:
            bookTable();
            orderFood();
            break;
        case 2:
            orderFood();
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            mainMenu();
            break;
        }
    }

    void bookTable() {
        cout << "Available tables: 1, 2, 3, 4, 5" << endl;
        cout << "Select a table number: ";
        cin >> tableNumber;
        cout << "Table " << tableNumber << " booked successfully!" << endl;
    }

    virtual void orderFood() {
        int choice;
        do {
            cout << "1. Beverages" << endl;
            cout << "2. Main Course" << endl;
            cout << "3. Dessert" << endl;
            cout << "4. Confirm Order" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
            case 1:
                selectItems("Beverages", { OrderItem("Tea", 10.0), OrderItem("Coffee", 15.0), OrderItem("Juice", 20.0), OrderItem("Soda", 5.0), OrderItem("Water", 2.0) });
                break;
            case 2:
                selectItems("Main Course", { OrderItem("Pizza", 100.0), OrderItem("Burger", 50.0), OrderItem("Pasta", 80.0), OrderItem("Salad", 30.0), OrderItem("Steak", 150.0) });
                break;
            case 3:
                selectItems("Dessert", { OrderItem("Ice Cream", 20.0), OrderItem("Cake", 25.0), OrderItem("Pie", 30.0), OrderItem("Pudding", 15.0), OrderItem("Brownie", 20.0) });
                break;
            case 4:
                confirmOrder();
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        } while (choice != 4);
    }

    void selectItems(string category, vector<OrderItem> items) {
        int itemChoice, quantity;
        cout << category << " Menu:" << endl;
        for (size_t i = 0; i < items.size(); ++i) {
            cout << i + 1 << ". " << items[i].name << " - Rs" << items[i].price << endl;
        }
        cout << "Select an item: ";
        cin >> itemChoice;
        cout << "Enter quantity: ";
        cin >> quantity;

        if (itemChoice > 0 && static_cast<size_t>(itemChoice) <= items.size()) {
            OrderItem selectedItem = items[itemChoice - 1];
            selectedItem.quantity = quantity;
            order.push_back(selectedItem);
        } else {
            cout << "Invalid item selection. Please try again." << endl;
        }
    }

    void confirmOrder() {
        int choice;
        do {
            cout << "1. View Order" << endl;
            cout << "2. Update Order" << endl;
            cout << "3. Delete Item" << endl;
            cout << "4. Generate Bill" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
            case 1:
                viewOrder();
                break;
            case 2:
                updateOrder();
                break;
            case 3:
                deleteItem();
                break;
            case 4:
                generateBill();
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        } while (choice != 4);
    }

    void viewOrder() {
        cout << "Current Order:" << endl;
        for (const auto& item : order) {
            cout << item.name << " x " << item.quantity << " - Rs : " << item.price * item.quantity << endl;
        }
    }

void updateOrder(){
    orderFood();
}
    // void updateOrder() {
    //     int itemChoice, newQuantity;
    //     viewOrder();
    //     cout << "Select item number to update: ";
    //     cin >> itemChoice;
    //     if (itemChoice > 0 && static_cast<size_t>(itemChoice) <= order.size()) {
    //         cout << "Enter new quantity: ";
    //         cin >> newQuantity;
    //         order[itemChoice - 1].quantity = newQuantity;
    //     } else {
    //         cout << "Invalid item selection. Please try again." << endl;
    //     }
    // }

    void deleteItem() {
        int itemChoice;
        viewOrder();
        cout << "Select item number to delete: ";
        cin >> itemChoice;
        if (itemChoice > 0 && static_cast<size_t>(itemChoice) <= order.size()) {
            order.erase(order.begin() + itemChoice - 1);
        } else {
            cout << "Invalid item selection. Please try again." << endl;
        }
    }

    void generateBill() {
        double total = 0;
        cout << "Final Order Summary:" << endl;
        for (const auto& item : order) {
            cout << item.name << " x " << item.quantity << " - Rs: " << item.price * item.quantity << endl;
            total += item.price * item.quantity;
        }
        cout << "Total Bill: Rs : " << fixed << setprecision(2) << total << endl;
    }
};

class UpdateOrder : public Restaurant {
public:
    void orderFood() override {
        int choice;
        do {
            cout << "1. Beverages" << endl;
            cout << "2. Main Course" << endl;
            cout << "3. Dessert" << endl;
            cout << "4. Confirm Order" << endl;
            cout << "5. Update Order" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
            case 1:
                selectItems("Beverages", { OrderItem("Tea", 10.0), OrderItem("Coffee", 15.0), OrderItem("Juice", 20.0), OrderItem("Soda", 5.0), OrderItem("Water", 2.0) });
                break;
            case 2:
                selectItems("Main Course", { OrderItem("Pizza", 100.0), OrderItem("Burger", 50.0), OrderItem("Pasta", 80.0), OrderItem("Salad", 30.0), OrderItem("Steak", 150.0) });
                break;
            case 3:
                selectItems("Dessert", { OrderItem("Ice Cream", 20.0), OrderItem("Cake", 25.0), OrderItem("Pie", 30.0), OrderItem("Pudding", 15.0), OrderItem("Brownie", 20.0) });
                break;
            case 4:
                confirmOrder();
                break;
            case 5:
                updateOrder();
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        } while (choice != 4 && choice != 5);
    }
};

int main() {
    Restaurant restaurant;
    UpdateOrder updateOrder;

    restaurant.welcomeMessage();
    restaurant.mainMenu();
    
    cout << "\n--- Updating Order ---\n";
    updateOrder.orderFood();

    return 0;
}