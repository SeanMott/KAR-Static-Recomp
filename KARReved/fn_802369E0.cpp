//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802369E0(PPC::Runtime::GCContext* context)
{
/*802369E0 002337E0*/ PPC::Runtime::ASM::lis(context->r4, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*802369E4 002337E4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_8055D7A0 @ Get_MemoryOffset_LowBit);
/*802369E8 002337E8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x250, context->r4));
/*802369EC 002337EC*/ PPC::Runtime::ASM::blr();
}