#ifndef GFC2REPRESENTATIONITEM_H
#define GFC2REPRESENTATIONITEM_H

#include "GfcClasses/x3/GfcClasses.h"
#include "GfcEngine/Entity.h"

GFCCLASSES_NAMESPACE_BEGIN

class GFCCLASSES_API Gfc2RepresentationItem: public gfc::engine::CEntity
{
GFCENGINE_DEC_OBJECT(Gfc2RepresentationItem, gfc::engine::CEntity)
public:
    Gfc2RepresentationItem();
    Gfc2RepresentationItem(bool bSetSchema);

};

GFCCLASSES_NAMESPACE_END

#endif