//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_ActionStateChange.hpp"



void fn_801B9A54(PPC::Runtime::GCContext* context)
{
/*801B9A54 001B6854*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B9A58 001B6858*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B9A5C 001B685C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B9A60 001B6860*/ PPC::Runtime::ASM::li(context->r4, 0x7e);
/*801B9A64 001B6864*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B9A68 001B6868*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801B9A6C 001B686C*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801B9A70 001B6870*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1734 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B9A74 001B6874*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801B9A78 001B6878*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801B9A7C 001B687C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B9A80 001B6880*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B9A84 001B6884*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B9A88 001B6888*/ PPC::Runtime::ASM::blr();
}