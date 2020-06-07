#include <maya/MFnPlugin.h>
#include "PowerSkinCommands.h"


MStatus initializePlugin(MObject obj)
{
	MFnPlugin plugin(obj, "SuperSeriousSam", "1.0");
	plugin.registerCommand(PowerSkinCmd::kCommand, PowerSkinCmd::creator);
	return MS::kSuccess;
}

MStatus uninitializePlugin(MObject obj)
{
	MFnPlugin plugin(obj);
	plugin.deregisterCommand(PowerSkinCmd::kCommand);
	return MS::kSuccess;
}