//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8000A0F8(PPC::Runtime::GCContext* context)
{
/*8000A0F8 00006EF8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000A0FC 00006EFC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000A100 00006F00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000A104 00006F04*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8000A108 00006F08*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x834, context->r3));
/*8000A10C 00006F0C*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa9c, context->r3));
/*8000A110 00006F10*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*8000A114 00006F14*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x833, context->r3));
/*8000A118 00006F18*/ PPC::Runtime::ASM::subf(context->r0, context->r4, context->r0);
/*8000A11C 00006F1C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x3c);
/*8000A120 00006F20*/ PPC::Runtime::ASM::subfic(context->r3, context->r3, 0x3c);
/*8000A124 00006F24*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8000A128 00006F28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000A12C 00006F2C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000A130 00006F30*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000A134 00006F34*/ PPC::Runtime::ASM::blr();
}