#ifndef NGFC2COMPOSITECURVE2DSWEPTSOLIDSHAPE_H
#define NGFC2COMPOSITECURVE2DSWEPTSOLIDSHAPE_H

#include "NGfc2SweptAreaSolidShape.h"
#include "Gfc2CompositeCurve2dSweptSolidShape.h"
#include "NGfc2Curve2d.h"
#include "glodon/objectbuf/Entity.h"

public ref class NGfc2CompositeCurve2dSweptSolidShape: public NGfc2SweptAreaSolidShape
{
public:
    NGfc2CompositeCurve2dSweptSolidShape();
    NGfc2CompositeCurve2dSweptSolidShape(void* pEntity, bool bOwner);
    int getSegmentsCount();
    void clearSegments();
    void addSegments(glodon::objectbuf::EntityRef nValue);
    glodon::objectbuf::EntityRef getSegments(int nIndex);
    NGfc2Curve2d^ getSegmentsPtr(int nIndex);

};
#endif