#include "Util.h"


Language Util::GetLanguage(UdbLanguage udbLanguage)
{
	switch (udbLanguage)
	{
	case 	Udb_language_Java:
		return Java;
	case 	Udb_language_C:
		return Cpp;
	case 	Udb_language_CSharp:
		return CSharp;
	case	Udb_language_NONE:
	case 	Udb_language_ALL:
	case 	Udb_language_Ada:
	case 	Udb_language_Asm:
	case 	Udb_language_Basic:
	case 	Udb_language_Cobol:
	case 	Udb_language_Fortran:
	case 	Udb_language_Jovial:
	case 	Udb_language_Pascal:
	case 	Udb_language_Plm:
	case 	Udb_language_Python:
	case 	Udb_language_Verilog:
	case 	Udb_language_Vhdl:
	case 	Udb_language_Web:
		return OtherLanguage;
	default:
		return OtherLanguage;
	}
}
