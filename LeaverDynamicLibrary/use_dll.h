#pragma once

#ifndef LEAVERDYNAMICLIBRARY
#define LEAVERLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBRARY_API __declspec(dllimport)
#endif