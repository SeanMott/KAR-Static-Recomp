//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_chargeLogic?.hpp"
#include "fn_801EB97C.hpp"



void fn_801EEB98(PPC::Runtime::GCContext* context)
{
/*801EEB98 001EB998*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801EEB9C 001EB99C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801EEBA0 001EB9A0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1F00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801EEBA4 001EB9A4*/ PPC::Runtime::ASM::li(context->r4, 0xb);
/*801EEBA8 001EB9A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EEBAC 001EB9AC*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801EEBB0 001EB9B0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1F04 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801EEBB4 001EB9B4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801EEBB8 001EB9B8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EEBBC 001EB9BC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801EEBC0 001EB9C0*/ PPC::Runtime::ASM::bl(fn_chargeLogic?);
/*801EEBC4 001EB9C4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EEBC8 001EB9C8*/ PPC::Runtime::ASM::bl(fn_801EB97C);
/*801EEBCC 001EB9CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EEBD0 001EB9D0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EEBD4 001EB9D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801EEBD8 001EB9D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801EEBDC 001EB9DC*/ PPC::Runtime::ASM::blr();
}