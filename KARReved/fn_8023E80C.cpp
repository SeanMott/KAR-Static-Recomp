//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8023FF80.hpp"
#include "fn_80240040.hpp"



void fn_8023E80C(PPC::Runtime::GCContext* context)
{
/*8023E80C 0023B60C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8023E810 0023B610*/ PPC::Runtime::ASM::mflr(context->r0);
/*8023E814 0023B614*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2AE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8023E818 0023B618*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8023E81C 0023B61C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023E820 0023B620*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8023E824 0023B624*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8023E828 0023B628*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8023E82C 0023B62C*/ PPC::Runtime::ASM::bl(fn_8023FF80);
/*8023E830 0023B630*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8023E834 0023B634*/ PPC::Runtime::ASM::bl(fn_80240040);
/*8023E838 0023B638*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023E83C 0023B63C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8023E840 0023B640*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8023E844 0023B644*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8023E848 0023B648*/ PPC::Runtime::ASM::blr();
}