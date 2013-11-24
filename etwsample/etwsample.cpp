// etwsample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "etwsampleGenerated.h"

int _tmain(int argc, _TCHAR* argv[])
{
	EventRegisterSampleProvider();
	PCWSTR files = {L"blablabla"};
	EventWriteDOWNLOAD_XFER_FAILED_EVENT( L"TransferNamein Code", 0xc00004, 1, 2 );
	EventWriteANTOXAR_TRACE_EVENT( __FUNCTION__, __LINE__, "I want to be hidden" );
	EventUnregisterSampleProvider();
	return 0;
}

