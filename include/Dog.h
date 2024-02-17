#include "Animal.h"

//Derrived class 
class Dog : public Animal {
    public:
        void bark()
        {
            cout << "Ruff! Ruff!" << endl;
        }

        void setType(string tp)
        {
            type = tp;
        }

        void displayInfo(string c)
        {
            cout << "I am a " << type << endl;
            cout << "My color is " << c << endl;
        }
};