#include <string>
#include "../include/Dog.h"

int main(int argc, char const *argv[])
{
    /* code */
    // making a dog 
    Dog max;
    
    // calling member of the base class
    max.eat();
    max.sleep();
    max.setColor("Red");

    //dog specific function 
    max.bark();
    max.setType("Cannine");
    max.displayInfo(max.getColor());

    return 0;
}
