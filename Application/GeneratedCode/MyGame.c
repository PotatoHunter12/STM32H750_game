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

#include "ewlocale.h"
#include "_CoreKeyPressHandler.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_MyGameBulletPosition.h"
#include "_MyGameDataClass.h"
#include "_MyGameEnemies.h"
#include "_MyGameGame.h"
#include "_MyGameLcdDisplay.h"
#include "_MyGameMenuClass.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsImage.h"
#include "_ViewsText.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"
#include "Core.h"
#include "MyGame.h"
#include "Resources.h"
#include "Views.h"
#include "WidgetSet.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x00000070, /* ratio 82.14 % */
  0xB8002700, 0x80098452, 0x00EC0034, 0x0E600328, 0xE4001000, 0x06D0042C, 0x00839840,
  0x78D460DC, 0x000E8006, 0x2C0C1320, 0x18C00532, 0x4E226F00, 0xC1D208FC, 0x01282CC8,
  0x800879D4, 0x3686460C, 0x01447E21, 0x91830012, 0xA1E65454, 0xC7400419, 0xF635088B,
  0x001019EC, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 480, 272 }};
static const XRect _Const0001 = {{ 20, 232 }, { 60, 272 }};
static const XRect _Const0002 = {{ 114, 232 }, { 154, 272 }};
static const XRect _Const0003 = {{ 220, 232 }, { 260, 272 }};
static const XRect _Const0004 = {{ 325, 232 }, { 365, 272 }};
static const XRect _Const0005 = {{ 418, 232 }, { 458, 272 }};
static const XRect _Const0006 = {{ -8, -2 }, { 492, 274 }};
static const XPoint _Const0007 = { 0, 200 };
static const XPoint _Const0008 = { 480, 200 };
static const XPoint _Const0009 = { 480, 272 };
static const XPoint _Const000A = { 0, 272 };
static const XRect _Const000B = {{ 233, 226 }, { 257, 250 }};
static const XRect _Const000C = {{ 207, 189 }, { 277, 263 }};
static const XRect _Const000D = {{ 0, -272 }, { 480, 273 }};
static const XRect _Const000E = {{ 393, 5 }, { 480, 31 }};
static const XColor _Const000F = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XRect _Const0010 = {{ 136, 5 }, { 196, 30 }};
static const XRect _Const0011 = {{ 5, 4 }, { 136, 24 }};
static const XStringRes _Const0012 = { _StringsDefault0, 0x0002 };
static const XRect _Const0013 = {{ 338, 5 }, { 388, 25 }};
static const XStringRes _Const0014 = { _StringsDefault0, 0x0015 };
static const XRect _Const0015 = {{ 0, -1 }, { 480, 271 }};
static const XRect _Const0016 = {{ 0, 0 }, { 100, 30 }};
static const XRect _Const0017 = {{ 75, 0 }, { 92, 24 }};
static const XRect _Const0018 = {{ 60, 0 }, { 77, 24 }};
static const XRect _Const0019 = {{ 45, 0 }, { 62, 24 }};
static const XRect _Const001A = {{ 30, 0 }, { 47, 24 }};
static const XRect _Const001B = {{ 15, 0 }, { 32, 24 }};
static const XRect _Const001C = {{ 0, 0 }, { 17, 24 }};
static const XRect _Const001D = {{ 134, 87 }, { 347, 136 }};
static const XStringRes _Const001E = { _StringsDefault0, 0x001E };
static const XRect _Const001F = {{ 165, 147 }, { 315, 185 }};
static const XStringRes _Const0020 = { _StringsDefault0, 0x002C };

/* Include a file containing the font resource : 'MyGame::DescrFont' */
#include "_MyGameDescrFont.h"

/* Table with links to derived variants of the font resource : 'MyGame::DescrFont' */
EW_RES_WITHOUT_VARIANTS( MyGameDescrFont )

/* Initializer for the class 'MyGame::Enemies' */
void MyGameEnemies__Init( MyGameEnemies _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( MyGameEnemies );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->zom1, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->zom2, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->zom3, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->zom4, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->zom5, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( MyGameEnemies );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->zom1, _Const0001 );
  ViewsImage_OnSetOrientation( &_this->zom1, ViewsOrientationRotated_180 );
  ViewsImage_OnSetAutoSize( &_this->zom1, 1 );
  CoreRectView__OnSetBounds( &_this->zom2, _Const0002 );
  ViewsImage_OnSetOrientation( &_this->zom2, ViewsOrientationRotated_180 );
  ViewsImage_OnSetAutoSize( &_this->zom2, 1 );
  CoreRectView__OnSetBounds( &_this->zom3, _Const0003 );
  ViewsImage_OnSetOrientation( &_this->zom3, ViewsOrientationRotated_180 );
  ViewsImage_OnSetAutoSize( &_this->zom3, 1 );
  CoreRectView__OnSetBounds( &_this->zom4, _Const0004 );
  ViewsImage_OnSetOrientation( &_this->zom4, ViewsOrientationRotated_180 );
  ViewsImage_OnSetAutoSize( &_this->zom4, 1 );
  CoreRectView__OnSetBounds( &_this->zom5, _Const0005 );
  ViewsImage_OnSetOrientation( &_this->zom5, ViewsOrientationRotated_180 );
  ViewsImage_OnSetAutoSize( &_this->zom5, 1 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->zom1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->zom2 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->zom3 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->zom4 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->zom5 ), 0 );
  ViewsImage_OnSetBitmap( &_this->zom1, EwLoadResource( &MyGameZombie, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->zom2, EwLoadResource( &MyGameZombie, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->zom3, EwLoadResource( &MyGameZombie, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->zom4, EwLoadResource( &MyGameZombie, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->zom5, EwLoadResource( &MyGameZombie, ResourcesBitmap ));
}

/* Re-Initializer for the class 'MyGame::Enemies' */
void MyGameEnemies__ReInit( MyGameEnemies _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->zom1 );
  ViewsImage__ReInit( &_this->zom2 );
  ViewsImage__ReInit( &_this->zom3 );
  ViewsImage__ReInit( &_this->zom4 );
  ViewsImage__ReInit( &_this->zom5 );
}

/* Finalizer method for the class 'MyGame::Enemies' */
void MyGameEnemies__Done( MyGameEnemies _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->zom1 );
  ViewsImage__Done( &_this->zom2 );
  ViewsImage__Done( &_this->zom3 );
  ViewsImage__Done( &_this->zom4 );
  ViewsImage__Done( &_this->zom5 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method 'CheckCollision' checks for collisions of the given ball with a brick 
   of the row. In case of a collision, the direction of the ball will change, the 
   brick becomes invisble and the score is counted. The method returns the number 
   of remaining active bricks. */
XBool MyGameEnemies_CheckCollision( MyGameEnemies _this, MyGameBulletPosition aBall )
{
  XRect overlapp = EwIntersectRect2( aBall->Bounds, _this->Super2.Bounds );
  CoreView view;

  if ( EwIsRectEmpty( overlapp ))
    return 0;

  view = _this->Super1.first;

  while ( view != 0 )
  {
    ViewsImage image = EwCastObject( view, ViewsImage );

    if (( image != 0 ) && ViewsImage_OnGetVisible( image ))
    {
      XRect bounds = EwMoveRectPos( image->Super1.Bounds, _this->Super2.Bounds.Point1 );
      overlapp = EwIntersectRect2( aBall->Bounds, bounds );

      if ( !EwIsRectEmpty( overlapp ))
      {
        MyGameDataClass_OnSetScore( EwGetAutoObject( &MyGameData, MyGameDataClass ), 
        ( EwGetAutoObject( &MyGameData, MyGameDataClass )->Score + image->FrameNumber ) 
        + 1 );
        CoreRectView__OnSetBounds( image, EwSetRectY( image->Super1.Bounds, EwMathRandInt32( 
        0, 220 )));
        return 1;
      }
    }

    if ( image->Super1.Bounds.Point1.Y > 500 )
    {
      CoreRectView__OnSetBounds( image, EwSetRectY( image->Super1.Bounds, EwMathRandInt32( 
      0, 220 )));
      MyGameDataClass_OnSetLives( EwGetAutoObject( &MyGameData, MyGameDataClass ), 
      EwGetAutoObject( &MyGameData, MyGameDataClass )->Lives - 1 );
    }

    view = view->next;
  }

  return 0;
}

/* The method 'PrepareBricks' initializes all bricks of the row. The given parameter 
   'aType' determines the style of the bricks. */
void MyGameEnemies_PrepareZombs( MyGameEnemies _this )
{
  CoreRectView__OnSetBounds( &_this->zom1, EwSetRectY( _this->zom1.Super1.Bounds, 
  EwMathRandInt32( 0, 233 )));
  CoreRectView__OnSetBounds( &_this->zom2, EwSetRectY( _this->zom2.Super1.Bounds, 
  EwMathRandInt32( 0, 233 )));
  CoreRectView__OnSetBounds( &_this->zom3, EwSetRectY( _this->zom3.Super1.Bounds, 
  EwMathRandInt32( 0, 233 )));
  CoreRectView__OnSetBounds( &_this->zom4, EwSetRectY( _this->zom4.Super1.Bounds, 
  EwMathRandInt32( 0, 233 )));
  CoreRectView__OnSetBounds( &_this->zom5, EwSetRectY( _this->zom5.Super1.Bounds, 
  EwMathRandInt32( 0, 233 )));
}

/* Variants derived from the class : 'MyGame::Enemies' */
EW_DEFINE_CLASS_VARIANTS( MyGameEnemies )
EW_END_OF_CLASS_VARIANTS( MyGameEnemies )

/* Virtual Method Table (VMT) for the class : 'MyGame::Enemies' */
EW_DEFINE_CLASS( MyGameEnemies, CoreGroup, zom1, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 "MyGame::Enemies" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( MyGameEnemies )

/* Initializer for the class 'MyGame::BulletPosition' */
void MyGameBulletPosition__Init( MyGameBulletPosition _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( MyGameBulletPosition );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( MyGameBulletPosition );
}

/* Re-Initializer for the class 'MyGame::BulletPosition' */
void MyGameBulletPosition__ReInit( MyGameBulletPosition _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'MyGame::BulletPosition' */
void MyGameBulletPosition__Done( MyGameBulletPosition _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* Variants derived from the class : 'MyGame::BulletPosition' */
EW_DEFINE_CLASS_VARIANTS( MyGameBulletPosition )
EW_END_OF_CLASS_VARIANTS( MyGameBulletPosition )

/* Virtual Method Table (VMT) for the class : 'MyGame::BulletPosition' */
EW_DEFINE_CLASS( MyGameBulletPosition, XObject, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "MyGame::BulletPosition" )
EW_END_OF_CLASS( MyGameBulletPosition )

/* Initializer for the class 'MyGame::Game' */
void MyGameGame__Init( MyGameGame _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( MyGameGame );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->AnimationTimer, &_this->_.XObject, 0 );
  MyGameBulletPosition__Init( &_this->BulletPos, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Bullet, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Player, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyLeftHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyRightHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeySpaceHandler, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->PlayerTimer, &_this->_.XObject, 0 );
  MyGameEnemies__Init( &_this->Enemies, &_this->_.XObject, 0 );
  MyGameLcdDisplay__Init( &_this->ScoreDisplay, &_this->_.XObject, 0 );
  MyGameLcdDisplay__Init( &_this->LevelDisplay, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->LevelDescr, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->ScoreDescr, &_this->_.XObject, 0 );
  MyGameMenuClass__Init( &_this->MenuClass, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( MyGameGame );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreTimer_OnSetPeriod( &_this->AnimationTimer, 15 );
  _this->speedFactor = 0.15f;
  CoreRectView__OnSetBounds( &_this->Background, _Const0006 );
  ViewsImage_OnSetAutoSize( &_this->Background, 1 );
  ViewsImage_OnSetAlignment( &_this->Background, ViewsImageAlignmentAlignHorzLeft 
  | ViewsImageAlignmentAlignVertCenter );
  ViewsImage_OnSetVisible( &_this->Background, 1 );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->SimpleTouchHandler, _Const0007 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->SimpleTouchHandler, _Const0008 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->SimpleTouchHandler, _Const0009 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->SimpleTouchHandler, _Const000A );
  CoreRectView__OnSetBounds( &_this->Bullet, _Const000B );
  ViewsImage_OnSetOpacity( &_this->Bullet, 255 );
  CoreRectView__OnSetBounds( &_this->Player, _Const000C );
  ViewsImage_OnSetAutoSize( &_this->Player, 1 );
  _this->KeyLeftHandler.Filter = CoreKeyCodeLeft;
  _this->KeyRightHandler.Filter = CoreKeyCodeRight;
  _this->KeySpaceHandler.Filter = CoreKeyCodeSpace;
  CoreTimer_OnSetPeriod( &_this->PlayerTimer, 15 );
  _this->bulletMove = 1;
  _this->playerPos = 400;
  CoreRectView__OnSetBounds( &_this->Enemies, _Const000D );
  CoreRectView__OnSetBounds( &_this->ScoreDisplay, _Const000E );
  MyGameLcdDisplay_OnSetNoOfDigits( &_this->ScoreDisplay, 5 );
  MyGameLcdDisplay_OnSetTextColor( &_this->ScoreDisplay, _Const000F );
  CoreRectView__OnSetBounds( &_this->LevelDisplay, _Const0010 );
  MyGameLcdDisplay_OnSetNoOfDigits( &_this->LevelDisplay, 2 );
  MyGameLcdDisplay_OnSetTextColor( &_this->LevelDisplay, _Const000F );
  CoreRectView__OnSetBounds( &_this->LevelDescr, _Const0011 );
  ViewsText_OnSetAlignment( &_this->LevelDescr, ViewsTextAlignmentAlignHorzRight 
  | ViewsTextAlignmentAlignVertTop );
  ViewsText_OnSetString( &_this->LevelDescr, EwLoadString( &_Const0012 ));
  ViewsText_OnSetColor( &_this->LevelDescr, _Const000F );
  CoreRectView__OnSetBounds( &_this->ScoreDescr, _Const0013 );
  ViewsText_OnSetAlignment( &_this->ScoreDescr, ViewsTextAlignmentAlignHorzRight 
  | ViewsTextAlignmentAlignVertTop );
  ViewsText_OnSetString( &_this->ScoreDescr, EwLoadString( &_Const0014 ));
  ViewsText_OnSetColor( &_this->ScoreDescr, _Const000F );
  CoreRectView__OnSetBounds( &_this->MenuClass, _Const0015 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Background ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Bullet ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Player ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Enemies ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ScoreDisplay ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->LevelDisplay ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->LevelDescr ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ScoreDescr ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->MenuClass ), 0 );
  _this->AnimationTimer.OnTrigger = EwNewSlot( _this, MyGameGame_Animate );
  ViewsImage_OnSetBitmap( &_this->Background, EwLoadResource( &MyGameGround, ResourcesBitmap ));
  _this->SimpleTouchHandler.OnDrag = EwNewSlot( _this, MyGameGame_onDragPlayer );
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, MyGameGame_onStart );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, MyGameGame_onDragPlayer );
  ViewsImage_OnSetBitmap( &_this->Bullet, EwLoadResource( &MyGameBullet, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->Player, EwLoadResource( &MyGamePlayer, ResourcesBitmap ));
  _this->Data = EwGetAutoObject( &MyGameData, MyGameDataClass );
  _this->KeyLeftHandler.OnRelease = EwNewSlot( _this, MyGameGame_keyUpHandler );
  _this->KeyLeftHandler.OnPress = EwNewSlot( _this, MyGameGame_leftKeyDown );
  _this->KeyRightHandler.OnRelease = EwNewSlot( _this, MyGameGame_keyUpHandler );
  _this->KeyRightHandler.OnPress = EwNewSlot( _this, MyGameGame_rightKeyDown );
  _this->KeySpaceHandler.OnPress = EwNewSlot( _this, MyGameGame_onStart );
  _this->PlayerTimer.OnTrigger = EwNewSlot( _this, MyGameGame_updatePlayer );
  MyGameLcdDisplay_OnSetOutlet( &_this->ScoreDisplay, EwNewRef( EwGetAutoObject( 
  &MyGameData, MyGameDataClass ), MyGameDataClass_OnGetScore, MyGameDataClass_OnSetScore ));
  MyGameLcdDisplay_OnSetOutlet( &_this->LevelDisplay, EwNewRef( EwGetAutoObject( 
  &MyGameData, MyGameDataClass ), MyGameDataClass_OnGetLives, MyGameDataClass_OnSetLives ));
  ViewsText_OnSetFont( &_this->LevelDescr, EwLoadResource( &MyGameDescrFont, ResourcesFont ));
  ViewsText_OnSetFont( &_this->ScoreDescr, EwLoadResource( &MyGameDescrFont, ResourcesFont ));
}

/* Re-Initializer for the class 'MyGame::Game' */
void MyGameGame__ReInit( MyGameGame _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->AnimationTimer );
  MyGameBulletPosition__ReInit( &_this->BulletPos );
  ViewsImage__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
  ViewsImage__ReInit( &_this->Bullet );
  ViewsImage__ReInit( &_this->Player );
  CoreKeyPressHandler__ReInit( &_this->KeyLeftHandler );
  CoreKeyPressHandler__ReInit( &_this->KeyRightHandler );
  CoreKeyPressHandler__ReInit( &_this->KeySpaceHandler );
  CoreTimer__ReInit( &_this->PlayerTimer );
  MyGameEnemies__ReInit( &_this->Enemies );
  MyGameLcdDisplay__ReInit( &_this->ScoreDisplay );
  MyGameLcdDisplay__ReInit( &_this->LevelDisplay );
  ViewsText__ReInit( &_this->LevelDescr );
  ViewsText__ReInit( &_this->ScoreDescr );
  MyGameMenuClass__ReInit( &_this->MenuClass );
}

/* Finalizer method for the class 'MyGame::Game' */
void MyGameGame__Done( MyGameGame _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->AnimationTimer );
  MyGameBulletPosition__Done( &_this->BulletPos );
  ViewsImage__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
  ViewsImage__Done( &_this->Bullet );
  ViewsImage__Done( &_this->Player );
  CoreKeyPressHandler__Done( &_this->KeyLeftHandler );
  CoreKeyPressHandler__Done( &_this->KeyRightHandler );
  CoreKeyPressHandler__Done( &_this->KeySpaceHandler );
  CoreTimer__Done( &_this->PlayerTimer );
  MyGameEnemies__Done( &_this->Enemies );
  MyGameLcdDisplay__Done( &_this->ScoreDisplay );
  MyGameLcdDisplay__Done( &_this->LevelDisplay );
  ViewsText__Done( &_this->LevelDescr );
  ViewsText__Done( &_this->ScoreDescr );
  MyGameMenuClass__Done( &_this->MenuClass );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

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
void MyGameGame_UpdateViewState( MyGameGame _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  EwPostSignal( EwNewSlot( _this, MyGameGame_PrepareLevel ), ((XObject)_this ));
  CoreRectView__OnSetBounds( &_this->Bullet, EwSetRectX( _this->Bullet.Super1.Bounds, 
  EwGetRectCenter( _this->Player.Super1.Bounds ).X - ( EwGetRectW( _this->Bullet.Super1.Bounds ) 
  / 2 )));
  CoreRectView__OnSetBounds( &_this->Bullet, EwSetRectY( _this->Bullet.Super1.Bounds, 
  _this->Player.Super1.Bounds.Point1.Y - EwGetRectH( _this->Bullet.Super1.Bounds )));
  _this->BulletPos.SpeedX = 0.2f;
  _this->BulletPos.SpeedY = -1.0f;
  CoreTimer_OnSetEnabled( &_this->AnimationTimer, 1 );
  _this->lastTime = _this->AnimationTimer.Time;
  _this->playerPos = EwGetRectCenter( _this->Player.Super1.Bounds ).X;
}

/* This is a slot method. */
void MyGameGame_onDragPlayer( MyGameGame _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->playerPos = _this->SimpleTouchHandler.CurrentPos.X;

  if ( _this->playerPos < 0 )
    _this->playerPos = 0;

  if ( _this->playerPos > EwGetRectW( _this->Super2.Bounds ))
    _this->playerPos = EwGetRectW( _this->Super2.Bounds );
}

/* The slot method 'Animate' is timer driven and calculates the next position of 
   ball, paddle and background. */
void MyGameGame_Animate( MyGameGame _this, XObject sender )
{
  XInt32 deltaX;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->slowFactor = _this->slowFactor + 1;

  if ( _this->Data->Lives == 0 )
    MyGameMenuClass_Show( &_this->MenuClass );
  else
    if ( _this->Data->Lives == 6 )
    {
      MyGameDataClass_OnSetLives( _this->Data, 5 );
      MyGameDataClass_OnSetScore( _this->Data, 0 );
      _this->speedFactor = 1.0f;
      _this->slowFactor = 0;
      _this->SimpleTouchHandler.CurrentPos.X = ( EwGetRectW( _this->Super2.Bounds ) 
      / 2 );
      _this->playerPos = EwGetRectW( _this->Super2.Bounds ) / 2;
      CoreRectView__OnSetBounds( &_this->Player, EwSetRectX( _this->Player.Super1.Bounds, 
      _this->StartPos ));
      MyGameEnemies_PrepareZombs( &_this->Enemies );
    }
    else
    {
      if ( MyGameEnemies_CheckCollision( &_this->Enemies, &_this->BulletPos ))
        ViewsImage_OnSetVisible( &_this->Bullet, 0 );

      if ( _this->bulletMove == 1 )
      {
        CoreRectView__OnSetBounds( &_this->Bullet, EwSetRectY( _this->Bullet.Super1.Bounds, 
        _this->Bullet.Super1.Bounds.Point1.Y - 5 ));
        _this->BulletPos.Bounds = _this->Bullet.Super1.Bounds;
        MyGameGame_CheckCollision( _this, &_this->BulletPos );
      }
      else
      {
        CoreRectView__OnSetBounds( &_this->Bullet, EwSetRectX( _this->Bullet.Super1.Bounds, 
        EwGetRectCenter( _this->Player.Super1.Bounds ).X - ( EwGetRectW( _this->Bullet.Super1.Bounds ) 
        / 2 )));
        CoreRectView__OnSetBounds( &_this->Bullet, EwSetRectY( _this->Bullet.Super1.Bounds, 
        _this->Player.Super1.Bounds.Point1.Y - EwGetRectH( _this->Bullet.Super1.Bounds )));
        _this->BulletPos.Bounds = _this->Bullet.Super1.Bounds;
        _this->bulletMove = 1;
        ViewsImage_OnSetVisible( &_this->Bullet, 1 );
      }

      if ( _this->slowFactor == 1 )
      {
        CoreRectView__OnSetBounds( &_this->Enemies.zom1, EwSetRectY( _this->Enemies.zom1.Super1.Bounds, 
        (XInt32)( _this->Enemies.zom1.Super1.Bounds.Point1.Y + _this->speedFactor )));
        CoreRectView__OnSetBounds( &_this->Enemies.zom2, EwSetRectY( _this->Enemies.zom2.Super1.Bounds, 
        (XInt32)( _this->Enemies.zom2.Super1.Bounds.Point1.Y + _this->speedFactor )));
        CoreRectView__OnSetBounds( &_this->Enemies.zom3, EwSetRectY( _this->Enemies.zom3.Super1.Bounds, 
        (XInt32)( _this->Enemies.zom3.Super1.Bounds.Point1.Y + _this->speedFactor )));
        CoreRectView__OnSetBounds( &_this->Enemies.zom4, EwSetRectY( _this->Enemies.zom4.Super1.Bounds, 
        (XInt32)( _this->Enemies.zom4.Super1.Bounds.Point1.Y + _this->speedFactor )));
        CoreRectView__OnSetBounds( &_this->Enemies.zom5, EwSetRectY( _this->Enemies.zom5.Super1.Bounds, 
        (XInt32)( _this->Enemies.zom5.Super1.Bounds.Point1.Y + _this->speedFactor )));
        _this->slowFactor = 0;
      }

      deltaX = ( EwGetRectCenter( _this->Player.Super1.Bounds ).X - _this->playerPos ) 
      / 2;
      CoreRectView__OnSetBounds( &_this->Player, EwSetRectX( _this->Player.Super1.Bounds, 
      _this->Player.Super1.Bounds.Point1.X - deltaX ));
    }
}

/* The slot method 'PrepareLevel' is used to initialize all brick rows according 
   the reached game level. */
void MyGameGame_PrepareLevel( MyGameGame _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->speedFactor = 1.0f;
  _this->slowFactor = 0;
  MyGameDataClass_OnSetLives( _this->Data, 5 );
  MyGameDataClass_OnSetScore( _this->Data, 0 );
  CoreRectView__OnSetBounds( &_this->Player, EwSetRectX( _this->Player.Super1.Bounds, 
  _this->StartPos ));
  MyGameEnemies_PrepareZombs( &_this->Enemies );
}

/* The method 'CheckCollision' is responsible to detect any ball collision with 
   borders, paddle or other elements. */
void MyGameGame_CheckCollision( MyGameGame _this, MyGameBulletPosition aBall )
{
  if (( aBall->Bounds.Point1.Y <= 0 ) && ( aBall->SpeedY < 0.0f ))
    _this->bulletMove = 0;
}

/* 'C' function for method : 'MyGame::Game.leftKeyDown()' */
void MyGameGame_leftKeyDown( MyGameGame _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->playerDir = -EwGetRectW( _this->Super2.Bounds ) / 64;
  EwSignal( EwNewSlot( _this, MyGameGame_updatePlayer ), ((XObject)_this ));
  CoreTimer_OnSetEnabled( &_this->PlayerTimer, 1 );
}

/* 'C' function for method : 'MyGame::Game.rightKeyDown()' */
void MyGameGame_rightKeyDown( MyGameGame _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->playerDir = EwGetRectW( _this->Super2.Bounds ) / 64;
  EwSignal( EwNewSlot( _this, MyGameGame_updatePlayer ), ((XObject)_this ));
  CoreTimer_OnSetEnabled( &_this->PlayerTimer, 1 );
}

/* 'C' function for method : 'MyGame::Game.keyUpHandler()' */
void MyGameGame_keyUpHandler( MyGameGame _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreTimer_OnSetEnabled( &_this->PlayerTimer, 0 );
}

/* 'C' function for method : 'MyGame::Game.updatePlayer()' */
void MyGameGame_updatePlayer( MyGameGame _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ((( _this->playerPos > 0 ) && ( _this->playerDir < 0 )) || (( _this->playerPos 
      < EwGetRectW( _this->Super2.Bounds )) && ( _this->playerDir > 0 )))
    _this->playerPos = _this->playerPos + _this->playerDir;

  if ( _this->playerPos < 0 )
    _this->playerPos = 0;

  if ( _this->playerPos > EwGetRectW( _this->Super2.Bounds ))
    _this->playerPos = EwGetRectW( _this->Super2.Bounds );
}

/* Slot method to start non-moving ball. */
void MyGameGame_onStart( MyGameGame _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->StartPos = _this->Player.Super1.Bounds.Point1.X;
  _this->bulletMove = 1;
}

/* Variants derived from the class : 'MyGame::Game' */
EW_DEFINE_CLASS_VARIANTS( MyGameGame )
EW_END_OF_CLASS_VARIANTS( MyGameGame )

/* Virtual Method Table (VMT) for the class : 'MyGame::Game' */
EW_DEFINE_CLASS( MyGameGame, CoreGroup, AnimationTimer, Data, lastTime, lastTime, 
                 lastTime, lastTime, "MyGame::Game" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  MyGameGame_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( MyGameGame )

/* Include a file containing the bitmap resource : 'MyGame::Bullet' */
#include "_MyGameBullet.h"

/* Table with links to derived variants of the bitmap resource : 'MyGame::Bullet' */
EW_RES_WITHOUT_VARIANTS( MyGameBullet )

/* Initializer for the class 'MyGame::DataClass' */
void MyGameDataClass__Init( MyGameDataClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesDeviceClass__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( MyGameDataClass );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( MyGameDataClass );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Lives = 10;
}

/* Re-Initializer for the class 'MyGame::DataClass' */
void MyGameDataClass__ReInit( MyGameDataClass _this )
{
  /* At first re-initialize the super class ... */
  TemplatesDeviceClass__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'MyGame::DataClass' */
void MyGameDataClass__Done( MyGameDataClass _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesDeviceClass );

  /* Don't forget to deinitialize the super class ... */
  TemplatesDeviceClass__Done( &_this->_.Super );
}

/* 'C' function for method : 'MyGame::DataClass.OnSetScore()' */
void MyGameDataClass_OnSetScore( MyGameDataClass _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->Score == value )
    return;

  _this->Score = value;
  EwNotifyRefObservers( EwNewRef( _this, MyGameDataClass_OnGetScore, MyGameDataClass_OnSetScore ), 
    0 );
}

/* 'C' function for method : 'MyGame::DataClass.OnSetLives()' */
void MyGameDataClass_OnSetLives( MyGameDataClass _this, XInt32 value )
{
  if ( _this->Lives == value )
    return;

  _this->Lives = value;
  EwNotifyRefObservers( EwNewRef( _this, MyGameDataClass_OnGetLives, MyGameDataClass_OnSetLives ), 
    0 );
}

/* Default onget method for the property 'Score' */
XInt32 MyGameDataClass_OnGetScore( MyGameDataClass _this )
{
  return _this->Score;
}

/* Default onget method for the property 'Lives' */
XInt32 MyGameDataClass_OnGetLives( MyGameDataClass _this )
{
  return _this->Lives;
}

/* Variants derived from the class : 'MyGame::DataClass' */
EW_DEFINE_CLASS_VARIANTS( MyGameDataClass )
EW_END_OF_CLASS_VARIANTS( MyGameDataClass )

/* Virtual Method Table (VMT) for the class : 'MyGame::DataClass' */
EW_DEFINE_CLASS( MyGameDataClass, TemplatesDeviceClass, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, "MyGame::DataClass" )
EW_END_OF_CLASS( MyGameDataClass )

/* User defined auto object: 'MyGame::Data' */
EW_DEFINE_AUTOOBJECT( MyGameData, MyGameDataClass )

/* Initializer for the auto object 'MyGame::Data' */
void MyGameData__Init( MyGameDataClass _this )
{
  MyGameDataClass_OnSetLives( _this, 5 );
}

/* Re-Initializer for the auto object 'MyGame::Data' */
void MyGameData__ReInit( MyGameDataClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'MyGame::Data' */
EW_DEFINE_AUTOOBJECT_VARIANTS( MyGameData )
EW_END_OF_AUTOOBJECT_VARIANTS( MyGameData )

/* Initializer for the class 'MyGame::LcdDisplay' */
void MyGameLcdDisplay__Init( MyGameLcdDisplay _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( MyGameLcdDisplay );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->Digit1, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Digit2, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Digit3, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Digit4, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Digit5, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Digit6, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( MyGameLcdDisplay );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0016 );
  CoreRectView__OnSetBounds( &_this->Digit1, _Const0017 );
  ViewsImage_OnSetAutoSize( &_this->Digit1, 1 );
  CoreRectView__OnSetBounds( &_this->Digit2, _Const0018 );
  ViewsImage_OnSetAutoSize( &_this->Digit2, 1 );
  ViewsImage_OnSetFrameNumber( &_this->Digit2, 0 );
  CoreRectView__OnSetBounds( &_this->Digit3, _Const0019 );
  ViewsImage_OnSetAutoSize( &_this->Digit3, 1 );
  CoreRectView__OnSetBounds( &_this->Digit4, _Const001A );
  ViewsImage_OnSetAutoSize( &_this->Digit4, 1 );
  CoreRectView__OnSetBounds( &_this->Digit5, _Const001B );
  ViewsImage_OnSetAutoSize( &_this->Digit5, 1 );
  CoreRectView__OnSetBounds( &_this->Digit6, _Const001C );
  ViewsImage_OnSetAutoSize( &_this->Digit6, 1 );
  _this->NoOfDigits = 6;
  _this->TextColor = _Const000F;
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Digit1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Digit2 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Digit3 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Digit4 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Digit5 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Digit6 ), 0 );
  ViewsImage_OnSetBitmap( &_this->Digit1, EwLoadResource( &MyGameLcdNumbers, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->Digit2, EwLoadResource( &MyGameLcdNumbers, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->Digit3, EwLoadResource( &MyGameLcdNumbers, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->Digit4, EwLoadResource( &MyGameLcdNumbers, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->Digit5, EwLoadResource( &MyGameLcdNumbers, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->Digit6, EwLoadResource( &MyGameLcdNumbers, ResourcesBitmap ));
}

/* Re-Initializer for the class 'MyGame::LcdDisplay' */
void MyGameLcdDisplay__ReInit( MyGameLcdDisplay _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->Digit1 );
  ViewsImage__ReInit( &_this->Digit2 );
  ViewsImage__ReInit( &_this->Digit3 );
  ViewsImage__ReInit( &_this->Digit4 );
  ViewsImage__ReInit( &_this->Digit5 );
  ViewsImage__ReInit( &_this->Digit6 );
}

/* Finalizer method for the class 'MyGame::LcdDisplay' */
void MyGameLcdDisplay__Done( MyGameLcdDisplay _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->Digit1 );
  ViewsImage__Done( &_this->Digit2 );
  ViewsImage__Done( &_this->Digit3 );
  ViewsImage__Done( &_this->Digit4 );
  ViewsImage__Done( &_this->Digit5 );
  ViewsImage__Done( &_this->Digit6 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

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
void MyGameLcdDisplay_UpdateViewState( MyGameLcdDisplay _this, XSet aState )
{
  XInt32 x;
  XInt32 val;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aState );

  x = 0;
  val = _this->CurrentValue;
  ViewsImage_OnSetFrameNumber( &_this->Digit1, val % 10 );
  ViewsImage_OnSetFrameNumber( &_this->Digit2, ( val / 10 ) % 10 );
  ViewsImage_OnSetFrameNumber( &_this->Digit3, ( val / 100 ) % 10 );
  ViewsImage_OnSetFrameNumber( &_this->Digit4, ( val / 1000 ) % 10 );
  ViewsImage_OnSetFrameNumber( &_this->Digit5, ( val / 10000 ) % 10 );
  ViewsImage_OnSetFrameNumber( &_this->Digit6, ( val / 100000 ) % 10 );

  if ( val < 0 )
  {
    ViewsImage_OnSetFrameNumber( &_this->Digit1, 10 );
    ViewsImage_OnSetFrameNumber( &_this->Digit2, 10 );
    ViewsImage_OnSetFrameNumber( &_this->Digit3, 10 );
    ViewsImage_OnSetFrameNumber( &_this->Digit4, 10 );
    ViewsImage_OnSetFrameNumber( &_this->Digit5, 10 );
    ViewsImage_OnSetFrameNumber( &_this->Digit6, 10 );
  }

  if ( _this->NoOfDigits > 5 )
  {
    ViewsImage_OnSetVisible( &_this->Digit6, 1 );
    CoreRectView__OnSetBounds( &_this->Digit6, EwSetRectX( _this->Digit6.Super1.Bounds, 
    0 ));
    x = EwGetRectW( _this->Digit6.Super1.Bounds ) - 2;
  }
  else
    ViewsImage_OnSetVisible( &_this->Digit6, 0 );

  if ( _this->NoOfDigits > 4 )
  {
    ViewsImage_OnSetVisible( &_this->Digit5, 1 );
    CoreRectView__OnSetBounds( &_this->Digit5, EwSetRectX( _this->Digit5.Super1.Bounds, 
    x ));
    x = ( x + EwGetRectW( _this->Digit5.Super1.Bounds )) - 2;
  }
  else
    ViewsImage_OnSetVisible( &_this->Digit5, 0 );

  if ( _this->NoOfDigits > 3 )
  {
    ViewsImage_OnSetVisible( &_this->Digit4, 1 );
    CoreRectView__OnSetBounds( &_this->Digit4, EwSetRectX( _this->Digit4.Super1.Bounds, 
    x ));
    x = ( x + EwGetRectW( _this->Digit4.Super1.Bounds )) - 2;
  }
  else
    ViewsImage_OnSetVisible( &_this->Digit4, 0 );

  if ( _this->NoOfDigits > 2 )
  {
    ViewsImage_OnSetVisible( &_this->Digit3, 1 );
    CoreRectView__OnSetBounds( &_this->Digit3, EwSetRectX( _this->Digit3.Super1.Bounds, 
    x ));
    x = ( x + EwGetRectW( _this->Digit3.Super1.Bounds )) - 2;
  }
  else
    ViewsImage_OnSetVisible( &_this->Digit3, 0 );

  if ( _this->NoOfDigits > 1 )
  {
    ViewsImage_OnSetVisible( &_this->Digit2, 1 );
    CoreRectView__OnSetBounds( &_this->Digit2, EwSetRectX( _this->Digit2.Super1.Bounds, 
    x ));
    x = ( x + EwGetRectW( _this->Digit2.Super1.Bounds )) - 2;
  }
  else
    ViewsImage_OnSetVisible( &_this->Digit6, 0 );

  ViewsImage_OnSetVisible( &_this->Digit1, 1 );
  CoreRectView__OnSetBounds( &_this->Digit1, EwSetRectX( _this->Digit1.Super1.Bounds, 
  x ));
}

/* The onset method of the property 'NoOfDigits' changes the number of currently 
   displayed digits and rearranges the LCD display accordingly. */
void MyGameLcdDisplay_OnSetNoOfDigits( MyGameLcdDisplay _this, XInt32 value )
{
  if ( _this->NoOfDigits == value )
    return;

  if ( value < 1 )
    value = 1;

  if ( value > 6 )
    value = 6;

  _this->NoOfDigits = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* The onset method of the property 'Value' changes the currently displayed value 
   of all digits. */
void MyGameLcdDisplay_OnSetCurrentValue( MyGameLcdDisplay _this, XInt32 value )
{
  if ( _this->CurrentValue == value )
    return;

  _this->CurrentValue = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This slot method will receive a signal, if the value of the property assigned 
   to @Outlet has been changed by another widget or by the application logic. In 
   response to this notification, the widget will update itself. */
void MyGameLcdDisplay_outletSlot( MyGameLcdDisplay _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Outlet.Object != 0 )
    MyGameLcdDisplay_OnSetCurrentValue( _this, EwOnGetInt32( _this->Outlet ));
}

/* 'C' function for method : 'MyGame::LcdDisplay.OnSetOutlet()' */
void MyGameLcdDisplay_OnSetOutlet( MyGameLcdDisplay _this, XRef value )
{
  if ( !EwCompRef( _this->Outlet, value ))
    return;

  if ( _this->Outlet.Object != 0 )
    EwDetachRefObserver( EwNewSlot( _this, MyGameLcdDisplay_outletSlot ), _this->Outlet, 
      0 );

  _this->Outlet = value;

  if ( value.Object != 0 )
    EwAttachRefObserver( EwNewSlot( _this, MyGameLcdDisplay_outletSlot ), value, 
      0 );

  if ( value.Object != 0 )
    EwPostSignal( EwNewSlot( _this, MyGameLcdDisplay_outletSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'MyGame::LcdDisplay.OnSetTextColor()' */
void MyGameLcdDisplay_OnSetTextColor( MyGameLcdDisplay _this, XColor value )
{
  _this->TextColor = value;
  ViewsImage_OnSetColor( &_this->Digit1, value );
  ViewsImage_OnSetColor( &_this->Digit2, value );
  ViewsImage_OnSetColor( &_this->Digit3, value );
  ViewsImage_OnSetColor( &_this->Digit4, value );
  ViewsImage_OnSetColor( &_this->Digit5, value );
  ViewsImage_OnSetColor( &_this->Digit6, value );
}

/* Variants derived from the class : 'MyGame::LcdDisplay' */
EW_DEFINE_CLASS_VARIANTS( MyGameLcdDisplay )
EW_END_OF_CLASS_VARIANTS( MyGameLcdDisplay )

/* Virtual Method Table (VMT) for the class : 'MyGame::LcdDisplay' */
EW_DEFINE_CLASS( MyGameLcdDisplay, CoreGroup, Digit1, Outlet, Outlet, Outlet, NoOfDigits, 
                 NoOfDigits, "MyGame::LcdDisplay" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  MyGameLcdDisplay_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( MyGameLcdDisplay )

/* Include a file containing the bitmap resource : 'MyGame::LcdNumbers' */
#include "_MyGameLcdNumbers.h"

/* Table with links to derived variants of the bitmap resource : 'MyGame::LcdNumbers' */
EW_RES_WITHOUT_VARIANTS( MyGameLcdNumbers )

/* Include a file containing the bitmap resource : 'MyGame::Ground' */
#include "_MyGameGround.h"

/* Table with links to derived variants of the bitmap resource : 'MyGame::Ground' */
EW_RES_WITHOUT_VARIANTS( MyGameGround )

/* Include a file containing the bitmap resource : 'MyGame::Player' */
#include "_MyGamePlayer.h"

/* Table with links to derived variants of the bitmap resource : 'MyGame::Player' */
EW_RES_WITHOUT_VARIANTS( MyGamePlayer )

/* Include a file containing the bitmap resource : 'MyGame::Zombie' */
#include "_MyGameZombie.h"

/* Table with links to derived variants of the bitmap resource : 'MyGame::Zombie' */
EW_RES_WITHOUT_VARIANTS( MyGameZombie )

/* Include a file containing the bitmap resource : 'MyGame::Menu' */
#include "_MyGameMenu.h"

/* Table with links to derived variants of the bitmap resource : 'MyGame::Menu' */
EW_RES_WITHOUT_VARIANTS( MyGameMenu )

/* Initializer for the class 'MyGame::MenuClass' */
void MyGameMenuClass__Init( MyGameMenuClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( MyGameMenuClass );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->Background, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->ResetBtn, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( MyGameMenuClass );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  ViewsImage_OnSetVisible( &_this->Background, 0 );
  CoreRectView__OnSetBounds( &_this->Text, _Const001D );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const001E ));
  ViewsText_OnSetVisible( &_this->Text, 0 );
  CoreRectView__OnSetBounds( &_this->ResetBtn, _Const001F );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->ResetBtn, 0 );
  CoreGroup__OnSetOpacity( &_this->ResetBtn, 255 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ResetBtn, 0 );
  WidgetSetPushButton_OnSetLabel( &_this->ResetBtn, EwLoadString( &_Const0020 ));
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Background ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ResetBtn ), 0 );
  ViewsImage_OnSetBitmap( &_this->Background, EwLoadResource( &MyGameMenu, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontLarge, ResourcesFont ));
  _this->ResetBtn.OnPress = EwNewSlot( _this, MyGameMenuClass_RestartGame );
  WidgetSetPushButton_OnSetAppearance( &_this->ResetBtn, EwGetAutoObject( &WidgetSetPushButton_Mono_Medium, 
  WidgetSetPushButtonConfig ));
}

/* Re-Initializer for the class 'MyGame::MenuClass' */
void MyGameMenuClass__ReInit( MyGameMenuClass _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->Background );
  ViewsText__ReInit( &_this->Text );
  WidgetSetPushButton__ReInit( &_this->ResetBtn );
}

/* Finalizer method for the class 'MyGame::MenuClass' */
void MyGameMenuClass__Done( MyGameMenuClass _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->Background );
  ViewsText__Done( &_this->Text );
  WidgetSetPushButton__Done( &_this->ResetBtn );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'MyGame::MenuClass.RestartGame()' */
void MyGameMenuClass_RestartGame( MyGameMenuClass _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  MyGameDataClass_OnSetLives( EwGetAutoObject( &MyGameData, MyGameDataClass ), 6 );
  MyGameMenuClass_Hide( _this );
}

/* 'C' function for method : 'MyGame::MenuClass.Show()' */
void MyGameMenuClass_Show( MyGameMenuClass _this )
{
  ViewsImage_OnSetVisible( &_this->Background, 1 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ResetBtn, 1 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->ResetBtn, 1 );
  ViewsText_OnSetVisible( &_this->Text, 1 );
}

/* 'C' function for method : 'MyGame::MenuClass.Hide()' */
void MyGameMenuClass_Hide( MyGameMenuClass _this )
{
  ViewsImage_OnSetVisible( &_this->Background, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ResetBtn, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->ResetBtn, 0 );
  ViewsText_OnSetVisible( &_this->Text, 0 );
}

/* Variants derived from the class : 'MyGame::MenuClass' */
EW_DEFINE_CLASS_VARIANTS( MyGameMenuClass )
EW_END_OF_CLASS_VARIANTS( MyGameMenuClass )

/* Virtual Method Table (VMT) for the class : 'MyGame::MenuClass' */
EW_DEFINE_CLASS( MyGameMenuClass, CoreGroup, Background, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "MyGame::MenuClass" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( MyGameMenuClass )

/* Embedded Wizard */
