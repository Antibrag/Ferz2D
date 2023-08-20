#include "properties.hpp"

Properties::Property::Property() {
    name = "";
}

Properties::Property::~Property() {
    name = nullptr;
}

void Properties::Property_Transform::SetPosition(float new_x, float new_y) {
    position.x = new_x;
    position.y = new_y;
}

Properties::Property_Transform::Property_Transform() {
    SetName("Transform");
    position.x = 0;
    position.y = 0;
}

Properties::Property_Transform::~Property_Transform() {
    position.x = 0;
    position.y = 0;
}