#include "StdAfx.h"
#include "NGfc2LightSourceAmbient.h"
NGfc2LightSourceAmbient::NGfc2LightSourceAmbient()
{
    m_pEntity = new Gfc2LightSourceAmbient;
    m_bOwner = true;
}

NGfc2LightSourceAmbient::NGfc2LightSourceAmbient(void* pEntity, bool bOwner):
    NGfc2LightSource(pEntity, bOwner)
{
}
