#pragma once

#ifdef LEAVERDYNAMICLIBRARY
#define LEAVERLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBRARY_API __declspec(dllimport)
#endif