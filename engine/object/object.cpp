#include "object.hpp"

Object_Properties::~Object_Properties() {
    for(map<string, Properties_List::Base_Property*>::iterator i {internal_properties_list.begin()}; i != internal_properties_list.cend(); i++) 
        i->second = nullptr;
}

void Object_Properties::AddProperty(string property_internal_name) {
    if (internal_properties_list[property_internal_name] != nullptr) {
        return;
    }

    if (property_internal_name == "Transform") {
        Properties_List::Transform transform;
        internal_properties_list[property_internal_name] = &transform;   
    }
}

void Object_Properties::EraseProperty(string property_internal_name) {
    if (internal_properties_list[property_internal_name] == nullptr)  
        return;

    if (property_internal_name == "Transform") 
        dynamic_cast<Properties_List::Transform*>(internal_properties_list[property_internal_name])->~Transform();
    
    internal_properties_list[property_internal_name] = nullptr; 
}

Object::Object(string name) {
    SetName(name);
}

Object::~Object() {
    name = nullptr;
    properties.~Object_Properties();
}