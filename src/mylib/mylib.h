#ifndef MYLIB_H
#define MYLIB_H

#ifdef MYLIB_BUILD
#pragma message("Compiling MyLib")
#define MYLIB_API __declspec(dllexport)
#else
#pragma message("Using MyLib")
#define MYLIB_API __declspec(dllimport)
#endif

MYLIB_API int foo(void);

#endif
