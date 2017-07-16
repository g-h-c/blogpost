clientconfig.lib: tinyxml2.obj tinyxml2_desc.obj clientconfig.obj 
	lib "/OUT:clientconfig.lib" /MACHINE:X64 /LTCG tinyxml2.obj tinyxml2_desc.obj clientconfig.obj clientconfig_desc.obj

clientconfig.ifc: clientconfig_desc.ixx
	cl /c /EHsc /experimental:module /MD /std:c++latest clientconfig_desc.ixx

tinyxml2.ifc: tinyxml2_desc.ixx
	cl /c /EHsc /experimental:module /MD /std:c++latest tinyxml2_desc.ixx

tinyxml2.obj: tinyxml2.ifc tinyxml2.cpp
	cl /c /EHsc /experimental:module /MD /std:c++latest tinyxml2.cpp

clientconfig.obj: clientconfig.cpp clientconfig.ifc
	cl /c /EHsc /experimental:module /MD /std:c++latest clientconfig.cpp



