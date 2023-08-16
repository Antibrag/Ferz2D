#include <vector>
#include <string>
#include "../../sfml/include/Graphics.hpp"

using namespace std;
using namespace sf;

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

    ~Property() {
        name = nullptr;
    }
};

class Property_Transform : public Property {
private:
    Vector2<float> position;
public:
    //Get and set position
    Vector2<float> GetPosition() { return position; }

    void SetPosition(Vector2<float> new_position) { position = new_position; }

    void SetPosition(float new_x, float new_y) {
        position.x = new_x;
        position.y = new_y;
    }

    static Property_Transform* CreateProperty() {
        Property_Transform* pr = new Property_Transform;
        return pr;
    }

    Property_Transform() {
        SetName("Transform");
        position.x = 0;
        position.y = 0;
    }

    ~Property_Transform() {
        position.x = NULL;
        position.y = NULL;
    }
};


class Object {
private:
    string name;
    vector<Property*> properties;

public:
    //Get and set for name object
    string GetName() { return name; }

    void SetName(string new_name) { name = new_name; }

    //Properties func
    void AddProperty(string name_property) { 
        if (name_property == "Transform")
            properties.push_back(Property_Transform::CreateProperty());
        
    }

    void EraseProperty(string name_property) {
        for (vector<Property*>::iterator i { properties.begin() }; i != properties.cend(); i++) {
            if ((*(*i)).GetName() == name_property)
                properties.erase(i);
        }
    }

    template<class T> T GetProperty(string name_property) {
        for (vector<Property*>::iterator i { properties.begin() }; i != properties.cend(); i++) {
            if ((*(*i)).GetName() == name_property)
                return (*(*i));
        }
    }
    
    //Object constructors
    Object(string name) {
        SetName(name);
    }

    ~Object() {
        name = nullptr;
        for (int i = 0; i < properties.size(); i++)
            delete properties[i];
    }

};