//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803B38AC(PPC::Runtime::GCContext* context)
{
/*803B38AC 003B06AC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F8AF0 @ Get_MemoryOffset_HighBit);
/*803B38B0 003B06B0*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r3, 24);
/*803B38B4 003B06B4*/ PPC::Runtime::ASM::addi(context->r3, context->r4, lbl_804F8AF0 @ Get_MemoryOffset_LowBit);
/*803B38B8 003B06B8*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r0);
/*803B38BC 003B06BC*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r0, 0, 27, 27);
/*803B38C0 003B06C0*/ PPC::Runtime::ASM::blr();
}