
Simple1ps.dll: dlldata.obj Simple1_p.obj Simple1_i.obj
	link /dll /out:Simple1ps.dll /def:Simple1ps.def /entry:DllMain dlldata.obj Simple1_p.obj Simple1_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del Simple1ps.dll
	@del Simple1ps.lib
	@del Simple1ps.exp
	@del dlldata.obj
	@del Simple1_p.obj
	@del Simple1_i.obj
