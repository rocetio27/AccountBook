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

// user defined imports
import java.lang.Object;
import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import android.util.Log;

public class JSDict
{
    static void debug_log(Object message)
    {
        android.util.Log.d("AccountBook", (message==null ? "null" : message.toString()));
    }

    public static void FromJava391(final UnoObject _this, final Object dict)
    {
        java.util.HashMap map = (java.util.HashMap)dict;
        
        for (Object key : map.keySet()) {
        
        	String key_s = key.toString();
        	Object value = map.get(key_s);
        
        	if (value instanceof String) {
        
        		ExternedBlockHost.callUno_Bolav_ForeignHelpers_JSDict_SetKeyVal392((UnoObject)_this,(String)key_s,(String)value.toString());
        	}
        	else if (value instanceof Map) {
        	
        		UnoObject ddict = ExternedBlockHost.callUno_Bolav_ForeignHelpers_JSDict_AddDictForKey393((UnoObject)_this,(String)key);
            	com.foreign.Bolav.ForeignHelpers.JSDict.FromJava391(ddict, value);
        	}
        	else if( value instanceof List) {
        
            		UnoObject array = ExternedBlockHost.callUno_Bolav_ForeignHelpers_JSDict_AddListForKey394((UnoObject)_this,(String)key);
            	com.foreign.Bolav.ForeignHelpers.JSList.FromJava395(array, value);
        	}			
            else {
        
            	debug_log("Unhandled class JSDict.FromJava: " + value);
            }
        }
    }
    
}
