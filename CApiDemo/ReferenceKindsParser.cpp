#include "ReferenceKindsParser.h"
#include "StringComparer.h"

ReferenceKindsParser::ReferenceKindsParser(string kind, UdbLanguage udbLanguage)
{
	switch (udbLanguage)
	{
	case Udb_language_C:
		ParseCppKinds(kind);
		break;
	case Udb_language_CSharp:
		ParseCSharpKinds(kind);
		break;
	case Udb_language_Java:
		ParseJavaKinds(kind);
		break;
	default:
		break;
	}
}

ReferenceKindsParser::~ReferenceKindsParser()
{
}

void ReferenceKindsParser::ParseCppKinds(string kind)
{
	StringComparer comparer(kind);

	if (comparer.ContainsText("C Addr Use")) {}
	if (comparer.ContainsText("C Addr Useby")) {}
	if (comparer.ContainsText("C Addr Use Return")) {}
	if (comparer.ContainsText("C Addr Useby Return")) {}
	if (comparer.ContainsText("C Alias")) {}
	if (comparer.ContainsText("C Aliasby")) {}
	if (comparer.ContainsText("C Asm Call")) {}
	if (comparer.ContainsText("C Asm Callby")) {}
	if (comparer.ContainsText("C Asm Use")) {}
	if (comparer.ContainsText("C Asm Useby")) {}
	if (comparer.ContainsText("C Call")) {}
	if (comparer.ContainsText("C Callby")) {}
	if (comparer.ContainsText("C Call Virtual")) {}
	if (comparer.ContainsText("C Callby Virtual")) {}
	if (comparer.ContainsText("C Call Implicit")) {}
	if (comparer.ContainsText("C Callby Implicit")) {}
	if (comparer.ContainsText("C Cast Use")) {}
	if (comparer.ContainsText("C Cast Useby")) {}
	if (comparer.ContainsText("C Declare")) {}
	if (comparer.ContainsText("C Declarein")) {}
	if (comparer.ContainsText("C Declare Implicit")) {}
	if (comparer.ContainsText("C Declarein Implicit")) {}
	if (comparer.ContainsText("C Declare Using")) {}
	if (comparer.ContainsText("C Declarein Using")) {}
	if (comparer.ContainsText("C Define")) {}
	if (comparer.ContainsText("C Definein")) {}
	if (comparer.ContainsText("C Deref Call")) {}
	if (comparer.ContainsText("C Deref Callby")) {}
	if (comparer.ContainsText("C Deref Modify")) {}
	if (comparer.ContainsText("C Deref Modifyby")) {}
	if (comparer.ContainsText("C Deref Set")) {}
	if (comparer.ContainsText("C Deref Setby")) {}
	if (comparer.ContainsText("C Deref Use")) {}
	if (comparer.ContainsText("C Deref Useby")) {}
	if (comparer.ContainsText("C Deref Use Return")) {}
	if (comparer.ContainsText("C Deref Useby Return")) {}
	if (comparer.ContainsText("C End")) {}
	if (comparer.ContainsText("C Endby")) {}
	if (comparer.ContainsText("C Allow Exception")) {}
	if (comparer.ContainsText("C Allowby Exception")) {}
	if (comparer.ContainsText("C Catch Exception")) {}
	if (comparer.ContainsText("C Catchby Exception")) {}
	if (comparer.ContainsText("C Throw Exception")) {}
	if (comparer.ContainsText("C Throwby Exception")) {}
	if (comparer.ContainsText("C Friend")) {}
	if (comparer.ContainsText("C Friendby")) {}
	if (comparer.ContainsText("C Inactive Call")) {}
	if (comparer.ContainsText("C Inactive Callby")) {}
	if (comparer.ContainsText("C Inactive Define")) {}
	if (comparer.ContainsText("C Inactive Definein")) {}
	if (comparer.ContainsText("C Inactive Include")) {}
	if (comparer.ContainsText("C Inactive Includeby")) {}
	if (comparer.ContainsText("C Inactive Use")) {}
	if (comparer.ContainsText("C Inactive Useby")) {}
	if (comparer.ContainsText("C Include")) {}
	if (comparer.ContainsText("C Includeby")) {}
	if (comparer.ContainsText("C Implicit Include")) {}
	if (comparer.ContainsText("C Implicit Includeby")) {}
	if (comparer.ContainsText("C Modify")) {}
	if (comparer.ContainsText("C Modifyby")) {}
	if (comparer.ContainsText("C Name")) {}
	if (comparer.ContainsText("C Nameby")) {}
	if (comparer.ContainsText("C Overrides")) {}
	if (comparer.ContainsText("C Overriddenby")) {}
	if (comparer.ContainsText("C Private Base")) {}
	if (comparer.ContainsText("C Private Derive")) {}
	if (comparer.ContainsText("C Protected Base")) {}
	if (comparer.ContainsText("C Protected Derive")) {}
	if (comparer.ContainsText("C Public Base")) {}
	if (comparer.ContainsText("C Public Derive")) {}
	if (comparer.ContainsText("C Set")) {}
	if (comparer.ContainsText("C Setby")) {}
	if (comparer.ContainsText("C Set Init")) {}
	if (comparer.ContainsText("C Setby Init")) {}
	if (comparer.ContainsText("C Set Init Implicit")) {}
	if (comparer.ContainsText("C Setby Init Implicit")) {}
	if (comparer.ContainsText("C Specialize")) {}
	if (comparer.ContainsText("C Specializeby")) {}
	if (comparer.ContainsText("C Typed")) {}
	if (comparer.ContainsText("C Typedby")) {}
	if (comparer.ContainsText("C Typed Implicit")) {}
	if (comparer.ContainsText("C Typedby Implicit")) {}
	if (comparer.ContainsText("C Use")) {}
	if (comparer.ContainsText("C Useby")) {}
	if (comparer.ContainsText("C Use Macrodefine")) {}
	if (comparer.ContainsText("C Useby Macrodefine")) {}
	if (comparer.ContainsText("C Use Macroexpand")) {}
	if (comparer.ContainsText("C Useby Macroexpand")) {}
	if (comparer.ContainsText("C Use Ptr")) {}
	if (comparer.ContainsText("C Useby Ptr")) {}
	if (comparer.ContainsText("C Use Return")) {}
	if (comparer.ContainsText("C Useby Return")) {}
	if (comparer.ContainsText("C Using")) {}
	if (comparer.ContainsText("C Usingby")) {}
	if (comparer.ContainsText("C Virtual Private Base")) {}
	if (comparer.ContainsText("C Virtual Private Derive")) {}
	if (comparer.ContainsText("C Virtual Protected Base")) {}
	if (comparer.ContainsText("C Virtual Protected Derive")) {}
	if (comparer.ContainsText("C Virtual Public Base")) {}
	if (comparer.ContainsText("C Virtual Public Derive")) {}
	if (comparer.ContainsText("C ObjC Adopt")) {}
	if (comparer.ContainsText("C ObjC Adoptby")) {}
	if (comparer.ContainsText("C ObjC Base")) {}
	if (comparer.ContainsText("C ObjC Derive")) {}
	if (comparer.ContainsText("C ObjC Extend")) {}
	if (comparer.ContainsText("C ObjC Extendby")) {}
	if (comparer.ContainsText("C ObjC Implement")) {}
	if (comparer.ContainsText("C ObjC Implementby")) {}
	if (comparer.ContainsText("C ObjC Implement Extend")) {}
	if (comparer.ContainsText("C ObjC Implementby Extendby")) {}
	if (comparer.ContainsText("C ObjC Message Call")) {}
	if (comparer.ContainsText("C ObjC Message Callby")) {}
	if (comparer.ContainsText("C Declare Default")) {}
	if (comparer.ContainsText("C Declarein Default")) {}
	if (comparer.ContainsText("C Declare Delete")) {}
	if (comparer.ContainsText("C Declarein Delete")) {}
	if (comparer.ContainsText("C Use Capture")) {}
	if (comparer.ContainsText("C Useby Capture")) {}
	if (comparer.ContainsText("C Use Expand")) {}
	if (comparer.ContainsText("C Useby Expand")) {}
	else {}
}

void ReferenceKindsParser::ParseCSharpKinds(string kind)
{
	StringComparer comparer(kind);

	if (comparer.ContainsText("c# csharp Alias")) {}
	if (comparer.ContainsText("c# csharp Aliasfor")) {}
	if (comparer.ContainsText("c# csharp Use Alloc")) {}
	if (comparer.ContainsText("c# csharp Useby Allocby")) {}
	if (comparer.ContainsText("c# csharp Call")) {}
	if (comparer.ContainsText("c# csharp Callby")) {}
	if (comparer.ContainsText("c# csharp Call Implicit")) {}
	if (comparer.ContainsText("c# csharp Callby Implicit")) {}
	if (comparer.ContainsText("c# csharp Call Virtual")) {}
	if (comparer.ContainsText("c# csharp Callby Virtual")) {}
	if (comparer.ContainsText("c# csharp Call Virtual Implicit")) {}
	if (comparer.ContainsText("c# csharp Callby Virtual Implicit")) {}
	if (comparer.ContainsText("c# csharp Cast Use")) {}
	if (comparer.ContainsText("c# csharp Castby Useby")) {}
	if (comparer.ContainsText("c# csharp Couple")) {}
	if (comparer.ContainsText("c# csharp Coupleby")) {}
	if (comparer.ContainsText("c# csharp Declare")) {}
	if (comparer.ContainsText("c# csharp Declarein")) {}
	if (comparer.ContainsText("c# csharp Define")) {}
	if (comparer.ContainsText("c# csharp Definein")) {}
	if (comparer.ContainsText("c# csharp DotRef")) {}
	if (comparer.ContainsText("c# csharp DotRefby")) {}
	if (comparer.ContainsText("c# csharp Base")) {}
	if (comparer.ContainsText("c# csharp Derive")) {}
	if (comparer.ContainsText("c# csharp Base Implicit")) {}
	if (comparer.ContainsText("c# csharp Derive Implicit")) {}
	if (comparer.ContainsText("c# csharp End")) {}
	if (comparer.ContainsText("c# csharp Endby")) {}
	if (comparer.ContainsText("c# csharp Catch Exception")) {}
	if (comparer.ContainsText("c# csharp Catchby Exception")) {}
	if (comparer.ContainsText("c# csharp Throw Exception")) {}
	if (comparer.ContainsText("c# csharp Throwby Exception")) {}
	if (comparer.ContainsText("c# csharp Implement")) {}
	if (comparer.ContainsText("c# csharp Implementby")) {}
	if (comparer.ContainsText("c# csharp Modify")) {}
	if (comparer.ContainsText("c# csharp Modifyby")) {}
	if (comparer.ContainsText("c# csharp Overrides")) {}
	if (comparer.ContainsText("c# csharp Overriddenby")) {}
	if (comparer.ContainsText("c# csharp Set")) {}
	if (comparer.ContainsText("c# csharp Setby")) {}
	if (comparer.ContainsText("c# csharp Set Init")) {}
	if (comparer.ContainsText("c# csharp Setby Init")) {}
	if (comparer.ContainsText("c# csharp Typed")) {}
	if (comparer.ContainsText("c# csharp Typedby")) {}
	if (comparer.ContainsText("c# csharp Typed Implicit")) {}
	if (comparer.ContainsText("c# csharp Typedby Implicit")) {}
	if (comparer.ContainsText("c# csharp Use")) {}
	if (comparer.ContainsText("c# csharp Useby")) {}
	if (comparer.ContainsText("c# csharp Use Ptr")) {}
	if (comparer.ContainsText("c# csharp Useby Ptr")) {}
	if (comparer.ContainsText("c# csharp Using")) {}
	if (comparer.ContainsText("c# csharp Usingby")) {}
	else {}
}

void ReferenceKindsParser::ParseJavaKinds(string kind)
{
	StringComparer comparer(kind);

	if (comparer.ContainsText("Java Call")) {}
	if (comparer.ContainsText("Java Callby")) {}
	if (comparer.ContainsText("Java Call Nondynamic")) {}
	if (comparer.ContainsText("Java Callby Nondynamic")) {}
	if (comparer.ContainsText("Java Cast")) {}
	if (comparer.ContainsText("Java Castby")) {}
	if (comparer.ContainsText("Java Contain")) {}
	if (comparer.ContainsText("Java Containin")) {}
	if (comparer.ContainsText("Java Couple")) {}
	if (comparer.ContainsText("Java Coupleby")) {}
	if (comparer.ContainsText("Java Create")) {}
	if (comparer.ContainsText("Java Createby")) {}
	if (comparer.ContainsText("Java Declare")) {}
	if (comparer.ContainsText("Java Declarein")) {}
	if (comparer.ContainsText("Java Define")) {}
	if (comparer.ContainsText("Java Definein")) {}
	if (comparer.ContainsText("Java Define Implicit")) {}
	if (comparer.ContainsText("Java Definein Implicit")) {}
	if (comparer.ContainsText("Java DotRef")) {}
	if (comparer.ContainsText("Java  DotRefby")) {}
	if (comparer.ContainsText("Java  End")) {}
	if (comparer.ContainsText("Java  Endby")) {}
	if (comparer.ContainsText("Java  Extend Couple")) {}
	if (comparer.ContainsText("Java  Extendby Coupleby")) {}
	if (comparer.ContainsText("Java  Extend Couple External")) {}
	if (comparer.ContainsText("Java  Extendby Coupleby External")) {}
	if (comparer.ContainsText("Java  Extend Couple Implicit External")) {}
	if (comparer.ContainsText("Java  Extendby Coupleby Implicit External")) {}
	if (comparer.ContainsText("Java  Extend Couple Implicit")) {}
	if (comparer.ContainsText("Java  Extendby Coupleby Implicit")) {}
	if (comparer.ContainsText("Java  Implement Couple")) {}
	if (comparer.ContainsText("Java  Implementby Coupleby")) {}
	if (comparer.ContainsText("Java  Import")) {}
	if (comparer.ContainsText("Java  Importby")) {}
	if (comparer.ContainsText("Java  Import Demand")) {}
	if (comparer.ContainsText("Java  Importby Demand")) {}
	if (comparer.ContainsText("Java  Modify")) {}
	if (comparer.ContainsText("Java  Modifyby")) {}
	if (comparer.ContainsText("Java  Override")) {}
	if (comparer.ContainsText("Java  Overrideby")) {}
	if (comparer.ContainsText("Java  Set")) {}
	if (comparer.ContainsText("Java  Setby")) {}
	if (comparer.ContainsText("Java  Set Init")) {}
	if (comparer.ContainsText("Java  Setby Init")) {}
	if (comparer.ContainsText("Java  Set Partial")) {}
	if (comparer.ContainsText("Java  Setby Partial")) {}
	if (comparer.ContainsText("Java  Throw")) {}
	if (comparer.ContainsText("Java  Throwby")) {}
	if (comparer.ContainsText("Java  Typed")) {}
	if (comparer.ContainsText("Java  Typedby")) {}
	if (comparer.ContainsText("Java  Use")) {}
	if (comparer.ContainsText("Java  Useby")) {}
	if (comparer.ContainsText("Java  Use Partial")) {}
	if (comparer.ContainsText("Java  Useby Partial")) {}
	if (comparer.ContainsText("Java  Use Return")) {}
	if (comparer.ContainsText("Java  Useby Return")) {}
	else {}
}