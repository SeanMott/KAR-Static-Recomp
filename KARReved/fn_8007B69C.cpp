//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8007B69C(PPC::Runtime::GCContext* context)
{
/*8007B69C 0007849C*/ PPC::Runtime::ASM::lis(context->r4, lbl_80552A30 @ Get_MemoryOffset_HighBit);
/*8007B6A0 000784A0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_80552A30 @ Get_MemoryOffset_LowBit);
/*8007B6A4 000784A4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*8007B6A8 000784A8*/ PPC::Runtime::ASM::blr();
}