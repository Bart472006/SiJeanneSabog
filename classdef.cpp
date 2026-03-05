Class: 
The building block of C++ that leads to Object Oriented programming is a Class. It is a user defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A class is like a blueprint for an object.
For Example: Consider the Class of Cars. There may be many cars with different names and brand but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range etc. So here, Car is the class and wheels, speed limits, mileage are their properties.
•	A Class is a user defined data-type which has data members and member functions.
•	Data members are the data variables and member functions are the functions used to manipulate these variables and together these data members and member functions defines the properties and behavior of the objects in a Class.
•	In the above example of class Car, the data member will be speed limit, mileage etc and member functions can be apply brakes, increase speed etc.

Defining Class and Declaring Objects
•	A class is defined in C++ using keyword class followed by the name of class. The body of class is defined inside the curly brackets and terminated by a semicolon at the end.

Accessing data members and member functions: The data members and member functions of class can be accessed using the dot(‘.’) operator with the object. For example if the name of object is obj and you want to access the member function with the name printName() then you will have to write obj.printName() .

Accessing Data Members
The public data members are also accessed in the same way given however the private data members are not allowed to be accessed directly by the object. Accessing a data member depends solely on the access control of that data member.
This access control is given by Access modifiers in C++. There are three access modifiers: public, private and protected.

In C++, there are three access specifiers:
1.	public - members are accessible from outside the class.
2.	private - members cannot be accessed (or viewed) from outside the class.
3.	protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
