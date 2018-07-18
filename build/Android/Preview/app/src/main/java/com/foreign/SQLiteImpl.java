package com.foreign;

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

public class SQLiteImpl
{
    static void debug_log(Object message)
    {
        android.util.Log.d("AccountBook", (message==null ? "null" : message.toString()));
    }

    public static void CloseImpl397(final Object db)
    {
        ((android.database.sqlite.SQLiteDatabase)db).close();
    }
    
    public static void ExecImpl398(final Object db,final String statement,final com.uno.StringArray param)
    {
        ((android.database.sqlite.SQLiteDatabase)db).execSQL(statement, param.copyArray());
    }
    
    public static Object OpenImpl399(final String filename)
    {
        return android.database.sqlite.SQLiteDatabase.openOrCreateDatabase(filename, null);
    }
    
    public static void QueryImpl400(final UnoObject fl,final Object db,final String statement,final com.uno.StringArray param)
    {
        android.database.Cursor curs = ((android.database.sqlite.SQLiteDatabase)db).rawQuery(statement, param.copyArray());
        curs.moveToFirst();
        while (!curs.isAfterLast()) {
        	Object row = ExternedBlockHost.callUno_Bolav_ForeignHelpers_ForeignList_NewDictRow401((UnoObject)fl);
        
        	for (int i=0; i<curs.getColumnCount(); i++) {
        		ExternedBlockHost.callUno_Bolav_ForeignHelpers_ForeignDict_SetKeyVal402((UnoObject)row,(String)curs.getColumnName(i),(String)curs.getString(i));
        	}
            curs.moveToNext();
        }
    }
    
}
