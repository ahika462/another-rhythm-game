// Generated by Haxe 4.3.1
#ifndef INCLUDED_arg_backend_Paths
#define INCLUDED_arg_backend_Paths

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(arg,backend,Paths)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace arg{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES Paths_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Paths_obj OBJ_;
		Paths_obj();

	public:
		enum { _hx_ClassId = 0x24499110 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="arg.backend.Paths")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"arg.backend.Paths"); }

		inline static ::hx::ObjectPtr< Paths_obj > __new() {
			::hx::ObjectPtr< Paths_obj > __this = new Paths_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Paths_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Paths_obj *__this = (Paths_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Paths_obj), false, "arg.backend.Paths"));
			*(void **)__this = Paths_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Paths_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Paths",0e,7b,84,50); }

		static  ::openfl::display::BitmapData image(::String name);
		static ::Dynamic image_dyn();

		static ::String text(::String name);
		static ::Dynamic text_dyn();

};

} // end namespace arg
} // end namespace backend

#endif /* INCLUDED_arg_backend_Paths */ 