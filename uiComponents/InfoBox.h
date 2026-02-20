#include <TGUI/TGUI.hpp>
#include <TGUI/Backend/SFML-Graphics.hpp>
#include <string>

class InfoBox
{
private:
    tgui::Panel::Ptr infoPanel;
    tgui::Label::Ptr titleLabel;
    tgui::Label::Ptr detailsTitle; 
    tgui::Label::Ptr componentDetails;
    tgui::Label::Ptr logTitle;
    tgui::TextArea::Ptr logArea;

public:
    InfoBox(tgui::Gui& gui);
    ~InfoBox() = default;
    void setInfoBox(tgui::Gui& gui);
};
