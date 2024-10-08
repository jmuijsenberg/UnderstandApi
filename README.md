# Understand C API demo code

This archive contains code which has been used to experiment with the C API of the SCITOOLS Understand code analyzer. 
For more information about Understand see https://scitools.com/.

The archive contains:
* Three similar code examples in C++, C# and Java used as input data.
* Three Understand models with the analyzed code.
* The C++ code using the C API of Understand to export data to xml.
* The resulting XML output files.

Note: Add C:\Program Files\SciTools\bin\pc-win64 to PATH env variable

Updated 2 aug 2021


To export the JSON compilation Database you can use the Clang Power Tools VS extension.

All you need to do is to select your VS project from Solution Explorer, open the context menu by pressing right-click on it, and then search for Clang Power Tools. In the submenu search for the Export Compilation Database option. The JSON compilation database will be automatically generated for you.

See https://clangpowertools.com/blog/generate-json-compilation-database.html
