//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80146738(PPC::Runtime::GCContext* context)
{
/*80146738 00143538*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8014673C 0014353C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80146740 00143540*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80146744 00143544*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80146748 00143548*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*8014674C 0014354C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80146750 00143550*/ PPC::Runtime::ASM::beq(.L_8014675C);
/*80146754 00143554*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80146758 00143558*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8014675C, 0x8014675C) //this is a jump label
/*8014675C 0014355C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80146760 00143560*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80146764 00143564*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80146768 00143568*/ PPC::Runtime::ASM::blr();
}