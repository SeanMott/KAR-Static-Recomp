//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80083714(PPC::Runtime::GCContext* context)
{
/*80083714 00080514*/ PPC::Runtime::ASM::lis(context->r3, lbl_80552E40 @ Get_MemoryOffset_HighBit);
/*80083718 00080518*/ PPC::Runtime::ASM::lbz(context->r0, lbl_80552E40 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*8008371C 0008051C*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 24);
/*80083720 00080520*/ PPC::Runtime::ASM::blr();
}