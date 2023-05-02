#include <iostream>
#include <cmath>
//Matej Topaloski INKI978
using namespace std;

class Shape
{
    protected:

    float width, height;
    //public members are accessible everywhere
    public:
    void setDimensions(float w, float h)
    {
        cout << "Setting the Dimensions using the parent Class: Shape\n";
        cout << "The dimensions are: " << w << " and " << h << "\n\n";
        width = w;
        height = h;
    }
};

class Rectangle: public Shape
{
    //Method Overriding
    public: float area()
    {
        return (width * height);
    }
};

class Triangle: public Shape
{
    private:
    float c;
    //Method Overriding
    public: float area()
    {
        return (width * height / 2);
    }

    // Presmetuvanje na hipotenuzata
    public: float hipotenuza()
    {
        c = sqrt(pow(width, 2) + pow(height, 2));
        return c;
    }
};

//Defining the main method to access the members of the class
int main()
{
    cout << " ===== Program to demonstrate the concept of Hierarchial Inheritence in CPP ===== \n\n";
    //Declaring the Class objects to access the class members
    Rectangle rectangle;
    Triangle triangle;
    rectangle.setDimensions(93, 2);
    triangle.setDimensions(9, 32);
    cout << "\nArea of the Rectangle computed using Rectangle Class is : " <<
    rectangle.area() << "\n\n\n";
    cout << "Area of the Triangle computed using Triangle Class is: " << triangle.area();
    cout << "\n\n\n";
    cout << "Hypotenuse of the Triangle computed using Triangle Class is: " << triangle.hipotenuza(); // Presmetuva Hipotenuza na triagolnikot
    return 0;

}
