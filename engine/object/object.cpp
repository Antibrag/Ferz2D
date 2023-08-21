#include "object.hpp"

void Object::AddProperty(string name_property) {
    if (name_property == "Transform")
        properties.push_back(new Properties::Transform);
}

void Object::EraseProperty(string name_property) {
    for (vector<Properties::Property*>::iterator i { properties.begin() }; i != properties.cend(); i++) {
        if ((*(*i)).GetName() == name_property)
            properties.erase(i);
    }
}

template<class T> T Object::GetProperty(string name_property) {
    for (vector<Properties::Property*>::iterator i { properties.begin() }; i != properties.cend(); i++) {
        if ((*(*i)).GetName() == name_property)
            return (*(*i));
    }
}

Object::Object(string name) {
    SetName(name);
}

Object::~Object() {
    name = nullptr;
    for (int i = 0; i < properties.size(); i++)
        delete properties[i];
}