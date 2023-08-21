#include "properties.hpp"

Properties::Property::Property() {
    name = "";
}

Properties::Property::~Property() {
    name = nullptr;
}

void Properties::Transform::SetPosition(float new_x, float new_y) {
    position.x = new_x;
    position.y = new_y;
}

Properties::Transform::Transform() {
    SetName("Transform");
    position.x = 0;
    position.y = 0;
}

Properties::Transform::~Transform() {
    position.x = 0;
    position.y = 0;
}