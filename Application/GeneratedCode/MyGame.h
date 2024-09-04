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

#ifndef MyGame_H
#define MyGame_H

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

#include "_MyGameBulletPosition.h"
#include "_MyGameDataClass.h"
#include "_MyGameEnemies.h"
#include "_MyGameGame.h"
#include "_MyGameLcdDisplay.h"
#include "_MyGameMenuClass.h"

/* Font resource : 'MyGame::DescrFont' */
EW_DECLARE_FONT_RES( MyGameDescrFont )

/* Bitmap resource : 'MyGame::Bullet' */
EW_DECLARE_BITMAP_RES( MyGameBullet )

/* Bitmap resource for displaying the numbers within a simulated LCD. */
EW_DECLARE_BITMAP_RES( MyGameLcdNumbers )

/* Bitmap resource : 'MyGame::Ground' */
EW_DECLARE_BITMAP_RES( MyGameGround )

/* Bitmap resource : 'MyGame::Player' */
EW_DECLARE_BITMAP_RES( MyGamePlayer )

/* Bitmap resource : 'MyGame::Zombie' */
EW_DECLARE_BITMAP_RES( MyGameZombie )

/* Bitmap resource : 'MyGame::Menu' */
EW_DECLARE_BITMAP_RES( MyGameMenu )

/* User defined auto object: 'MyGame::Data' */
EW_DECLARE_AUTOOBJECT( MyGameData, MyGameDataClass )

#ifdef __cplusplus
  }
#endif

#endif /* MyGame_H */

/* Embedded Wizard */
