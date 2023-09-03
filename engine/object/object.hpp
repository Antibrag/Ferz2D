#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>
#include <map>
#include "../properties/properties.hpp"

using namespace std;

struct Object_Properties {
private:
    map<string, Properties_List::Base_Property*> internal_properties_list = {
        {"Transform", nullptr}
    };
public:
    //Object_Properties();
    ~Object_Properties();

    void AddProperty(string property_internal_name);

    void EraseProperty(string property_internal_name);

    template<class T> T GetProperty(string property_internal_name) {
        if (property_internal_name == "Transform") {
            cout << "Get Transform" << endl;
            return dynamic_cast<Properties_List::Transform*>(internal_properties_list[property_internal_name]);
        }   
    }
};

class Object {
private:
    string name;
    Object_Properties properties;
public:
    string GetName() { return name; }
    void SetName(string new_name) { name = new_name; }

    Object_Properties GetPropertiesList() { return properties; }

    Object(string name);
    ~Object();
};

#endif