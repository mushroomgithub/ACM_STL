
TestCom1ps.dll: dlldata.obj TestCom1_p.obj TestCom1_i.obj
	link /dll /out:TestCom1ps.dll /def:TestCom1ps.def /entry:DllMain dlldata.obj TestCom1_p.obj TestCom1_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del TestCom1ps.dll
	@del TestCom1ps.lib
	@del TestCom1ps.exp
	@del dlldata.obj
	@del TestCom1_p.obj
	@del TestCom1_i.obj
