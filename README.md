#CS401-Hw01
Introduction
For this project, I created and developed a basic inventory management system of a sporting goods store. The system has been divided into two general groupings that include Indoor Sports and Outdoor Sports. Indoor sports category includes volleyballs and table tennis paddles whereas the outdoor sport category includes tents and soccer balls.
Before coding, I determined the relationship among the key classes, their attributes and the relationships and the key classes of the system.
Product is the base class of the system and it has common attributes that include name of the product, price, and quantity of stock. IndoorProduct and OutdoorProduct are two derived classes of Product, which have their specific attributes. IndoorProduct has the following attributes: material and size whereas OutdoorProduct has the following attributes weather rating or team discount available. 
All products are stored and managed with the help of an Inventory class. This class offers functions of adding products, showing products and search product. There are also the indoor sports and outdoor sports that are categorized as products to ease the search through products.
1. Ease of Implementation
Implementing the inventory system in Python was much more easy and faster compared to C++. Python is dynamically typed and this means that I did not need to declare types of data of all variables and methods. The introduction of a new product, or modification of its features, could be performed with only a few lines of software. The inbuilt lists in Python enabled it to be easy in storing and managing a set of products and operations such as searching or adding products were easy.
In C++, implementing the system in C++ was more complex. C++ requires explicit typing, and I had to carefully manage memory for all dynamically created objects using new and delete. Although the Standard Template Library (STL) vector simplified handling product collections, I still needed to pay attention to memory cleanup to avoid leaks. Its overall implementation in C++ was more time-consuming but it allowed for more control over performance and system resources.
2. Code Readability and Maintainability
Python
•	Python code is highly readable and clean since it uses indentations rather than braces and boilerplate syntax is minimal. 
•	The new classes, methods, and product attribute changes are not only easy to make but also do not need lengthy declarations. 
•	The code is simple to maintain as the structure is simple, and also reading or making changes does not involve the knowledge of complex memory manipulation.
C++
•	C++ code is more verbose. Classes should clearly indicate the access specifiers whether it is private, public, or protected. 
•	Memory allocation and pointers introduce some additional lines and may complicate the code to learners. 
•	C++ is more structured and maintainable in large projects as the compiler does type checking and with abstract classes and virtual functions it is guaranteed that derived classes will be able to implement required methods in a uniform manner.
3. Handling of Object-Oriented Concepts
Both languages allow full use of OOP concepts, Python is less strict in the declarations and considers them more leniently than the C++ language which is much stricter due to its specificity:
•	Encapsulation: Python has class attributes that are used to support encapsulation, although it does not have specific requirements about the use of variables as private. In C++ language, the encapsulation is strictly followed with the help of the privacy and protection keywords. 
•	Inheritance: Python is easy to use with single and multiple inheritance. The C++ also supports multiple inheritance which however can be a more complex undertaking that necessitates the management of constructors and virtual inheritance under some circumstances.
•	Polymorphism: Method overriding is used in polymorphism in Python. Polymorphism in C++ needs virtual functions in the base class and overriding in the derived classes.
•	Abstraction: Both languages support abstraction. Python uses base classes and method overriding, while C++ uses pure virtual functions to create abstract classes.
4. Error Handling
Python has try-except blocks to control runtime errors thus error handling is easy and readable. For example, when a product is not located in the inventory when searching, the exception may be caught and an appropriate message presented to the user. 
The try-catch blocks are also applicable to exceptions in C++, although numerous errors, including the null pointer dereference, are not eliminated automatically. Also, C++ catches a lot of mistakes at compile time, which helps prevent certain types of errors before the program runs.
Python makes runtime error handling easier and faster while C++ relies more on careful coding and compiler checks to prevent errors.
5. Memory Management and Garbage Collection
Python is a memory managed language, which is automatically cleaned through garbage collection and this is why I did not have to manually clean objects. This reduces the possibilities of the memory leakage and hanging pointers.
In C++, all objects created using new had to be properly managed in terms of memory, and even deleted using delete. Incorrect handling of memory may cause severe problems, including memory leaks or dangling pointers. Product collections were dealt with using STL classes such as vector but the dynamically allocated objects still had to be handled. 
Python saves effort on the programmer since it will automatically handle memory and C++ gives them more control but they have to be keen to avoid errors.
