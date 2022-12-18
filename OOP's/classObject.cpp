#include <iostream>
using namespace std;

//Creating a Class
class Hero{
    public: 
    int Health = 80;  //int = 4 byte

    private: //Can be accessed only in Class
    char Level = 'C'; // char = 1 byte
    
}; // semi colon is imp in class

int main(){

    //Statically Creating and Object Rahul
    Hero Rahul;
    cout << "Size of Static is --> " << sizeof(Rahul) << endl;
    //Size = 8 byte how? --> Coz of 2 CPU Cycle (Structure Padding)
    
    cout << "Rahul Health is --> " << Rahul.Health << endl;
    // we use dot to access Public Properties

    //Dynamically Creating an Object Paul
    Hero *Paul = new Hero;
    cout << "Size of Dynamic is --> " << sizeof(*Paul) << endl;

 return 0;
}