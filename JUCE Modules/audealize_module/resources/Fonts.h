//
//  Fonts.h
//
//  A static class containing the binary data for fonts used in Audealize plugins
//

#ifndef Fonts_h
#define Fonts_h
namespace Audealize
{
/// Binary data resources for fonts
class AudealizeFonts
{
public:
    static const char* RobotoRegular_ttf;
    static const int RobotoRegular_ttfSize = 145348;

private:
    AudealizeFonts ();

    JUCE_DECLARE_NON_COPYABLE (AudealizeFonts);
};
}

#endif /* Fonts_h */
