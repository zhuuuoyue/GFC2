#ifndef NGFC2ENTITYLISTPROPERTY_H
#define NGFC2ENTITYLISTPROPERTY_H

#include "NGfc2ListProperty.h"
#include "Gfc2EntityListProperty.h"
#include "NGfc2Root.h"
#include "GfcEngine/Entity.h"

public ref class NGfc2EntityListProperty: public NGfc2ListProperty
{
public:
    NGfc2EntityListProperty();
    NGfc2EntityListProperty(void* pEntity, bool bOwner);
    int getValuesCount();
    void clearValues();
    void addValues(gfc::engine::EntityRef nValue);
    gfc::engine::EntityRef getValues(int nIndex);
    NGfc2Root^ getValuesPtr(int nIndex);

};
#endif