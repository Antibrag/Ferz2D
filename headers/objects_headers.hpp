#include "../headers/headers.hpp"

class Property {
private:
    string name;
public:
    string GetName();
    void SetName(string new_name);

    Property();

    Property(string name);
};

class Property_Transform : Property {
private:
    Vector2<float> position;
public:
    //Get and set position
    Vector2<float> GetPosition();

    Vector2<float> SetPosition(Vector2<float> new_pos);

    Vector2<float> SetPosition(float new_x, float new_y);
    
    Property_Transform();
};

class Object {
private:
    string name;
public:
    string GetName();
    void SetName(string new_name);

    void AddProperty(Property& new_property);
    void EraseProperty(string name_property);

    Object(string name);
};