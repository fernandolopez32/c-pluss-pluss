#include <Animal.h>

//Derrived class 
class Dog : public Animal {
    public:
        void bark()
        {
            cout << "Ruff! Ruff!" << endl;
        }
};