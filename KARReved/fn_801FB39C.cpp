//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_chargeLogic?.hpp"



void fn_801FB39C(PPC::Runtime::GCContext* context)
{
/*801FB39C 001F819C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801FB3A0 001F81A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FB3A4 001F81A4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2200 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FB3A8 001F81A8*/ PPC::Runtime::ASM::li(context->r4, 0x23);
/*801FB3AC 001F81AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FB3B0 001F81B0*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801FB3B4 001F81B4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2204 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FB3B8 001F81B8*/ PPC::Runtime::ASM::li(context->r6, 0x20);
/*801FB3BC 001F81BC*/ PPC::Runtime::ASM::bl(fn_chargeLogic?);
/*801FB3C0 001F81C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FB3C4 001F81C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FB3C8 001F81C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801FB3CC 001F81CC*/ PPC::Runtime::ASM::blr();
}