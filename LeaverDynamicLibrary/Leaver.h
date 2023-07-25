#pragma once
#include <string>
#include "use_dll.h"

using namespace std;

namespace DynamicLeaver
{
	class Leaver
	{
	public:
		LEAVERLIBRARY_API string leave(string str);
	};
}
