#include "../headers/headers.hpp"

class Property {
    
};

class Object {
private:
    string name;

public:
    //Get and set for name object
    string GetName() { return name; }
    void SetName(string new_name) { name = new_name; }
    
    //Object constructors
    Object(string name) {
        SetName(name);
    }

};