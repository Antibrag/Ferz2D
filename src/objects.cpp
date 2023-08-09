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

class Property_Transform : Property {
private:
    Vector2<float> position;
public:
    //Get and set position
    Vector2<float> GetPosition() { return position; }

    Vector2<float> SetPosition(Vector2<float> new_pos) { position = new_position; }

    Vector2<float> SetPosition(float new_x, float new_y) {
        position.x = new_x;
        position.y = new_y;
    }

    Property_Transform() {
        position = 0;
    }
}


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