//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_ActionStateChange.hpp"
#include "fn_801A2D80.hpp"
#include "fn_801A2FD4.hpp"
#include "fn_80190788.hpp"



void fn_AS_Fall(PPC::Runtime::GCContext* context)
{
/*801BAF48 001B7D48*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BAF4C 001B7D4C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BAF50 001B7D50*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1790 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BAF54 001B7D54*/ PPC::Runtime::ASM::li(context->r4, 0x70);
/*801BAF58 001B7D58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BAF5C 001B7D5C*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801BAF60 001B7D60*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801BAF64 001B7D64*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1794 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BAF68 001B7D68*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BAF6C 001B7D6C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801BAF70 001B7D70*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801BAF74 001B7D74*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801BAF78 001B7D78*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BAF7C 001B7D7C*/ PPC::Runtime::ASM::bl(fn_801A2D80);
/*801BAF80 001B7D80*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BAF84 001B7D84*/ PPC::Runtime::ASM::bl(fn_801A2FD4);
/*801BAF88 001B7D88*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BAF8C 001B7D8C*/ PPC::Runtime::ASM::bl(fn_80190788);
/*801BAF90 001B7D90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BAF94 001B7D94*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BAF98 001B7D98*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BAF9C 001B7D9C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BAFA0 001B7DA0*/ PPC::Runtime::ASM::blr();
}