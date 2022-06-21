#ifndef NGFCBOOLEANPROPERTY_H
#define NGFCBOOLEANPROPERTY_H

#include "NGfcSingleProperty.h"
#include "GfcClasses\x3\GfcBooleanProperty.h"
#include "NTypeDef.h"

public ref class NGfcBooleanProperty: public NGfcSingleProperty
{
public:
    NGfcBooleanProperty();
    NGfcBooleanProperty(bool bNoCreate);
    void setVal(NGfcBoolean bValue);
    NGfcBoolean getVal();
    bool hasVal();

};
#endif