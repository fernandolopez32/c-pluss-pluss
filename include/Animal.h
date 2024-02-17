#include <iostream>
#include <string>

using namespace std;
// Base class
class Animal {
    public:
        void eat()
        {
            cout << "I'm eating" << endl;
        }
        void sleep()
        {
            cout << "I'm asleep" << endl;
        }

        // getter for color
        string getColor()
        {
            return color;
        }
        
        // setter for color 
        void setColor(string newColor)
        {
            color = newColor;
        }
    
    protected:
        string type;

    private:
        string color;
};