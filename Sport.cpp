#include <iostream>
#include <vector>
#include <string>
using namespace std;

//  Product Classes
class Product {
protected:
    string name;
    double price;
    int stock;
public:
    Product(string n, double p, int s) : name(n), price(p), stock(s) {}
    virtual void display_info() {
        cout << "Product: " << name << ", Price: $" << price << ", Stock: " << stock << endl;
    }
    void update_stock(int quantity) {
        stock += quantity;
        cout << "Updated stock of " << name << " to " << stock << endl;
    }
};

// Indoor sports
class IndoorSportsProduct : public Product {
public:
    IndoorSportsProduct(string n, double p, int s) : Product(n, p, s) {}
};

class Volleyball : public IndoorSportsProduct {
    string material;
    string size;
public:
    Volleyball(string n, double p, int s, string m, string sz) : IndoorSportsProduct(n, p, s), material(m), size(sz) {}
    void display_info() override {
        Product::display_info();
        cout << "Material: " << material << ", Size: " << size << endl;
    }
};

class TableTennis : public IndoorSportsProduct {
    string style;
public:
    TableTennis(string n, double p, int s, string st) : IndoorSportsProduct(n, p, s), style(st) {}
    void display_info() override {
        Product::display_info();
        cout << "Style: " << style << endl;
    }
};

// Outdoor sports
class OutdoorSportsProduct : public Product {
public:
    OutdoorSportsProduct(string n, double p, int s) : Product(n, p, s) {}
};

class Camping : public OutdoorSportsProduct {
    string size;
    string weather_rating;
public:
    Camping(string n, double p, int s, string sz, string wr) : OutdoorSportsProduct(n, p, s), size(sz), weather_rating(wr) {}
    void display_info() override {
        Product::display_info();
        cout << "Size: " << size << ", Weather Rating: " << weather_rating << endl;
    }
};

class Soccer : public OutdoorSportsProduct {
    string material;
    bool team_discount;
public:
    Soccer(string n, double p, int s, string m, bool td) : OutdoorSportsProduct(n, p, s), material(m), team_discount(td) {}
    void display_info() override {
        Product::display_info();
        cout << "Material: " << material << ", Team Discount: " << (team_discount ? "Yes" : "No") << endl;
    }
};

// Category and Inventory 
class Category {
    string name;
    vector<Product*> products;
public:
    Category(string n) : name(n) {}
    void add_product(Product* p) { products.push_back(p); }
    void show_products() {
        cout << "\n--- " << name << " ---" << endl;
        for (auto p : products) p->display_info();
    }
};

class Inventory {
    vector<Category*> categories;
public:
    void add_category(Category* c) { categories.push_back(c); }
    void browse_products() {
        for (auto c : categories) c->show_products();
    }
};

// Main Function 
int main() {
    Volleyball* vb1 = new Volleyball("Pro Volleyball", 30, 10, "Leather", "Official");
    TableTennis* tt1 = new TableTennis("Standard Paddle", 15, 20, "Shakehand");
    Camping* tent = new Camping("2-Person Tent", 120, 5, "2-person", "Rainproof");
    Soccer* soccer_ball = new Soccer("Match Soccer Ball", 25, 15, "Synthetic", true);

    Category* indoor = new Category("Indoor Sports");
    indoor->add_product(vb1);
    indoor->add_product(tt1);

    Category* outdoor = new Category("Outdoor Sports");
    outdoor->add_product(tent);
    outdoor->add_product(soccer_ball);

    Inventory store_inventory;
    store_inventory.add_category(indoor);
    store_inventory.add_category(outdoor);

    store_inventory.browse_products();

    delete vb1; delete tt1; delete tent; delete soccer_ball;
    delete indoor; delete outdoor;

    return 0;
}
