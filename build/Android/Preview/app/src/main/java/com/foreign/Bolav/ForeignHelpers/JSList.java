package com.foreign.Bolav.ForeignHelpers;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

public class JSList
{
    static void debug_log(Object message)
    {
        android.util.Log.d("AccountBook", (message==null ? "null" : message.toString()));
    }

    public static void FromJava395(final UnoObject _this, final Object ary)
    {
        java.util.List l = (java.util.List)ary;
        for (Object obj : l) {
        	if (obj instanceof java.util.HashMap) {
        		UnoObject ddict = ExternedBlockHost.callUno_Bolav_ForeignHelpers_JSList_NewDictRow396((UnoObject)_this);
        		com.foreign.Bolav.ForeignHelpers.JSDict.FromJava391(ddict, obj);
        	}
        	else {
        		debug_log("Unhandled class JSList.FromJava: " + obj);
        	}
        }
    }
    
}
