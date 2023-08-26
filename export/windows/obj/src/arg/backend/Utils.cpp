// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_arg_backend_Utils
#include <arg/backend/Utils.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_22c8a0edb936b99d_18_dominantColor,"arg.backend.Utils","dominantColor",0xbfb03054,"arg.backend.Utils.dominantColor","arg/backend/Utils.hx",18,0x15128101)
HX_LOCAL_STACK_FRAME(_hx_pos_22c8a0edb936b99d_48_changeWindowColor,"arg.backend.Utils","changeWindowColor",0xf7e75db4,"arg.backend.Utils.changeWindowColor","arg/backend/Utils.hx",48,0x15128101)

    #include <dwmapi.h>

namespace arg{
namespace backend{

void Utils_obj::__construct() { }

Dynamic Utils_obj::__CreateEmpty() { return new Utils_obj; }

void *Utils_obj::_hx_vtable = 0;

Dynamic Utils_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Utils_obj > _hx_result = new Utils_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Utils_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x11d13013;
}

int Utils_obj::dominantColor( ::openfl::display::BitmapData bitmap){
            	HX_GC_STACKFRAME(&_hx_pos_22c8a0edb936b99d_18_dominantColor)
HXLINE(  19)		 ::haxe::ds::IntMap countByColor =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  20)		{
HXLINE(  20)			int _g = 0;
HXDLIN(  20)			int _g1 = bitmap->width;
HXDLIN(  20)			while((_g < _g1)){
HXLINE(  20)				_g = (_g + 1);
HXDLIN(  20)				int x = (_g - 1);
HXLINE(  21)				{
HXLINE(  21)					int _g2 = 0;
HXDLIN(  21)					int _g3 = bitmap->height;
HXDLIN(  21)					while((_g2 < _g3)){
HXLINE(  21)						_g2 = (_g2 + 1);
HXDLIN(  21)						int y = (_g2 - 1);
HXLINE(  22)						int colorOfThisPixel = bitmap->getPixel32(x,y);
HXLINE(  23)						if ((colorOfThisPixel != 0)) {
HXLINE(  24)							if (countByColor->exists(colorOfThisPixel)) {
HXLINE(  25)								int v = (countByColor->get(colorOfThisPixel) + 1);
HXDLIN(  25)								countByColor->set(colorOfThisPixel,v);
            							}
            							else {
HXLINE(  26)								if (::hx::IsNotEq( countByColor->get(colorOfThisPixel),-13520687 )) {
HXLINE(  27)									countByColor->set(colorOfThisPixel,1);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  31)		int maxCount = 0;
HXLINE(  32)		int maxKey = 0;
HXLINE(  33)		countByColor->set(-16777216,0);
HXLINE(  34)		{
HXLINE(  34)			 ::Dynamic key = countByColor->keys();
HXDLIN(  34)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  34)				int key1 = ( (int)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  35)				if (::hx::IsGreaterEq( countByColor->get(key1),maxCount )) {
HXLINE(  36)					maxCount = ( (int)(countByColor->get(key1)) );
HXLINE(  37)					maxKey = key1;
            				}
            			}
            		}
HXLINE(  40)		return maxKey;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,dominantColor,return )

void Utils_obj::changeWindowColor(int color){
            	HX_STACKFRAME(&_hx_pos_22c8a0edb936b99d_48_changeWindowColor)
            	
        DwmSetWindowAttribute(GetActiveWindow(), DWMWA_BORDER_COLOR, &color, sizeof(color));
    

            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,changeWindowColor,(void))


Utils_obj::Utils_obj()
{
}

bool Utils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"dominantColor") ) { outValue = dominantColor_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"changeWindowColor") ) { outValue = changeWindowColor_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Utils_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Utils_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Utils_obj::__mClass;

static ::String Utils_obj_sStaticFields[] = {
	HX_("dominantColor",e3,82,71,eb),
	HX_("changeWindowColor",c3,a3,06,ca),
	::String(null())
};

void Utils_obj::__register()
{
	Utils_obj _hx_dummy;
	Utils_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("arg.backend.Utils",1f,da,57,be);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Utils_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Utils_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Utils_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Utils_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Utils_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace arg
} // end namespace backend