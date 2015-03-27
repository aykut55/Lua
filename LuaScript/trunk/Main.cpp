//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include <tchar.h>

#include <iostream>
#include <vector>

#include "LuaScript.h"
CLuaScript luaScript;
//---------------------------------------------------------------------------
#if 0

Welcome to Lua 5.3 
http://www.lua.org/manual/5.3/readme.html#changes

	Installing Lua
	bin:
	    lua luac 
	include:
	    lua.h luaconf.h lualib.h lauxlib.h lua.hpp 
	lib:
	    liblua.a

#endif

#if 0

Binding C/C++ with Lua
http://lua-users.org/wiki/BindingCodeToLua



Setting Up
http://zwodahs.me/tutorial/lua/

Running Lua Function From C++
http://zwodahs.me/tutorial/lua/2/

Running C++ Function From Lua
http://zwodahs.me/tutorial/lua/3/

Accessing C++ Objects From Lua
http://zwodahs.me/tutorial/lua/5/

Packaging Lua Functions
http://zwodahs.me/tutorial/lua/6/


Using Lua with C++ (Part 1)
http://eliasdaler.wordpress.com/2013/10/11/lua_cpp_binder/

Using Lua with C++(Part 2) (Getting arrays and calling Lua functions from C++)
http://eliasdaler.wordpress.com/2013/10/20/lua_and_cpp_pt2/

Using Lua with C++(Part 2.5) (Template getArray function and other modifications)
http://eliasdaler.wordpress.com/2013/11/17/lua_and_cpp_pt2_5/

Using Lua with C++(Part 3) (Calling C++ functions and creating C++ objects)
http://eliasdaler.wordpress.com/2013/11/30/lua_and_cpp_pt3/

Using Lua with C++. LuaBridge makes everything easier. Variables and functions
http://eliasdaler.wordpress.com/2014/07/18/using-lua-with-cpp-luabridge/


Calling C++ functions from Lua 5.2
http://www.acamara.es/blog/2012/08/calling-c-functions-from-lua-5-2/


First Steps in LUA-C++ Integration
http://rubenlaguna.com/wp/2012/11/26/first-steps-lua-cplusplus-integration/

Accessing C++ Objects From Lua
http://rubenlaguna.com/wp/2012/12/09/accessing-cpp-objects-from-lua/


Using Lua with C++ — A short tutorial
http://csl.name/lua/

Getting Started With Lua
http://gamedevgeek.com/tutorials/getting-started-with-lua/

Calling Lua Functions
http://gamedevgeek.com/tutorials/calling-lua-functions/

Calling C++ Functions From Lua
http://gamedevgeek.com/tutorials/calling-c-functions-from-lua/

C++ Reflection Part 6: Lua Binding (Randy Gaul's Game Programming Blog)
http://www.randygaul.net/2013/09/02/c-reflection-part-6-lua-binding/

Lua Tutorial: C Bindings
https://nicolasgoles.com/blog/2013/01/lua-tutorial-c-bindings/

Illustrative C++ Lua binding example/tutorial
https://gist.github.com/kizzx2/1594905

The Lua Tutorial
http://www.gamedev.net/page/resources/_/technical/game-programming/the-lua-tutorial-r2999



Integrating Lua into C++
http://www.codeproject.com/Articles/11508/Integrating-Lua-into-C

Extending a C++ Application with Lua 5.2
http://www.codeproject.com/Articles/519352/Extending-a-Cplusplus-Application-with-Lua

Using Lua in your application
http://www.codeproject.com/Articles/10289/Using-Lua-in-your-application

Calling Lua functions : using C++ language.
http://www.codeproject.com/Articles/17469/Calling-Lua-functions-using-C-language

Lua Interpreter (#C)
http://www.codeproject.com/Articles/228212/Lua-Interpreter



C++ API for interfacing with Lua
https://bitbucket.org/alexames/luawrapper/src


[C++] Implementing Lua Scripting in C++ using Lua and LuaBridge
http://direct3dtutorials.wordpress.com/2014/01/10/c-implementing-lua-scripting-in-c-using-lua-and-luabridge/


// BAKILACAK (function binding felan)
https://suckerserv.googlecode.com/svn-history/r462/trunk/suckerserv-v4/src/authserver/authserver.cpp

LUA: really for Beginners
http://lua.gts-stolberg.de/en/index.php

// BAKILACAK
http://www.roguebasin.com/index.php?title=New_Roguelike_Tutorial,_using_Lua%2Blibtcod

Wrapping C++ classes in Lua
http://loadcode.blogspot.com.tr/2007/02/wrapping-c-classes-in-lua.html



Lua C API Tutorial (part 1) Installation and First Program
http://unicornlacewing.blogspot.com.tr/2012/07/lua-c-api-tutorial-part-1-installation.html

Lua C API Tutorial (part 2) C Functions in Lua
http://unicornlacewing.blogspot.com.tr/2012/07/lua-c-api-tutorial-part-2-c-functions.html

Lua C API Tutorial (part 3) Userdata
http://unicornlacewing.blogspot.com.tr/2012/07/lua-c-api-tutorial-part-3-userdata.html


Binding C++ classes to Lua: a step by step example for beginners
http://cfc.kizzx2.com/index.php/binding-c-classes-to-lua-a-step-by-step-example-for-beginners/


Step By Step : How to write a C++ plugin and Deploy it to the Desktop (Windows) Player
http://giderosmobile.com/forum/discussion/1025/step-by-step-how-to-write-a-c-plugin-and-deploy-it-to-the-desktop-windows-player/p1



Adding AngelScript scripting to your C++ application
http://damianpaz.wordpress.com/2012/04/30/adding-angelscript-scripting-to-your-c-application/

Adding Lua scripting to C++ with SWIG
http://damianpaz.wordpress.com/category/lua/

Serialize your class to a widechar XML file (with boost::serialization)
http://damianpaz.wordpress.com/category/boost/


CLuaScript::CLuaScript(CLuaBridge & luaBridge)
http://svn.miranda-ng.org/main/trunk/plugins/!NotAdopted/SmartAutoReplier/LuaScript.cpp


Lua C++ Wrapper (googleCode)
http://easy-coding.blogspot.com.tr/2009/06/lua.html
https://code.google.com/p/luascript/source/browse/luascript/luascript.h



#endif
//---------------------------------------------------------------------------

int main_tutorial_01(int argc, _TCHAR* argv[]);

int main_tutorial_02(int argc, _TCHAR* argv[]);
bool load(lua_State* L, const std::string& filename);
std::vector<int> multi(lua_State* L, int x, int y, int z);
void doThings(lua_State* L);

int main_tutorial_03(int argc, _TCHAR* argv[]);
void doThings_03(lua_State* L);

int main_tutorial_06(int argc, _TCHAR* argv[]);
std::vector<int> multi_06(lua_State* L, int x, int y, int z);
void doThings_06(lua_State* L);

int main_tutorial_05(int argc, _TCHAR* argv[]);
void doThings_05(lua_State* L);
//---------------------------------------------------------------------------

#pragma argsused
int _tmain(int argc, _TCHAR* argv[])
{
//  main_tutorial_01(argc, argv);
//  main_tutorial_02(argc, argv);
//  main_tutorial_03(argc, argv);
//  main_tutorial_06(argc, argv);
    main_tutorial_05(argc, argv);

    std::cout<<std::endl;

    system("pause");

    return 0;
}
//---------------------------------------------------------------------------

int main_tutorial_01(int argc, _TCHAR* argv[])
{
    std::string script_file_name = "D:\\Software Development\\Projects\\CBuilder\\LuaScript\\trunk\\src\\Scripts\\test.lua";
    std::cout<<std::endl;

    // create a new Lua state.
    lua_State* L = luaL_newstate();

    // load Lua libraries
    static const luaL_Reg lualibs[] =
    {
        { "base"    , luaopen_base      },
        { "io"      , luaopen_io        },
        { "table"   , luaopen_table     },
        { "string"  , luaopen_string    },
        { "math"    , luaopen_math      },
        { "debug"   , luaopen_debug     },
        { NULL      , NULL              }
    };

    std::cout << "[C++] lua libraries loaded" << std::endl;

    for(int i=0; lualibs[i].func != 0 ; i++)
    {
        // load the required lua libs and store it in the global space.
        luaL_requiref(L, lualibs[i].name, lualibs[i].func, true);

        // open library
        lualibs[i].func(L);

        // clear the stack in case there is some remaining stuffs there.
        lua_settop(L, 0);
    }

    // load the script, this do not run the script.
    int status = luaL_loadfile(L, script_file_name.c_str());
    if(status == LUA_OK)
    {
        std::cout << "[C++] script loaded" << std::endl;
    }
    else
    {
        std::cout << "[C++] error loading script" << std::endl;
        return 1;
    }

    int result = lua_pcall(L, 0, LUA_MULTRET, 0);
    if(result == LUA_OK)
    {
    }
    else
    {
        std::cout << "[C++] Could not run the script." << std::endl;
    }

    //// the above code is the same as luaL_dofile(L, "test.lua")
    lua_close(L);
    return 0;
}
//---------------------------------------------------------------------------

int main_tutorial_02(int argc, _TCHAR* argv[])
{
    // create a new Lua state.
    lua_State* L = luaL_newstate();

    // load Lua libraries
    static const luaL_Reg lualibs[] =
    {
        { "base"    , luaopen_base      },
        { "io"      , luaopen_io        },
        { "table"   , luaopen_table     },
        { "string"  , luaopen_string    },
        { "math"    , luaopen_math      },
        { "debug"   , luaopen_debug     },
        { NULL      , NULL              }
    };

    std::cout << "[C++] lua libraries loaded" << std::endl;

    for(int i=0; lualibs[i].func != 0 ; i++)
    {
        // load the required lua libs and store it in the global space.
        luaL_requiref(L, lualibs[i].name, lualibs[i].func, true);

        // open library
        lualibs[i].func(L);

        // clear the stack in case there is some remaining stuffs there.
        lua_settop(L, 0);
    }

    doThings(L);

    lua_close(L);

    return 0;
}
//---------------------------------------------------------------------------

bool load(lua_State* L, const std::string& filename)
{
    // load the script
    int status = luaL_loadfile(L, filename.c_str());
    if(status != LUA_OK)
    {
        std::cout << "[C++] error loading script" << std::endl;
        return false;
    }
    std::cout << "[C++] script loaded" << std::endl;

    // run the script
    int result = lua_pcall(L, 0, LUA_MULTRET, 0);
    if(result != LUA_OK)
    {
        std::cout << "[C++] Could not run the script." << std::endl;
        return false;
    }
    return true;
}
//---------------------------------------------------------------------------

// a multiple return.
std::vector<int> multi(lua_State* L, int x, int y, int z)
{
    std::vector<int> ints;
    lua_getglobal(L, "multi_compute");
    if(lua_type(L, -1) == LUA_TFUNCTION)
    {
        lua_pushnumber(L, x);
        lua_pushnumber(L, y);
        lua_pushnumber(L, z);
        lua_call(L, 3, 3);
		int xy = (int) luaL_checkinteger(L, -3);
		int yz = (int) luaL_checkinteger(L, -2);
        int xz = (int) luaL_checkinteger(L, -1);
        lua_pop(L, 3);
        ints.push_back(xy);
        ints.push_back(yz);
        ints.push_back(xz);
    }
    else
    {
        lua_pop(L, 1);
    }
    return ints;
}
//---------------------------------------------------------------------------

void doThings(lua_State* L)
{
    std::string script_file_name = "D:\\Software Development\\Projects\\CBuilder\\LuaScript\\trunk\\src\\Scripts\\function.lua";
    std::cout<<std::endl;

    load(L, script_file_name.c_str());

    //////////////////// Single return value function -- "compute" ////////////////////////

    lua_getglobal(L, "compute");                                    // get the function "compute" from the global namespace and put it on the stack
    int type = lua_type(L, -1);                                     // get the type of the item that we just put on the stack
    if(type == LUA_TFUNCTION)                                       // check that it is a function
    {
        lua_pushnumber(L, 3);                                       // x
        lua_pushnumber(L, 4);                                       // y
        lua_call(L, 2, 1);                                          // call the function, 2 (argument count), 1 (number of return value)
        int sum = (int) luaL_checkinteger(L, -1);                   // get the return value from the stack.
        lua_pop(L, 1);                                              // pop the value from the stack
        std::cout << "[C++] Return value : " << sum<< std::endl;    // output the value
    }
    else
    {
        std::cout << "[C++] No such function !" << std::endl;
        lua_pop(L, 1);                                              // remove the item from the stack. We don't really know what it is.
    }


    ////////////////////// multiple return value function -- "multi_compute" //////////////

    std::vector<int> ints = multi(L, 1, 3, 5);
    if(ints.size() == 3)
    {
        std::cout << "[C++] X + Y : " << ints[0] << std::endl;
        std::cout << "[C++] Y + Z : " << ints[1] << std::endl;
        std::cout << "[C++] X + Z : " << ints[2] << std::endl;
    }
}
//---------------------------------------------------------------------------

int main_tutorial_03(int argc, _TCHAR* argv[])
{
    // create a new Lua state.
    lua_State* L = luaL_newstate();

    // load Lua libraries
    static const luaL_Reg lualibs[] =
    {
        { "base"    , luaopen_base      },
        { "io"      , luaopen_io        },
        { "table"   , luaopen_table     },
        { "string"  , luaopen_string    },
        { "math"    , luaopen_math      },
        { "debug"   , luaopen_debug     },
        { NULL      , NULL              }
    };

    std::cout << "[C++] lua libraries loaded" << std::endl;

    for(int i=0; lualibs[i].func != 0 ; i++)
    {
        // load the required lua libs and store it in the global space.
        luaL_requiref(L, lualibs[i].name, lualibs[i].func, true);

        // open library
        lualibs[i].func(L);

        // clear the stack in case there is some remaining stuffs there.
        lua_settop(L, 0);
    }

    doThings_03(L);

    lua_close(L);

    return 0;
}
//---------------------------------------------------------------------------

extern "C"
{
    static int compute(lua_State* L)
    {
		int x = luaL_checkinteger(L, 1);
		int y = luaL_checkinteger(L, 2);
        lua_pushnumber(L, x - y);
        return 1;
    }
}
//---------------------------------------------------------------------------

void doThings_03(lua_State* L)
{
    lua_pushcfunction(L, compute);                                  // push the c function to the stack
    lua_setglobal(L, "compute");                                    // add the function to the global

    std::string script_file_name = "D:\\Software Development\\Projects\\CBuilder\\LuaScript\\trunk\\src\\Scripts\\run.lua";
    std::cout<<std::endl;

    load(L, script_file_name.c_str());
}
//---------------------------------------------------------------------------

int main_tutorial_06(int argc, _TCHAR* argv[])
{
    // create a new Lua state.
    lua_State* L = luaL_newstate();

    // load Lua libraries
    static const luaL_Reg lualibs[] =
    {
        { "base"    , luaopen_base      },
        { "io"      , luaopen_io        },
        { "table"   , luaopen_table     },
        { "string"  , luaopen_string    },
        { "math"    , luaopen_math      },
        { "debug"   , luaopen_debug     },
        { NULL      , NULL              }
    };

    std::cout << "[C++] lua libraries loaded" << std::endl;

    for(int i=0; lualibs[i].func != 0 ; i++)
    {
        // load the required lua libs and store it in the global space.
        luaL_requiref(L, lualibs[i].name, lualibs[i].func, true);

        // open library
        lualibs[i].func(L);

        // clear the stack in case there is some remaining stuffs there.
        lua_settop(L, 0);
    }

    doThings_06(L);

    lua_close(L);

    return 0;
}
//---------------------------------------------------------------------------

// a multiple return.
std::vector<int> multi_06(lua_State* L, int x, int y, int z)
{
    std::vector<int> ints;
    lua_getglobal(L, "functions");
    lua_getfield(L, -1, "computation");
    lua_remove(L, -2);
    lua_getfield(L, -1, "multi_compute");
    lua_remove(L, -2);
    if(lua_type(L, -1) == LUA_TFUNCTION)
    {
        lua_pushnumber(L, x);
        lua_pushnumber(L, y);
        lua_pushnumber(L, z);
        lua_call(L, 3, 3);
		int xy = (int) luaL_checkinteger(L, -3);
		int yz = (int) luaL_checkinteger(L, -2);
        int xz = (int) luaL_checkinteger(L, -1);
        lua_pop(L, 3);
        ints.push_back(xy);
        ints.push_back(yz);
        ints.push_back(xz);
    }
    else
    {
        lua_pop(L, 1);
    }
    return ints;
}
//---------------------------------------------------------------------------

void doThings_06(lua_State* L)
{
    std::string script_file_name = "D:\\Software Development\\Projects\\CBuilder\\LuaScript\\trunk\\src\\Scripts\\function.lua";
    std::cout<<std::endl;

    load(L, script_file_name.c_str());

    //////////////////// Single return value function -- "compute" ////////////////////////

    lua_getglobal(L, "functions");                                  // get the functions tables that we defined
    lua_getfield(L, -1, "computation");                             // get the inner table, we can nest it any how we want
    lua_remove(L, -2);                                              // remove the "functions" table from the stack.
    lua_getfield(L, -1, "compute");                                 // get the compute function from the computation table
    lua_remove(L, -2);                                              // remove the "computations" table from the stack.
    int type = lua_type(L, -1);                                     // get the type of the item that we just put on the stack
    if(type == LUA_TFUNCTION)                                       // check that it is a function
    {
        lua_pushnumber(L, 3);                                       // x
        lua_pushnumber(L, 4);                                       // y
        lua_call(L, 2, 1);                                          // call the function, 2 (argument count), 1 (number of return value)
        int sum = (int) luaL_checkinteger(L, -1);                   // get the return value from the stack.
        lua_pop(L, 1);                                              // pop the value from the stack
        std::cout << "[C++] Return value : " << sum<< std::endl;    // output the value
    }
    else
    {
        std::cout << "[C++] No such function !" << std::endl;
        lua_pop(L, 1);                                              // remove the item from the stack. We don't really know what it is.
    }


    ////////////////////// multiple return value function -- "multi_compute" //////////////

    std::vector<int> ints = multi_06(L, 1, 3, 5);
    if(ints.size() == 3)
    {
        std::cout << "[C++] X + Y : " << ints[0] << std::endl;
        std::cout << "[C++] Y + Z : " << ints[1] << std::endl;
        std::cout << "[C++] X + Z : " << ints[2] << std::endl;
    }

}
//---------------------------------------------------------------------------

int main_tutorial_05(int argc, _TCHAR* argv[])
{
    // create a new Lua state.
    lua_State* L = luaL_newstate();

    // load Lua libraries
    static const luaL_Reg lualibs[] =
    {
        { "base"    , luaopen_base      },
        { "io"      , luaopen_io        },
        { "table"   , luaopen_table     },
        { "string"  , luaopen_string    },
        { "math"    , luaopen_math      },
        { "debug"   , luaopen_debug     },
        { NULL      , NULL              }
    };

    std::cout << "[C++] lua libraries loaded" << std::endl;

    for(int i=0; lualibs[i].func != 0 ; i++)
    {
        // load the required lua libs and store it in the global space.
        luaL_requiref(L, lualibs[i].name, lualibs[i].func, true);

        // open library
        lualibs[i].func(L);

        // clear the stack in case there is some remaining stuffs there.
        lua_settop(L, 0);
    }

    doThings_05(L);

    lua_close(L);

    return 0;
}
//---------------------------------------------------------------------------

///////////// Unit Class ////////////
class Unit
{
public:
    Unit(const int& d = 1, const int& h = 20)
        : damage(d), health(h)
    {
    }
    int damage;
    int health;

    void dealtDamage(const int& damage)
    {
        health -= damage;
        health = health < 0 ? 0 : health;
    }

    int getDamage()
    {
        return damage;
    }
};

void putUnit(lua_State* L, Unit& unit)
{
    /**
     * Create a userdata on the lua stack.
     * This store the pointer to the unit object.
     * The method returns a pointer to the pointer.
     */
    Unit** userdata = static_cast<Unit**>(lua_newuserdata(L, sizeof(Unit*)));
    /**
     * Assign the pointer value to point to our unit object.
     */
    *userdata = &unit;
    /**
     * Set the metatable of that user data.
     */
    luaL_setmetatable(L, "UnitMT");
}
//---------------------------------------------------------------------------

////////////////////////////////
///////// Apply damage function wrapper //////////
class ApplyDamageFunction
{
public:
    ApplyDamageFunction(const std::string& functionname)
        : function(functionname)
    {
    }

    std::string function;

    /**
     * This method mirrors the function in the lua script.
     */
    void applyDamage(lua_State* L, Unit& attacker, Unit& defender)
    {
        // put the function on the stack
        lua_getglobal(L, function.c_str());
        int type = lua_type(L, -1);
        if(type == LUA_TFUNCTION)
        {
            // create a new user data on the stack, and assign the attacker pointer to it
            putUnit(L, attacker);
            // create a new user data on the stack, and assign the defender pointer to it
            putUnit(L, defender);
            // call the function
            lua_call(L, 2, 0);
            // shouldn't have anything to pop
        }
        else
        {
            std::cout << "Cannot find " << function.c_str() << "function" << std::endl;
        }
    }
};
//---------------------------------------------------------------------------
////////////////////////////////

extern "C"
{
    //// wrapper method for character /////
    static int function_unit_getDamage(lua_State* L)
    {
        /**
         * luaL_testudata will return a nullptr/0 if the item pass in do not have a metatable of type "UnitMT"
         * else it will return the pointer to the pointer.
         */
        Unit** unit = static_cast<Unit**>(luaL_testudata(L, 1, "UnitMT"));
        if(unit)
        {
            int damage = (**unit).getDamage();
            lua_pushnumber(L, damage);
        }
        else
        {
            lua_pushnil(L);
        }
        return 1;
    }

    static int function_unit_dealtDamage(lua_State* L)
    {
        Unit** unit = static_cast<Unit**>(luaL_testudata(L, 1, "UnitMT"));
		int damage = luaL_checkinteger(L, 2);
        if(unit)
        {
            (**unit).dealtDamage(damage);
        }
        return 0;
    }

    static int function_unit_health(lua_State* L)
    {
        int args = lua_gettop(L);
        Unit** unit = static_cast<Unit**>(luaL_testudata(L, 1, "UnitMT"));
        std::cout << "[C++]" << "calling method \"health\"" << std::endl;
        if(args == 1) // if there are no argument other than self, we will just return the health value
        {
            if(unit)
            {
                lua_pushnumber(L, (**unit).health);
            }
            else
            {
                lua_pushnil(L);
            }
            return 1;
        }
        else // else, we will set the value to the first argument after "self"
        {
            int health = luaL_checkinteger(L, 2);
            if(unit)
            {
                (**unit).health = health;
                lua_pushnumber(L, health);
            }
            else
            {
                lua_pushnil(L);
            }
            return 1;
        }
    }
}
//---------------------------------------------------------------------------

void loadWrapper(lua_State* L)
{
    /**
     * This creates the meta table and put it on the stack and give it a name so you can use it later.
     */
    luaL_newmetatable(L, "UnitMT");
    /**
     * __index is where Lua will search when it can't find the methods in the current table, kind of like the parent class
     * So in this case, we will set the it to itself.
     */
    lua_pushvalue(L, -1);
    lua_setfield(L, -2, "__index");
    /**
     * Each of the follow pairs push the cfunction onto the stack and add the function to the metatable.
     * The metatable will still be on the stack after each of the call.
     */
    // set the getDamage method
    lua_pushcfunction(L, function_unit_getDamage);
    lua_setfield(L, -2, "getDamage");
    // set the dealt damage method
    lua_pushcfunction(L, function_unit_dealtDamage);
    lua_setfield(L, -2, "dealtDamage");
    // set the health method
    lua_pushcfunction(L, function_unit_health);
    lua_setfield(L, -2, "health");
    // pop the meta table from the stack
    lua_pop(L, 1);
}
//---------------------------------------------------------------------------

void doThings_05(lua_State* L)
{
    std::string script_file_name = "D:\\Software Development\\Projects\\CBuilder\\LuaScript\\trunk\\src\\Scripts\\functions.lua";
    std::cout<<std::endl;

    // load the function.
    load(L, script_file_name.c_str());

    // load the Unit Wrapper.
    loadWrapper(L);

    ApplyDamageFunction damageFunction("applyDamage");

    Unit unit1(12, 30);
    Unit unit2(7, 40);

    std::cout << "Health of unit1 and unit2 before unit1 deals damage to unit2 : [Unit1 : " << unit1.health << "] [Unit2 : " << unit2.health << "]" << std::endl;
    damageFunction.applyDamage(L, unit1, unit2);
    std::cout << "Health of unit1 and unit2 after unit1 deals damage to unit2 : [Unit1 : " << unit1.health << "] [Unit2 : " << unit2.health << "]" << std::endl;
    damageFunction.applyDamage(L, unit2, unit1);
    std::cout << "Health of unit1 and unit2 after unit2 deals damage to unit1 : [Unit1 : " << unit1.health << "] [Unit2 : " << unit2.health << "]" << std::endl;

}
//---------------------------------------------------------------------------
