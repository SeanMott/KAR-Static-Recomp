//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HSD_DListGetAllocData(PPC::Runtime::GCContext* context)
{
/*8041BC60 00418A60*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058BE54 @ Get_MemoryOffset_HighBit);
/*8041BC64 00418A64*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058BE54 @ Get_MemoryOffset_LowBit);
/*8041BC68 00418A68*/ PPC::Runtime::ASM::blr();
}