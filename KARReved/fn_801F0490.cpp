//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_chargeLogic?.hpp"



void fn_801F0490(PPC::Runtime::GCContext* context)
{
/*801F0490 001ED290*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F0494 001ED294*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F0498 001ED298*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1F70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F049C 001ED29C*/ PPC::Runtime::ASM::li(context->r4, 0x1b);
/*801F04A0 001ED2A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F04A4 001ED2A4*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801F04A8 001ED2A8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1F74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F04AC 001ED2AC*/ PPC::Runtime::ASM::li(context->r6, 0x20);
/*801F04B0 001ED2B0*/ PPC::Runtime::ASM::bl(fn_chargeLogic?);
/*801F04B4 001ED2B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F04B8 001ED2B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F04BC 001ED2BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F04C0 001ED2C0*/ PPC::Runtime::ASM::blr();
}