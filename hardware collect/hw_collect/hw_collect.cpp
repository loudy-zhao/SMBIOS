// hw_collect.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "smbios.h"

int _tmain(int argc, _TCHAR* argv[])
{
	SMBIOS smbios;

	smbios.Initialize();

	return 0;
}

