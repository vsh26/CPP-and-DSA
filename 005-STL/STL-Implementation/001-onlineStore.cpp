#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<ctime>

using namespace std;

// Structure of entities

struct Product{
    int productID;
    string productName;
    string category;
};

struct Order{
    int orderID;
    int productID;
    int quantity;
    string customerID;
    time_t orderDate;
};

int main(){

    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "Smart Phone", "Electronics"},
        {103, "Coffee Maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk Lamp", "Home"}
    };

    deque<string> recentCustomers = {
        "C001", "C002", "C003"
    };

    recentCustomers.push_back("C004");
    recentCustomers.push_front("C005");

    list<Order> orderHistory;

    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C002", time(0)});
    orderHistory.push_back({3, 103, 1, "C003", time(0)});

    set<string> categories;
    for(const auto &product : products){
        categories.insert(product.category);
    }

    map<int, int> productStock = {
        {101, 10},
        {102, 20},
        {103, 15},
        {104, 4},
        {105, 7}
    };

    multimap<string, Order> customerOrders;
    for(const auto &order : orderHistory){
        customerOrders.insert({order.customerID, order});
    }

    unordered_map<string, string> customerData = {
        {"C001", "Tony"},
        {"C002", "Bruce"},
        {"C003", "Steve"},
        {"C003", "Thor"},
        {"C005", "Clint"}
    };

    unordered_set<int> uniqueProductIDs;
    for(const auto &product : products){
        uniqueProductIDs.insert(product.productID);
    }

    // Let's print everything

    // Products
    cout << "----------Products----------" << endl;
    for(const auto &product : products){
        cout << "ID: " << product.productID << " Name: " << product.productName << " Category: " << product.category << endl;
    }

    // Recent customers
    cout << "----------Recent Customers----------" << endl;
    for(const auto &customer : recentCustomers){
        cout << customer << endl;
    }

    // Order history
    cout << "----------Order History----------" << endl;
    cout << "OrderID\t ProductID\t Quantity\t CustomerID\t Time\t" << endl;
    for(auto &order: orderHistory){
        cout << order.orderID << "\t " << order.productID << "\t\t " << order.quantity << "\t\t " << order.customerID << "\t\t " << order.orderDate << endl;
    }

    // Categories
    cout << "----------Categories----------" << endl;
    for(auto &category : categories){
        cout << category << endl;
    }

    // Product Stock
    cout << "----------Product Stock----------" << endl;
    for(const auto &product : productStock){
        cout << product.first << " " << product.second << endl;
    }

    // Similarly we can print other items

    return 0;

}