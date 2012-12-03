// Managed extensions for C++, requires "/clr" option in compiler options
#using <System.dll>
#using "..\\DefinitionLibrary.dll" //DLL Must Exist in Resource File for Compile and Linking and in the Debug Folder when executing

int main(array<System::String ^> ^args)
{
	System::String^ word = "";
	System::String^ definition = "";

	System::Console::Write("Enter a word: ");
	word = System::Console::ReadLine();
	System::Console::WriteLine("");
	//Example of using C-Sharp created DLL
	definition = DictionaryDefinition::DefinitionClass::GetDefinition(word);

	System::Console::WriteLine("Definition: {0}", definition);
	System::Console::Read();
	
	return 0;
}
