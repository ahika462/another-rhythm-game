// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_arg_backend_Paths
#include <arg/backend/Paths.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4b78ded6d7edc52b_8_image,"arg.backend.Paths","image",0x6d5b3089,"arg.backend.Paths.image","arg/backend/Paths.hx",8,0xf9511c24)
HX_LOCAL_STACK_FRAME(_hx_pos_4b78ded6d7edc52b_12_text,"arg.backend.Paths","text",0x46e07b3f,"arg.backend.Paths.text","arg/backend/Paths.hx",12,0xf9511c24)
namespace arg{
namespace backend{

void Paths_obj::__construct() { }

Dynamic Paths_obj::__CreateEmpty() { return new Paths_obj; }

void *Paths_obj::_hx_vtable = 0;

Dynamic Paths_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Paths_obj > _hx_result = new Paths_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Paths_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x24499110;
}

 ::openfl::display::BitmapData Paths_obj::image(::String name){
            	HX_STACKFRAME(&_hx_pos_4b78ded6d7edc52b_8_image)
HXDLIN(   8)		return ::openfl::utils::Assets_obj::getBitmapData(((HX_("assets/images/",ab,47,cb,9f) + name) + HX_(".png",3b,2d,bd,1e)),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,image,return )

::String Paths_obj::text(::String name){
            	HX_STACKFRAME(&_hx_pos_4b78ded6d7edc52b_12_text)
HXDLIN(  12)		return ::openfl::utils::Assets_obj::getText((HX_("assets/",4c,2a,dc,36) + name));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,text,return )


Paths_obj::Paths_obj()
{
}

bool Paths_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { outValue = text_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { outValue = image_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Paths_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Paths_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Paths_obj::__mClass;

static ::String Paths_obj_sStaticFields[] = {
	HX_("image",5b,1f,69,bd),
	HX_("text",ad,cc,f9,4c),
	::String(null())
};

void Paths_obj::__register()
{
	Paths_obj _hx_dummy;
	Paths_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("arg.backend.Paths",1c,3b,d0,d0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Paths_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Paths_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Paths_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Paths_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Paths_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace arg
} // end namespace backend