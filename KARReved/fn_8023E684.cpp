//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8023FF80.hpp"



void fn_8023E684(PPC::Runtime::GCContext* context)
{
/*8023E684 0023B484*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8023E688 0023B488*/ PPC::Runtime::ASM::mflr(context->r0);
/*8023E68C 0023B48C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2AE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8023E690 0023B490*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8023E694 0023B494*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023E698 0023B498*/ PPC::Runtime::ASM::li(context->r0, 0x6);
/*8023E69C 0023B49C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8023E6A0 0023B4A0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r3));
/*8023E6A4 0023B4A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8023E6A8 0023B4A8*/ PPC::Runtime::ASM::bl(fn_8023FF80);
/*8023E6AC 0023B4AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023E6B0 0023B4B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8023E6B4 0023B4B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8023E6B8 0023B4B8*/ PPC::Runtime::ASM::blr();
}