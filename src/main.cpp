#include "../headers/headers.hpp"

int main() {
    RenderWindow win(VideoMode(500, 500), "Test win");

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