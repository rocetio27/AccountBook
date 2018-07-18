// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/fuse_modules/bolav/fuse-sqlite/SQLiteImpl.Android.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.SQLiteImpl.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Bolav.ForeignHelpers.-69acc299.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.String.h>
#include <Uno/JNIHelper.h>

namespace g{

// public static extern class SQLiteImpl :9
// {
static void SQLiteImpl_build(uType* type)
{
}

uClassType* SQLiteImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("SQLiteImpl", options);
    type->fp_build_ = SQLiteImpl_build;
    return type;
}

// public static extern void CloseImpl(Java.Object db) :24
void SQLiteImpl__CloseImpl_fn(::g::Java::Object* db)
{
    SQLiteImpl::CloseImpl(db);
}

// public static extern void ExecImpl(Java.Object db, string statement, string[] param) :18
void SQLiteImpl__ExecImpl_fn(::g::Java::Object* db, uString* statement, uArray* param)
{
    SQLiteImpl::ExecImpl(db, statement, param);
}

// public static extern Java.Object OpenImpl(string filename) :12
void SQLiteImpl__OpenImpl_fn(uString* filename, ::g::Java::Object** __retval)
{
    *__retval = SQLiteImpl::OpenImpl(filename);
}

// public static extern void QueryImpl(Bolav.ForeignHelpers.ForeignList fl, Java.Object db, string statement, string[] param) :30
void SQLiteImpl__QueryImpl_fn(::g::Bolav::ForeignHelpers::ForeignList* fl, ::g::Java::Object* db, uString* statement, uArray* param)
{
    SQLiteImpl::QueryImpl(fl, db, statement, param);
}

// public static extern void CloseImpl(Java.Object db) [static] :24
void SQLiteImpl::CloseImpl(::g::Java::Object* db)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CloseImpl395", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _udb=db;
        jobject _db = (_udb==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_udb, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_db);
        
        if (_db!=NULL) { U_JNIVAR->DeleteLocalRef(_db); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static extern void ExecImpl(Java.Object db, string statement, string[] param) [static] :18
void SQLiteImpl::ExecImpl(::g::Java::Object* db, uString* statement, uArray* param)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ExecImpl396", "(Ljava/lang/Object;Ljava/lang/String;Lcom/uno/StringArray;)V");
        ::g::Java::Object* _udb=db;
        jobject _db = (_udb==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_udb, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _ustatement=statement;
        jstring _statement = JniHelper::UnoToJavaString(_ustatement);
        uArray* _uparam=param;
        jobject _param = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box10(_uparam);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_db,_statement,_param);
        
        if (_db!=NULL) { U_JNIVAR->DeleteLocalRef(_db); }
        if (_statement!=NULL) { U_JNIVAR->DeleteLocalRef(_statement); }
        if (_param!=NULL) { U_JNIVAR->DeleteLocalRef(_param); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static extern Java.Object OpenImpl(string filename) [static] :12
::g::Java::Object* SQLiteImpl::OpenImpl(uString* filename)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "OpenImpl397", "(Ljava/lang/String;)Ljava/lang/Object;");
        uString* _ufilename=filename;
        jstring _filename = JniHelper::UnoToJavaString(_ufilename);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_filename);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_filename!=NULL) { U_JNIVAR->DeleteLocalRef(_filename); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static extern void QueryImpl(Bolav.ForeignHelpers.ForeignList fl, Java.Object db, string statement, string[] param) [static] :30
void SQLiteImpl::QueryImpl(::g::Bolav::ForeignHelpers::ForeignList* fl, ::g::Java::Object* db, uString* statement, uArray* param)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "QueryImpl398", "(Lcom/uno/UnoObject;Ljava/lang/Object;Ljava/lang/String;Lcom/uno/StringArray;)V");
        ::g::Bolav::ForeignHelpers::ForeignList* _ufl=fl;
        jobject _fl = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_ufl);
        ::g::Java::Object* _udb=db;
        jobject _db = (_udb==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_udb, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _ustatement=statement;
        jstring _statement = JniHelper::UnoToJavaString(_ustatement);
        uArray* _uparam=param;
        jobject _param = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box10(_uparam);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_fl,_db,_statement,_param);
        
        if (_fl!=NULL) { U_JNIVAR->DeleteLocalRef(_fl); }
        if (_db!=NULL) { U_JNIVAR->DeleteLocalRef(_db); }
        if (_statement!=NULL) { U_JNIVAR->DeleteLocalRef(_statement); }
        if (_param!=NULL) { U_JNIVAR->DeleteLocalRef(_param); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

} // ::g
