#include "engine_debuger.hpp"
#include <iostream>

DebugManager::EngineDebuger::EngineDebuger() {
    sf::Font font;

    if (!font.loadFromFile("NotoSans-Black.ttf")) {
        std::cerr << "Not initialized font!" << std::endl;
        debugerIsReady = false;
        return;
    }

    std::cout << "___Constructor Engine debuger___" << std::endl;
    debugerIsReady = true;
}

void DebugManager::EngineDebuger::updateDebuger() {
    if (!debugerIsReady) {
        std::cerr << "func() updateDebuger: debuger has errrors!" << std::endl;
        return;
    }

    if (!massage_rewrited) 
        return;

    // while (win.isOpen()) {
    //     if (event)
    // }
}

void DebugManager::EngineDebuger::StartDebug() {
    win.create(sf::VideoMode(400, 400), "Engine Debuger");
}