#ifndef PROPERTIES_H
#define PROPERTIES_H

#include <vector>
#include <string>
#include <SFML/Graphics.hpp>

using namespace std;

namespace Properties_List {
    class Base_Property {
    private:
        string internal_name;
    public:
        string GetInternalName() { return internal_name; }
        void SetInternalName(string new_internal_name);

        Base_Property();
        virtual ~Base_Property();
    };

    class Transform : public Base_Property{
    private:
        sf::Vector2<float> position;
    public:
        sf::Vector2<float> GetPosition() { return position; }
        void SetPosition(sf::Vector2<float> new_position) { position = new_position; }
        void SetPosition(float new_x, float new_y);

        Transform();
        ~Transform();
    };
}

#endif 