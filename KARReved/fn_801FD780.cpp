//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80054414.hpp"



void fn_801FD780(PPC::Runtime::GCContext* context)
{
/*801FD780 001FA580*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801FD784 001FA584*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FD788 001FA588*/ PPC::Runtime::ASM::mr(context->r6, context->r3);
/*801FD78C 001FA58C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FD790 001FA590*/ PPC::Runtime::ASM::addi(context->r4, context->r6, 0x334);
/*801FD794 001FA594*/ PPC::Runtime::ASM::addi(context->r5, context->r6, 0x340);
/*801FD798 001FA598*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801FD79C 001FA59C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d8, context->r6));
/*801FD7A0 001FA5A0*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x2f8);
/*801FD7A4 001FA5A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*801FD7A8 001FA5A8*/ PPC::Runtime::ASM::bl(fn_80054414);
/*801FD7AC 001FA5AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FD7B0 001FA5B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FD7B4 001FA5B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801FD7B8 001FA5B8*/ PPC::Runtime::ASM::blr();
}