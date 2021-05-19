#ifndef GFC2REPRESENTATION_H
#define GFC2REPRESENTATION_H

#include "GfcClasses/x3/GfcClasses.h"
#include "GfcClasses/x3/Gfc2Root.h"
#include "GfcClasses/x3/Gfc2RepresentationItem.h"
#include "GfcClasses/x3/TypeDef.h"
#include "GfcEngine/Entity.h"

GFCCLASSES_NAMESPACE_BEGIN

class GFCCLASSES_API Gfc2Representation: public Gfc2Root
{
GFCENGINE_DEC_OBJECT(Gfc2Representation, gfc::engine::CEntity)
public:
    Gfc2Representation();
    Gfc2Representation(bool bSetSchema);
    void setIdentifier(const Gfc2String& sValue);
    Gfc2String getIdentifier() const;
    bool hasIdentifier() const;
    int getitemsCount() const;
    void clearitems();
    void additems(const gfc::engine::EntityRef& nValue);
    gfc::engine::EntityRef getitems(int nIndex) const;
    std::shared_ptr<Gfc2RepresentationItem> getitemsPtr(int nIndex);

};

GFCCLASSES_NAMESPACE_END

#endif
