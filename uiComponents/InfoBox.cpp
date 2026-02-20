#include "InfoBox.h"

InfoBox::InfoBox(tgui::Gui& gui)
{
    this->infoPanel = tgui::Panel::create();
    this->titleLabel = tgui::Label::create();
    this->detailsTitle = tgui::Label::create();
    this->componentDetails = tgui::Label::create();
    this->logTitle = tgui::Label::create();
    this->logArea = tgui::TextArea::create();
    this->setInfoBox(gui);
}

void InfoBox::setInfoBox(tgui::Gui& gui)
{
    this->infoPanel->setSize("20%", "100%");
    this->infoPanel->setPosition("80%", "0%");
    this->infoPanel->getRenderer()->setBackgroundColor(tgui::Color(33, 37, 43));
    this->infoPanel->getRenderer()->setBorderColor(tgui::Color(50, 50, 50));
    this->infoPanel->getRenderer()->setBorders(1);

    this->titleLabel->setText("Info Box");
    this->titleLabel->getRenderer()->setTextColor(tgui::Color::White);
    this->titleLabel->setTextSize(20);
    this->titleLabel->setOrigin(0.5f, 0.5f);
    this->titleLabel->setPosition("50%", 20);
    this->infoPanel->add(this->titleLabel);

    this->detailsTitle->setText("Component Info");
    this->detailsTitle->setTextSize(13);
    this->detailsTitle->getRenderer()->setTextColor(tgui::Color(150, 150, 150));
    this->detailsTitle->setPosition(10, 60);
    this->infoPanel->add(this->detailsTitle);

    this->componentDetails->setText("No selection");
    this->componentDetails->setTextSize(14);
    this->componentDetails->getRenderer()->setTextColor(tgui::Color(228, 229, 234));
    this->componentDetails->setPosition(10, 85);
    this->infoPanel->add(this->componentDetails);

    this->logTitle->setText("Logs / Results");
    this->logTitle->setTextSize(13);
    this->logTitle->getRenderer()->setTextColor(tgui::Color(150, 150, 150));
    this->logTitle->setPosition(10, "50%");
    this->infoPanel->add(this->logTitle);

    this->logArea->setSize("100% - 20", "40%");
    this->logArea->setPosition(10, "55%");
    this->logArea->setReadOnly(true);
    this->logArea->getRenderer()->setBackgroundColor(tgui::Color(25, 28, 33));
    this->logArea->getRenderer()->setTextColor(tgui::Color(0, 255, 0));
    this->logArea->getRenderer()->setCaretColor(tgui::Color::Transparent);
    this->logArea->getRenderer()->setBorderColor(tgui::Color(50, 50, 50));
    this->logArea->getRenderer()->setBorders(1);
    this->infoPanel->add(this->logArea);

    gui.add(this->infoPanel);
}
