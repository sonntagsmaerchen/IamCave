#include "mainmenu.h"
#include "button.h"
#include "game.h"

MainMenu::MainMenu(Game& gameRef) : GameState(gameRef) {

    rectangles = {
        new Rectangle({800, 600}, {0, 0}, "assets/background.png")
    };

    std::function<void()> start = [&](){
       game.setCurrentGameState(EGamestates::management);
    };

    std::function<void()> options = [](){

    };

    std::function<void()> quit = [&](){
        game.getWindow().close();
    };

    buttons = {
        new Button({200, 50}, {200, 100}, "assets/fuck.png", start),
        new Button({200, 50}, {200, 200}, "assets/fuck.png", options),
        new Button({200, 50}, {200, 300}, "assets/fuck.png", quit)
    };

}
