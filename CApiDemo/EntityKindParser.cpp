#include "EntityKindParser.h"
#include "StringComparer.h"

EntityKindParser::EntityKindParser(string kind, UdbLanguage udbLanguage)
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

EntityKindParser::~EntityKindParser()
{
}

void EntityKindParser::ParseCppKinds(string kind)
{
	StringComparer comparer(kind);


	if (comparer.ContainsText("C Abstract Class Type")) {}
	if (comparer.ContainsText("C Abstract Class Type Template")) {}
	if (comparer.ContainsText("C Abstract Struct Type")) {}
	if (comparer.ContainsText("C Abstract Struct Type Template")) {}
	if (comparer.ContainsText("C Class Type")) {}
	if (comparer.ContainsText("C Class Type Template")) {}
	if (comparer.ContainsText("C Code File")) {}
	if (comparer.ContainsText("C Enum Type")) {}
	if (comparer.ContainsText("C Enumerator")) {}
	if (comparer.ContainsText("C Function")) {}
	if (comparer.ContainsText("C Function Template")) {}
	if (comparer.ContainsText("C Function Interrupt")) {}
	if (comparer.ContainsText("C Function Interrupt Template")) {}
	if (comparer.ContainsText("C Function Interrupt Static")) {}
	if (comparer.ContainsText("C Function Interrupt Static Template")) {}
	if (comparer.ContainsText("C Function Static")) {}
	if (comparer.ContainsText("C Function Static Template")) {}
	if (comparer.ContainsText("C Header File")) {}
	if (comparer.ContainsText("C Inactive Macro")) {}
	if (comparer.ContainsText("C Label")) {}
	if (comparer.ContainsText("C Macro")) {}
	if (comparer.ContainsText("C Macro Functional")) {}
	if (comparer.ContainsText("C Macro Project")) {}
	if (comparer.ContainsText("C Namespace")) {}
	if (comparer.ContainsText("C Namespace Alias")) {}
	if (comparer.ContainsText("C Object Global")) {}
	if (comparer.ContainsText("C Object Global Static")) {}
	if (comparer.ContainsText("C Object Local")) {}
	if (comparer.ContainsText("C Object Local Static")) {}
	if (comparer.ContainsText("C Parameter")) {}
	if (comparer.ContainsText("C Private Member Abstract Class Type")) {}
	if (comparer.ContainsText("C Private Member Abstract Class Type Template")) {}
	if (comparer.ContainsText("C Private Member Abstract Struct Type")) {}
	if (comparer.ContainsText("C Private Member Abstract Struct Type Template")) {}
	if (comparer.ContainsText("C Private Member Class Type")) {}
	if (comparer.ContainsText("C Private Member Class Type Template")) {}
	if (comparer.ContainsText("C Private Member Const Function")) {}
	if (comparer.ContainsText("C Private Member Const Function Template")) {}
	if (comparer.ContainsText("C Private Member Const Function Virtual")) {}
	if (comparer.ContainsText("C Private Member Const Function Virtual Pure")) {}
	if (comparer.ContainsText("C Private Member Const Volatile Function")) {}
	if (comparer.ContainsText("C Private Member Const Volatile Function Template")) {}
	if (comparer.ContainsText("C Private Member Const Volatile Function Virtual")) {}
	if (comparer.ContainsText("C Private Member Const Volatile Function Virtual Pure")) {}
	if (comparer.ContainsText("C Private Member Enum Type")) {}
	if (comparer.ContainsText("C Private Member Enumerator")) {}
	if (comparer.ContainsText("C Private Member Function")) {}
	if (comparer.ContainsText("C Private Member Function Template")) {}
	if (comparer.ContainsText("C Private Member Function Explicit")) {}
	if (comparer.ContainsText("C Private Member Function Explicit Template")) {}
	if (comparer.ContainsText("C Private Member Function Static")) {}
	if (comparer.ContainsText("C Private Member Function Static Template")) {}
	if (comparer.ContainsText("C Private Member Function Virtual")) {}
	if (comparer.ContainsText("C Private Member Function Virtual Pure")) {}
	if (comparer.ContainsText("C Private Member Object")) {}
	if (comparer.ContainsText("C Private Member Object Static")) {}
	if (comparer.ContainsText("C Private Member Struct Type")) {}
	if (comparer.ContainsText("C Private Member Struct Type Template")) {}
	if (comparer.ContainsText("C Private Member Typedef Type")) {}
	if (comparer.ContainsText("C Private Member Union Type")) {}
	if (comparer.ContainsText("C Private Member Union Type Template")) {}
	if (comparer.ContainsText("C Private Member Volatile Function")) {}
	if (comparer.ContainsText("C Private Member Volatile Function Template")) {}
	if (comparer.ContainsText("C Private Member Volatile Function Virtual")) {}
	if (comparer.ContainsText("C Private Member Volatile Function Virtual Pure")) {}
	if (comparer.ContainsText("C Protected Member Abstract Class Type")) {}
	if (comparer.ContainsText("C Protected Member Abstract Class Type Template")) {}
	if (comparer.ContainsText("C Protected Member Abstract Struct Type")) {}
	if (comparer.ContainsText("C Protected Member Abstract Struct Type Template")) {}
	if (comparer.ContainsText("C Protected Member Class Type")) {}
	if (comparer.ContainsText("C Protected Member Class Type Template")) {}
	if (comparer.ContainsText("C Protected Member Const Function")) {}
	if (comparer.ContainsText("C Protected Member Const Function Template")) {}
	if (comparer.ContainsText("C Protected Member Const Function Virtual")) {}
	if (comparer.ContainsText("C Protected Member Const Function Virtual Pure")) {}
	if (comparer.ContainsText("C Protected Member Const Volatile Function")) {}
	if (comparer.ContainsText("C Protected Member Const Volatile Function Template")) {}
	if (comparer.ContainsText("C Protected Member Const Volatile Function Virtual")) {}
	if (comparer.ContainsText("C Protected Member Const Volatile Function Virtual Pure")) {}
	if (comparer.ContainsText("C Protected Member Enum Type")) {}
	if (comparer.ContainsText("C Protected Member Enumerator")) {}
	if (comparer.ContainsText("C Protected Member Function")) {}
	if (comparer.ContainsText("C Protected Member Function Template")) {}
	if (comparer.ContainsText("C Protected Member Function Explicit")) {}
	if (comparer.ContainsText("C Protected Member Function Explicit Template")) {}
	if (comparer.ContainsText("C Protected Member Function Static")) {}
	if (comparer.ContainsText("C Protected Member Function Static Template")) {}
	if (comparer.ContainsText("C Protected Member Function Virtual")) {}
	if (comparer.ContainsText("C Protected Member Function Virtual Pure")) {}
	if (comparer.ContainsText("C Protected Member Object")) {}
	if (comparer.ContainsText("C Protected Member Object Static")) {}
	if (comparer.ContainsText("C Protected Member Struct Type")) {}
	if (comparer.ContainsText("C Protected Member Struct Type Template")) {}
	if (comparer.ContainsText("C Protected Member Typedef Type")) {}
	if (comparer.ContainsText("C Protected Member Union Type")) {}
	if (comparer.ContainsText("C Protected Member Union Type Template")) {}
	if (comparer.ContainsText("C Protected Member Volatile Function")) {}
	if (comparer.ContainsText("C Protected Member Volatile Function Template")) {}
	if (comparer.ContainsText("C Protected Member Volatile Function Virtual")) {}
	if (comparer.ContainsText("C Protected Member Volatile Function Virtual Pure")) {}
	if (comparer.ContainsText("C Public Member Abstract Class Type")) {}
	if (comparer.ContainsText("C Public Member Abstract Class Type Template")) {}
	if (comparer.ContainsText("C Public Member Abstract Struct Type")) {}
	if (comparer.ContainsText("C Public Member Abstract Struct Type Template")) {}
	if (comparer.ContainsText("C Public Member Class Type")) {}
	if (comparer.ContainsText("C Public Member Class Type Template")) {}
	if (comparer.ContainsText("C Public Member Const Function")) {}
	if (comparer.ContainsText("C Public Member Const Function Template")) {}
	if (comparer.ContainsText("C Public Member Const Function Virtual")) {}
	if (comparer.ContainsText("C Public Member Const Function Virtual Pure")) {}
	if (comparer.ContainsText("C Public Member Const Volatile Function")) {}
	if (comparer.ContainsText("C Public Member Const Volatile Function Template")) {}
	if (comparer.ContainsText("C Public Member Const Volatile Function Virtual")) {}
	if (comparer.ContainsText("C Public Member Const Volatile Function Virtual Pure")) {}
	if (comparer.ContainsText("C Public Member Enum Type")) {}
	if (comparer.ContainsText("C Public Member Enumerator")) {}
	if (comparer.ContainsText("C Public Member Function")) {}
	if (comparer.ContainsText("C Public Member Function Template")) {}
	if (comparer.ContainsText("C Public Member Function Explicit")) {}
	if (comparer.ContainsText("C Public Member Function Explicit Template")) {}
	if (comparer.ContainsText("C Public Member Function Static")) {}
	if (comparer.ContainsText("C Public Member Function Static Template")) {}
	if (comparer.ContainsText("C Public Member Function Virtual")) {}
	if (comparer.ContainsText("C Public Member Function Virtual Pure")) {}
	if (comparer.ContainsText("C Public Member Object")) {}
	if (comparer.ContainsText("C Public Member Object Static")) {}
	if (comparer.ContainsText("C Public Member Struct Type")) {}
	if (comparer.ContainsText("C Public Member Struct Type Template")) {}
	if (comparer.ContainsText("C Public Member Typedef Type")) {}
	if (comparer.ContainsText("C Public Member Union Type")) {}
	if (comparer.ContainsText("C Public Member Union Type Template")) {}
	if (comparer.ContainsText("C Public Member Volatile Function")) {}
	if (comparer.ContainsText("C Public Member Volatile Function Template")) {}
	if (comparer.ContainsText("C Public Member Volatile Function Virtual")) {}
	if (comparer.ContainsText("C Public Member Volatile Function Virtual Pure")) {}
	if (comparer.ContainsText("C Struct Type")) {}
	if (comparer.ContainsText("C Struct Type Template")) {}
	if (comparer.ContainsText("C TemplateParameter Object")) {}
	if (comparer.ContainsText("C TemplateParameter Type")) {}
	if (comparer.ContainsText("C Typedef Type")) {}
	if (comparer.ContainsText("C Union Type")) {}
	if (comparer.ContainsText("C Union Type Template")) {}
	if (comparer.ContainsText("C Unknown Class Type")) {}
	if (comparer.ContainsText("C Unknown Class Type Template")) {}
	if (comparer.ContainsText("C Unknown Enum Type")) {}
	if (comparer.ContainsText("C Unknown Header File")) {}
	if (comparer.ContainsText("C Unknown Function")) {}
	if (comparer.ContainsText("C Unknown Function Template")) {}
	if (comparer.ContainsText("C Unknown Label")) {}
	if (comparer.ContainsText("C Unknown Macro")) {}
	if (comparer.ContainsText("C Unknown Member Function")) {}
	if (comparer.ContainsText("C Unknown Member Function Template")) {}
	if (comparer.ContainsText("C Unknown Member Object")) {}
	if (comparer.ContainsText("C Unknown Member Type")) {}
	if (comparer.ContainsText("C Unknown Object")) {}
	if (comparer.ContainsText("C Unknown Struct Type")) {}
	if (comparer.ContainsText("C Unknown Struct Type Template")) {}
	if (comparer.ContainsText("C Unknown Type")) {}
	if (comparer.ContainsText("C Unknown Union Type")) {}
	if (comparer.ContainsText("C Unknown Union Type Template")) {}
	if (comparer.ContainsText("C Unnamed Class Type")) {}
	if (comparer.ContainsText("C Unnamed Enum Type")) {}
	if (comparer.ContainsText("C Unnamed Parameter")) {}
	if (comparer.ContainsText("C Unnamed Private Member Class Type")) {}
	if (comparer.ContainsText("C Unnamed Private Member Enum Type")) {}
	if (comparer.ContainsText("C Unnamed Private Member Struct Type")) {}
	if (comparer.ContainsText("C Unnamed Private Member Union Type")) {}
	if (comparer.ContainsText("C Unnamed Protected Member Class Type")) {}
	if (comparer.ContainsText("C Unnamed Protected Member Enum Type")) {}
	if (comparer.ContainsText("C Unnamed Protected Member Struct Type")) {}
	if (comparer.ContainsText("C Unnamed Protected Member Union Type")) {}
	if (comparer.ContainsText("C Unnamed Public Member Class Type")) {}
	if (comparer.ContainsText("C Unnamed Public Member Enum Type")) {}
	if (comparer.ContainsText("C Unnamed Public Member Struct Type")) {}
	if (comparer.ContainsText("C Unnamed Public Member Union Type")) {}
	if (comparer.ContainsText("C Unnamed Struct Type")) {}
	if (comparer.ContainsText("C Unnamed Union Type")) {}
	if (comparer.ContainsText("C Unnamed TemplateParameter Object")) {}
	if (comparer.ContainsText("C Unnamed TemplateParameter Type")) {}
	if (comparer.ContainsText("C Unresolved Class Type")) {}
	if (comparer.ContainsText("C Unresolved Class Type Template")) {}
	if (comparer.ContainsText("C Unresolved Enum Type")) {}
	if (comparer.ContainsText("C Unresolved Enumerator")) {}
	if (comparer.ContainsText("C Unresolved Function")) {}
	if (comparer.ContainsText("C Unresolved Function Template")) {}
	if (comparer.ContainsText("C Unresolved Function Interrupt")) {}
	if (comparer.ContainsText("C Unresolved Function Interrupt Template")) {}
	if (comparer.ContainsText("C Unresolved Function Interrupt Static")) {}
	if (comparer.ContainsText("C Unresolved Function Interrupt Static Template")) {}
	if (comparer.ContainsText("C Unresolved Function Static")) {}
	if (comparer.ContainsText("C Unresolved Function Static Template")) {}
	if (comparer.ContainsText("C Unresolved Header File")) {}
	if (comparer.ContainsText("C Unresolved Macro")) {}
	if (comparer.ContainsText("C Unresolved Object Global")) {}
	if (comparer.ContainsText("C Unresolved Object Global Static")) {}
	if (comparer.ContainsText("C Unresolved Private Member Class Type")) {}
	if (comparer.ContainsText("C Unresolved Private Member Class Type Template")) {}
	if (comparer.ContainsText("C Unresolved Private Member Const Function")) {}
	if (comparer.ContainsText("C Unresolved Private Member Const Function Template")) {}
	if (comparer.ContainsText("C Unresolved Private Member Const Function Virtual")) {}
	if (comparer.ContainsText("C Unresolved Private Member Const Function Virtual Pure")) {}
	if (comparer.ContainsText("C Unresolved Private Member Const Volatile Function")) {}
	if (comparer.ContainsText("C Unresolved Private Member Const Volatile Function Template")) {}
	if (comparer.ContainsText("C Unresolved Private Member Const Volatile Function Virtual")) {}
	if (comparer.ContainsText("C Unresolved Private Member Const Volatile Function Virtual Pure")) {}
	if (comparer.ContainsText("C Unresolved Private Member Enum Type")) {}
	if (comparer.ContainsText("C Unresolved Private Member Enumerator")) {}
	if (comparer.ContainsText("C Unresolved Private Member Function")) {}
	if (comparer.ContainsText("C Unresolved Private Member Function Template")) {}
	if (comparer.ContainsText("C Unresolved Private Member Function Explicit")) {}
	if (comparer.ContainsText("C Unresolved Private Member Function Explicit Template")) {}
	if (comparer.ContainsText("C Unresolved Private Member Function Static")) {}
	if (comparer.ContainsText("C Unresolved Private Member Function Static Template")) {}
	if (comparer.ContainsText("C Unresolved Private Member Function Virtual")) {}
	if (comparer.ContainsText("C Unresolved Private Member Function Virtual Pure")) {}
	if (comparer.ContainsText("C Unresolved Private Member Object Static")) {}
	if (comparer.ContainsText("C Unresolved Private Member Struct Type")) {}
	if (comparer.ContainsText("C Unresolved Private Member Struct Type Template")) {}
	if (comparer.ContainsText("C Unresolved Private Member Typedef Type")) {}
	if (comparer.ContainsText("C Unresolved Private Member Union Type")) {}
	if (comparer.ContainsText("C Unresolved Private Member Union Type Template")) {}
	if (comparer.ContainsText("C Unresolved Private Member Volatile Function")) {}
	if (comparer.ContainsText("C Unresolved Private Member Volatile Function Template")) {}
	if (comparer.ContainsText("C Unresolved Private Member Volatile Function Virtual")) {}
	if (comparer.ContainsText("C Unresolved Private Member Volatile Function Virtual Pure")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Class Type")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Class Type Template")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Const Function")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Const Function Template")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Const Function Virtual")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Const Function Virtual Pure")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Const Volatile Function")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Const Volatile Function Template")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Const Volatile Function Virtual")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Const Volatile Function Virtual Pure")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Enum Type")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Enumerator")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Function")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Function Template")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Function Explicit")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Function Explicit Template")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Function Static")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Function Static Template")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Function Virtual")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Function Virtual Pure")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Object Static")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Struct Type")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Struct Type Template")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Typedef Type")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Union Type")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Union Type Template")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Volatile Function")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Volatile Function Template")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Volatile Function Virtual")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Volatile Function Virtual Pure")) {}
	if (comparer.ContainsText("C Unresolved Public Member Class Type")) {}
	if (comparer.ContainsText("C Unresolved Public Member Class Type Template")) {}
	if (comparer.ContainsText("C Unresolved Public Member Const Function")) {}
	if (comparer.ContainsText("C Unresolved Public Member Const Function Template")) {}
	if (comparer.ContainsText("C Unresolved Public Member Const Function Virtual")) {}
	if (comparer.ContainsText("C Unresolved Public Member Const Function Virtual Pure")) {}
	if (comparer.ContainsText("C Unresolved Public Member Const Volatile Function")) {}
	if (comparer.ContainsText("C Unresolved Public Member Const Volatile Function Template")) {}
	if (comparer.ContainsText("C Unresolved Public Member Const Volatile Function Virtual")) {}
	if (comparer.ContainsText("C Unresolved Public Member Const Volatile Function Virtual Pure")) {}
	if (comparer.ContainsText("C Unresolved Public Member Enum Type")) {}
	if (comparer.ContainsText("C Unresolved Public Member Enumerator")) {}
	if (comparer.ContainsText("C Unresolved Public Member Function")) {}
	if (comparer.ContainsText("C Unresolved Public Member Function Template")) {}
	if (comparer.ContainsText("C Unresolved Public Member Function Explicit")) {}
	if (comparer.ContainsText("C Unresolved Public Member Function Explicit Template")) {}
	if (comparer.ContainsText("C Unresolved Public Member Function Implicit")) {}
	if (comparer.ContainsText("C Unresolved Public Member Function Static")) {}
	if (comparer.ContainsText("C Unresolved Public Member Function Static Template")) {}
	if (comparer.ContainsText("C Unresolved Public Member Function Virtual")) {}
	if (comparer.ContainsText("C Unresolved Public Member Function Virtual Pure")) {}
	if (comparer.ContainsText("C Unresolved Public Member Object Static")) {}
	if (comparer.ContainsText("C Unresolved Public Member Struct Type")) {}
	if (comparer.ContainsText("C Unresolved Public Member Struct Type Template")) {}
	if (comparer.ContainsText("C Unresolved Public Member Typedef Type")) {}
	if (comparer.ContainsText("C Unresolved Public Member Union Type")) {}
	if (comparer.ContainsText("C Unresolved Public Member Union Type Template")) {}
	if (comparer.ContainsText("C Unresolved Public Member Volatile Function")) {}
	if (comparer.ContainsText("C Unresolved Public Member Volatile Function Template")) {}
	if (comparer.ContainsText("C Unresolved Public Member Volatile Function Virtual")) {}
	if (comparer.ContainsText("C Unresolved Public Member Volatile Function Virtual Pure")) {}
	if (comparer.ContainsText("C Unresolved Struct Type")) {}
	if (comparer.ContainsText("C Unresolved Struct Type Template")) {}
	if (comparer.ContainsText("C Unresolved Typedef Type")) {}
	if (comparer.ContainsText("C Unresolved Union Type")) {}
	if (comparer.ContainsText("C Unresolved Union Type Template")) {}
	if (comparer.ContainsText("C Asm File")) {}
	if (comparer.ContainsText("C Asm Function Global")) {}
	if (comparer.ContainsText("C Asm Function Local")) {}
	if (comparer.ContainsText("C Asm Header File")) {}
	if (comparer.ContainsText("C Asm Label Global")) {}
	if (comparer.ContainsText("C Asm Label Local")) {}
	if (comparer.ContainsText("C Asm Macro")) {}
	if (comparer.ContainsText("C Asm Macro Functional")) {}
	if (comparer.ContainsText("C Asm Parameter")) {}
	if (comparer.ContainsText("C Asm Section")) {}
	if (comparer.ContainsText("C Asm Symbol Global")) {}
	if (comparer.ContainsText("C Asm Symbol Local")) {}
	if (comparer.ContainsText("C Asm Unknown")) {}
	if (comparer.ContainsText("C Asm Unresolved Function")) {}
	if (comparer.ContainsText("C Asm Unresolved Header File")) {}
	if (comparer.ContainsText("C Asm Unresolved Macro")) {}
	if (comparer.ContainsText("C ObjC Class Type")) {}
	if (comparer.ContainsText("C ObjC Protocol Type")) {}
	if (comparer.ContainsText("C ObjC Category Type")) {}
	if (comparer.ContainsText("C ObjC Property")) {}
	if (comparer.ContainsText("C ObjC Method Member Function")) {}
	if (comparer.ContainsText("C ObjC Instance Method Member Function")) {}
	if (comparer.ContainsText("C ObjC Optional Method Member Function")) {}
	if (comparer.ContainsText("C ObjC Optional Instance Method Member Function")) {}
	if (comparer.ContainsText("C ObjC Private Instance Variable Member Object")) {}
	if (comparer.ContainsText("C ObjC Protected Instance Variable Member Object")) {}
	if (comparer.ContainsText("C ObjC Public Instance Variable Member Object")) {}
	if (comparer.ContainsText("C ObjC Package Instance Variable Member Object")) {}
	if (comparer.ContainsText("C ObjC Unknown Class Type")) {}
	if (comparer.ContainsText("C ObjC Unknown Protocol Type")) {}
	if (comparer.ContainsText("C ObjC Unknown Category Type")) {}
	if (comparer.ContainsText("C ObjC Unknown Property")) {}
	if (comparer.ContainsText("C ObjC Unknown Method Member Function")) {}
	if (comparer.ContainsText("C ObjC Unknown Instance Method Member Function")) {}
	if (comparer.ContainsText("C ObjC Unknown Instance Variable Member Object")) {}
	if (comparer.ContainsText("C ObjC Unresolved Class Type")) {}
	if (comparer.ContainsText("C ObjC Unresolved Protocol Type")) {}
	if (comparer.ContainsText("C ObjC Unresolved Category Type")) {}
	if (comparer.ContainsText("C ObjC Unresolved Property")) {}
	if (comparer.ContainsText("C ObjC Unresolved Method Member Function")) {}
	if (comparer.ContainsText("C ObjC Unresolved Instance Method Member Function")) {}
	if (comparer.ContainsText("C ObjC Unresolved Optional Method Member Function")) {}
	if (comparer.ContainsText("C ObjC Unresolved Optional Instance Method Member Function")) {}
	if (comparer.ContainsText("C ObjC Unresolved Private Instance Variable Member Object")) {}
	if (comparer.ContainsText("C ObjC Unresolved Protected Instance Variable Member Object")) {}
	if (comparer.ContainsText("C ObjC Unresolved Public Instance Variable Member Object")) {}
	if (comparer.ContainsText("C ObjC Unresolved Package Instance Variable Member Object")) {}
	if (comparer.ContainsText("C Lambda Function")) {}
	if (comparer.ContainsText("C Private Member Type Alias")) {}
	if (comparer.ContainsText("C Private Member Type Alias Template")) {}
	if (comparer.ContainsText("C Protected Member Type Alias")) {}
	if (comparer.ContainsText("C Protected Member Type Alias Template")) {}
	if (comparer.ContainsText("C Public Member Type Alias")) {}
	if (comparer.ContainsText("C Public Member Type Alias Template")) {}
	if (comparer.ContainsText("C TemplateParameter Object Pack")) {}
	if (comparer.ContainsText("C TemplateParameter Type Pack")) {}
	if (comparer.ContainsText("C Type Alias")) {}
	if (comparer.ContainsText("C Type Alias Template")) {}
	if (comparer.ContainsText("C Unnamed TemplateParameter Object Pack")) {}
	if (comparer.ContainsText("C Unnamed TemplateParameter Type Pack")) {}
	if (comparer.ContainsText("C Unresolved Private Member Type Alias")) {}
	if (comparer.ContainsText("C Unresolved Private Member Type Alias Template")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Type Alias")) {}
	if (comparer.ContainsText("C Unresolved Protected Member Type Alias Template")) {}
	if (comparer.ContainsText("C Unresolved Public Member Type Alias")) {}
	if (comparer.ContainsText("C Unresolved Public Member Type Alias Template")) {}
	if (comparer.ContainsText("C Unresolved Type Alias")) {}
	if (comparer.ContainsText("C Unresolved Type Alias Template")) {}
	else {}
}

void EntityKindParser::ParseCSharpKinds(string kind)
{
	StringComparer comparer(kind);

	if (comparer.ContainsText("c# csharp Namespace Alias")) {}
	if (comparer.ContainsText("c# csharp Type Alias")) {}
	if (comparer.ContainsText("c# csharp Const Local")) {}
	if (comparer.ContainsText("c# csharp Constructor Member Method Static")) {}
	if (comparer.ContainsText("c# csharp Enumerator")) {}
	if (comparer.ContainsText("c# csharp Extern Alias Namespace")) {}
	if (comparer.ContainsText("c# csharp File")) {}
	if (comparer.ContainsText("c# csharp Dll File")) {}
	if (comparer.ContainsText("c# csharp Finalizer Member Method")) {}
	if (comparer.ContainsText("c# csharp Namespace")) {}
	if (comparer.ContainsText("c# csharp Parameter Out")) {}
	if (comparer.ContainsText("c# csharp Parameter Params")) {}
	if (comparer.ContainsText("c# csharp Parameter Ref")) {}
	if (comparer.ContainsText("c# csharp Parameter Value")) {}
	if (comparer.ContainsText("c# csharp Internal Const Member Field")) {}
	if (comparer.ContainsText("c# csharp Internal Constructor Member Method")) {}
	if (comparer.ContainsText("c# csharp Internal Member Event")) {}
	if (comparer.ContainsText("c# csharp Internal Member Event Static")) {}
	if (comparer.ContainsText("c# csharp Internal Member Event Virtual")) {}
	if (comparer.ContainsText("c# csharp Internal Member Event Virtual Abstract")) {}
	if (comparer.ContainsText("c# csharp Internal Member Event Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Internal Member Field")) {}
	if (comparer.ContainsText("c# csharp Internal Member Field Static")) {}
	if (comparer.ContainsText("c# csharp Internal Member Indexer")) {}
	if (comparer.ContainsText("c# csharp Internal Member Indexer Virtual")) {}
	if (comparer.ContainsText("c# csharp Internal Member Indexer Virtual Abstract")) {}
	if (comparer.ContainsText("c# csharp Internal Member Indexer Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Internal Member Method")) {}
	if (comparer.ContainsText("c# csharp Internal Member Method Stub")) {}
	if (comparer.ContainsText("c# csharp Internal Member Method Static")) {}
	if (comparer.ContainsText("c# csharp Internal Member Method Virtual")) {}
	if (comparer.ContainsText("c# csharp Internal Member Method Virtual Abstract")) {}
	if (comparer.ContainsText("c# csharp Internal Member Method Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Internal Member Property")) {}
	if (comparer.ContainsText("c# csharp Internal Member Property Extern")) {}
	if (comparer.ContainsText("c# csharp Internal Member Property Static")) {}
	if (comparer.ContainsText("c# csharp Internal Member Property Static Extern")) {}
	if (comparer.ContainsText("c# csharp Internal Member Property Virtual")) {}
	if (comparer.ContainsText("c# csharp Internal Member Property Virtual Extern")) {}
	if (comparer.ContainsText("c# csharp Internal Member Property Virtual Abstract")) {}
	if (comparer.ContainsText("c# csharp Internal Member Property Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Internal Member Property Virtual Sealed Extern")) {}
	if (comparer.ContainsText("c# csharp Internal Type Class")) {}
	if (comparer.ContainsText("c# csharp Internal Type Class Abstract")) {}
	if (comparer.ContainsText("c# csharp Internal Type Class Static")) {}
	if (comparer.ContainsText("c# csharp Internal Type Class Sealed")) {}
	if (comparer.ContainsText("c# csharp Internal Type Delegate")) {}
	if (comparer.ContainsText("c# csharp Internal Type Enum")) {}
	if (comparer.ContainsText("c# csharp Internal Type Generic Class")) {}
	if (comparer.ContainsText("c# csharp Internal Type Generic Class Abstract")) {}
	if (comparer.ContainsText("c# csharp Internal Type Generic Class Static")) {}
	if (comparer.ContainsText("c# csharp Internal Type Generic Class Sealed")) {}
	if (comparer.ContainsText("c# csharp Internal Type Interface")) {}
	if (comparer.ContainsText("c# csharp Internal Type Struct")) {}
	if (comparer.ContainsText("c# csharp Protected Const Member Field")) {}
	if (comparer.ContainsText("c# csharp Protected Constructor Member Method")) {}
	if (comparer.ContainsText("c# csharp Protected Member Event")) {}
	if (comparer.ContainsText("c# csharp Protected Member Event Static")) {}
	if (comparer.ContainsText("c# csharp Protected Member Event Virtual")) {}
	if (comparer.ContainsText("c# csharp Protected Member Event Virtual Abstract")) {}
	if (comparer.ContainsText("c# csharp Protected Member Event Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Protected Member Field")) {}
	if (comparer.ContainsText("c# csharp Protected Member Field Static")) {}
	if (comparer.ContainsText("c# csharp Protected Member Indexer")) {}
	if (comparer.ContainsText("c# csharp Protected Member Indexer Virtual")) {}
	if (comparer.ContainsText("c# csharp Protected Member Indexer Virtual Abstract")) {}
	if (comparer.ContainsText("c# csharp Protected Member Indexer Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Protected Member Method")) {}
	if (comparer.ContainsText("c# csharp Protected Member Method Stub")) {}
	if (comparer.ContainsText("c# csharp Protected Member Method Static")) {}
	if (comparer.ContainsText("c# csharp Protected Member Method Virtual")) {}
	if (comparer.ContainsText("c# csharp Protected Member Method Virtual Abstract")) {}
	if (comparer.ContainsText("c# csharp Protected Member Method Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Protected Member Property")) {}
	if (comparer.ContainsText("c# csharp Protected Member Property Extern")) {}
	if (comparer.ContainsText("c# csharp Protected Member Property Static")) {}
	if (comparer.ContainsText("c# csharp Protected Member Property Static Extern")) {}
	if (comparer.ContainsText("c# csharp Protected Member Property Virtual")) {}
	if (comparer.ContainsText("c# csharp Protected Member Property Virtual Extern")) {}
	if (comparer.ContainsText("c# csharp Protected Member Property Virtual Abstract")) {}
	if (comparer.ContainsText("c# csharp Protected Member Property Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Protected Member Property Virtual Sealed Extern")) {}
	if (comparer.ContainsText("c# csharp Protected Type Class")) {}
	if (comparer.ContainsText("c# csharp Protected Type Class Abstract")) {}
	if (comparer.ContainsText("c# csharp Protected Type Class Static")) {}
	if (comparer.ContainsText("c# csharp Protected Type Class Sealed")) {}
	if (comparer.ContainsText("c# csharp Protected Type Delegate")) {}
	if (comparer.ContainsText("c# csharp Protected Type Enum")) {}
	if (comparer.ContainsText("c# csharp Protected Type Generic Class")) {}
	if (comparer.ContainsText("c# csharp Protected Type Generic Class Abstract")) {}
	if (comparer.ContainsText("c# csharp Protected Type Generic Class Static")) {}
	if (comparer.ContainsText("c# csharp Protected Type Generic Class Sealed")) {}
	if (comparer.ContainsText("c# csharp Protected Type Interface")) {}
	if (comparer.ContainsText("c# csharp Protected Type Struct")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Const Member Field")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Constructor Member Method")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Event")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Event Static")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Event Virtual")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Event Virtual Abstract")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Event Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Field")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Field Static")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Indexer")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Indexer Virtual")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Indexer Virtual Abstract")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Indexer Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Method")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Method Stub")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Method Static")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Method Virtual")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Method Virtual Abstract")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Method Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Property")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Property Extern")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Property Static")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Property Static Extern")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Property Virtual")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Property Virtual Extern")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Property Virtual Abstract")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Property Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Member Property Virtual Sealed Extern")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Type Class")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Type Class Abstract")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Type Class Static")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Type Class Sealed")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Type Delegate")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Type Enum")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Type Generic Class")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Type Generic Class Abstract")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Type Generic Class Static")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Type Generic Class Sealed")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Type Interface")) {}
	if (comparer.ContainsText("c# csharp Protected Internal Type Struct")) {}
	if (comparer.ContainsText("c# csharp Private Const Member Field")) {}
	if (comparer.ContainsText("c# csharp Private Constructor Member Method")) {}
	if (comparer.ContainsText("c# csharp Private Member Event")) {}
	if (comparer.ContainsText("c# csharp Private Member Event Static")) {}
	if (comparer.ContainsText("c# csharp Private Member Field")) {}
	if (comparer.ContainsText("c# csharp Private Member Field Static")) {}
	if (comparer.ContainsText("c# csharp Private Member Indexer")) {}
	if (comparer.ContainsText("c# csharp Private Member Method")) {}
	if (comparer.ContainsText("c# csharp Private Member Method Stub")) {}
	if (comparer.ContainsText("c# csharp Private Member Method Static")) {}
	if (comparer.ContainsText("c# csharp Private Member Property")) {}
	if (comparer.ContainsText("c# csharp Private Member Property Extern")) {}
	if (comparer.ContainsText("c# csharp Private Member Property Static")) {}
	if (comparer.ContainsText("c# csharp Private Member Property Static Extern")) {}
	if (comparer.ContainsText("c# csharp Private Type Class")) {}
	if (comparer.ContainsText("c# csharp Private Type Class Abstract")) {}
	if (comparer.ContainsText("c# csharp Private Type Class Static")) {}
	if (comparer.ContainsText("c# csharp Private Type Class Sealed")) {}
	if (comparer.ContainsText("c# csharp Private Type Delegate")) {}
	if (comparer.ContainsText("c# csharp Private Type Enum")) {}
	if (comparer.ContainsText("c# csharp Private Type Generic Class")) {}
	if (comparer.ContainsText("c# csharp Private Type Generic Class Abstract")) {}
	if (comparer.ContainsText("c# csharp Private Type Generic Class Static")) {}
	if (comparer.ContainsText("c# csharp Private Type Generic Class Sealed")) {}
	if (comparer.ContainsText("c# csharp Private Type Interface")) {}
	if (comparer.ContainsText("c# csharp Private Type Struct")) {}
	if (comparer.ContainsText("c# csharp Public Const Member Field")) {}
	if (comparer.ContainsText("c# csharp Public Constructor Member Method")) {}
	if (comparer.ContainsText("c# csharp Public Member Event")) {}
	if (comparer.ContainsText("c# csharp Public Member Event Static")) {}
	if (comparer.ContainsText("c# csharp Public Member Event Virtual")) {}
	if (comparer.ContainsText("c# csharp Public Member Event Virtual Abstract")) {}
	if (comparer.ContainsText("c# csharp Public Member Event Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Public Member Field")) {}
	if (comparer.ContainsText("c# csharp Public Member Field Static")) {}
	if (comparer.ContainsText("c# csharp Public Member Indexer")) {}
	if (comparer.ContainsText("c# csharp Public Member Indexer Virtual")) {}
	if (comparer.ContainsText("c# csharp Public Member Indexer Virtual Abstract")) {}
	if (comparer.ContainsText("c# csharp Public Member Indexer Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Public Member Method")) {}
	if (comparer.ContainsText("c# csharp Public Member Method Stub")) {}
	if (comparer.ContainsText("c# csharp Public Member Method Static")) {}
	if (comparer.ContainsText("c# csharp Public Member Method Virtual")) {}
	if (comparer.ContainsText("c# csharp Public Member Method Virtual Abstract")) {}
	if (comparer.ContainsText("c# csharp Public Member Method Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Public Member Property")) {}
	if (comparer.ContainsText("c# csharp Public Member Property Extern")) {}
	if (comparer.ContainsText("c# csharp Public Member Property Static")) {}
	if (comparer.ContainsText("c# csharp Public Member Property Static Extern")) {}
	if (comparer.ContainsText("c# csharp Public Member Property Virtual")) {}
	if (comparer.ContainsText("c# csharp Public Member Property Virtual Extern")) {}
	if (comparer.ContainsText("c# csharp Public Member Property Virtual Abstract")) {}
	if (comparer.ContainsText("c# csharp Public Member Property Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Public Member Property Virtual Sealed Extern")) {}
	if (comparer.ContainsText("c# csharp Public Type Class")) {}
	if (comparer.ContainsText("c# csharp Public Type Class Abstract")) {}
	if (comparer.ContainsText("c# csharp Public Type Class Static")) {}
	if (comparer.ContainsText("c# csharp Public Type Class Sealed")) {}
	if (comparer.ContainsText("c# csharp Public Type Delegate")) {}
	if (comparer.ContainsText("c# csharp Public Type Enum")) {}
	if (comparer.ContainsText("c# csharp Public Type Generic Class")) {}
	if (comparer.ContainsText("c# csharp Public Type Generic Class Abstract")) {}
	if (comparer.ContainsText("c# csharp Public Type Generic Class Static")) {}
	if (comparer.ContainsText("c# csharp Public Type Generic Class Sealed")) {}
	if (comparer.ContainsText("c# csharp Public Type Interface")) {}
	if (comparer.ContainsText("c# csharp Public Type Struct")) {}
	if (comparer.ContainsText("c# csharp Type Parameter")) {}
	if (comparer.ContainsText("c# csharp Unknown Type Class")) {}
	if (comparer.ContainsText("c# csharp Unknown Type Interface")) {}
	if (comparer.ContainsText("c# csharp Unknown Member Method")) {}
	if (comparer.ContainsText("c# csharp Unknown Namespace")) {}
	if (comparer.ContainsText("c# csharp Unknown Type")) {}
	if (comparer.ContainsText("c# csharp Unknown Variable")) {}
	if (comparer.ContainsText("c# csharp Unresolved Constructor Member Method Static")) {}
	if (comparer.ContainsText("c# csharp Unresolved Dynamic Member")) {}
	if (comparer.ContainsText("c# csharp Unresolved Enumerator")) {}
	if (comparer.ContainsText("c# csharp Unresolved Member Field")) {}
	if (comparer.ContainsText("c# csharp Unresolved Finalizer Member Method")) {}
	if (comparer.ContainsText("c# csharp Unresolved Internal Constructor Member Method")) {}
	if (comparer.ContainsText("c# csharp Unresolved Internal Member Event")) {}
	if (comparer.ContainsText("c# csharp Unresolved Internal Member Event Static")) {}
	if (comparer.ContainsText("c# csharp Unresolved Internal Member Event Virtual")) {}
	if (comparer.ContainsText("c# csharp Unresolved Internal Member Event Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Unresolved Internal Member Indexer")) {}
	if (comparer.ContainsText("c# csharp Unresolved Internal Member Indexer Virtual")) {}
	if (comparer.ContainsText("c# csharp Unresolved Internal Member Indexer Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Unresolved Internal Member Method")) {}
	if (comparer.ContainsText("c# csharp Unresolved Internal Extern Member Method")) {}
	if (comparer.ContainsText("c# csharp Unresolved Internal Member Method Static")) {}
	if (comparer.ContainsText("c# csharp Unresolved Internal Extern Member Method Static")) {}
	if (comparer.ContainsText("c# csharp Unresolved Internal Member Method Virtual")) {}
	if (comparer.ContainsText("c# csharp Unresolved Internal Extern Member Method Virtual")) {}
	if (comparer.ContainsText("c# csharp Unresolved Internal Member Method Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Unresolved Internal Extern Member Method Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Unresolved Internal Member Property")) {}
	if (comparer.ContainsText("c# csharp Unresolved Internal Member Property Static")) {}
	if (comparer.ContainsText("c# csharp Unresolved Internal Member Property Virtual")) {}
	if (comparer.ContainsText("c# csharp Unresolved Internal Member Property Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Unresolved Namespace")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Constructor Member Method")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Member Event")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Member Event Static")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Member Event Virtual")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Member Event Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Member Indexer")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Member Indexer Virtual")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Member Indexer Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Member Method")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Extern Member Method")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Member Method Static")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Extern Member Method Static")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Member Method Virtual")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Extern Member Method Virtual")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Member Method Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Extern Member Method Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Member Property")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Member Property Static")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Member Property Virtual")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Member Property Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Internal Constructor Member Method")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Internal Member Event")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Internal Member Event Static")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Internal Member Event Virtual")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Internal Member Event Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Internal Member Indexer")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Internal Member Indexer Virtual")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Internal Member Indexer Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Internal Member Method")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Internal Extern Member Method")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Internal Member Method Static")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Internal Extern Member Method S")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Internal Member Method Virtual")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Internal Extern Member Method Virtual")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Internal Member Method Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Internal Extern Member Method Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Internal Member Property")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Internal Member Property Static")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Internal Member Property Virtual")) {}
	if (comparer.ContainsText("c# csharp Unresolved Protected Internal Member Property Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Unresolved Private Constructor Member Method")) {}
	if (comparer.ContainsText("c# csharp Unresolved Private Member Event")) {}
	if (comparer.ContainsText("c# csharp Unresolved Private Member Event Static")) {}
	if (comparer.ContainsText("c# csharp Unresolved Private Member Indexer")) {}
	if (comparer.ContainsText("c# csharp Unresolved Private Member Method")) {}
	if (comparer.ContainsText("c# csharp Unresolved Private Extern Member Method")) {}
	if (comparer.ContainsText("c# csharp Unresolved Private Member Method Static")) {}
	if (comparer.ContainsText("c# csharp Unresolved Private Extern Member Method Static")) {}
	if (comparer.ContainsText("c# csharp Unresolved Private Member Property")) {}
	if (comparer.ContainsText("c# csharp Unresolved Private Member Property Static")) {}
	if (comparer.ContainsText("c# csharp Unresolved Public Constructor Member Method")) {}
	if (comparer.ContainsText("c# csharp Unresolved Public Member Event")) {}
	if (comparer.ContainsText("c# csharp Unresolved Public Member Event Static")) {}
	if (comparer.ContainsText("c# csharp Unresolved Public Member Event Virtual")) {}
	if (comparer.ContainsText("c# csharp Unresolved Public Member Event Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Unresolved Public Member Indexer")) {}
	if (comparer.ContainsText("c# csharp Unresolved Public Member Indexer Virtual")) {}
	if (comparer.ContainsText("c# csharp Unresolved Public Member Indexer Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Unresolved Public Member Method")) {}
	if (comparer.ContainsText("c# csharp Unresolved Public Extern Member Method")) {}
	if (comparer.ContainsText("c# csharp Unresolved Public Member Method Static")) {}
	if (comparer.ContainsText("c# csharp Unresolved Public Extern Member Method Static")) {}
	if (comparer.ContainsText("c# csharp Unresolved Public Member Method Virtual")) {}
	if (comparer.ContainsText("c# csharp Unresolved Public Extern Member Method Virtual")) {}
	if (comparer.ContainsText("c# csharp Unresolved Public Member Method Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Unresolved Public Extern Member Method Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Unresolved Public Member Property")) {}
	if (comparer.ContainsText("c# csharp Unresolved Public Member Property Static")) {}
	if (comparer.ContainsText("c# csharp Unresolved Public Member Property Virtual")) {}
	if (comparer.ContainsText("c# csharp Unresolved Public Member Property Virtual Sealed")) {}
	if (comparer.ContainsText("c# csharp Unresolved Type")) {}
	if (comparer.ContainsText("c# csharp Variable Local")) {}
	else {}
}

void EntityKindParser::ParseJavaKinds(string kind)
{
	StringComparer comparer(kind);

	if (comparer.ContainsText("Java Abstract Class Type Default Member")) {}
	if (comparer.ContainsText("Java Abstract Class Type Private Member")) {}
	if (comparer.ContainsText("Java Abstract Class Type Protected Member")) {}
	if (comparer.ContainsText("Java Abstract Class Type Public Member")) {}
	if (comparer.ContainsText("Java Abstract Generic Class Type Default Member")) {}
	if (comparer.ContainsText("Java Abstract Generic Class Type Private Member")) {}
	if (comparer.ContainsText("Java Abstract Generic Class Type Protected Member")) {}
	if (comparer.ContainsText("Java Abstract Generic Class Type Public Member")) {}
	if (comparer.ContainsText("Java Abstract Enum Type Default Member")) {}
	if (comparer.ContainsText("Java Abstract Enum Type Private Member")) {}
	if (comparer.ContainsText("Java Abstract Enum Type Protected Member")) {}
	if (comparer.ContainsText("Java Abstract Enum Type Public Member")) {}
	if (comparer.ContainsText("Java Abstract Method Default Member")) {}
	if (comparer.ContainsText("Java Abstract Method Protected Member")) {}
	if (comparer.ContainsText("Java Abstract Method Public Member")) {}
	if (comparer.ContainsText("Java Abstract Generic Method Default Member")) {}
	if (comparer.ContainsText("Java Abstract Generic Method Protected Member")) {}
	if (comparer.ContainsText("Java Abstract Generic Method Public Member")) {}
	if (comparer.ContainsText("Java Annotation Interface Type Default")) {}
	if (comparer.ContainsText("Java Annotation Interface Type Private")) {}
	if (comparer.ContainsText("Java Annotation Interface Type Protected")) {}
	if (comparer.ContainsText("Java Annotation Interface Type Public")) {}
	if (comparer.ContainsText("Java Catch Parameter")) {}
	if (comparer.ContainsText("Java Class Type Anonymous Member")) {}
	if (comparer.ContainsText("Java Class Type Default Member")) {}
	if (comparer.ContainsText("Java Class Type Private Member")) {}
	if (comparer.ContainsText("Java Class Type Protected Member")) {}
	if (comparer.ContainsText("Java Class Type Public Member")) {}
	if (comparer.ContainsText("Java Generic Class Type Default Member")) {}
	if (comparer.ContainsText("Java Generic Class Type Private Member")) {}
	if (comparer.ContainsText("Java Generic Class Type Protected Member")) {}
	if (comparer.ContainsText("Java Generic Class Type Public Member")) {}
	if (comparer.ContainsText("Java Method Constructor Member Default")) {}
	if (comparer.ContainsText("Java Method Constructor Member Protected")) {}
	if (comparer.ContainsText("Java Method Constructor Member Private")) {}
	if (comparer.ContainsText("Java Method Constructor Member Public")) {}
	if (comparer.ContainsText("Java Variable EnumConstant Public Member")) {}
	if (comparer.ContainsText("Java Enum Class Type Default Member")) {}
	if (comparer.ContainsText("Java Enum Class Type Private Member")) {}
	if (comparer.ContainsText("Java Enum Class Type Protected Member")) {}
	if (comparer.ContainsText("Java Enum Class Type Public Member")) {}
	if (comparer.ContainsText("Java File")) {}
	if (comparer.ContainsText("Java File Jar")) {}
	if (comparer.ContainsText("Java Final Class Type Default Member")) {}
	if (comparer.ContainsText("Java Final Class Type Private Member")) {}
	if (comparer.ContainsText("Java Final Class Type Protected Member")) {}
	if (comparer.ContainsText("Java Final Class Type Public Member")) {}
	if (comparer.ContainsText("Java Final Generic Class Type Default Member")) {}
	if (comparer.ContainsText("Java Final Generic Class Type Private Member")) {}
	if (comparer.ContainsText("Java Final Generic Class Type Protected Member")) {}
	if (comparer.ContainsText("Java Final Generic Class Type Public Member")) {}
	if (comparer.ContainsText("Java Final Method Default Member")) {}
	if (comparer.ContainsText("Java Final Method Private Member")) {}
	if (comparer.ContainsText("Java Final Method Protected Member")) {}
	if (comparer.ContainsText("Java Final Method Public Member")) {}
	if (comparer.ContainsText("Java Generic Final Method Default Member")) {}
	if (comparer.ContainsText("Java Generic Final Method Private Member")) {}
	if (comparer.ContainsText("Java Final Generic Method Protected Member")) {}
	if (comparer.ContainsText("Java Final Generic Method Public Member")) {}
	if (comparer.ContainsText("Java Final Variable Default Member")) {}
	if (comparer.ContainsText("Java Final Variable Local")) {}
	if (comparer.ContainsText("Java Final Variable Private Member")) {}
	if (comparer.ContainsText("Java Final Variable Protected Member")) {}
	if (comparer.ContainsText("Java Final Variable Public Member")) {}
	if (comparer.ContainsText("Java Implicit Final Variable Public Member")) {}
	if (comparer.ContainsText("Java Interface Type Default")) {}
	if (comparer.ContainsText("Java Interface Type Private")) {}
	if (comparer.ContainsText("Java Interface Type Protected")) {}
	if (comparer.ContainsText("Java Interface Type Public")) {}
	if (comparer.ContainsText("Java Generic Interface Type Default")) {}
	if (comparer.ContainsText("Java Generic Interface Type Private")) {}
	if (comparer.ContainsText("Java Generic Interface Type Protected")) {}
	if (comparer.ContainsText("Java Generic Interface Type Public")) {}
	if (comparer.ContainsText("Java Method Default Member")) {}
	if (comparer.ContainsText("Java Method Private Member")) {}
	if (comparer.ContainsText("Java Method Protected Member")) {}
	if (comparer.ContainsText("Java Method Public Member")) {}
	if (comparer.ContainsText("Java Implicit Method Public Member")) {}
	if (comparer.ContainsText("Java Generic Method Default Member")) {}
	if (comparer.ContainsText("Java Generic Method Private Member")) {}
	if (comparer.ContainsText("Java Generic Method Protected Member")) {}
	if (comparer.ContainsText("Java Generic Method Public Member")) {}
	if (comparer.ContainsText("Java Package")) {}
	if (comparer.ContainsText("Java Package Unnamed")) {}
	if (comparer.ContainsText("Java Parameter")) {}
	if (comparer.ContainsText("Java Static Abstract Class Type Default Member")) {}
	if (comparer.ContainsText("Java Static Abstract Class Type Private Member")) {}
	if (comparer.ContainsText("Java Static Abstract Class Type Protected Member")) {}
	if (comparer.ContainsText("Java Static Abstract Class Type Public Member")) {}
	if (comparer.ContainsText("Java Static Abstract Generic Class Type Default Member")) {}
	if (comparer.ContainsText("Java Static Abstract Generic Class Type Private Member")) {}
	if (comparer.ContainsText("Java Static Abstract Generic Class Type Protected Member")) {}
	if (comparer.ContainsText("Java Static Abstract Generic Class Type Public Member")) {}
	if (comparer.ContainsText("Java Static Class Type Default Member")) {}
	if (comparer.ContainsText("Java Static Class Type Private Member")) {}
	if (comparer.ContainsText("Java Static Class Type Protected Member")) {}
	if (comparer.ContainsText("Java Static Class Type Public Member")) {}
	if (comparer.ContainsText("Java Static Generic Class Type Default Member")) {}
	if (comparer.ContainsText("Java Static Class Generic Type Private Member")) {}
	if (comparer.ContainsText("Java Static Generic Class Type Protected Member")) {}
	if (comparer.ContainsText("Java Static Generic Class Type Public Member")) {}
	if (comparer.ContainsText("Java Static Final Class Type Default Member")) {}
	if (comparer.ContainsText("Java Static Final Class Type Private Member")) {}
	if (comparer.ContainsText("Java Static Final Class Type Protected Member")) {}
	if (comparer.ContainsText("Java Static Final Class Type Public Member")) {}
	if (comparer.ContainsText("Java Static Final Generic Class Type Default Member")) {}
	if (comparer.ContainsText("Java Static Final Generic Class Type Private Member")) {}
	if (comparer.ContainsText("Java Static Final Generic Class Type Protected Member")) {}
	if (comparer.ContainsText("Java Static Final Generic Class Type Public Member")) {}
	if (comparer.ContainsText("Java Static Final Method Default Member")) {}
	if (comparer.ContainsText("Java Static Final Method Private Member")) {}
	if (comparer.ContainsText("Java Static Final Method Protected Member")) {}
	if (comparer.ContainsText("Java Static Final Method Public Member")) {}
	if (comparer.ContainsText("Java Static Final Generic Method Default Member")) {}
	if (comparer.ContainsText("Java Static Final Generic Method Private Member")) {}
	if (comparer.ContainsText("Java Static Final Generic Method Protected Member")) {}
	if (comparer.ContainsText("Java Static Final Generic Method Public Member")) {}
	if (comparer.ContainsText("Java Static Final Variable Default Member")) {}
	if (comparer.ContainsText("Java Static Final Variable Private Member")) {}
	if (comparer.ContainsText("Java Static Final Variable Protected Member")) {}
	if (comparer.ContainsText("Java Static Final Variable Public Member")) {}
	if (comparer.ContainsText("Java Static Method Default Member")) {}
	if (comparer.ContainsText("Java Static Method Private Member")) {}
	if (comparer.ContainsText("Java Static Method Protected Member")) {}
	if (comparer.ContainsText("Java Static Method Public Member")) {}
	if (comparer.ContainsText("Java Static Generic Method Default Member")) {}
	if (comparer.ContainsText("Java Static Generic Method Private Member")) {}
	if (comparer.ContainsText("Java Static Generic Method Protected Member")) {}
	if (comparer.ContainsText("Java Static Generic Method Public Member")) {}
	if (comparer.ContainsText("Java Static Method Public Main Member")) {}
	if (comparer.ContainsText("Java Static Variable Default Member")) {}
	if (comparer.ContainsText("Java Static Variable Private Member")) {}
	if (comparer.ContainsText("Java Static Variable Protected Member")) {}
	if (comparer.ContainsText("Java Static Variable Public Member")) {}
	if (comparer.ContainsText("Java Class Type TypeVariable")) {}
	if (comparer.ContainsText("Java Unknown Class Type Member")) {}
	if (comparer.ContainsText("Java Unknown Method Member")) {}
	if (comparer.ContainsText("Java Unknown Package")) {}
	if (comparer.ContainsText("Java Unknown Variable Member")) {}
	if (comparer.ContainsText("Java Unresolved Method")) {}
	if (comparer.ContainsText("Java Unresolved External Final Method Default Member")) {}
	if (comparer.ContainsText("Java Unresolved External Final Method Private Member")) {}
	if (comparer.ContainsText("Java Unresolved External Final Method Protected Member")) {}
	if (comparer.ContainsText("Java Unresolved External Final Method Public Member")) {}
	if (comparer.ContainsText("Java Unresolved External Method Default Member")) {}
	if (comparer.ContainsText("Java Unresolved External Method Private Member")) {}
	if (comparer.ContainsText("Java Unresolved External Method Protected Member")) {}
	if (comparer.ContainsText("Java Unresolved External Method Public Member")) {}
	if (comparer.ContainsText("Java Unresolved External Static Final Method Default Member")) {}
	if (comparer.ContainsText("Java Unresolved External Static Final Method Private Member")) {}
	if (comparer.ContainsText("Java Unresolved Extermal Static Final Method Protected Member")) {}
	if (comparer.ContainsText("Java Unresolved External Static Final Method Public Member")) {}
	if (comparer.ContainsText("Java Unresolved External Static Method Default Member")) {}
	if (comparer.ContainsText("Java Unresolved External Static Method Private Member")) {}
	if (comparer.ContainsText("Java Unresolved External Static Method Protected Member")) {}
	if (comparer.ContainsText("Java Unresolved External Static Method Public Member")) {}
	if (comparer.ContainsText("Java Unresolved External Static Method Public Main Member")) {}
	if (comparer.ContainsText("Java Unresolved Package")) {}
	if (comparer.ContainsText("Java Unresolved Type")) {}
	if (comparer.ContainsText("Java Unresolved Variable")) {}
	if (comparer.ContainsText("Java Variable Default Member")) {}
	if (comparer.ContainsText("Java Variable Local")) {}
	if (comparer.ContainsText("Java Variable Private Member")) {}
	if (comparer.ContainsText("Java Variable Protected Member")) {}
	if (comparer.ContainsText("Java Variable Public Member")) {}
	else {}
}