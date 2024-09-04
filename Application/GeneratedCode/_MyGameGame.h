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

#ifndef _MyGameGame_H
#define _MyGameGame_H

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

#include "_CoreGroup.h"
#include "_CoreKeyPressHandler.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreTimer.h"
#include "_MyGameBulletPosition.h"
#include "_MyGameEnemies.h"
#include "_MyGameLcdDisplay.h"
#include "_MyGameMenuClass.h"
#include "_ViewsImage.h"
#include "_ViewsText.h"

/* Forward declaration of the class Core::LayoutContext */
#ifndef _CoreLayoutContext_
  EW_DECLARE_CLASS( CoreLayoutContext )
#define _CoreLayoutContext_
#endif

/* Forward declaration of the class Core::View */
#ifndef _CoreView_
  EW_DECLARE_CLASS( CoreView )
#define _CoreView_
#endif

/* Forward declaration of the class MyGame::DataClass */
#ifndef _MyGameDataClass_
  EW_DECLARE_CLASS( MyGameDataClass )
#define _MyGameDataClass_
#endif

/* Forward declaration of the class MyGame::Game */
#ifndef _MyGameGame_
  EW_DECLARE_CLASS( MyGameGame )
#define _MyGameGame_
#endif


/* Deklaration of class : 'MyGame::Game' */
EW_DEFINE_FIELDS( MyGameGame, CoreGroup )
  EW_OBJECT  ( AnimationTimer,  CoreTimer )
  EW_OBJECT  ( BulletPos,       MyGameBulletPosition )
  EW_OBJECT  ( Background,      ViewsImage )
  EW_OBJECT  ( SimpleTouchHandler, CoreSimpleTouchHandler )
  EW_OBJECT  ( Bullet,          ViewsImage )
  EW_OBJECT  ( Player,          ViewsImage )
  EW_OBJECT  ( KeyLeftHandler,  CoreKeyPressHandler )
  EW_OBJECT  ( KeyRightHandler, CoreKeyPressHandler )
  EW_OBJECT  ( KeySpaceHandler, CoreKeyPressHandler )
  EW_OBJECT  ( PlayerTimer,     CoreTimer )
  EW_OBJECT  ( Enemies,         MyGameEnemies )
  EW_OBJECT  ( ScoreDisplay,    MyGameLcdDisplay )
  EW_OBJECT  ( LevelDisplay,    MyGameLcdDisplay )
  EW_OBJECT  ( LevelDescr,      ViewsText )
  EW_OBJECT  ( ScoreDescr,      ViewsText )
  EW_OBJECT  ( MenuClass,       MyGameMenuClass )
  EW_VARIABLE( Data,            MyGameDataClass )
  EW_VARIABLE( lastTime,        XUInt32 )
  EW_VARIABLE( speedFactor,     XFloat )
  EW_VARIABLE( playerDir,       XInt32 )
  EW_VARIABLE( playerPos,       XInt32 )
  EW_VARIABLE( slowFactor,      XInt32 )
  EW_VARIABLE( StartPos,        XInt32 )
  EW_VARIABLE( bulletMove,      XBool )
EW_END_OF_FIELDS( MyGameGame )

/* Virtual Method Table (VMT) for the class : 'MyGame::Game' */
EW_DEFINE_METHODS( MyGameGame, CoreGroup )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreView _this )
  EW_METHOD( Draw,              void )( CoreGroup _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( GetClipping,       XRect )( CoreGroup _this )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreGroup _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, CoreView aStartView, 
    XSet aRetargetReason )
  EW_METHOD( AdjustDrawingArea, XRect )( CoreGroup _this, XRect aArea )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreGroup _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( CoreGroup _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreGroup _this, CoreView value )
  EW_METHOD( OnSetOpacity,      void )( CoreGroup _this, XInt32 value )
  EW_METHOD( DispatchEvent,     XObject )( CoreGroup _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreGroup _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateViewState,   void )( MyGameGame _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
EW_END_OF_METHODS( MyGameGame )

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void MyGameGame_UpdateViewState( MyGameGame _this, XSet aState );

/* This is a slot method. */
void MyGameGame_onDragPlayer( MyGameGame _this, XObject sender );

/* The slot method 'Animate' is timer driven and calculates the next position of 
   ball, paddle and background. */
void MyGameGame_Animate( MyGameGame _this, XObject sender );

/* The slot method 'PrepareLevel' is used to initialize all brick rows according 
   the reached game level. */
void MyGameGame_PrepareLevel( MyGameGame _this, XObject sender );

/* The method 'CheckCollision' is responsible to detect any ball collision with 
   borders, paddle or other elements. */
void MyGameGame_CheckCollision( MyGameGame _this, MyGameBulletPosition aBall );

/* 'C' function for method : 'MyGame::Game.leftKeyDown()' */
void MyGameGame_leftKeyDown( MyGameGame _this, XObject sender );

/* 'C' function for method : 'MyGame::Game.rightKeyDown()' */
void MyGameGame_rightKeyDown( MyGameGame _this, XObject sender );

/* 'C' function for method : 'MyGame::Game.keyUpHandler()' */
void MyGameGame_keyUpHandler( MyGameGame _this, XObject sender );

/* 'C' function for method : 'MyGame::Game.updatePlayer()' */
void MyGameGame_updatePlayer( MyGameGame _this, XObject sender );

/* Slot method to start non-moving ball. */
void MyGameGame_onStart( MyGameGame _this, XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _MyGameGame_H */

/* Embedded Wizard */
