/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN1VIEWBASE_HPP
#define SCREEN1VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class Screen1ViewBase : public touchgfx::View<Screen1Presenter>
{
public:
    Screen1ViewBase();
    virtual ~Screen1ViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    touchgfx::TextArea textArea1;
    touchgfx::Image image1;
    touchgfx::TextAreaWithOneWildcard ADCText;
    touchgfx::TextAreaWithTwoWildcards TempText;
    touchgfx::TextAreaWithOneWildcard HiTemp;
    touchgfx::TextAreaWithOneWildcard LoTemp;

    /*
     * Wildcard Buffers
     */
    static const uint16_t ADCTEXT_SIZE = 6;
    touchgfx::Unicode::UnicodeChar ADCTextBuffer[ADCTEXT_SIZE];
    static const uint16_t TEMPTEXTBUFFER1_SIZE = 4;
    touchgfx::Unicode::UnicodeChar TempTextBuffer1[TEMPTEXTBUFFER1_SIZE];
    static const uint16_t TEMPTEXTBUFFER2_SIZE = 3;
    touchgfx::Unicode::UnicodeChar TempTextBuffer2[TEMPTEXTBUFFER2_SIZE];
    static const uint16_t HITEMP_SIZE = 4;
    touchgfx::Unicode::UnicodeChar HiTempBuffer[HITEMP_SIZE];
    static const uint16_t LOTEMP_SIZE = 4;
    touchgfx::Unicode::UnicodeChar LoTempBuffer[LOTEMP_SIZE];

private:

};

#endif // SCREEN1VIEWBASE_HPP