#include "properties.hpp"

void Properties_List::Base_Property::SetInternalName(string new_internal_name) {
    if (GetInternalName().empty())
        internal_name = new_internal_name;
}

Properties_List::Base_Property::Base_Property() {
    internal_name = "Undefined Property";
}

Properties_List::Base_Property::~Base_Property() {
    internal_name = nullptr;
}

void Properties_List::Transform::SetPosition(float new_x, float new_y) {
    position.x = new_x;
    position.y = new_y;
}

Properties_List::Transform::Transform() {
    SetInternalName("Transform");
    position.x = 0;
    position.y = 0;
}

Properties_List::Transform::~Transform() {
    position.x = 0;
    position.y = 0;
}