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
#include "_CoreGroup.h"
#include "_CoreTimer.h"
#include "_EffectsEffectTimerClass.h"
#include "_GraphicsCanvas.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsBorder.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"
#include "_ViewsShadow.h"
#include "_ViewsText.h"
#include "Core.h"
#include "Effects.h"
#include "Views.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x0000000C, /* ratio 166.67 % */
  0xB8000900, 0x3F9FE452, 0x06130800, 0x00000004, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XColor _Const0000 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XColor _Const0001 = { 0x00, 0x00, 0x00, 0xFF };
static const XPoint _Const0002 = { 0, 0 };
static const XRect _Const0003 = {{ 0, 0 }, { 0, 0 }};
static const XStringRes _Const0004 = { _StringsDefault0, 0x0002 };

/* Initializer for the class 'Views::Rectangle' */
void ViewsRectangle__Init( ViewsRectangle _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRectView__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ViewsRectangle );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ViewsRectangle );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Color = _Const0000;
}

/* Re-Initializer for the class 'Views::Rectangle' */
void ViewsRectangle__ReInit( ViewsRectangle _this )
{
  /* At first re-initialize the super class ... */
  CoreRectView__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Views::Rectangle' */
void ViewsRectangle__Done( ViewsRectangle _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRectView );

  /* Don't forget to deinitialize the super class ... */
  CoreRectView__Done( &_this->_.Super );
}

/* The method Draw() is invoked automatically if parts of the view should be redrawn 
   on the screen. This can occur when e.g. the view has been moved or the appearance 
   of the view has changed before.
   Draw() is invoked automatically by the framework, you will never need to invoke 
   this method directly. However you can request an invocation of this method by 
   calling the method InvalidateArea() of the views @Owner. Usually this is also 
   unnecessary unless you are developing your own view.
   The passed parameters determine the drawing destination aCanvas and the area 
   to redraw aClip in the coordinate space of the canvas. The parameter aOffset 
   contains the displacement between the origin of the views owner and the origin 
   of the canvas. You will need it to convert views coordinates into these of the 
   canvas.
   The parameter aOpacity contains the opacity descended from this view's @Owner. 
   It lies in range 0 .. 255. If the view implements its own 'Opacity', 'Color', 
   etc. properties, the Draw() method should calculate the resulting real opacity 
   by mixing the values of these properties with the one passed in aOpacity parameter.
   The parameter aBlend contains the blending mode descended from this view's @Owner. 
   It determines, whether the view should be drawn with alpha-blending active or 
   not. If aBlend is false, the outputs of the view should overwrite the corresponding 
   pixel in the drawing destination aCanvas. If aBlend is true, the outputs should 
   be mixed with the pixel already stored in aCanvas. For this purpose all Graphics 
   Engine functions provide a parameter to specify the mode for the respective drawing 
   operation. If the view implements its own 'Blend' property, the Draw() method 
   should calculate the resulting real blend mode by using logical AND operation 
   of the value of the property and the one passed in aBlend parameter. */
void ViewsRectangle_Draw( ViewsRectangle _this, GraphicsCanvas aCanvas, XRect aClip, 
  XPoint aOffset, XInt32 aOpacity, XBool aBlend )
{
  XColor ctl;
  XColor ctr;
  XColor cbl;
  XColor cbr;
  XColor c = _this->Color;
  XInt32 rtl = _this->Radius;
  XInt32 rtr = _this->Radius;
  XInt32 rbr = _this->Radius;
  XInt32 rbl = _this->Radius;

  aBlend = (XBool)( aBlend && (( _this->Super2.viewState & CoreViewStateAlphaBlended ) 
  == CoreViewStateAlphaBlended ));
  aOpacity = aOpacity + 1;
  ctl = ctr = cbl = cbr = c;

  if ( aOpacity < 256 )
  {
    ctl.Alpha = (XUInt8)(( aOpacity * ctl.Alpha ) >> 8 );
    ctr.Alpha = (XUInt8)(( aOpacity * ctr.Alpha ) >> 8 );
    cbl.Alpha = (XUInt8)(( aOpacity * cbl.Alpha ) >> 8 );
    cbr.Alpha = (XUInt8)(( aOpacity * cbr.Alpha ) >> 8 );
  }

  if ((( !!rtl || !!rtr ) || !!rbr ) || !!rbl )
    GraphicsCanvas_FillRoundedRectangle( aCanvas, aClip, EwMoveRectPos( _this->Super1.Bounds, 
    aOffset ), rtl, rtr, rbr, rbl, ctl, ctr, cbr, cbl, aBlend );
  else
    GraphicsCanvas_FillRectangle( aCanvas, aClip, EwMoveRectPos( _this->Super1.Bounds, 
    aOffset ), ctl, ctr, cbr, cbl, aBlend );
}

/* 'C' function for method : 'Views::Rectangle.OnSetRadius()' */
void ViewsRectangle_OnSetRadius( ViewsRectangle _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value == _this->Radius )
    return;

  _this->Radius = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Rectangle.OnSetColor()' */
void ViewsRectangle_OnSetColor( ViewsRectangle _this, XColor value )
{
  if ( !EwCompColor( value, _this->Color ))
    return;

  _this->Color = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* Variants derived from the class : 'Views::Rectangle' */
EW_DEFINE_CLASS_VARIANTS( ViewsRectangle )
EW_END_OF_CLASS_VARIANTS( ViewsRectangle )

/* Virtual Method Table (VMT) for the class : 'Views::Rectangle' */
EW_DEFINE_CLASS( ViewsRectangle, CoreRectView, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "Views::Rectangle" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  ViewsRectangle_Draw,
  CoreView_GetClipping,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreView_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreView_ChangeViewState,
  CoreRectView_OnSetBounds,
EW_END_OF_CLASS( ViewsRectangle )

/* Initializer for the class 'Views::Border' */
void ViewsBorder__Init( ViewsBorder _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRectView__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ViewsBorder );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ViewsBorder );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Width = 1;
  _this->Color = _Const0000;
}

/* Re-Initializer for the class 'Views::Border' */
void ViewsBorder__ReInit( ViewsBorder _this )
{
  /* At first re-initialize the super class ... */
  CoreRectView__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Views::Border' */
void ViewsBorder__Done( ViewsBorder _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRectView );

  /* Don't forget to deinitialize the super class ... */
  CoreRectView__Done( &_this->_.Super );
}

/* The method Draw() is invoked automatically if parts of the view should be redrawn 
   on the screen. This can occur when e.g. the view has been moved or the appearance 
   of the view has changed before.
   Draw() is invoked automatically by the framework, you will never need to invoke 
   this method directly. However you can request an invocation of this method by 
   calling the method InvalidateArea() of the views @Owner. Usually this is also 
   unnecessary unless you are developing your own view.
   The passed parameters determine the drawing destination aCanvas and the area 
   to redraw aClip in the coordinate space of the canvas. The parameter aOffset 
   contains the displacement between the origin of the views owner and the origin 
   of the canvas. You will need it to convert views coordinates into these of the 
   canvas.
   The parameter aOpacity contains the opacity descended from this view's @Owner. 
   It lies in range 0 .. 255. If the view implements its own 'Opacity', 'Color', 
   etc. properties, the Draw() method should calculate the resulting real opacity 
   by mixing the values of these properties with the one passed in aOpacity parameter.
   The parameter aBlend contains the blending mode descended from this view's @Owner. 
   It determines, whether the view should be drawn with alpha-blending active or 
   not. If aBlend is false, the outputs of the view should overwrite the corresponding 
   pixel in the drawing destination aCanvas. If aBlend is true, the outputs should 
   be mixed with the pixel already stored in aCanvas. For this purpose all Graphics 
   Engine functions provide a parameter to specify the mode for the respective drawing 
   operation. If the view implements its own 'Blend' property, the Draw() method 
   should calculate the resulting real blend mode by using logical AND operation 
   of the value of the property and the one passed in aBlend parameter. */
void ViewsBorder_Draw( ViewsBorder _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
{
  XColor ctl;
  XColor ctr;
  XColor cbl;
  XColor cbr;
  XColor c = _this->Color;
  XInt32 rtl = _this->Radius;
  XInt32 rtr = _this->Radius;
  XInt32 rbr = _this->Radius;
  XInt32 rbl = _this->Radius;

  aBlend = (XBool)( aBlend && (( _this->Super2.viewState & CoreViewStateAlphaBlended ) 
  == CoreViewStateAlphaBlended ));
  aOpacity = aOpacity + 1;
  ctl = ctr = cbl = cbr = c;

  if ( aOpacity < 256 )
  {
    ctl.Alpha = (XUInt8)(( aOpacity * ctl.Alpha ) >> 8 );
    ctr.Alpha = (XUInt8)(( aOpacity * ctr.Alpha ) >> 8 );
    cbl.Alpha = (XUInt8)(( aOpacity * cbl.Alpha ) >> 8 );
    cbr.Alpha = (XUInt8)(( aOpacity * cbr.Alpha ) >> 8 );
  }

  if ((( !!rtl || !!rtr ) || !!rbr ) || !!rbl )
    GraphicsCanvas_DrawRoundedBorder( aCanvas, aClip, EwMoveRectPos( _this->Super1.Bounds, 
    aOffset ), _this->Width, rtl, rtr, rbr, rbl, ctl, ctr, cbr, cbl, aBlend );
  else
    GraphicsCanvas_DrawBorder( aCanvas, aClip, EwMoveRectPos( _this->Super1.Bounds, 
    aOffset ), _this->Width, ctl, ctr, cbr, cbl, aBlend );
}

/* 'C' function for method : 'Views::Border.OnSetRadius()' */
void ViewsBorder_OnSetRadius( ViewsBorder _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value == _this->Radius )
    return;

  _this->Radius = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Border.OnSetWidth()' */
void ViewsBorder_OnSetWidth( ViewsBorder _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value == _this->Width )
    return;

  _this->Width = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Border.OnSetColor()' */
void ViewsBorder_OnSetColor( ViewsBorder _this, XColor value )
{
  if ( !EwCompColor( value, _this->Color ))
    return;

  _this->Color = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* Variants derived from the class : 'Views::Border' */
EW_DEFINE_CLASS_VARIANTS( ViewsBorder )
EW_END_OF_CLASS_VARIANTS( ViewsBorder )

/* Virtual Method Table (VMT) for the class : 'Views::Border' */
EW_DEFINE_CLASS( ViewsBorder, CoreRectView, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 "Views::Border" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  ViewsBorder_Draw,
  CoreView_GetClipping,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreView_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreView_ChangeViewState,
  CoreRectView_OnSetBounds,
EW_END_OF_CLASS( ViewsBorder )

/* Initializer for the class 'Views::Shadow' */
void ViewsShadow__Init( ViewsShadow _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRectView__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ViewsShadow );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ViewsShadow );

  /* ... and initialize objects, variables, properties, etc. */
  _this->BlurRadius = 4;
  _this->Color = _Const0001;
}

/* Re-Initializer for the class 'Views::Shadow' */
void ViewsShadow__ReInit( ViewsShadow _this )
{
  /* At first re-initialize the super class ... */
  CoreRectView__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Views::Shadow' */
void ViewsShadow__Done( ViewsShadow _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRectView );

  /* Don't forget to deinitialize the super class ... */
  CoreRectView__Done( &_this->_.Super );
}

/* The method Draw() is invoked automatically if parts of the view should be redrawn 
   on the screen. This can occur when e.g. the view has been moved or the appearance 
   of the view has changed before.
   Draw() is invoked automatically by the framework, you will never need to invoke 
   this method directly. However you can request an invocation of this method by 
   calling the method InvalidateArea() of the views @Owner. Usually this is also 
   unnecessary unless you are developing your own view.
   The passed parameters determine the drawing destination aCanvas and the area 
   to redraw aClip in the coordinate space of the canvas. The parameter aOffset 
   contains the displacement between the origin of the views owner and the origin 
   of the canvas. You will need it to convert views coordinates into these of the 
   canvas.
   The parameter aOpacity contains the opacity descended from this view's @Owner. 
   It lies in range 0 .. 255. If the view implements its own 'Opacity', 'Color', 
   etc. properties, the Draw() method should calculate the resulting real opacity 
   by mixing the values of these properties with the one passed in aOpacity parameter.
   The parameter aBlend contains the blending mode descended from this view's @Owner. 
   It determines, whether the view should be drawn with alpha-blending active or 
   not. If aBlend is false, the outputs of the view should overwrite the corresponding 
   pixel in the drawing destination aCanvas. If aBlend is true, the outputs should 
   be mixed with the pixel already stored in aCanvas. For this purpose all Graphics 
   Engine functions provide a parameter to specify the mode for the respective drawing 
   operation. If the view implements its own 'Blend' property, the Draw() method 
   should calculate the resulting real blend mode by using logical AND operation 
   of the value of the property and the one passed in aBlend parameter. */
void ViewsShadow_Draw( ViewsShadow _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
{
  XColor c = _this->Color;
  XInt32 rtl = _this->Radius;
  XInt32 rtr = _this->Radius;
  XInt32 rbr = _this->Radius;
  XInt32 rbl = _this->Radius;

  aBlend = (XBool)( aBlend && (( _this->Super2.viewState & CoreViewStateAlphaBlended ) 
  == CoreViewStateAlphaBlended ));
  aOpacity = aOpacity + 1;

  if ( aOpacity < 256 )
    c.Alpha = (XUInt8)(( aOpacity * c.Alpha ) >> 8 );

  GraphicsCanvas_DrawRoundedShadow( aCanvas, aClip, EwMoveRectPos( EwMoveRectPos( 
  _this->Super1.Bounds, aOffset ), _this->Offset ), rtl, rtr, rbr, rbl, _this->BlurRadius, 
  c, aBlend );
}

/* The method GetClipping() returns the clipping area of the view as rectangle relative 
   to the origin of the view's @Owner. With the returned clipping area the view 
   limits its own visibility. Contents belonging to the view and lying outside this 
   area will not be displayed - they are clipped during the screen update process.
   Per default the clipping area corresponds to the boundary area of the view (see 
   also @GetExtent()). Derived views can override GetClipping() and enlarge the 
   area so the view can display additional contents (e.g. shadows or decoration) 
   outside of its original boundary area. */
XRect ViewsShadow_GetClipping( ViewsShadow _this )
{
  return EwMoveRectPos( EwInflateRect( CoreView_GetClipping((CoreView)_this ), EwNewPoint( 
    _this->BlurRadius, _this->BlurRadius )), _this->Offset );
}

/* 'C' function for method : 'Views::Shadow.OnSetRadius()' */
void ViewsShadow_OnSetRadius( ViewsShadow _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value == _this->Radius )
    return;

  _this->Radius = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetClipping( _this ));
}

/* 'C' function for method : 'Views::Shadow.OnSetOffset()' */
void ViewsShadow_OnSetOffset( ViewsShadow _this, XPoint value )
{
  if ( !EwCompPoint( _this->Offset, value ))
    return;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
  {
    XInt32 blurRadius = _this->BlurRadius;
    XRect bounds = EwInflateRect( _this->Super1.Bounds, EwNewPoint( blurRadius, 
      blurRadius ));
    CoreGroup__InvalidateArea( _this->Super2.Owner, EwMoveRectPos( bounds, _this->Offset ));
    CoreGroup__InvalidateArea( _this->Super2.Owner, EwMoveRectPos( bounds, value ));
  }

  _this->Offset = value;
}

/* 'C' function for method : 'Views::Shadow.OnSetBlurRadius()' */
void ViewsShadow_OnSetBlurRadius( ViewsShadow _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 64 )
    value = 64;

  if ( _this->BlurRadius == value )
    return;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
  {
    XInt32 blurRadius = EwGetInt32Max( 2, _this->BlurRadius, value );
    CoreGroup__InvalidateArea( _this->Super2.Owner, EwMoveRectPos( EwInflateRect( 
    _this->Super1.Bounds, EwNewPoint( blurRadius, blurRadius )), _this->Offset ));
  }

  _this->BlurRadius = value;
}

/* 'C' function for method : 'Views::Shadow.OnSetColor()' */
void ViewsShadow_OnSetColor( ViewsShadow _this, XColor value )
{
  if ( !EwCompColor( value, _this->Color ))
    return;

  _this->Color = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetClipping( _this ));
}

/* Variants derived from the class : 'Views::Shadow' */
EW_DEFINE_CLASS_VARIANTS( ViewsShadow )
EW_END_OF_CLASS_VARIANTS( ViewsShadow )

/* Virtual Method Table (VMT) for the class : 'Views::Shadow' */
EW_DEFINE_CLASS( ViewsShadow, CoreRectView, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 "Views::Shadow" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  ViewsShadow_Draw,
  ViewsShadow_GetClipping,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreView_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreView_ChangeViewState,
  CoreRectView_OnSetBounds,
EW_END_OF_CLASS( ViewsShadow )

/* Initializer for the class 'Views::Image' */
void ViewsImage__Init( ViewsImage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRectView__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ViewsImage );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ViewsImage );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Orientation = ViewsOrientationNormal;
  _this->Color = _Const0000;
  _this->Alignment = ViewsImageAlignmentAlignHorzCenter | ViewsImageAlignmentAlignVertCenter;
  _this->Opacity = 255;
}

/* Re-Initializer for the class 'Views::Image' */
void ViewsImage__ReInit( ViewsImage _this )
{
  /* At first re-initialize the super class ... */
  CoreRectView__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Views::Image' */
void ViewsImage__Done( ViewsImage _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRectView );

  /* Don't forget to deinitialize the super class ... */
  CoreRectView__Done( &_this->_.Super );
}

/* The method Draw() is invoked automatically if parts of the view should be redrawn 
   on the screen. This can occur when e.g. the view has been moved or the appearance 
   of the view has changed before.
   Draw() is invoked automatically by the framework, you will never need to invoke 
   this method directly. However you can request an invocation of this method by 
   calling the method InvalidateArea() of the views @Owner. Usually this is also 
   unnecessary unless you are developing your own view.
   The passed parameters determine the drawing destination aCanvas and the area 
   to redraw aClip in the coordinate space of the canvas. The parameter aOffset 
   contains the displacement between the origin of the views owner and the origin 
   of the canvas. You will need it to convert views coordinates into these of the 
   canvas.
   The parameter aOpacity contains the opacity descended from this view's @Owner. 
   It lies in range 0 .. 255. If the view implements its own 'Opacity', 'Color', 
   etc. properties, the Draw() method should calculate the resulting real opacity 
   by mixing the values of these properties with the one passed in aOpacity parameter.
   The parameter aBlend contains the blending mode descended from this view's @Owner. 
   It determines, whether the view should be drawn with alpha-blending active or 
   not. If aBlend is false, the outputs of the view should overwrite the corresponding 
   pixel in the drawing destination aCanvas. If aBlend is true, the outputs should 
   be mixed with the pixel already stored in aCanvas. For this purpose all Graphics 
   Engine functions provide a parameter to specify the mode for the respective drawing 
   operation. If the view implements its own 'Blend' property, the Draw() method 
   should calculate the resulting real blend mode by using logical AND operation 
   of the value of the property and the one passed in aBlend parameter. */
void ViewsImage_Draw( ViewsImage _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
{
  XInt32 frameNr = _this->FrameNumber;
  XRect area;
  XPoint size;
  XEnum orient;
  XColor ctl;
  XColor ctr;
  XColor cbr;
  XColor cbl;
  XColor c;
  XInt32 opacity;

  if ( _this->animFrameNumber >= 0 )
    frameNr = _this->animFrameNumber;

  if (( _this->Bitmap == 0 ) || ( frameNr >= _this->Bitmap->NoOfFrames ))
    return;

  ResourcesBitmap__Update( _this->Bitmap );
  area = ViewsImage_GetContentArea( _this );
  size = _this->Bitmap->FrameSize;
  orient = _this->Orientation;

  if ( EwIsRectEmpty( area ))
    return;

  c = _this->Color;
  opacity = ((( aOpacity + 1 ) * _this->Opacity ) >> 8 ) + 1;
  aBlend = (XBool)( aBlend && (( _this->Super2.viewState & CoreViewStateAlphaBlended ) 
  == CoreViewStateAlphaBlended ));
  ctl = ctr = cbl = cbr = c;

  if ( opacity < 256 )
  {
    ctl.Alpha = (XUInt8)(( ctl.Alpha * opacity ) >> 8 );
    ctr.Alpha = (XUInt8)(( ctr.Alpha * opacity ) >> 8 );
    cbr.Alpha = (XUInt8)(( cbr.Alpha * opacity ) >> 8 );
    cbl.Alpha = (XUInt8)(( cbl.Alpha * opacity ) >> 8 );
  }

  if ( !EwCompPoint( EwGetRectSize( area ), size ) && ( orient == ViewsOrientationNormal ))
    GraphicsCanvas_CopyBitmap( aCanvas, aClip, _this->Bitmap, frameNr, EwMoveRectPos( 
    _this->Super1.Bounds, aOffset ), EwMovePointNeg( _this->Super1.Bounds.Point1, 
    area.Point1 ), ctl, ctr, cbr, cbl, aBlend );
  else
    if ( orient == ViewsOrientationNormal )
      GraphicsCanvas_ScaleBitmap( aCanvas, aClip, _this->Bitmap, frameNr, EwMoveRectPos( 
      area, aOffset ), EwNewRect2Point( _Const0002, size ), ctl, ctr, cbr, cbl, 
      aBlend, 1 );
    else
    {
      XFloat left = (XFloat)( area.Point1.X + aOffset.X );
      XFloat top = (XFloat)( area.Point1.Y + aOffset.Y );
      XFloat right = (XFloat)( area.Point2.X + aOffset.X );
      XFloat bottom = (XFloat)( area.Point2.Y + aOffset.Y );

      if ( orient == ViewsOrientationRotated_90 )
        GraphicsCanvas_WarpBitmap( aCanvas, aClip, _this->Bitmap, frameNr, left, 
        bottom, 1.0f, left, top, 1.0f, right, top, 1.0f, right, bottom, 1.0f, EwNewRect2Point( 
        _Const0002, size ), cbl, ctl, ctr, cbr, aBlend, 1 );
      else
        if ( orient == ViewsOrientationRotated_180 )
          GraphicsCanvas_WarpBitmap( aCanvas, aClip, _this->Bitmap, frameNr, right, 
          bottom, 1.0f, left, bottom, 1.0f, left, top, 1.0f, right, top, 1.0f, EwNewRect2Point( 
          _Const0002, size ), cbr, cbl, ctl, ctr, aBlend, 1 );
        else
          if ( orient == ViewsOrientationRotated_270 )
            GraphicsCanvas_WarpBitmap( aCanvas, aClip, _this->Bitmap, frameNr, right, 
            top, 1.0f, right, bottom, 1.0f, left, bottom, 1.0f, left, top, 1.0f, 
            EwNewRect2Point( _Const0002, size ), ctr, cbr, cbl, ctl, aBlend, 1 );
    }
}

/* 'C' function for method : 'Views::Image.observerSlot()' */
void ViewsImage_observerSlot( ViewsImage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ((( _this->AutoSize && ( _this->Bitmap != 0 )) && ( _this->Bitmap->FrameSize.X 
      > 0 )) && ( _this->Bitmap->FrameSize.Y > 0 ))
    CoreRectView__OnSetBounds( _this, ViewsImage_GetContentArea( _this ));

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Image.timerSlot()' */
void ViewsImage_timerSlot( ViewsImage _this, XObject sender )
{
  XInt32 frameNr;
  XInt32 period;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  frameNr = _this->animFrameNumber;
  period = 0;

  if ( _this->Bitmap != 0 )
    period = _this->Bitmap->NoOfFrames * _this->Bitmap->FrameDelay;

  if ((( _this->timer != 0 ) && ( _this->animFrameNumber < 0 )) && ( period > 0 ))
    _this->startTime = _this->timer->Time - ( _this->FrameNumber * _this->Bitmap->FrameDelay );

  if (( _this->timer != 0 ) && ( period > 0 ))
  {
    XInt32 time = (XInt32)( _this->timer->Time - _this->startTime );
    frameNr = time / _this->Bitmap->FrameDelay;

    if ( time >= period )
    {
      frameNr = frameNr % _this->Bitmap->NoOfFrames;
      _this->startTime = _this->timer->Time - ( time % period );
    }
  }

  if ((( frameNr != _this->animFrameNumber ) && ( _this->Super2.Owner != 0 )) && 
      (( _this->Super2.viewState & CoreViewStateVisible ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );

  _this->animFrameNumber = frameNr;

  if (( period == 0 ) && ( _this->timer != 0 ))
  {
    EwDetachObjObserver( EwNewSlot( _this, ViewsImage_timerSlot ), (XObject)_this->timer, 
      0 );
    _this->timer = 0;
  }
}

/* 'C' function for method : 'Views::Image.OnSetOrientation()' */
void ViewsImage_OnSetOrientation( ViewsImage _this, XEnum value )
{
  if ( value == _this->Orientation )
    return;

  _this->Orientation = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Image.OnSetAutoSize()' */
void ViewsImage_OnSetAutoSize( ViewsImage _this, XBool value )
{
  if ( value == _this->AutoSize )
    return;

  _this->AutoSize = value;

  if ((( value && ( _this->Bitmap != 0 )) && ( _this->Bitmap->FrameSize.X > 0 )) 
      && ( _this->Bitmap->FrameSize.Y > 0 ))
    CoreRectView__OnSetBounds( _this, ViewsImage_GetContentArea( _this ));
}

/* 'C' function for method : 'Views::Image.OnSetColor()' */
void ViewsImage_OnSetColor( ViewsImage _this, XColor value )
{
  if ( !EwCompColor( value, _this->Color ))
    return;

  _this->Color = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Image.OnSetAnimated()' */
void ViewsImage_OnSetAnimated( ViewsImage _this, XBool value )
{
  if ( _this->Animated == value )
    return;

  _this->Animated = value;
  _this->animFrameNumber = -1;

  if ( !value && ( _this->timer != 0 ))
  {
    EwDetachObjObserver( EwNewSlot( _this, ViewsImage_timerSlot ), (XObject)_this->timer, 
      0 );
    _this->timer = 0;
  }

  if ( value )
  {
    _this->timer = ((CoreTimer)EwGetAutoObject( &EffectsEffectTimer, EffectsEffectTimerClass ));
    EwAttachObjObserver( EwNewSlot( _this, ViewsImage_timerSlot ), (XObject)_this->timer, 
      0 );
    EwPostSignal( EwNewSlot( _this, ViewsImage_timerSlot ), ((XObject)_this ));
  }

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Image.OnSetAlignment()' */
void ViewsImage_OnSetAlignment( ViewsImage _this, XSet value )
{
  if ( value == _this->Alignment )
    return;

  _this->Alignment = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Image.OnSetFrameNumber()' */
void ViewsImage_OnSetFrameNumber( ViewsImage _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if (( value == _this->FrameNumber ) && ( _this->animFrameNumber == -1 ))
    return;

  _this->FrameNumber = value;

  if ( _this->timer == 0 )
    _this->animFrameNumber = -1;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Image.OnSetBitmap()' */
void ViewsImage_OnSetBitmap( ViewsImage _this, ResourcesBitmap value )
{
  if ( value == _this->Bitmap )
    return;

  if (( _this->Bitmap != 0 ) && _this->Bitmap->Mutable )
    EwDetachObjObserver( EwNewSlot( _this, ViewsImage_observerSlot ), (XObject)_this->Bitmap, 
      0 );

  _this->Bitmap = value;
  _this->animFrameNumber = -1;

  if (( value != 0 ) && value->Mutable )
    EwAttachObjObserver( EwNewSlot( _this, ViewsImage_observerSlot ), (XObject)value, 
      0 );

  if ( _this->Animated )
  {
    ViewsImage_OnSetAnimated( _this, 0 );
    ViewsImage_OnSetAnimated( _this, 1 );
  }

  if ((( _this->AutoSize && ( value != 0 )) && ( value->FrameSize.X > 0 )) && ( 
      value->FrameSize.Y > 0 ))
    CoreRectView__OnSetBounds( _this, ViewsImage_GetContentArea( _this ));

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Image.OnSetOpacity()' */
void ViewsImage_OnSetOpacity( ViewsImage _this, XInt32 value )
{
  if ( value > 255 )
    value = 255;

  if ( value < 0 )
    value = 0;

  if ( value == _this->Opacity )
    return;

  _this->Opacity = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Image.OnGetVisible()' */
XBool ViewsImage_OnGetVisible( ViewsImage _this )
{
  return (( _this->Super2.viewState & CoreViewStateVisible ) == CoreViewStateVisible );
}

/* 'C' function for method : 'Views::Image.OnSetVisible()' */
void ViewsImage_OnSetVisible( ViewsImage _this, XBool value )
{
  if ( value )
    CoreView__ChangeViewState( _this, CoreViewStateVisible, 0 );
  else
    CoreView__ChangeViewState( _this, 0, CoreViewStateVisible );
}

/* The method GetContentArea() returns the position and the size of an area where 
   the view will show the bitmap. This area is expressed in coordinates relative 
   to the top-left corner of the view's @Owner. The method takes in account all 
   properties which do affect the position and the alignment of the bitmap, e.g. 
   @Alignment or @ScrollOffset. */
XRect ViewsImage_GetContentArea( ViewsImage _this )
{
  XEnum orient;
  XSet align;
  XPoint size;
  XRect bounds;
  XInt32 width;
  XInt32 height;
  XRect rd;
  XRect rs;

  if ( _this->Bitmap == 0 )
    return _Const0003;

  orient = _this->Orientation;
  align = _this->Alignment;
  size = _this->Bitmap->FrameSize;
  bounds = _this->Super1.Bounds;
  width = EwGetRectW( bounds );
  height = EwGetRectH( bounds );

  if (( size.X == 0 ) || ( size.Y == 0 ))
    return _Const0003;

  if (( orient == ViewsOrientationRotated_90 ) || ( orient == ViewsOrientationRotated_270 ))
  {
    width = height;
    height = EwGetRectW( bounds );
  }

  rd = EwNewRect( 0, 0, width, height );
  rs = rd;

  if ((( align & ViewsImageAlignmentScaleToFill ) == ViewsImageAlignmentScaleToFill ))
  {
    XInt32 scaleX = (( EwGetRectW( rd ) << 16 ) + ( size.X / 2 )) / size.X;
    XInt32 scaleY = (( EwGetRectH( rd ) << 16 ) + ( size.Y / 2 )) / size.Y;
    XInt32 scale = scaleX;

    if ( scaleY > scale )
      scale = scaleY;

    rs = EwSetRectW( rs, (( size.X * scale ) + 32768 ) >> 16 );
    rs = EwSetRectH( rs, (( size.Y * scale ) + 32768 ) >> 16 );
  }
  else
    if ((( align & ViewsImageAlignmentScaleToFit ) == ViewsImageAlignmentScaleToFit ))
    {
      XInt32 scaleX = (( EwGetRectW( rd ) << 16 ) + ( size.X / 2 )) / size.X;
      XInt32 scaleY = (( EwGetRectH( rd ) << 16 ) + ( size.Y / 2 )) / size.Y;
      XInt32 scale = scaleX;

      if ( scaleY < scale )
        scale = scaleY;

      rs = EwSetRectW( rs, (( size.X * scale ) + 32768 ) >> 16 );
      rs = EwSetRectH( rs, (( size.Y * scale ) + 32768 ) >> 16 );
    }
    else
      if ( !(( align & ViewsImageAlignmentStretchToFill ) == ViewsImageAlignmentStretchToFill ))
        rs = EwSetRectSize( rs, size );

  if ( EwGetRectW( rs ) != EwGetRectW( rd ))
  {
    if ((( align & ViewsImageAlignmentAlignHorzRight ) == ViewsImageAlignmentAlignHorzRight ))
      rs = EwSetRectX( rs, rd.Point2.X - EwGetRectW( rs ));
    else
      if ((( align & ViewsImageAlignmentAlignHorzCenter ) == ViewsImageAlignmentAlignHorzCenter ))
        rs = EwSetRectX( rs, ( rd.Point1.X + ( EwGetRectW( rd ) / 2 )) - ( EwGetRectW( 
        rs ) / 2 ));
  }

  if ( EwGetRectH( rs ) != EwGetRectH( rd ))
  {
    if ((( align & ViewsImageAlignmentAlignVertBottom ) == ViewsImageAlignmentAlignVertBottom ))
      rs = EwSetRectY( rs, rd.Point2.Y - EwGetRectH( rs ));
    else
      if ((( align & ViewsImageAlignmentAlignVertCenter ) == ViewsImageAlignmentAlignVertCenter ))
        rs = EwSetRectY( rs, ( rd.Point1.Y + ( EwGetRectH( rd ) / 2 )) - ( EwGetRectH( 
        rs ) / 2 ));
  }

  if ( orient == ViewsOrientationNormal )
    rs = EwMoveRectPos( rs, bounds.Point1 );
  else
    if ( orient == ViewsOrientationRotated_90 )
    {
      XPoint org = EwNewPoint( bounds.Point1.X + rs.Point1.Y, bounds.Point2.Y - 
        rs.Point2.X );
      rs = EwNewRect2Point( org, EwMovePointPos( org, EwNewPoint( EwGetRectH( rs ), 
      EwGetRectW( rs ))));
    }
    else
      if ( orient == ViewsOrientationRotated_180 )
      {
        XPoint org = EwNewPoint( bounds.Point2.X - rs.Point2.X, bounds.Point2.Y 
          - rs.Point2.Y );
        rs = EwNewRect2Point( org, EwMovePointPos( org, EwGetRectSize( rs )));
      }
      else
        if ( orient == ViewsOrientationRotated_270 )
        {
          XPoint org = EwNewPoint( bounds.Point2.X - rs.Point2.Y, bounds.Point1.Y 
            + rs.Point1.X );
          rs = EwNewRect2Point( org, EwMovePointPos( org, EwNewPoint( EwGetRectH( 
          rs ), EwGetRectW( rs ))));
        }

  return rs;
}

/* Variants derived from the class : 'Views::Image' */
EW_DEFINE_CLASS_VARIANTS( ViewsImage )
EW_END_OF_CLASS_VARIANTS( ViewsImage )

/* Virtual Method Table (VMT) for the class : 'Views::Image' */
EW_DEFINE_CLASS( ViewsImage, CoreRectView, timer, timer, startTime, startTime, startTime, 
                 startTime, "Views::Image" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  ViewsImage_Draw,
  CoreView_GetClipping,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreView_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreView_ChangeViewState,
  CoreRectView_OnSetBounds,
EW_END_OF_CLASS( ViewsImage )

/* Initializer for the class 'Views::Text' */
void ViewsText__Init( ViewsText _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRectView__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ViewsText );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ViewsText );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Alignment = ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter;
  _this->Color = _Const0000;
}

/* Re-Initializer for the class 'Views::Text' */
void ViewsText__ReInit( ViewsText _this )
{
  /* At first re-initialize the super class ... */
  CoreRectView__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Views::Text' */
void ViewsText__Done( ViewsText _this )
{
  /* Call the user defined destructor of the class */
  ViewsText_Done( _this );

  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRectView );

  /* Don't forget to deinitialize the super class ... */
  CoreRectView__Done( &_this->_.Super );
}

/* 'C' function for method : 'Views::Text.Done()' */
void ViewsText_Done( ViewsText _this )
{
  if ( _this->bidiContext != 0 )
  {
    ViewsText_freeBidi( _this, _this->bidiContext );
    _this->bidiContext = 0;
  }
}

/* The method Draw() is invoked automatically if parts of the view should be redrawn 
   on the screen. This can occur when e.g. the view has been moved or the appearance 
   of the view has changed before.
   Draw() is invoked automatically by the framework, you will never need to invoke 
   this method directly. However you can request an invocation of this method by 
   calling the method InvalidateArea() of the views @Owner. Usually this is also 
   unnecessary unless you are developing your own view.
   The passed parameters determine the drawing destination aCanvas and the area 
   to redraw aClip in the coordinate space of the canvas. The parameter aOffset 
   contains the displacement between the origin of the views owner and the origin 
   of the canvas. You will need it to convert views coordinates into these of the 
   canvas.
   The parameter aOpacity contains the opacity descended from this view's @Owner. 
   It lies in range 0 .. 255. If the view implements its own 'Opacity', 'Color', 
   etc. properties, the Draw() method should calculate the resulting real opacity 
   by mixing the values of these properties with the one passed in aOpacity parameter.
   The parameter aBlend contains the blending mode descended from this view's @Owner. 
   It determines, whether the view should be drawn with alpha-blending active or 
   not. If aBlend is false, the outputs of the view should overwrite the corresponding 
   pixel in the drawing destination aCanvas. If aBlend is true, the outputs should 
   be mixed with the pixel already stored in aCanvas. For this purpose all Graphics 
   Engine functions provide a parameter to specify the mode for the respective drawing 
   operation. If the view implements its own 'Blend' property, the Draw() method 
   should calculate the resulting real blend mode by using logical AND operation 
   of the value of the property and the one passed in aBlend parameter. */
void ViewsText_Draw( ViewsText _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
{
  XSet align;
  ResourcesFont font;
  XRect rd;
  XColor ctl;
  XColor ctr;
  XColor cbr;
  XColor cbl;
  XColor col;
  XInt32 opacity;
  XInt32 noOfRows;
  XRect area;
  XPoint ofs;
  XInt32 leading;
  XInt32 rowHeight;
  XInt32 clipY1;
  XInt32 clipY2;
  XInt32 areaW;
  XInt32 y;
  XInt32 i;
  XInt32 c;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aBlend );

  if ( !EwCompString( _this->flowString, 0 ) || ( _this->Font == 0 ))
    return;

  align = _this->Alignment;
  font = _this->Font;
  rd = EwMoveRectPos( _this->Super1.Bounds, aOffset );
  col = _this->Color;
  opacity = ((( aOpacity + 1 ) * 255 ) >> 8 ) + 1;
  noOfRows = EwGetStringChar( _this->flowString, 0 );
  area = EwMoveRectPos( ViewsText_GetContentArea( _this ), aOffset );
  ofs = EwNewPoint( rd.Point1.X - area.Point1.X, ( rd.Point1.Y - area.Point1.Y ) 
  - font->Ascent );

  if ( noOfRows < 1 )
    return;

  ctl = ctr = cbl = cbr = col;

  if ( opacity < 256 )
  {
    ctl.Alpha = (XUInt8)(( ctl.Alpha * opacity ) >> 8 );
    ctr.Alpha = (XUInt8)(( ctr.Alpha * opacity ) >> 8 );
    cbr.Alpha = (XUInt8)(( cbr.Alpha * opacity ) >> 8 );
    cbl.Alpha = (XUInt8)(( cbl.Alpha * opacity ) >> 8 );
  }

  if ((( align & ViewsTextAlignmentAlignHorzAuto ) == ViewsTextAlignmentAlignHorzAuto ))
  {
    if ( ViewsText_IsBaseDirectionRTL( _this ))
      align = ( align & ~ViewsTextAlignmentAlignHorzAuto ) | ViewsTextAlignmentAlignHorzRight;
    else
      align = ( align & ~ViewsTextAlignmentAlignHorzAuto ) | ViewsTextAlignmentAlignHorzLeft;
  }

  if (( noOfRows == 1 ) && !(( align & ViewsTextAlignmentAlignHorzJustified ) == 
      ViewsTextAlignmentAlignHorzJustified ))
  {
    GraphicsCanvas_DrawText( aCanvas, aClip, font, _this->flowString, 2, EwGetStringChar( 
    _this->flowString, 1 ) - 1, rd, ofs, 0, ViewsOrientationNormal, ctl, ctr, cbr, 
    cbl, 1 );
    return;
  }

  leading = font->Leading;
  rowHeight = ( font->Ascent + font->Descent ) + leading;
  clipY1 = aClip.Point1.Y - area.Point1.Y;
  clipY2 = aClip.Point2.Y - area.Point1.Y;
  areaW = EwGetRectW( area );
  y = 0;
  i = 1;
  c = EwGetStringChar( _this->flowString, 1 );

  while ((( y + rowHeight ) < clipY1 ) && ( c > 0 ))
  {
    i = i + c;
    y = y + rowHeight;
    c = EwGetStringChar( _this->flowString, i );
  }

  while (( y < clipY2 ) && ( c > 0 ))
  {
    XPoint ofs2 = EwMovePointNeg( ofs, EwNewPoint( 0, y ));
    XInt32 rw = 0;
    XBool justified = 0;

    if ((((( align & ViewsTextAlignmentAlignHorzJustified ) == ViewsTextAlignmentAlignHorzJustified ) 
        && ( EwGetStringChar( _this->flowString, ( i + c ) - 1 ) != 0x000A )) && 
        ( EwGetStringChar( _this->flowString, i + 1 ) != 0x000A )) && ( EwGetStringChar( 
        _this->flowString, i + c ) != 0x0000 ))
      justified = 1;

    if ( justified && !!( align & ( ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignHorzRight )))
    {
      XInt32 rowEnd = i + c;
      XInt32 blank1 = EwStringFindChar( _this->flowString, 0x0020, i + 1 );
      XInt32 blank2 = EwStringFindChar( _this->flowString, 0x00A0, i + 1 );

      if ((( blank1 < 0 ) || ( blank1 >= rowEnd )) && (( blank2 < 0 ) || ( blank2 
          >= rowEnd )))
        justified = 0;
    }

    if ( justified )
      rw = areaW;
    else
      if ((( align & ViewsTextAlignmentAlignHorzRight ) == ViewsTextAlignmentAlignHorzRight ))
        ofs2.X = (( ofs2.X - areaW ) + ResourcesFont_GetTextAdvance( font, _this->flowString, 
        i + 1, c - 1 ));
      else
        if ((( align & ViewsTextAlignmentAlignHorzCenter ) == ViewsTextAlignmentAlignHorzCenter ))
          ofs2.X = (( ofs2.X - ( areaW / 2 )) + ( ResourcesFont_GetTextAdvance( 
          font, _this->flowString, i + 1, c - 1 ) / 2 ));

    GraphicsCanvas_DrawText( aCanvas, aClip, font, _this->flowString, i + 1, c - 
    1, rd, ofs2, rw, ViewsOrientationNormal, ctl, ctr, cbr, cbl, 1 );
    i = i + c;
    y = y + rowHeight;
    c = EwGetStringChar( _this->flowString, i );
  }
}

/* 'C' function for method : 'Views::Text.OnSetBounds()' */
void ViewsText_OnSetBounds( ViewsText _this, XRect value )
{
  XBool resized;

  if ( !EwCompRect( value, _this->Super1.Bounds ))
    return;

  resized = (XBool)( EwGetRectW( _this->Super1.Bounds ) != EwGetRectW( value ));

  if ((( resized && _this->WrapText ) && _this->reparsed ) && !(( _this->Super2.viewState 
      & CoreViewStateUpdatingLayout ) == CoreViewStateUpdatingLayout ))
  {
    _this->flowString = 0;
    _this->reparsed = 0;
    EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this ));
  }

  if ((( _this->Ellipsis && _this->reparsed ) && EwCompPoint( EwGetRectSize( _this->Super1.Bounds ), 
      EwGetRectSize( value ))) && !(( _this->Super2.viewState & CoreViewStateUpdatingLayout ) 
      == CoreViewStateUpdatingLayout ))
  {
    _this->flowString = 0;
    _this->reparsed = 0;
    EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this ));
  }

  CoreRectView_OnSetBounds((CoreRectView)_this, value );
  EwPostSignal( EwNewSlot( _this, ViewsText_preOnUpdateSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.freeBidi()' */
void ViewsText_freeBidi( ViewsText _this, XHandle aBidi )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  if ( aBidi == 0 )
    return;

  EwFreeBidi( aBidi );
}

/* 'C' function for method : 'Views::Text.createBidi()' */
XHandle ViewsText_createBidi( ViewsText _this, XInt32 aSize )
{
  XHandle bidi;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  bidi = 0;
  bidi = EwCreateBidi( aSize );
  return bidi;
}

/* 'C' function for method : 'Views::Text.preOnUpdateSlot()' */
void ViewsText_preOnUpdateSlot( ViewsText _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* 'C' function for method : 'Views::Text.preReparseSlot()' */
void ViewsText_preReparseSlot( ViewsText _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, ViewsText_reparseSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.reparseSlot()' */
void ViewsText_reparseSlot( ViewsText _this, XObject sender )
{
  XInt32 width;
  XInt32 height;
  XInt32 maxWidth;
  ResourcesFont font;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->reparsed )
    return;

  width = EwGetRectW( _this->Super1.Bounds );
  height = EwGetRectH( _this->Super1.Bounds );
  maxWidth = -1;
  font = _this->Font;

  if ((( font != 0 ) && !!!font->Ascent ) && !!!font->Descent )
    font = 0;

  if ( _this->WrapText )
  {
    maxWidth = width;

    if ( maxWidth < 0 )
      maxWidth = 1;
  }

  if ( _this->bidiContext != 0 )
  {
    ViewsText_freeBidi( _this, _this->bidiContext );
    _this->bidiContext = 0;
  }

  _this->reparsed = 1;

  if (( EwCompString( _this->String, 0 ) != 0 ) && ( font != 0 ))
  {
    XInt32 length = EwGetStringLength( _this->String );

    if ( _this->EnableBidiText )
      _this->bidiContext = ViewsText_createBidi( _this, length );

    _this->flowString = EwShareString( ResourcesFont_ParseFlowString( font, _this->String, 
    0, maxWidth, length, _this->bidiContext ));

    if (( _this->bidiContext != 0 ) && !ViewsText_IsBidiText( _this ))
    {
      ViewsText_freeBidi( _this, _this->bidiContext );
      _this->bidiContext = 0;
    }
  }
  else
    _this->flowString = 0;

  _this->textSize = _Const0002;

  if (( _this->Ellipsis && ( EwCompString( _this->flowString, 0 ) != 0 )) && ( font 
      != 0 ))
  {
    XSet align = _this->Alignment;
    XInt32 leading = font->Leading;
    XString res = _this->flowString;
    XBool rtl = ViewsText_IsBaseDirectionRTL( _this );
    XInt32 rh;
    XInt32 noOfRows;
    XInt32 maxNoOfRows;
    XBool clipF;
    XBool clipL;
    XInt32 row;
    XInt32 inx;
    XInt32 maxW;

    if ((( align & ViewsTextAlignmentAlignHorzAuto ) == ViewsTextAlignmentAlignHorzAuto ))
    {
      if ( rtl )
        align = ( align & ~ViewsTextAlignmentAlignHorzAuto ) | ViewsTextAlignmentAlignHorzRight;
      else
        align = ( align & ~ViewsTextAlignmentAlignHorzAuto ) | ViewsTextAlignmentAlignHorzLeft;
    }

    rh = ( font->Ascent + font->Descent ) + leading;
    noOfRows = EwGetStringChar( res, 0 );
    maxNoOfRows = ( height + leading ) / rh;
    clipF = 0;
    clipL = 0;

    if ( maxNoOfRows <= 0 )
      maxNoOfRows = 1;

    if ( noOfRows > maxNoOfRows )
    {
      XInt32 row = 0;
      XInt32 rowF = 0;
      XInt32 rowL = noOfRows - 1;
      XInt32 inxF;
      XInt32 inxL = EwGetStringLength( res );
      XString tmp = 0;

      if ( !!( align & ( ViewsTextAlignmentAlignVertCenter | ViewsTextAlignmentAlignVertCenterBaseline )) 
          && !!( align & ( ViewsTextAlignmentAlignVertBottom | ViewsTextAlignmentAlignVertTop )))
        align &= ~( ViewsTextAlignmentAlignVertCenter | ViewsTextAlignmentAlignVertCenterBaseline );

      if ( !!( align & ( ViewsTextAlignmentAlignVertCenter | ViewsTextAlignmentAlignVertCenterBaseline )))
        align &= ~( ViewsTextAlignmentAlignVertBottom | ViewsTextAlignmentAlignVertTop );

      if ((( align & ViewsTextAlignmentAlignVertBottom ) == ViewsTextAlignmentAlignVertBottom ))
        rowF = noOfRows - maxNoOfRows;
      else
        if ((( align & ViewsTextAlignmentAlignVertCenter ) == ViewsTextAlignmentAlignVertCenter ) 
            || (( align & ViewsTextAlignmentAlignVertCenterBaseline ) == ViewsTextAlignmentAlignVertCenterBaseline ))
        {
          rowF = ( noOfRows - maxNoOfRows ) / 2;
          rowL = ( rowF + maxNoOfRows ) - 1;
        }
        else
          rowL = maxNoOfRows - 1;

      clipF = (XBool)( rowF > 0 );
      clipL = (XBool)( rowL < ( noOfRows - 1 ));

      for ( inxF = 1; row < rowF; row = row + 1 )
        inxF = inxF + EwGetStringChar( res, inxF );

      if ( clipL )
        for ( inxL = inxF; row < rowL; row = row + 1 )
          inxL = inxL + EwGetStringChar( res, inxL );

      if ( clipF )
      {
        XInt32 len = EwGetStringChar( res, inxF );
        tmp = EwShareString( EwConcatString( EwConcatString( EwLoadString( &_Const0004 ), 
        EwStringMiddle( res, inxF, len )), EwLoadString( &_Const0004 )));
        tmp = EwSetStringChar( tmp, 0, (XChar)( len + 2 ));
        inxF = inxF + len;

        if ( EwGetStringChar( tmp, len ) == 0x000A )
        {
          tmp = EwSetStringChar( tmp, len, 0xFEFF );
          tmp = EwSetStringChar( tmp, len + 1, 0x000A );
        }

        if ( EwGetStringChar( tmp, 2 ) == 0x000A )
        {
          tmp = EwSetStringChar( tmp, 2, 0xFEFF );
          tmp = EwSetStringChar( tmp, 1, 0x000A );
        }
        else
          tmp = EwSetStringChar( tmp, 1, 0xFEFF );
      }

      tmp = EwShareString( EwConcatString( tmp, EwStringMiddle( res, inxF, inxL 
      - inxF )));

      if ( clipL && ( inxL >= inxF ))
      {
        XInt32 len = EwGetStringChar( res, inxL );
        XString tmp2 = EwShareString( EwConcatString( EwConcatString( EwLoadString( 
          &_Const0004 ), EwStringMiddle( res, inxL, len )), EwLoadString( &_Const0004 )));
        tmp2 = EwSetStringChar( tmp2, 0, (XChar)( len + 2 ));
        tmp2 = EwSetStringChar( tmp2, 1, 0xFEFF );

        if ( EwGetStringChar( tmp2, len ) == 0x000A )
        {
          tmp2 = EwSetStringChar( tmp2, len, 0xFEFF );
          tmp2 = EwSetStringChar( tmp2, len + 1, 0x000A );
        }

        if ( EwGetStringChar( tmp2, 2 ) == 0x000A )
        {
          tmp2 = EwSetStringChar( tmp2, 2, 0xFEFF );
          tmp2 = EwSetStringChar( tmp2, 1, 0x000A );
        }
        else
          tmp2 = EwSetStringChar( tmp2, 1, 0xFEFF );

        tmp = EwShareString( EwConcatString( tmp, tmp2 ));
      }

      res = EwShareString( EwConcatCharString((XChar)maxNoOfRows, tmp ));
    }

    row = 0;
    inx = 1;
    maxW = width;
    noOfRows = EwGetStringChar( res, 0 );

    for ( ; row < noOfRows; row = row + 1 )
    {
      XBool rowEllipF = (XBool)( clipF && ( row == 0 ));
      XBool rowEllipL = (XBool)( clipL && ( row == ( noOfRows - 1 )));
      XBool colEllipF = 0;
      XBool colEllipL = 0;
      XBool rtl2 = rtl;
      XInt32 start;
      XInt32 len;
      XInt32 inxF;
      XInt32 inxL;
      XInt32 inxF2;
      XInt32 inxL2;

      if (( rtl && rowEllipF ) && !rowEllipL )
      {
        rowEllipF = 0;
        rowEllipL = 1;
      }
      else
        if (( rtl && rowEllipL ) && !rowEllipF )
        {
          rowEllipL = 0;
          rowEllipF = 1;
        }

      start = inx + 1;
      len = EwGetStringChar( res, inx );
      inxF = start;
      inxL = ( start + len ) - 2;
      inxF2 = -1;
      inxL2 = -1;

      if ( !_this->WrapText && ( ResourcesFont_GetTextAdvance( font, res, start, 
          len - 1 ) > maxW ))
      {
        XSet align2 = align;

        if ((( align2 & ViewsTextAlignmentAlignHorzCenter ) == ViewsTextAlignmentAlignHorzCenter ) 
            && !!( align2 & ( ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignHorzRight )))
          align2 &= ~ViewsTextAlignmentAlignHorzCenter;

        if ((( align2 & ViewsTextAlignmentAlignHorzCenter ) == ViewsTextAlignmentAlignHorzCenter ))
          align2 &= ~( ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignHorzRight );

        if ((( align2 & ViewsTextAlignmentAlignHorzRight ) == ViewsTextAlignmentAlignHorzRight ))
          colEllipF = 1;
        else
          if ((( align2 & ViewsTextAlignmentAlignHorzCenter ) == ViewsTextAlignmentAlignHorzCenter ))
          {
            colEllipF = 1;
            colEllipL = 1;
          }
          else
            colEllipL = 1;
      }

      if ( EwGetStringChar( res, inxF ) == 0x000A )
        inxF = inxF + 1;

      if ( EwGetStringChar( res, inxL ) == 0x000A )
        inxL = inxL - 1;

      while ( colEllipF && ( EwGetStringChar( res, inxF ) == 0xFEFF ))
        inxF = inxF + 1;

      while ( colEllipL && ( EwGetStringChar( res, inxL ) == 0xFEFF ))
        inxL = inxL - 1;

      colEllipF = (XBool)( colEllipF && !rowEllipL );
      colEllipL = (XBool)( colEllipL && !rowEllipF );

      while (((( colEllipF || colEllipL ) || rowEllipF ) || rowEllipL ) && ( inxF 
             < inxL ))
      {
        if (( colEllipF && ( rtl2 || !colEllipL )) || rowEllipF )
        {
          if ( inxF2 > 0 )
            res = EwSetStringChar( res, inxF2, 0xFEFF );

          res = EwSetStringChar( res, inxF, 0x2026 );
          inxF2 = inxF;
          inxF = inxF + 1;
          rtl2 = (XBool)!rtl2;
          rowEllipF = 0;

          if ( ResourcesFont_GetTextAdvance( font, res, start, len - 1 ) <= maxW )
          {
            colEllipF = 0;
            colEllipL = 0;
          }
          else
            colEllipF = (XBool)( colEllipF || !colEllipL );
        }

        if (( colEllipL && ( !rtl2 || !colEllipF )) || rowEllipL )
        {
          if ( inxL2 > 0 )
            res = EwSetStringChar( res, inxL2, 0xFEFF );

          res = EwSetStringChar( res, inxL, 0x2026 );
          inxL2 = inxL;
          inxL = inxL - 1;
          rtl2 = (XBool)!rtl2;
          rowEllipL = 0;

          if ( ResourcesFont_GetTextAdvance( font, res, start, len - 1 ) <= maxW )
          {
            colEllipF = 0;
            colEllipL = 0;
          }
          else
            colEllipL = (XBool)( colEllipL || !colEllipF );
        }
      }

      inx = inx + len;
    }

    _this->textSize = EwNewPoint( ResourcesFont_GetFlowTextAdvance( font, res ), 
    ( EwGetStringChar( res, 0 ) * rh ) - leading );
    _this->flowString = EwShareString( res );
  }

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );

  EwPostSignal( EwNewSlot( _this, ViewsText_preOnUpdateSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.OnSetEnableBidiText()' */
void ViewsText_OnSetEnableBidiText( ViewsText _this, XBool value )
{
  if ( value == _this->EnableBidiText )
    return;

  _this->EnableBidiText = value;
  _this->flowString = 0;
  _this->reparsed = 0;
  EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this ));
}

/* The onset method for the property 'Ellipsis' changes the ellipsis mode and forces 
   an update. */
void ViewsText_OnSetEllipsis( ViewsText _this, XBool value )
{
  if ( value == _this->Ellipsis )
    return;

  _this->Ellipsis = value;

  if ( _this->WrapText || value )
    _this->Super2.viewState = _this->Super2.viewState & ~CoreViewStateFastReshape;
  else
    _this->Super2.viewState = _this->Super2.viewState | CoreViewStateFastReshape;

  _this->flowString = 0;
  _this->reparsed = 0;
  EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.OnSetWrapText()' */
void ViewsText_OnSetWrapText( ViewsText _this, XBool value )
{
  if ( value == _this->WrapText )
    return;

  _this->WrapText = value;

  if ( _this->reparsed )
  {
    _this->flowString = 0;
    _this->reparsed = 0;
    EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this ));
  }

  if ( value || _this->Ellipsis )
    _this->Super2.viewState = _this->Super2.viewState & ~CoreViewStateFastReshape;
  else
    _this->Super2.viewState = _this->Super2.viewState | CoreViewStateFastReshape;
}

/* 'C' function for method : 'Views::Text.OnSetAlignment()' */
void ViewsText_OnSetAlignment( ViewsText _this, XSet value )
{
  if ( value == _this->Alignment )
    return;

  _this->Alignment = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );

  if ( _this->Ellipsis )
  {
    _this->flowString = 0;
    _this->reparsed = 0;
    EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this ));
  }

  if ( _this->reparsed )
    EwPostSignal( EwNewSlot( _this, ViewsText_preOnUpdateSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.OnSetString()' */
void ViewsText_OnSetString( ViewsText _this, XString value )
{
  if ( !EwCompString( value, _this->String ))
    return;

  _this->String = EwShareString( value );
  _this->flowString = 0;
  _this->reparsed = 0;
  EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.OnSetFont()' */
void ViewsText_OnSetFont( ViewsText _this, ResourcesFont value )
{
  if ( value == _this->Font )
    return;

  _this->Font = value;
  _this->flowString = 0;
  _this->reparsed = 0;
  EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.OnSetColor()' */
void ViewsText_OnSetColor( ViewsText _this, XColor value )
{
  if ( !EwCompColor( value, _this->Color ))
    return;

  _this->Color = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible ) 
      == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Text.OnSetVisible()' */
void ViewsText_OnSetVisible( ViewsText _this, XBool value )
{
  if ( value )
    CoreView__ChangeViewState( _this, CoreViewStateVisible, 0 );
  else
    CoreView__ChangeViewState( _this, 0, CoreViewStateVisible );
}

/* The method IsBaseDirectionRTL() returns 'true' if the text specified in @String 
   starts with an RTL (right-to-left) character. This implies the base direction 
   of the entire text paragraph. If the text starts with an LTR (left-to-right) 
   sign or the property @EnableBidiText is 'false', this method returns 'false'. */
XBool ViewsText_IsBaseDirectionRTL( ViewsText _this )
{
  XBool result;
  XHandle bidi;

  if ( !_this->reparsed )
    EwSignal( EwNewSlot( _this, ViewsText_reparseSlot ), ((XObject)_this ));

  if ( _this->bidiContext == 0 )
    return 0;

  result = 0;
  bidi = _this->bidiContext;
  result = EwBidiIsRTL( bidi );
  return result;
}

/* The method IsBidiText() returns 'true' if the text specified in the property 
   @String contains any right-to-left contents or any other Bidi algorithm specific 
   control codes requiring the Bidi processing of this text. Please note, if the 
   property @EnableBidiText is false, the text is not processed by the Bidi algorithm 
   and this method returns 'false'. */
XBool ViewsText_IsBidiText( ViewsText _this )
{
  XBool result;
  XHandle bidi;

  if ( !_this->reparsed )
    EwSignal( EwNewSlot( _this, ViewsText_reparseSlot ), ((XObject)_this ));

  if ( _this->bidiContext == 0 )
    return 0;

  result = 0;
  bidi = _this->bidiContext;
  result = EwBidiIsNeeded( bidi );
  return result;
}

/* The method GetContentArea() returns the position and the size of an area where 
   the view will show the text. This area is expressed in coordinates relative to 
   the top-left corner of the view's @Owner. The method takes in account all properties 
   which do affect the position and the alignment of the text, e.g. @Alignment, 
   @Orientation, @ScrollOffset, @WrapText, etc. */
XRect ViewsText_GetContentArea( ViewsText _this )
{
  XInt32 leading;
  XInt32 rh;
  XSet align;
  XRect bounds;
  XInt32 width;
  XInt32 height;
  XRect rd;
  XRect rs;

  if ( !EwCompString( _this->String, 0 ) || ( _this->Font == 0 ))
    return _Const0003;

  if ( !_this->reparsed )
    EwSignal( EwNewSlot( _this, ViewsText_reparseSlot ), ((XObject)_this ));

  if ( !EwCompString( _this->flowString, 0 ))
    return _Const0003;

  leading = _this->Font->Leading;
  rh = ( _this->Font->Ascent + _this->Font->Descent ) + _this->Font->Leading;

  if ( !EwCompPoint( _this->textSize, _Const0002 ))
    _this->textSize.X = ResourcesFont_GetFlowTextAdvance( _this->Font, _this->flowString );

  _this->textSize.Y = (( EwGetStringChar( _this->flowString, 0 ) * rh ) - leading );
  align = _this->Alignment;
  bounds = _this->Super1.Bounds;
  width = EwGetRectW( bounds );
  height = EwGetRectH( bounds );
  rd = EwNewRect( 0, 0, width, height );
  rs = EwNewRect2Point( rd.Point1, EwMovePointPos( rd.Point1, _this->textSize ));

  if ((( align & ViewsTextAlignmentAlignHorzAuto ) == ViewsTextAlignmentAlignHorzAuto ))
  {
    if ( ViewsText_IsBaseDirectionRTL( _this ))
      align = ( align & ~ViewsTextAlignmentAlignHorzAuto ) | ViewsTextAlignmentAlignHorzRight;
    else
      align = ( align & ~ViewsTextAlignmentAlignHorzAuto ) | ViewsTextAlignmentAlignHorzLeft;
  }

  if ((( align & ViewsTextAlignmentAlignHorzJustified ) == ViewsTextAlignmentAlignHorzJustified ))
  {
    XInt32 maxWidth;
    maxWidth = width;

    if ( maxWidth < 0 )
      maxWidth = 0;

    if ( maxWidth > EwGetRectW( rs ))
      rs = EwSetRectW( rs, maxWidth );
  }

  if (( !!( align & ( ViewsTextAlignmentAlignVertCenter | ViewsTextAlignmentAlignVertCenterBaseline )) 
      && !!( align & ( ViewsTextAlignmentAlignVertBottom | ViewsTextAlignmentAlignVertTop ))) 
      && ( EwGetRectH( rs ) > EwGetRectH( rd )))
    align &= ~( ViewsTextAlignmentAlignVertCenter | ViewsTextAlignmentAlignVertCenterBaseline );

  if ( !!( align & ( ViewsTextAlignmentAlignVertCenter | ViewsTextAlignmentAlignVertCenterBaseline )))
    align &= ~( ViewsTextAlignmentAlignVertBottom | ViewsTextAlignmentAlignVertTop );

  if (((( align & ViewsTextAlignmentAlignHorzCenter ) == ViewsTextAlignmentAlignHorzCenter ) 
      && !!( align & ( ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignHorzRight ))) 
      && ( EwGetRectW( rs ) > EwGetRectW( rd )))
    align &= ~ViewsTextAlignmentAlignHorzCenter;

  if ((( align & ViewsTextAlignmentAlignHorzCenter ) == ViewsTextAlignmentAlignHorzCenter ))
    align &= ~( ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignHorzRight );

  if ( EwGetRectW( rs ) != EwGetRectW( rd ))
  {
    if ((( align & ViewsTextAlignmentAlignHorzRight ) == ViewsTextAlignmentAlignHorzRight ))
      rs = EwSetRectX( rs, rd.Point2.X - EwGetRectW( rs ));
    else
      if ((( align & ViewsTextAlignmentAlignHorzCenter ) == ViewsTextAlignmentAlignHorzCenter ))
        rs = EwSetRectX( rs, ( rd.Point1.X + ( EwGetRectW( rd ) / 2 )) - ( EwGetRectW( 
        rs ) / 2 ));
  }

  if ( EwGetRectH( rs ) != EwGetRectH( rd ))
  {
    if ((( align & ViewsTextAlignmentAlignVertBottom ) == ViewsTextAlignmentAlignVertBottom ))
      rs = EwSetRectY( rs, rd.Point2.Y - EwGetRectH( rs ));
    else
      if ((( align & ViewsTextAlignmentAlignVertCenterBaseline ) == ViewsTextAlignmentAlignVertCenterBaseline ))
        rs = EwSetRectY( rs, (( rd.Point1.Y + ( EwGetRectH( rd ) / 2 )) - ( EwGetRectH( 
        rs ) / 2 )) + (( _this->Font->Descent - _this->Font->Ascent ) / 2 ));
      else
        if ((( align & ViewsTextAlignmentAlignVertCenter ) == ViewsTextAlignmentAlignVertCenter ))
          rs = EwSetRectY( rs, ( rd.Point1.Y + ( EwGetRectH( rd ) / 2 )) - ( EwGetRectH( 
          rs ) / 2 ));
  }

  rs = EwMoveRectPos( rs, bounds.Point1 );
  return rs;
}

/* Variants derived from the class : 'Views::Text' */
EW_DEFINE_CLASS_VARIANTS( ViewsText )
EW_END_OF_CLASS_VARIANTS( ViewsText )

/* Virtual Method Table (VMT) for the class : 'Views::Text' */
EW_DEFINE_CLASS( ViewsText, CoreRectView, Font, Font, flowString, flowString, flowString, 
                 bidiContext, "Views::Text" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  ViewsText_Draw,
  CoreView_GetClipping,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreView_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreView_ChangeViewState,
  ViewsText_OnSetBounds,
EW_END_OF_CLASS( ViewsText )

/* Embedded Wizard */
