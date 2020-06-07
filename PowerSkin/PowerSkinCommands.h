#pragma once
#include <maya/MPxCommand.h>


class PowerSkinCmd : public MPxCommand
{
public:
	MStatus doIt(const MArgList& args) override;
	static MString kCommand;
	static void* creator();
};