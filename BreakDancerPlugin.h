#ifndef BreakDancerPLUGIN_H
#define BreakDancerPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include "Tool.h"
#include <string>

class BreakDancerPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "BreakDancer";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
