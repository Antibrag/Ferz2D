#include "../headers/headers.hpp"

class Property {
private:
    string name;
public:
    //Get and set name property
    string GetName() { return name; }
    void SetName(string new_name) { name = new_name; }

    Property(string name) {
        SetName(name);
    }
};

class Object {
private:
    string name;
    vector<Property> properties;
public:
    //Get and set for name object
    string GetName() { return name; }
    void SetName(string new_name) { name = new_name; }

    //Properties func
    
    //Object constructors
    Object(string name) {
        SetName(name);
    }

};