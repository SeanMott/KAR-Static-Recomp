//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_ActionStateChange.hpp"



void fn_AS_StarLandGreat(PPC::Runtime::GCContext* context)
{
/*801ACC60 001A9A60*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801ACC64 001A9A64*/ PPC::Runtime::ASM::mflr(context->r0);
/*801ACC68 001A9A68*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1410 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801ACC6C 001A9A6C*/ PPC::Runtime::ASM::li(context->r4, 0x6a);
/*801ACC70 001A9A70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ACC74 001A9A74*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801ACC78 001A9A78*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801ACC7C 001A9A7C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1414 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801ACC80 001A9A80*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801ACC84 001A9A84*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801ACC88 001A9A88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ACC8C 001A9A8C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801ACC90 001A9A90*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801ACC94 001A9A94*/ PPC::Runtime::ASM::blr();
}