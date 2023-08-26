// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_math_FlxAngle
#include <flixel/math/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxBasePoint
#include <flixel/util/FlxPool_flixel_math_FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxDirectionFlags_FlxDirectionFlags_Impl_
#include <flixel/util/_FlxDirectionFlags/FlxDirectionFlags_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_68_radiansFromOrigin,"flixel.math.FlxAngle","radiansFromOrigin",0xe1075149,"flixel.math.FlxAngle.radiansFromOrigin","flixel/math/FlxAngle.hx",68,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_79_degreesFromOrigin,"flixel.math.FlxAngle","degreesFromOrigin",0x32c462be,"flixel.math.FlxAngle.degreesFromOrigin","flixel/math/FlxAngle.hx",79,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_91_angleFromOrigin,"flixel.math.FlxAngle","angleFromOrigin",0xeb70822a,"flixel.math.FlxAngle.angleFromOrigin","flixel/math/FlxAngle.hx",91,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_107_wrapAngle,"flixel.math.FlxAngle","wrapAngle",0xae3043f0,"flixel.math.FlxAngle.wrapAngle","flixel/math/FlxAngle.hx",107,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_129_asDegrees,"flixel.math.FlxAngle","asDegrees",0x8ea59f1c,"flixel.math.FlxAngle.asDegrees","flixel/math/FlxAngle.hx",129,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_141_asRadians,"flixel.math.FlxAngle","asRadians",0x7b3b01e7,"flixel.math.FlxAngle.asRadians","flixel/math/FlxAngle.hx",141,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_153_angleBetween,"flixel.math.FlxAngle","angleBetween",0x83e3464e,"flixel.math.FlxAngle.angleBetween","flixel/math/FlxAngle.hx",153,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_170_degreesBetween,"flixel.math.FlxAngle","degreesBetween",0xe67e013a,"flixel.math.FlxAngle.degreesBetween","flixel/math/FlxAngle.hx",170,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_183_radiansBetween,"flixel.math.FlxAngle","radiansBetween",0x91395dcf,"flixel.math.FlxAngle.radiansBetween","flixel/math/FlxAngle.hx",183,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_196_angleBetweenPoint,"flixel.math.FlxAngle","angleBetweenPoint",0x0a124322,"flixel.math.FlxAngle.angleBetweenPoint","flixel/math/FlxAngle.hx",196,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_216_degreesBetweenPoint,"flixel.math.FlxAngle","degreesBetweenPoint",0xb68e70b6,"flixel.math.FlxAngle.degreesBetweenPoint","flixel/math/FlxAngle.hx",216,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_230_radiansBetweenPoint,"flixel.math.FlxAngle","radiansBetweenPoint",0xae525801,"flixel.math.FlxAngle.radiansBetweenPoint","flixel/math/FlxAngle.hx",230,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_243_angleBetweenMouse,"flixel.math.FlxAngle","angleBetweenMouse",0x4fe7a4f7,"flixel.math.FlxAngle.angleBetweenMouse","flixel/math/FlxAngle.hx",243,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_267_degreesBetweenMouse,"flixel.math.FlxAngle","degreesBetweenMouse",0xfc63d28b,"flixel.math.FlxAngle.degreesBetweenMouse","flixel/math/FlxAngle.hx",267,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_280_radiansBetweenMouse,"flixel.math.FlxAngle","radiansBetweenMouse",0xf427b9d6,"flixel.math.FlxAngle.radiansBetweenMouse","flixel/math/FlxAngle.hx",280,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_295_angleBetweenTouch,"flixel.math.FlxAngle","angleBetweenTouch",0x57b5a691,"flixel.math.FlxAngle.angleBetweenTouch","flixel/math/FlxAngle.hx",295,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_318_degreesBetweenTouch,"flixel.math.FlxAngle","degreesBetweenTouch",0x0431d425,"flixel.math.FlxAngle.degreesBetweenTouch","flixel/math/FlxAngle.hx",318,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_332_radiansBetweenTouch,"flixel.math.FlxAngle","radiansBetweenTouch",0xfbf5bb70,"flixel.math.FlxAngle.radiansBetweenTouch","flixel/math/FlxAngle.hx",332,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_345_angleFromFacing,"flixel.math.FlxAngle","angleFromFacing",0x8474a75e,"flixel.math.FlxAngle.angleFromFacing","flixel/math/FlxAngle.hx",345,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_360_getCartesianCoords,"flixel.math.FlxAngle","getCartesianCoords",0x688d1f29,"flixel.math.FlxAngle.getCartesianCoords","flixel/math/FlxAngle.hx",360,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_380_getPolarCoords,"flixel.math.FlxAngle","getPolarCoords",0xf74e15df,"flixel.math.FlxAngle.getPolarCoords","flixel/math/FlxAngle.hx",380,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_392_get_TO_DEG,"flixel.math.FlxAngle","get_TO_DEG",0x36e6a544,"flixel.math.FlxAngle.get_TO_DEG","flixel/math/FlxAngle.hx",392,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_397_get_TO_RAD,"flixel.math.FlxAngle","get_TO_RAD",0x36f14153,"flixel.math.FlxAngle.get_TO_RAD","flixel/math/FlxAngle.hx",397,0x32e99189)
namespace flixel{
namespace math{

void FlxAngle_obj::__construct() { }

Dynamic FlxAngle_obj::__CreateEmpty() { return new FlxAngle_obj; }

void *FlxAngle_obj::_hx_vtable = 0;

Dynamic FlxAngle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAngle_obj > _hx_result = new FlxAngle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxAngle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x356118e9;
}

Float FlxAngle_obj::radiansFromOrigin(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_68_radiansFromOrigin)
HXDLIN(  68)		return ::Math_obj::atan2(y,x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,radiansFromOrigin,return )

Float FlxAngle_obj::degreesFromOrigin(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_79_degreesFromOrigin)
HXDLIN(  79)		return (::Math_obj::atan2(y,x) * (( (Float)(180) ) / ::Math_obj::PI));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,degreesFromOrigin,return )

Float FlxAngle_obj::angleFromOrigin(Float x,Float y,::hx::Null< bool >  __o_asDegrees){
            		bool asDegrees = __o_asDegrees.Default(false);
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_91_angleFromOrigin)
HXDLIN(  91)		if (asDegrees) {
HXLINE(  92)			return (::Math_obj::atan2(y,x) * (( (Float)(180) ) / ::Math_obj::PI));
            		}
            		else {
HXLINE(  94)			return ::Math_obj::atan2(y,x);
            		}
HXLINE(  91)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleFromOrigin,return )

Float FlxAngle_obj::wrapAngle(Float angle){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_107_wrapAngle)
HXLINE( 108)		if ((angle > 180)) {
HXLINE( 110)			angle = ::flixel::math::FlxAngle_obj::wrapAngle((angle - ( (Float)(360) )));
            		}
            		else {
HXLINE( 112)			if ((angle < -180)) {
HXLINE( 114)				angle = ::flixel::math::FlxAngle_obj::wrapAngle((angle + 360));
            			}
            		}
HXLINE( 117)		return angle;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,wrapAngle,return )

Float FlxAngle_obj::asDegrees(Float radians){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_129_asDegrees)
HXDLIN( 129)		return (radians * (( (Float)(180) ) / ::Math_obj::PI));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,asDegrees,return )

Float FlxAngle_obj::asRadians(Float degrees){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_141_asRadians)
HXDLIN( 141)		return (degrees * (::Math_obj::PI / ( (Float)(180) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,asRadians,return )

Float FlxAngle_obj::angleBetween( ::flixel::FlxSprite SpriteA, ::flixel::FlxSprite SpriteB,::hx::Null< bool >  __o_AsDegrees){
            		bool AsDegrees = __o_AsDegrees.Default(false);
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_153_angleBetween)
HXLINE( 154)		Float dx = ((SpriteB->x + SpriteB->origin->x) - (SpriteA->x + SpriteA->origin->x));
HXLINE( 155)		Float dy = ((SpriteB->y + SpriteB->origin->y) - (SpriteA->y + SpriteA->origin->y));
HXLINE( 157)		if (AsDegrees) {
HXLINE( 157)			return (::Math_obj::atan2(dy,dx) * (( (Float)(180) ) / ::Math_obj::PI));
            		}
            		else {
HXLINE( 157)			return ::Math_obj::atan2(dy,dx);
            		}
HXDLIN( 157)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetween,return )

Float FlxAngle_obj::degreesBetween( ::flixel::FlxSprite SpriteA, ::flixel::FlxSprite SpriteB){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_170_degreesBetween)
HXDLIN( 170)		return ::flixel::math::FlxAngle_obj::angleBetween(SpriteA,SpriteB,true);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,degreesBetween,return )

Float FlxAngle_obj::radiansBetween( ::flixel::FlxSprite SpriteA, ::flixel::FlxSprite SpriteB){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_183_radiansBetween)
HXDLIN( 183)		return ::flixel::math::FlxAngle_obj::angleBetween(SpriteA,SpriteB,false);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,radiansBetween,return )

Float FlxAngle_obj::angleBetweenPoint( ::flixel::FlxSprite Sprite, ::flixel::math::FlxBasePoint Target,::hx::Null< bool >  __o_AsDegrees){
            		bool AsDegrees = __o_AsDegrees.Default(false);
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_196_angleBetweenPoint)
HXLINE( 197)		Float dx = (Target->x - (Sprite->x + Sprite->origin->x));
HXLINE( 198)		Float dy = (Target->y - (Sprite->y + Sprite->origin->y));
HXLINE( 200)		if (Target->_weak) {
HXLINE( 200)			Target->put();
            		}
HXLINE( 202)		if (AsDegrees) {
HXLINE( 202)			return (::Math_obj::atan2(dy,dx) * (( (Float)(180) ) / ::Math_obj::PI));
            		}
            		else {
HXLINE( 202)			return ::Math_obj::atan2(dy,dx);
            		}
HXDLIN( 202)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetweenPoint,return )

Float FlxAngle_obj::degreesBetweenPoint( ::flixel::FlxSprite Sprite, ::flixel::math::FlxBasePoint Target){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_216_degreesBetweenPoint)
HXDLIN( 216)		return ::flixel::math::FlxAngle_obj::angleBetweenPoint(Sprite,Target,true);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,degreesBetweenPoint,return )

Float FlxAngle_obj::radiansBetweenPoint( ::flixel::FlxSprite Sprite, ::flixel::math::FlxBasePoint Target){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_230_radiansBetweenPoint)
HXDLIN( 230)		return ::flixel::math::FlxAngle_obj::angleBetweenPoint(Sprite,Target,false);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,radiansBetweenPoint,return )

Float FlxAngle_obj::angleBetweenMouse( ::flixel::FlxObject Object,::hx::Null< bool >  __o_AsDegrees){
            		bool AsDegrees = __o_AsDegrees.Default(false);
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_243_angleBetweenMouse)
HXLINE( 244)		if (::hx::IsNull( Object )) {
HXLINE( 245)			return ( (Float)(0) );
            		}
HXLINE( 247)		 ::flixel::math::FlxBasePoint p = Object->getScreenPosition(null(),null());
HXLINE( 249)		Float dx = (( (Float)(::flixel::FlxG_obj::mouse->screenX) ) - p->x);
HXLINE( 250)		Float dy = (( (Float)(::flixel::FlxG_obj::mouse->screenY) ) - p->y);
HXLINE( 252)		p->put();
HXLINE( 254)		if (AsDegrees) {
HXLINE( 254)			return (::Math_obj::atan2(dy,dx) * (( (Float)(180) ) / ::Math_obj::PI));
            		}
            		else {
HXLINE( 254)			return ::Math_obj::atan2(dy,dx);
            		}
HXDLIN( 254)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,angleBetweenMouse,return )

Float FlxAngle_obj::degreesBetweenMouse( ::flixel::FlxObject Object){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_267_degreesBetweenMouse)
HXDLIN( 267)		return ::flixel::math::FlxAngle_obj::angleBetweenMouse(Object,true);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,degreesBetweenMouse,return )

Float FlxAngle_obj::radiansBetweenMouse( ::flixel::FlxObject Object){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_280_radiansBetweenMouse)
HXDLIN( 280)		return ::flixel::math::FlxAngle_obj::angleBetweenMouse(Object,false);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,radiansBetweenMouse,return )

Float FlxAngle_obj::angleBetweenTouch( ::flixel::FlxObject Object, ::flixel::input::touch::FlxTouch Touch,::hx::Null< bool >  __o_AsDegrees){
            		bool AsDegrees = __o_AsDegrees.Default(false);
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_295_angleBetweenTouch)
HXLINE( 297)		 ::flixel::math::FlxBasePoint p = Object->getScreenPosition(null(),null());
HXLINE( 299)		Float dx = (( (Float)(Touch->screenX) ) - p->x);
HXLINE( 300)		Float dy = (( (Float)(Touch->screenY) ) - p->y);
HXLINE( 302)		p->put();
HXLINE( 304)		if (AsDegrees) {
HXLINE( 304)			return (::Math_obj::atan2(dy,dx) * (( (Float)(180) ) / ::Math_obj::PI));
            		}
            		else {
HXLINE( 304)			return ::Math_obj::atan2(dy,dx);
            		}
HXDLIN( 304)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetweenTouch,return )

Float FlxAngle_obj::degreesBetweenTouch( ::flixel::FlxObject Object, ::flixel::input::touch::FlxTouch Touch){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_318_degreesBetweenTouch)
HXDLIN( 318)		return ::flixel::math::FlxAngle_obj::angleBetweenTouch(Object,Touch,true);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,degreesBetweenTouch,return )

Float FlxAngle_obj::radiansBetweenTouch( ::flixel::FlxObject Object, ::flixel::input::touch::FlxTouch Touch){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_332_radiansBetweenTouch)
HXDLIN( 332)		return ::flixel::math::FlxAngle_obj::angleBetweenTouch(Object,Touch,false);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,radiansBetweenTouch,return )

Float FlxAngle_obj::angleFromFacing(int Facing,::hx::Null< bool >  __o_AsDegrees){
            		bool AsDegrees = __o_AsDegrees.Default(false);
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_345_angleFromFacing)
HXLINE( 346)		Float degrees = ::flixel::util::_FlxDirectionFlags::FlxDirectionFlags_Impl__obj::get_degrees(Facing);
HXLINE( 347)		if (AsDegrees) {
HXLINE( 347)			return degrees;
            		}
            		else {
HXLINE( 347)			return (degrees * (::Math_obj::PI / ( (Float)(180) )));
            		}
HXDLIN( 347)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,angleFromFacing,return )

 ::flixel::math::FlxBasePoint FlxAngle_obj::getCartesianCoords(Float Radius,Float Angle, ::flixel::math::FlxBasePoint point){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_360_getCartesianCoords)
HXLINE( 361)		 ::flixel::math::FlxBasePoint p = point;
HXLINE( 362)		if (::hx::IsNull( p )) {
HXLINE( 363)			 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 363)			point1->_inPool = false;
HXDLIN( 363)			p = point1;
            		}
HXLINE( 365)		p->set_x((Radius * ::Math_obj::cos((Angle * (::Math_obj::PI / ( (Float)(180) ))))));
HXLINE( 366)		p->set_y((Radius * ::Math_obj::sin((Angle * (::Math_obj::PI / ( (Float)(180) ))))));
HXLINE( 367)		return p;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,getCartesianCoords,return )

 ::flixel::math::FlxBasePoint FlxAngle_obj::getPolarCoords(Float X,Float Y, ::flixel::math::FlxBasePoint point){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_380_getPolarCoords)
HXLINE( 381)		 ::flixel::math::FlxBasePoint p = point;
HXLINE( 382)		if (::hx::IsNull( p )) {
HXLINE( 383)			 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 383)			point1->_inPool = false;
HXDLIN( 383)			p = point1;
            		}
HXLINE( 385)		p->set_x(::Math_obj::sqrt(((X * X) + (Y * Y))));
HXLINE( 386)		p->set_y((::Math_obj::atan2(Y,X) * (( (Float)(180) ) / ::Math_obj::PI)));
HXLINE( 387)		return p;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,getPolarCoords,return )

Float FlxAngle_obj::get_TO_DEG(){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_392_get_TO_DEG)
HXDLIN( 392)		return (( (Float)(180) ) / ::Math_obj::PI);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAngle_obj,get_TO_DEG,return )

Float FlxAngle_obj::get_TO_RAD(){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_397_get_TO_RAD)
HXDLIN( 397)		return (::Math_obj::PI / ( (Float)(180) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAngle_obj,get_TO_RAD,return )


FlxAngle_obj::FlxAngle_obj()
{
}

bool FlxAngle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"TO_DEG") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_TO_DEG() ); return true; } }
		if (HX_FIELD_EQ(inName,"TO_RAD") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_TO_RAD() ); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"wrapAngle") ) { outValue = wrapAngle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"asDegrees") ) { outValue = asDegrees_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"asRadians") ) { outValue = asRadians_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_TO_DEG") ) { outValue = get_TO_DEG_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_TO_RAD") ) { outValue = get_TO_RAD_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"angleBetween") ) { outValue = angleBetween_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"degreesBetween") ) { outValue = degreesBetween_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"radiansBetween") ) { outValue = radiansBetween_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPolarCoords") ) { outValue = getPolarCoords_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angleFromOrigin") ) { outValue = angleFromOrigin_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"angleFromFacing") ) { outValue = angleFromFacing_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"radiansFromOrigin") ) { outValue = radiansFromOrigin_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"degreesFromOrigin") ) { outValue = degreesFromOrigin_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"angleBetweenPoint") ) { outValue = angleBetweenPoint_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"angleBetweenMouse") ) { outValue = angleBetweenMouse_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"angleBetweenTouch") ) { outValue = angleBetweenTouch_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getCartesianCoords") ) { outValue = getCartesianCoords_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"degreesBetweenPoint") ) { outValue = degreesBetweenPoint_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"radiansBetweenPoint") ) { outValue = radiansBetweenPoint_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"degreesBetweenMouse") ) { outValue = degreesBetweenMouse_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"radiansBetweenMouse") ) { outValue = radiansBetweenMouse_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"degreesBetweenTouch") ) { outValue = degreesBetweenTouch_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"radiansBetweenTouch") ) { outValue = radiansBetweenTouch_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxAngle_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxAngle_obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlxAngle_obj::__mClass;

static ::String FlxAngle_obj_sStaticFields[] = {
	HX_("radiansFromOrigin",02,ac,45,ec),
	HX_("degreesFromOrigin",77,bd,02,3e),
	HX_("angleFromOrigin",a3,8c,bc,43),
	HX_("wrapAngle",a9,bd,58,c6),
	HX_("asDegrees",d5,18,ce,a6),
	HX_("asRadians",a0,7b,63,93),
	HX_("angleBetween",35,e6,d4,69),
	HX_("degreesBetween",e1,a8,04,64),
	HX_("radiansBetween",76,05,c0,0e),
	HX_("angleBetweenPoint",db,9d,50,15),
	HX_("degreesBetweenPoint",af,ab,23,d2),
	HX_("radiansBetweenPoint",fa,92,e7,c9),
	HX_("angleBetweenMouse",b0,ff,25,5b),
	HX_("degreesBetweenMouse",84,0d,f9,17),
	HX_("radiansBetweenMouse",cf,f4,bc,0f),
	HX_("angleBetweenTouch",4a,01,f4,62),
	HX_("degreesBetweenTouch",1e,0f,c7,1f),
	HX_("radiansBetweenTouch",69,f6,8a,17),
	HX_("angleFromFacing",d7,b1,c0,dc),
	HX_("getCartesianCoords",50,26,de,33),
	HX_("getPolarCoords",86,bd,d4,74),
	HX_("get_TO_DEG",6b,ad,28,42),
	HX_("get_TO_RAD",7a,49,33,42),
	::String(null())
};

void FlxAngle_obj::__register()
{
	FlxAngle_obj _hx_dummy;
	FlxAngle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.math.FlxAngle",f5,97,d6,2c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAngle_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxAngle_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxAngle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAngle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAngle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace math