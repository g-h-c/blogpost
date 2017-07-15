clientconfig.lib: tinyxml2.obj clientconfig.obj 
	lib "/OUT:clientconfig.lib" /MACHINE:X64 /LTCG tinyxml2.obj clientconfig.obj

tinyxml2.obj: tinyxml2.h
	cl /c /EHsc /MD /std:c++latest tinyxml2.cpp

clientconfig.obj: clientconfig.cpp clientconfig.h
	cl /c /EHsc /MD /std:c++latest clientconfig.cpp



