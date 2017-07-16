client.exe: clientconfig\clientconfig.lib main.obj
	link "/OUT:client.exe" /LIBPATH:clientconfig clientconfig.lib /MACHINE:X64 main.obj

main.obj:
	cl /c /EHsc /experimental:module /module:search clientconfig /MD /std:c++latest main.cpp



