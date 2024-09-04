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

#ifndef _MyGameLcdDisplay_H
#define _MyGameLcdDisplay_H

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
#include "_ViewsImage.h"

/* Forward declaration of the class Core::KeyPressHandler */
#ifndef _CoreKeyPressHandler_
  EW_DECLARE_CLASS( CoreKeyPressHandler )
#define _CoreKeyPressHandler_
#endif

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

/* Forward declaration of the class MyGame::LcdDisplay */
#ifndef _MyGameLcdDisplay_
  EW_DECLARE_CLASS( MyGameLcdDisplay )
#define _MyGameLcdDisplay_
#endif


/* The class 'LcdDisplay' implements a digital display for showing system values. */
EW_DEFINE_FIELDS( MyGameLcdDisplay, CoreGroup )
  EW_OBJECT  ( Digit1,          ViewsImage )
  EW_OBJECT  ( Digit2,          ViewsImage )
  EW_OBJECT  ( Digit3,          ViewsImage )
  EW_OBJECT  ( Digit4,          ViewsImage )
  EW_OBJECT  ( Digit5,          ViewsImage )
  EW_OBJECT  ( Digit6,          ViewsImage )
  EW_PROPERTY( Outlet,          XRef )
  EW_PROPERTY( NoOfDigits,      XInt32 )
  EW_PROPERTY( CurrentValue,    XInt32 )
  EW_PROPERTY( TextColor,       XColor )
EW_END_OF_FIELDS( MyGameLcdDisplay )

/* Virtual Method Table (VMT) for the class : 'MyGame::LcdDisplay' */
EW_DEFINE_METHODS( MyGameLcdDisplay, CoreGroup )
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
  EW_METHOD( UpdateViewState,   void )( MyGameLcdDisplay _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
EW_END_OF_METHODS( MyGameLcdDisplay )

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
void MyGameLcdDisplay_UpdateViewState( MyGameLcdDisplay _this, XSet aState );

/* The onset method of the property 'NoOfDigits' changes the number of currently 
   displayed digits and rearranges the LCD display accordingly. */
void MyGameLcdDisplay_OnSetNoOfDigits( MyGameLcdDisplay _this, XInt32 value );

/* The onset method of the property 'Value' changes the currently displayed value 
   of all digits. */
void MyGameLcdDisplay_OnSetCurrentValue( MyGameLcdDisplay _this, XInt32 value );

/* This slot method will receive a signal, if the value of the property assigned 
   to @Outlet has been changed by another widget or by the application logic. In 
   response to this notification, the widget will update itself. */
void MyGameLcdDisplay_outletSlot( MyGameLcdDisplay _this, XObject sender );

/* 'C' function for method : 'MyGame::LcdDisplay.OnSetOutlet()' */
void MyGameLcdDisplay_OnSetOutlet( MyGameLcdDisplay _this, XRef value );

/* 'C' function for method : 'MyGame::LcdDisplay.OnSetTextColor()' */
void MyGameLcdDisplay_OnSetTextColor( MyGameLcdDisplay _this, XColor value );

#ifdef __cplusplus
  }
#endif

#endif /* _MyGameLcdDisplay_H */

/* Embedded Wizard */
