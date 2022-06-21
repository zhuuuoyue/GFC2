#ifndef NGFCINTEGERPROPERTY_H
#define NGFCINTEGERPROPERTY_H

#include "NGfcSingleProperty.h"
#include "GfcClasses\x3\GfcIntegerProperty.h"
#include "NTypeDef.h"

public ref class NGfcIntegerProperty: public NGfcSingleProperty
{
public:
    NGfcIntegerProperty();
    NGfcIntegerProperty(bool bNoCreate);
    void setVal(NGfcInteger nValue);
    NGfcInteger getVal();
    bool hasVal();

};
#endif