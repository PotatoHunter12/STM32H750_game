/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 13.05
* Profile  : STM32
* Platform : STM.STM32.RGB565
*
*******************************************************************************/

#ifndef _MyGameDataClass_H
#define _MyGameDataClass_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if ( EW_RTE_VERSION >> 16 ) != 13
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if ( EW_GFX_VERSION >> 16 ) != 13
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

#include "_TemplatesDeviceClass.h"

/* Forward declaration of the class MyGame::DataClass */
#ifndef _MyGameDataClass_
  EW_DECLARE_CLASS( MyGameDataClass )
#define _MyGameDataClass_
#endif


/* Deklaration of class : 'MyGame::DataClass' */
EW_DEFINE_FIELDS( MyGameDataClass, TemplatesDeviceClass )
  EW_PROPERTY( Score,           XInt32 )
  EW_PROPERTY( Lives,           XInt32 )
EW_END_OF_FIELDS( MyGameDataClass )

/* Virtual Method Table (VMT) for the class : 'MyGame::DataClass' */
EW_DEFINE_METHODS( MyGameDataClass, TemplatesDeviceClass )
EW_END_OF_METHODS( MyGameDataClass )

/* 'C' function for method : 'MyGame::DataClass.OnSetScore()' */
void MyGameDataClass_OnSetScore( MyGameDataClass _this, XInt32 value );

/* 'C' function for method : 'MyGame::DataClass.OnSetLives()' */
void MyGameDataClass_OnSetLives( MyGameDataClass _this, XInt32 value );

/* Default onget method for the property 'Score' */
XInt32 MyGameDataClass_OnGetScore( MyGameDataClass _this );

/* Default onget method for the property 'Lives' */
XInt32 MyGameDataClass_OnGetLives( MyGameDataClass _this );

#ifdef __cplusplus
  }
#endif

#endif /* _MyGameDataClass_H */

/* Embedded Wizard */
