//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80009534.hpp"



void fn_801914E8(PPC::Runtime::GCContext* context)
{
/*801914E8 0018E2E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801914EC 0018E2EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801914F0 0018E2F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801914F4 0018E2F4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801914F8 0018E2F8*/ PPC::Runtime::ASM::bl(fn_80009534);
/*801914FC 0018E2FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80191500 0018E300*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*80191504 0018E304*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80191508 0018E308*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8019150C 0018E30C*/ PPC::Runtime::ASM::blr();
}