//
// Created by wuviv on 2020-12-06.
//

#include "ApplicationConfigurator.hpp"
#include "GUIFactory.hpp"
#include "Application.hpp"

int main() {
    GUIFactory *factory;
    std::string config = "Windows";

    if(config == "Windows")
        factory = new WinFactory();
    else if(config == "MAC")
        factory = new MacFactory();
    else
        throw "Error! Unknown operating system.";

    Application *app = new Application(factory);
    app->createUI();
    app->paint();
}