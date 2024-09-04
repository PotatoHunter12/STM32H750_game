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

#ifndef _MyGameBulletPosition_H
#define _MyGameBulletPosition_H

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

/* Forward declaration of the class MyGame::BulletPosition */
#ifndef _MyGameBulletPosition_
  EW_DECLARE_CLASS( MyGameBulletPosition )
#define _MyGameBulletPosition_
#endif


/* This is a class. */
EW_DEFINE_FIELDS( MyGameBulletPosition, XObject )
  EW_PROPERTY( Bounds,          XRect )
  EW_PROPERTY( SpeedX,          XFloat )
  EW_PROPERTY( SpeedY,          XFloat )
EW_END_OF_FIELDS( MyGameBulletPosition )

/* Virtual Method Table (VMT) for the class : 'MyGame::BulletPosition' */
EW_DEFINE_METHODS( MyGameBulletPosition, XObject )
EW_END_OF_METHODS( MyGameBulletPosition )

#ifdef __cplusplus
  }
#endif

#endif /* _MyGameBulletPosition_H */

/* Embedded Wizard */
