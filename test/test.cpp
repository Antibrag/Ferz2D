#include "../engine/Ferz2D.hpp"

using namespace sf;
using namespace std;

int main() {
    RenderWindow win(VideoMode(400, 400), "Test win");
    Object test_obj("Test Object");
    test_obj.GetPropertiesList().AddProperty("Transform");
    test_obj.GetPropertiesList().GetProperty<Properties_List::Transform*>("Transform")->SetPosition(200, 200);

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