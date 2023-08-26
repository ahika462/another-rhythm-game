// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleUtil
#include <flixel/system/debug/console/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a994ee380c23f681_103_getFields,"flixel.system.debug.console.ConsoleUtil","getFields",0x604f9dfb,"flixel.system.debug.console.ConsoleUtil.getFields","flixel/system/debug/console/ConsoleUtil.hx",103,0x2e8bcde6)
HX_LOCAL_STACK_FRAME(_hx_pos_a994ee380c23f681_134_sortFields,"flixel.system.debug.console.ConsoleUtil","sortFields",0x773f00ab,"flixel.system.debug.console.ConsoleUtil.sortFields","flixel/system/debug/console/ConsoleUtil.hx",134,0x2e8bcde6)
HX_LOCAL_STACK_FRAME(_hx_pos_a994ee380c23f681_160_log,"flixel.system.debug.console.ConsoleUtil","log",0x2bebd9d0,"flixel.system.debug.console.ConsoleUtil.log","flixel/system/debug/console/ConsoleUtil.hx",160,0x2e8bcde6)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace console{

void ConsoleUtil_obj::__construct() { }

Dynamic ConsoleUtil_obj::__CreateEmpty() { return new ConsoleUtil_obj; }

void *ConsoleUtil_obj::_hx_vtable = 0;

Dynamic ConsoleUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ConsoleUtil_obj > _hx_result = new ConsoleUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ConsoleUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x31204b4a;
}

::Array< ::String > ConsoleUtil_obj::getFields( ::Dynamic Object){
            	HX_STACKFRAME(&_hx_pos_a994ee380c23f681_103_getFields)
HXLINE( 104)		::Array< ::String > fields = ::Array_obj< ::String >::__new(0);
HXLINE( 105)		if (::Std_obj::isOfType(Object,::hx::ClassOf< ::hx::Class >())) {
HXLINE( 106)			fields = ::Type_obj::getClassFields(Object);
            		}
            		else {
HXLINE( 107)			if (::Std_obj::isOfType(Object,::hx::ClassOf< ::Enum >())) {
HXLINE( 108)				fields = ::Type_obj::getEnumConstructs(Object);
            			}
            			else {
HXLINE( 109)				if (::Reflect_obj::isObject(Object)) {
HXLINE( 110)					fields = ::Type_obj::getInstanceFields(::Type_obj::getClass(Object));
            				}
            			}
            		}
HXLINE( 113)		fields->remove(HX_("__constructs__",bc,a9,85,55));
HXLINE( 115)		::Array< ::String > filteredFields = ::Array_obj< ::String >::__new(0);
HXLINE( 116)		{
HXLINE( 116)			int _g = 0;
HXDLIN( 116)			while((_g < fields->length)){
HXLINE( 116)				::String field = fields->__get(_g);
HXDLIN( 116)				_g = (_g + 1);
HXLINE( 119)				bool _hx_tmp;
HXDLIN( 119)				if (!(::StringTools_obj::startsWith(field,HX_("get_",09,03,62,44)))) {
HXLINE( 119)					_hx_tmp = ::StringTools_obj::startsWith(field,HX_("set_",7d,92,50,4c));
            				}
            				else {
HXLINE( 119)					_hx_tmp = true;
            				}
HXDLIN( 119)				if (_hx_tmp) {
HXLINE( 121)					::String name = field.substr(4,null());
HXLINE( 123)					bool _hx_tmp1;
HXDLIN( 123)					if (!(fields->contains(name))) {
HXLINE( 123)						_hx_tmp1 = !(filteredFields->contains(name));
            					}
            					else {
HXLINE( 123)						_hx_tmp1 = false;
            					}
HXDLIN( 123)					if (_hx_tmp1) {
HXLINE( 124)						filteredFields->push(name);
            					}
            				}
            				else {
HXLINE( 127)					filteredFields->push(field);
            				}
            			}
            		}
HXLINE( 130)		return ::flixel::_hx_system::debug::console::ConsoleUtil_obj::sortFields(filteredFields);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,getFields,return )

::Array< ::String > ConsoleUtil_obj::sortFields(::Array< ::String > fields){
            	HX_STACKFRAME(&_hx_pos_a994ee380c23f681_134_sortFields)
HXLINE( 135)		::Array< ::String > underscoreList = ::Array_obj< ::String >::__new(0);
HXLINE( 137)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN( 137)		{
HXLINE( 137)			int _g1 = 0;
HXDLIN( 137)			::Array< ::String > _g2 = fields;
HXDLIN( 137)			while((_g1 < _g2->length)){
HXLINE( 137)				::String v = _g2->__get(_g1);
HXDLIN( 137)				_g1 = (_g1 + 1);
HXLINE( 139)				bool fields1;
HXDLIN( 139)				if (::StringTools_obj::startsWith(v,HX_("_",5f,00,00,00))) {
HXLINE( 141)					underscoreList->push(v);
HXLINE( 139)					fields1 = false;
            				}
            				else {
HXLINE( 139)					fields1 = true;
            				}
HXLINE( 137)				if (fields1) {
HXLINE( 137)					_g->push(v);
            				}
            			}
            		}
HXDLIN( 137)		fields = _g;
HXLINE( 147)		::flixel::util::FlxStringUtil_obj::sortAlphabetically(fields);
HXLINE( 148)		::flixel::util::FlxStringUtil_obj::sortAlphabetically(underscoreList);
HXLINE( 150)		return fields->concat(underscoreList);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,sortFields,return )

void ConsoleUtil_obj::log( ::Dynamic Text){
            	HX_STACKFRAME(&_hx_pos_a994ee380c23f681_160_log)
HXDLIN( 160)		::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,Text),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,log,(void))


ConsoleUtil_obj::ConsoleUtil_obj()
{
}

bool ConsoleUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { outValue = log_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getFields") ) { outValue = getFields_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sortFields") ) { outValue = sortFields_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ConsoleUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ConsoleUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ConsoleUtil_obj::__mClass;

static ::String ConsoleUtil_obj_sStaticFields[] = {
	HX_("getFields",af,17,e5,fc),
	HX_("sortFields",77,04,74,dd),
	HX_("log",84,54,52,00),
	::String(null())
};

void ConsoleUtil_obj::__register()
{
	ConsoleUtil_obj _hx_dummy;
	ConsoleUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.console.ConsoleUtil",ba,4f,d6,a9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ConsoleUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ConsoleUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ConsoleUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConsoleUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConsoleUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console