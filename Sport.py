#  Product Classes 
class Product:
    def __init__(self, name, price, stock):
        self.name = name
        self.price = price
        self.stock = stock

    def display_info(self):
        print(f"Product: {self.name}, Price: ${self.price}, Stock: {self.stock}")

    def update_stock(self, quantity):
        self.stock += quantity
        print(f"Updated stock of {self.name} to {self.stock}")

class IndoorSportsProduct(Product):
    pass

class Volleyball(IndoorSportsProduct):
    def __init__(self, name, price, stock, material, size):
        super().__init__(name, price, stock)
        self.material = material
        self.size = size

    def display_info(self):
        super().display_info()
        print(f"Material: {self.material}, Size: {self.size}")

class TableTennis(IndoorSportsProduct):
    def __init__(self, name, price, stock, style):
        super().__init__(name, price, stock)
        self.style = style

    def display_info(self):
        super().display_info()
        print(f"Style: {self.style}")

class OutdoorSportsProduct(Product):
    pass

class Camping(OutdoorSportsProduct):
    def __init__(self, name, price, stock, size, weather_rating):
        super().__init__(name, price, stock)
        self.size = size
        self.weather_rating = weather_rating

    def display_info(self):
        super().display_info()
        print(f"Size: {self.size}, Weather Rating: {self.weather_rating}")

class Soccer(OutdoorSportsProduct):
    def __init__(self, name, price, stock, material, team_discount=False):
        super().__init__(name, price, stock)
        self.material = material
        self.team_discount = team_discount

    def display_info(self):
        super().display_info()
        print(f"Material: {self.material}, Team Discount: {self.team_discount}")

# Category and Inventory 
class Category:
    def __init__(self, name):
        self.name = name
        self.products = []

    def add_product(self, product):
        self.products.append(product)

    def show_products(self):
        print(f"\n--- {self.name} ---")
        for product in self.products:
            product.display_info()

class Inventory:
    def __init__(self):
        self.categories = []

    def add_category(self, category):
        self.categories.append(category)

    def browse_products(self):
        for category in self.categories:
            category.show_products()

    def search_product(self, product_name):
        for category in self.categories:
            for product in category.products:
                if product.name.lower() == product_name.lower():
                    return product
        return None


if __name__ == "__main__":
    vb1 = Volleyball("Pro Volleyball", 30, 10, "Leather", "Official")
    tt1 = TableTennis("Standard Paddle", 15, 20, "Shakehand")
    tent = Camping("2-Person Tent", 120, 5, "2-person", "Rainproof")
    soccer_ball = Soccer("Match Soccer Ball", 25, 15, "Synthetic", True)

    indoor = Category("Indoor Sports")
    indoor.add_product(vb1)
    indoor.add_product(tt1)

    outdoor = Category("Outdoor Sports")
    outdoor.add_product(tent)
    outdoor.add_product(soccer_ball)

    store_inventory = Inventory()
    store_inventory.add_category(indoor)
    store_inventory.add_category(outdoor)

    store_inventory.browse_products()

    search_item = store_inventory.search_product("Match Soccer Ball")
    if search_item:
        print("\nProduct Found:")
        search_item.display_info()
    else:
        print("Product not found.")
