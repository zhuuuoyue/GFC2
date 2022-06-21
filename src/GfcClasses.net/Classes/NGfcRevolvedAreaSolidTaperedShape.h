#ifndef NGFCREVOLVEDAREASOLIDTAPEREDSHAPE_H
#define NGFCREVOLVEDAREASOLIDTAPEREDSHAPE_H

#include "NGfcRevolvedAreaSolidShape.h"
#include "GfcClasses\x3\GfcRevolvedAreaSolidTaperedShape.h"
#include "NGfcSection.h"

public ref class NGfcRevolvedAreaSolidTaperedShape: public NGfcRevolvedAreaSolidShape
{
public:
    NGfcRevolvedAreaSolidTaperedShape();
    NGfcRevolvedAreaSolidTaperedShape(bool bNoCreate);
    void setEndSweptArea(gfc::engine::EntityRef nValue);
    gfc::engine::EntityRef getEndSweptArea();
    bool hasEndSweptArea();

};
#endif