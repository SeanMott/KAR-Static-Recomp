//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005EA20.hpp"



void fn_801956D4(PPC::Runtime::GCContext* context)
{
/*801956D4 001924D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801956D8 001924D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801956DC 001924DC*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*801956E0 001924E0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801956E4 001924E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801956E8 001924E8*/ PPC::Runtime::ASM::bl(fn_8005EA20);
/*801956EC 001924EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801956F0 001924F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801956F4 001924F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801956F8 001924F8*/ PPC::Runtime::ASM::blr();
}