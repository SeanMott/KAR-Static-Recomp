//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80146800(PPC::Runtime::GCContext* context)
{
/*80146800 00143600*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80146804 00143604*/ PPC::Runtime::ASM::mflr(context->r0);
/*80146808 00143608*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014680C 0014360C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80146810 00143610*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80146814 00143614*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80146818 00143618*/ PPC::Runtime::ASM::beq(.L_80146824);
/*8014681C 0014361C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80146820 00143620*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80146824, 0x80146824) //this is a jump label
/*80146824 00143624*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80146828 00143628*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014682C 0014362C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80146830 00143630*/ PPC::Runtime::ASM::blr();
}