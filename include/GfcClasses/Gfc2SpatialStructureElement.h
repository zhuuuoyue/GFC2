#ifndef GFC2SPATIALSTRUCTUREELEMENT_H
#define GFC2SPATIALSTRUCTUREELEMENT_H

#include "GfcClasses.h"
#include "GfcEngine/EntityFactory.h"
#include "Gfc2Object.h"
#include "GfcEngine/Entity.h"

class GFCCLASSES_API Gfc2SpatialStructureElement: public Gfc2Object
{
GFCENGINE_DEC_OBJECT(Gfc2SpatialStructureElement,gfc2::engine::EntityFactory)
public:
    Gfc2SpatialStructureElement();
    Gfc2SpatialStructureElement(bool bSetSchema);

};
#endif