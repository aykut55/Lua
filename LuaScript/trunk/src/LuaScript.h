// ------------------------------------------------------------------------
// FileName : LuaScript.h
// FileDate : 20.09.2014 17:00
// Revision : 1.0
// ------------------------------------------------------------------------

// This header can be read by both C and C++ compilers
// ------------------------------------------------------------------------

#ifndef LuaScriptH
#define LuaScriptH
// ------------------------------------------------------------------------

#ifdef __cplusplus
extern "C" {
#endif

// HEADER FILES INCLUSIONS (C)
// ------------------------------------------------------------------------

// DEFINITIONS
// ------------------------------------------------------------------------

// FUNCTION PROTOTYPES (C)
// ------------------------------------------------------------------------

// GLOBAL VARIABLES (C)
// ------------------------------------------------------------------------

#ifdef __cplusplus
}
#endif

// HEADER FILES INCLUSIONS
#include "src\Lua\include\lua.hpp"
#pragma comment(lib, "src\Lua\lib\lua530.lib")
// ------------------------------------------------------------------------

// DEFINITIONS
// ------------------------------------------------------------------------

// FUNCTION PROTOTYPES
// ------------------------------------------------------------------------

// GLOBAL VARIABLES
// ------------------------------------------------------------------------

class CLuaScript
{
private:

protected:

public:
    ~CLuaScript();
     CLuaScript();
};

// ------------------------------------------------------------------------
#endif