##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Section13ChallengeTry2
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/amillikin/cpp/Section11
ProjectPath            :=C:/Users/amillikin/cpp/Section11/Section13ChallengeTry2
IntermediateDirectory  :=../build-$(ConfigurationName)/Section13ChallengeTry2
OutDir                 :=../build-$(ConfigurationName)/Section13ChallengeTry2
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=amillikin
Date                   :=16/08/2021
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
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :="C:/Program Files/mingw-w64/mingw64/bin/windres.exe"
LinkOptions            :=  
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
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := "C:/Program Files/mingw-w64/mingw64/bin/as.exe"


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_Movies.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_Movie.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Section13ChallengeTry2/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\Section13ChallengeTry2" mkdir "..\build-$(ConfigurationName)\Section13ChallengeTry2"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\Section13ChallengeTry2" mkdir "..\build-$(ConfigurationName)\Section13ChallengeTry2"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/Section13ChallengeTry2/.d:
	@if not exist "..\build-$(ConfigurationName)\Section13ChallengeTry2" mkdir "..\build-$(ConfigurationName)\Section13ChallengeTry2"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_Movies.cpp$(ObjectSuffix): ../../Section13/Challenge/Movies.cpp ../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_Movies.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/amillikin/cpp/Section13/Challenge/Movies.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_Section13_Challenge_Movies.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_Movies.cpp$(DependSuffix): ../../Section13/Challenge/Movies.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_Movies.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_Movies.cpp$(DependSuffix) -MM ../../Section13/Challenge/Movies.cpp

../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_Movies.cpp$(PreprocessSuffix): ../../Section13/Challenge/Movies.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_Movies.cpp$(PreprocessSuffix) ../../Section13/Challenge/Movies.cpp

../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_main.cpp$(ObjectSuffix): ../../Section13/Challenge/main.cpp ../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/amillikin/cpp/Section13/Challenge/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_Section13_Challenge_main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_main.cpp$(DependSuffix): ../../Section13/Challenge/main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_main.cpp$(DependSuffix) -MM ../../Section13/Challenge/main.cpp

../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_main.cpp$(PreprocessSuffix): ../../Section13/Challenge/main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_main.cpp$(PreprocessSuffix) ../../Section13/Challenge/main.cpp

../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_Movie.cpp$(ObjectSuffix): ../../Section13/Challenge/Movie.cpp ../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_Movie.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/amillikin/cpp/Section13/Challenge/Movie.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_Section13_Challenge_Movie.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_Movie.cpp$(DependSuffix): ../../Section13/Challenge/Movie.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_Movie.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_Movie.cpp$(DependSuffix) -MM ../../Section13/Challenge/Movie.cpp

../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_Movie.cpp$(PreprocessSuffix): ../../Section13/Challenge/Movie.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Section13ChallengeTry2/up_up_Section13_Challenge_Movie.cpp$(PreprocessSuffix) ../../Section13/Challenge/Movie.cpp


-include ../build-$(ConfigurationName)/Section13ChallengeTry2//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


