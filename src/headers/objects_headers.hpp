#include "../headers/headers.hpp"

class Property {
private:
    string name;
public:
    string GetName();
    void SetName(string new_name);

    Property();

    Property(string name);

    ~Property();

};

class Property_Transform : Property {
private:
    Vector2<float> position;
public:
    //Get and set position
    Vector2<float> GetPosition();

    Vector2<float> SetPosition(Vector2<float> new_pos);

    Vector2<float> SetPosition(float new_x, float new_y);

    static Property_Transform* CreateProperty();
    
    Property_Transform();

    ~Property_Transform();
};

class Object {
private:
    string name;
    vector<Property*> properties;
public:
    string GetName();
    void SetName(string new_name);

    void AddProperty(string new_property);
    void EraseProperty(string name_property);

    template<class T>
    T GetProperty(string name_property);

    Object(string name);
    ~Object();
};