//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_GetOneTimerLeadGroundContactAnims_TakeNoParams(PPC::Runtime::GCContext* context)
{
/*804858FC 004826FC*/ PPC::Runtime::ASM::lis(context->r3, lbl_805C2AF8 @ Get_MemoryOffset_HighBit);
/*80485900 00482700*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_805C2AF8 @ Get_MemoryOffset_LowBit);
/*80485904 00482704*/ PPC::Runtime::ASM::blr();
}