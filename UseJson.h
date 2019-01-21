#pragma once

#include "json/json.h"

#ifdef _DEBUG
#pragma comment ( lib, "./json/lib/lib_json_debug.lib" )
#else
#pragma comment ( lib, "./json/lib/lib_json.lib" )
#endif // !_DEBUG
