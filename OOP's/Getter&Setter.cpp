#include <iostream>
using namespace std;

//Creating a Class
class Hero{
    private: //Can be accessed only in Class
    char Level = 'C'; 
    
    public: 
    int Health = 80;  

    //Creating a Getter Function to access private 
    char getLevel(){
        return Level;
    }
    
    //Creating a Setter Function to Set new value in private 
    void setLevel(char ch) {
      Level = ch;
    }
}; 

int main(){

    //Static
    Hero Rahul;
    cout << "Rahul Level Before is --> " << Rahul.getLevel() << endl;
    
    Rahul.setLevel('A'); //setting new level
   
    cout << "Rahul Level After is --> " << Rahul.getLevel() << endl;
   


 return 0;
}