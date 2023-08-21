#ifndef PROPERTIES_H
#define PROPERTIES_H

#include <vector>
#include <string>
#include <SFML/Graphics.hpp>

using namespace std;

namespace Properties {
    class Property {
    private:
        string name;
    public:
        string GetName() { return name; }
        void SetName(string new_name) { name = new_name; }

        Property();
        Property(string name);
        ~Property();
    };

    class Transform : public Property {
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