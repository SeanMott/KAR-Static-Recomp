//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8023FF80.hpp"



void fn_8023E728(PPC::Runtime::GCContext* context)
{
/*8023E728 0023B528*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8023E72C 0023B52C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8023E730 0023B530*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2AE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8023E734 0023B534*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8023E738 0023B538*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023E73C 0023B53C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8023E740 0023B540*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8023E744 0023B544*/ PPC::Runtime::ASM::bl(fn_8023FF80);
/*8023E748 0023B548*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023E74C 0023B54C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8023E750 0023B550*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8023E754 0023B554*/ PPC::Runtime::ASM::blr();
}