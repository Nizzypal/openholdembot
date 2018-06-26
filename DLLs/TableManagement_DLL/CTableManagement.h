#pragma once
//******************************************************************************
//
// This file is part of the OpenHoldem project
//    Source code:           https://github.com/OpenHoldem/openholdembot/
//    Forums:                http://www.maxinmontreal.com/forums/index.php
//    Licensed under GPL v3: http://www.gnu.org/licenses/gpl.html
//
//******************************************************************************
//
// Purpose: 
//
//******************************************************************************

#include "LibDef.h"

#include "CAutoConnector.h"
#include "CPopupHandler.h"
#include "CSharedMem.h"
#include "CTablePositioner.h"

class TABLE_MANAGEMENT_DLL_API CTableManagement {
public:
  CTableManagement();
  ~CTableManagement();
public:
  CAutoConnector *AutoConnector();
  CPopupHandler *PopupHandler();
  CSharedMem *SharedMem();
};

CTableManagement *TableManagement();