/*Goal: practice arithmetic operations in C++
**Write a program that calculates the volumes of:
**a cube, sphere, cone.
**Cube Volume = side^3
**Sphere Volume = (4/3) * pi * radius^3
**Cone Volume = pi * radius^2 * (height/3)
**Write the values to the console.
*/

#include<iostream>
#include<cmath>

int main()
{
    //Dimension of the cube
    float cubeSide = 5.4;
    //Dimension of sphere
    float sphereRadius = 2.33;
    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;

    float volCube, volSphere, volCone = 0;

    // Cube volume
    volCube = std::pow(cubeSide,3);
    std::cout << "Volume of cube with sides = " << cubeSide << " is: \n";
    std::cout << volCube <<"\n";

    // Sphere volume
    volSphere = (4/3) * M_PI * std::pow(sphereRadius,3);
    std::cout << "Volume of sphere with radius " << sphereRadius << " is: \n";
    std::cout << volSphere <<"\n";

    // Cone volume
    volCone = M_PI * std::pow(coneRadius,2)* (coneHeight/3);
    std::cout << "Volume of cone with radius " << coneRadius << " ";
    std::cout << "and height " << coneHeight << " is \n";
    std::cout << volCone <<"\n";

    return 0;
}
