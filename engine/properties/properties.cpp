#include "properties.hpp"

using namespace Properties;

Property::Property() {
    name = "";
}

Property::~Property() {
    name = nullptr;
}

void Property_Transform::SetPosition(float new_x, float new_y) {
    position.x = new_x;
    position.y = new_y;
}

Property_Transform::Property_Transform() {
    SetName("Transform");
    position.x = 0;
    position.y = 0;
}

Property_Transform::~Property_Transform() {
    position.x = NULL;
    position.y = NULL;
}