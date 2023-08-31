#ifndef OBJECT_H
#define OBJECT_H

#include <vector>
#include <string>
#include "../properties/properties.hpp"
#include <iostream>

using namespace std;

struct Object_Properties_List {
public:
    Properties_List::Transform *Object_Propety_Transform;
};

class Object {
private:
    string name;
public:
    string GetName() { return name; }
    void SetName(string new_name) { name = new_name; }

    void AddProperty(string name_property);
    void EraseProperty(string name_property);
    
    template<class TProperty> TProperty* GetProperty() {
        for (vector<Properties_List::Base_Property*>::iterator i { properties.begin() }; i != properties.cend(); i++) {
            if (typeid((*(*i))).name() == typeid(TProperty).name())
                return *i;
        }

        cout << "Not finded property type" << endl;
        return nullptr;
    }

    Object(string name);
    ~Object();
};

#endif