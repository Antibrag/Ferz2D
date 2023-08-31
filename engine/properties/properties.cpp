#include "properties.hpp"

Properties_List::Property::Property() {
    internal_name = "Undefined Property";
}

Properties_List::Property::~Property() {
    internal_name = nullptr;
}

void Properties_List::Transform::SetPosition(float new_x, float new_y) {
    position.x = new_x;
    position.y = new_y;
}

Properties_List::Transform::Transform() {
    SetName("Transform");
    position.x = 0;
    position.y = 0;
}

Properties_List::Transform::~Transform() {
    position.x = 0;
    position.y = 0;
}