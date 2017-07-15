client.exe: clientconfig\clientconfig.lib main.obj
	link "/OUT:client.exe" /LIBPATH:clientconfig clientconfig.lib /MACHINE:X64 main.obj

main.obj: main.cpp
	cl /c -Iclientconfig /EHsc /MD /std:c++latest main.cpp



