##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Section14CopyAssignment
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/amillikin/cpp/Section11
ProjectPath            :=C:/Users/amillikin/cpp/Section11/Section14CopyAssignment
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=amillikin
Date                   :=13/08/2021
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :="C:/Program Files/mingw-w64/mingw64/bin/g++.exe"
SharedObjectLinkerName :="C:/Program Files/mingw-w64/mingw64/bin/g++.exe" -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Section14CopyAssignment.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :="C:/Program Files/mingw-w64/mingw64/bin/windres.exe"
LinkOptions            :=  -static
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := "C:/Program Files/mingw-w64/mingw64/bin/ar.exe" rcu
CXX      := "C:/Program Files/mingw-w64/mingw64/bin/g++.exe"
CC       := "C:/Program Files/mingw-w64/mingw64/bin/gcc.exe"
CXXFLAGS :=  -g -O0 -std=c++17 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := "C:/Program Files/mingw-w64/mingw64/bin/as.exe"


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/up_up_up_Downloads_Section-14-Operator-Overloading-Source-code_Section14_Mystring-copy-assignment_main.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_up_Downloads_Section-14-Operator-Overloading-Source-code_Section14_Mystring-copy-assignment_Mystring.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(ConfigurationName)"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(ConfigurationName)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/up_up_up_Downloads_Section-14-Operator-Overloading-Source-code_Section14_Mystring-copy-assignment_main.cpp$(ObjectSuffix): ../../../Downloads/Section-14-Operator-Overloading-Source-code/Section14/Mystring-copy-assignment/main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_up_Downloads_Section-14-Operator-Overloading-Source-code_Section14_Mystring-copy-assignment_main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_up_Downloads_Section-14-Operator-Overloading-Source-code_Section14_Mystring-copy-assignment_main.cpp$(DependSuffix) -MM ../../../Downloads/Section-14-Operator-Overloading-Source-code/Section14/Mystring-copy-assignment/main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/amillikin/Downloads/Section-14-Operator-Overloading-Source-code/Section14/Mystring-copy-assignment/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_up_Downloads_Section-14-Operator-Overloading-Source-code_Section14_Mystring-copy-assignment_main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_up_Downloads_Section-14-Operator-Overloading-Source-code_Section14_Mystring-copy-assignment_main.cpp$(PreprocessSuffix): ../../../Downloads/Section-14-Operator-Overloading-Source-code/Section14/Mystring-copy-assignment/main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_up_Downloads_Section-14-Operator-Overloading-Source-code_Section14_Mystring-copy-assignment_main.cpp$(PreprocessSuffix) ../../../Downloads/Section-14-Operator-Overloading-Source-code/Section14/Mystring-copy-assignment/main.cpp

$(IntermediateDirectory)/up_up_up_Downloads_Section-14-Operator-Overloading-Source-code_Section14_Mystring-copy-assignment_Mystring.cpp$(ObjectSuffix): ../../../Downloads/Section-14-Operator-Overloading-Source-code/Section14/Mystring-copy-assignment/Mystring.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_up_Downloads_Section-14-Operator-Overloading-Source-code_Section14_Mystring-copy-assignment_Mystring.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_up_Downloads_Section-14-Operator-Overloading-Source-code_Section14_Mystring-copy-assignment_Mystring.cpp$(DependSuffix) -MM ../../../Downloads/Section-14-Operator-Overloading-Source-code/Section14/Mystring-copy-assignment/Mystring.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/amillikin/Downloads/Section-14-Operator-Overloading-Source-code/Section14/Mystring-copy-assignment/Mystring.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_up_Downloads_Section-14-Operator-Overloading-Source-code_Section14_Mystring-copy-assignment_Mystring.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_up_Downloads_Section-14-Operator-Overloading-Source-code_Section14_Mystring-copy-assignment_Mystring.cpp$(PreprocessSuffix): ../../../Downloads/Section-14-Operator-Overloading-Source-code/Section14/Mystring-copy-assignment/Mystring.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_up_Downloads_Section-14-Operator-Overloading-Source-code_Section14_Mystring-copy-assignment_Mystring.cpp$(PreprocessSuffix) ../../../Downloads/Section-14-Operator-Overloading-Source-code/Section14/Mystring-copy-assignment/Mystring.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


