#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void calculateVolume() = 0; // Pure virtual function
};

// Sphere class
class Sphere : public Shape {
public:
    double radius; 

public:
    Sphere(double r) : radius(r) {}

    void calculateVolume() override {
        double volume = (4.0 / 3.0) * 3.14 * radius * radius * radius;
        int roundedVolume = volume * 1000 + 0.5; 
        cout << "Volume of sphere is " << roundedVolume / 1000.0 << endl;
    }
};

// Cylinder class
class Cylinder : public Shape {
public:
    double radius, height;

public:
    Cylinder(double r, double h) : radius(r), height(h) {}

    void calculateVolume() override {
        double volume = 3.14 * radius * radius * height;
        int roundedVolume = volume * 1000 + 0.5;
        cout << "Volume of cylinder is " << roundedVolume / 1000.0 << endl;
    }
};

// Cone class
class Cone : public Shape {
public:
    double radius, height;

public:
    Cone(double r, double h) : radius(r), height(h) {}

    void calculateVolume() override {
        double volume = (1.0 / 3.0) * 3.14 * radius * radius * height;
        int roundedVolume = volume * 1000 + 0.5;
        cout << "Volume of cone is " << roundedVolume / 1000.0 << endl;
    }
};

// Cube class
class Cube : public Shape {
public:
    double side;

public:
    Cube(double s) : side(s) {}

    void calculateVolume() override {
        double volume = side * side * side;
        int roundedVolume = volume * 1000 + 0.5;
        cout << "Volume of cube is " << roundedVolume / 1000.0 << endl;
    }
};

int main() {
    int choice;
    cin >> choice;

    switch (choice) {
    case 1: {
        double radius;
        cin >> radius;
        Sphere sphere(radius);
        sphere.calculateVolume();
        break;
    }
    case 2: {
        double radius, height;
        cin >> radius >> height;
        Cylinder cylinder(radius, height);
        cylinder.calculateVolume();
        break;
    }
    case 3: {
        double radius, height;
        cin >> radius >> height;
        Cone cone(radius, height);
        cone.calculateVolume();
        break;
    }
    case 4: {
        double side;
        cin >> side;
        Cube cube(side);
        cube.calculateVolume();
        break;
    }
    default:
        cout << "wrong choice" << endl;
    }

    return 0;
}

