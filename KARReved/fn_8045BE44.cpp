//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8045BE44(PPC::Runtime::GCContext* context)
{
/*8045BE44 00458C44*/ PPC::Runtime::ASM::lis(context->r5, lbl_805B4698 @ Get_MemoryOffset_HighBit);
/*8045BE48 00458C48*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_805B4698 @ Get_MemoryOffset_LowBit);
/*8045BE4C 00458C4C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x318, context->r5));
/*8045BE50 00458C50*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r5));
/*8045BE54 00458C54*/ PPC::Runtime::ASM::blr();
}