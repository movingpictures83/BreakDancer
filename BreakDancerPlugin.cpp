#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "BreakDancerPlugin.h"

void BreakDancerPlugin::input(std::string file) {
   inputfile = file;
}

void BreakDancerPlugin::run() {}

void BreakDancerPlugin::output(std::string file) {
//aqmm  -a AS_metagenome -b AS_metatranscriptome -m meta_data.txt -n 12 -o testout2
//./bin/piggy --in_dir=example_data/ --out_dir=Trevor --roary_dir=example_data/
//../BreakDancerMain/BreakDancer -p1 1a21A.pdb -p2 1hwgC.pdb -o 1a21A_1hwgC -m -ac -t
       	std::string outputfile = file;
	std::string myCommand = "breakdancer-max "+inputfile+" >& "+file;
 std::cout << myCommand << std::endl;
system(myCommand.c_str());
}

PluginProxy<BreakDancerPlugin> BreakDancerPluginProxy = PluginProxy<BreakDancerPlugin>("BreakDancer", PluginManager::getInstance());
