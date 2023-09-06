#ifndef ENGINE_DEBUGER_H
#define ENGINE_DEBUGER_H

#include <SFML/Graphics.hpp>
#include <string>

namespace DebugManager {
    class EngineDebuger {
    private:
        static sf::RenderWindow win;

        sf::Text debuger_massage;
        bool massage_rewrited;

        bool debugerIsReady;

        void updateDebuger();

    public:
        EngineDebuger();

        static void StartDebug();

        static void Print(std::string massage);

        ~EngineDebuger();
    };
}

#endif