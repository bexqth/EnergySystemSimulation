#include "Workspace.h"
#include <iostream>
#include "../library/Component.h"
#include "../library/Generator.h"

using namespace std;

Workspace::Workspace(tgui::BackendGuiSFML &gui, unsigned int winWidth, unsigned int winHeight) : winWidth(winWidth), winHeight(winHeight)
{
    this->workspacePanel = tgui::Panel::create();
    this->setWorkspace(gui);
    this->workspacePanel->onRightMousePress(&Workspace::handleMouseClick, this);
}

void Workspace::setWorkspace(tgui::BackendGuiSFML &gui)
{
    this->workspacePanel->setSize("60%", "100%");
    this->workspacePanel->setPosition("20%", "0%");
    this->workspacePanel->getRenderer()->setOpacity(0.f);

    gui.add(this->workspacePanel);
}

void Workspace::handleMouseClick(tgui::Vector2f pos)
{
    std::cout << pos.x << " " << pos.y << std::endl;
}

void Workspace::addComponent(std::string type)
{
    float posX = this->winWidth / 2;
    float posY = this->winHeight / 2;
    std::cout << this->workspacePanel->getSize().x << " " << this->workspacePanel->getSize().y << std::endl;
    std::cout << posX << " " << posY << std::endl;
    if(type == "Gen") {
        this->components.push_back(std::make_unique<Generator>("Gen 1", sf::Vector2f(posX, posY)));
    }
}

void Workspace::draw(sf::RenderWindow &window)
{
    for(auto& com : this->components) {
        com->draw(window);
    }
}

Workspace::~Workspace()
{
}

