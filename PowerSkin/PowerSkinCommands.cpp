#include <maya/MGlobal.h>
#include "PowerSkinCommands.h"


MString PowerSkinCmd::kCommand = "powerSkin";

MStatus PowerSkinCmd::doIt(const MArgList& args)
{
    return MS::kSuccess;
}

void* PowerSkinCmd::creator()
{
    return new PowerSkinCmd;
}
