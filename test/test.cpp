#include <iostream>
#include <SFML/Graphics.hpp>
#include "engine/objects_lib/objects_headers.hpp"

using namespace sf;
using namespace std;

int main() {
    RenderWindow win(VideoMode(400, 400), "Test win");
    Object test_obj("Test Object");
    test_obj.AddProperty("Transform");
    test_obj.GetProperty<Property_Transform>("Transform").SetPosition(200, 200);

    while (win.isOpen()) {
        Event event;

        while (win.pollEvent(event)) {
            if (event.type == Event::Closed) 
                win.close();
        }

        win.clear();
        win.display();
    }

    return EXIT_SUCCESS;
}