#include "../headers/headers.hpp"

class Property {
private:
    string name;
public:
    //Get and set name property
    string GetName() { return name; }
    void SetName(string new_name) { name = new_name; }

    Property();

    Property(string name) {
        SetName(name);
    }
};

class Property_Transform : public Property {
private:
    Vector2<float> position;
public:
    //Get and set position
    Vector2<float> GetPosition() { return position; }

    Vector2<float> SetPosition(Vector2<float> new_position) { position = new_position; }

    Vector2<float> SetPosition(float new_x, float new_y) {
        position.x = new_x;
        position.y = new_y;
    }

    Property_Transform() {
        position.x = 0;
        position.y = 0;
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
    void AddProperty(Property& new_property) { properties.push_back(new_property); }

    void EraseProperty(string name_property) {
        for (auto i { properties.begin() }; i != properties.cend(); i++) {
            if ((*i).GetName() == name_property)
                properties.erase(i);
        }
    }
    
    //Object constructors
    Object(string name) {
        SetName(name);
    }

};