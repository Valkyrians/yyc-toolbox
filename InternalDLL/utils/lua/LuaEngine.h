#pragma once
#include <mutex>
#include "../../dependencies/lua/lua.hpp"
#include "../../dependencies/LuaBridge/LuaBridge.h"
#include "../../dependencies/LuaBridge/Optional.h"
#include "../../dependencies/LuaBridge/Vector.h"
#include "APIWrapper.h"

#define LOCKLUA() std::lock_guard<std::mutex> lock(g_pLuaEngine->m)

class LuaEngine
{
public:
	LuaEngine() : m_L(luaL_newstate()) { luaL_openlibs(m_L); }
	~LuaEngine() { lua_close(m_L); }

	lua_State* L();

	void Init();

	void ExecuteFile(const char* file);

	void ExecuteString(const char* expression);

	void Reset()
	{
		if (m_L)
			lua_close(m_L);
		m_L = luaL_newstate();
		luaL_openlibs(m_L);
	}

	std::mutex m;
private:
	lua_State* m_L;
	void report_errors(int state);
};
extern LuaEngine* g_pLuaEngine;