//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800EA3E8.hpp"
#include "fn_800EA568.hpp"



void fn_8010F014(PPC::Runtime::GCContext* context)
{
/*8010F014 0010BE14*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8010F018 0010BE18*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010F01C 0010BE1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010F020 0010BE20*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8010F024 0010BE24*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8010F028 0010BE28*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8010F02C 0010BE2C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8010F030 0010BE30*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F034 0010BE34*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8010F038 0010BE38*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8010F03C 0010BE3C*/ PPC::Runtime::ASM::bl(fn_800EA3E8);
/*8010F040 0010BE40*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8010F044 0010BE44*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F048 0010BE48*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x728);
/*8010F04C 0010BE4C*/ PPC::Runtime::ASM::li(context->r6, 0xa);
/*8010F050 0010BE50*/ PPC::Runtime::ASM::bl(fn_800EA568);
/*8010F054 0010BE54*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010F058 0010BE58*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8010F05C 0010BE5C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8010F060 0010BE60*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010F064 0010BE64*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8010F068 0010BE68*/ PPC::Runtime::ASM::blr();
}