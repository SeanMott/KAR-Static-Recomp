//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801445B0.hpp"



void fn_801449DC(PPC::Runtime::GCContext* context)
{
/*801449DC 001417DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801449E0 001417E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801449E4 001417E4*/ PPC::Runtime::ASM::mr(context->r8, context->r4);
/*801449E8 001417E8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*801449EC 001417EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801449F0 001417F0*/ PPC::Runtime::ASM::mr(context->r0, context->r5);
/*801449F4 001417F4*/ PPC::Runtime::ASM::mr(context->r7, context->r6);
/*801449F8 001417F8*/ PPC::Runtime::ASM::mr(context->r5, context->r8);
/*801449FC 001417FC*/ PPC::Runtime::ASM::mr(context->r6, context->r0);
/*80144A00 00141800*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*80144A04 00141804*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80144A08 00141808*/ PPC::Runtime::ASM::bl(fn_801445B0);
/*80144A0C 0014180C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80144A10 00141810*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80144A14 00141814*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80144A18 00141818*/ PPC::Runtime::ASM::blr();
}