//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80190948.hpp"
#include "fn_setStickXYandChargeBool.hpp"



void fn_801B2E58(PPC::Runtime::GCContext* context)
{
/*801B2E58 001AFC58*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801B2E5C 001AFC5C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B2E60 001AFC60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801B2E64 001AFC64*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*801B2E68 001AFC68*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*801B2E6C 001AFC6C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801B2E70 001AFC70*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B2E74 001AFC74*/ PPC::Runtime::ASM::bl(fn_80190948);
/*801B2E78 001AFC78*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r31));
/*801B2E7C 001AFC7C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801B2E80 001AFC80*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B2E84 001AFC84*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B2E88 001AFC88*/ PPC::Runtime::ASM::bl(fn_setStickXYandChargeBool);
/*801B2E8C 001AFC8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801B2E90 001AFC90*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801B2E94 001AFC94*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B2E98 001AFC98*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801B2E9C 001AFC9C*/ PPC::Runtime::ASM::blr();
}