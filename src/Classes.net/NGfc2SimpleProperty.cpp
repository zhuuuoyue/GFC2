#include "StdAfx.h"
#include "NGfc2SimpleProperty.h"
NGfc2SimpleProperty::NGfc2SimpleProperty()
{
    m_pEntity = new Gfc2SimpleProperty;
    m_bOwner = true;
}

NGfc2SimpleProperty::NGfc2SimpleProperty(void* pEntity, bool bOwner):
    NGfc2Property(pEntity, bOwner)
{
}
