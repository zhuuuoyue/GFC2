#ifndef NGFC2ELEMENTSHAPE_H
#define NGFC2ELEMENTSHAPE_H

#include "NGfc2Root.h"
#include "Gfc2ElementShape.h"
#include "NGfc2Shape.h"
#include "NTypeDef.h"
#include "GfcEngine/Entity.h"
#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace msclr::interop;

public ref class NGfc2ElementShape: public NGfc2Root
{
public:
    NGfc2ElementShape();
    NGfc2ElementShape(void* pEntity, bool bOwner);
    void setIdentifier(NGfc2String sValue);
    NGfc2String getIdentifier();
    bool hasIdentifier();
    void setShape(gfc::engine::EntityRef nValue);
    gfc::engine::EntityRef getShape();
    bool hasShape();
    NGfc2Shape^ getShapePtr();

};
#endif
