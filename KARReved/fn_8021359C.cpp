//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FC398.hpp"



void fn_8021359C(PPC::Runtime::GCContext* context)
{
/*8021359C 0021039C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802135A0 002103A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802135A4 002103A4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2598 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802135A8 002103A8*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*802135AC 002103AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802135B0 002103B0*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*802135B4 002103B4*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*802135B8 002103B8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E259C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802135BC 002103BC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r3));
/*802135C0 002103C0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 7, 24, 24);
/*802135C4 002103C4*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*802135C8 002103C8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r3));
/*802135CC 002103CC*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x87c, context->r3));
/*802135D0 002103D0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r3));
/*802135D4 002103D4*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*802135D8 002103D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802135DC 002103DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802135E0 002103E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802135E4 002103E4*/ PPC::Runtime::ASM::blr();
}