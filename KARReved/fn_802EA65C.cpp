//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802EA65C(PPC::Runtime::GCContext* context)
{
/*802EA65C 002E745C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_FLOAT_5 @ Get_MemoryOffset_HighBit);
/*802EA660 002E7460*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_FLOAT_5 @ Get_MemoryOffset_LowBit);
/*802EA664 002E7464*/ PPC::Runtime::ASM::blr();
}