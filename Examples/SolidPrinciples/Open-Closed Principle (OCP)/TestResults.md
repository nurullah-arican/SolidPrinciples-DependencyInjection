# Test results
This code defines the Shape class, an abstract class of geometric shapes, and two derived classes, the Rectangle and Circle classes. Each shape object must implement a pure virtual function called area(). The Rectangle and Circle classes implement the area() function and calculate the area of a rectangle or circle.

Next, a vector is defined and the addresses of the Rectangle and Circle objects are added to that vector. The getTotalArea() function takes a vector for Shape objects and calculates the area of each shape to calculate the total area.

In the main() function, Rectangle and Circle objects are created and then their addresses are added to the shapes vector. The getTotalArea() function calculates the total area using this vector and prints this result to the screen.

A text like "Total area: 293.86" appears as the output. This means that the area of the rectangle is 50 and the area of the circle is approximately 243.86.

![x3](https://user-images.githubusercontent.com/86796541/221069191-42f842a1-b559-4a46-8beb-a58f2f899691.png)
