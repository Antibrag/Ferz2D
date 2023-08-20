#ifndef OBJECT_H
#define OBJECT_H

#include <vector>
#include <string>
#include "../properties/properties.hpp"

using namespace std;

class Object {
private:
    string name;
    vector<Properties::Property*> properties;
public:
    string GetName() { return name; }
    void SetName(string new_name) { name = new_name; }

    void AddProperty(string name_property);
    void EraseProperty(string name_property);
    template<class T> T GetProperty(string name_property);

    Object(string name);
    ~Object();
};

#endif