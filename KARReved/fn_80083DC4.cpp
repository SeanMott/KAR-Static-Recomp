//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8007E40C.hpp"



void fn_80083DC4(PPC::Runtime::GCContext* context)
{
/*80083DC4 00080BC4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80083DC8 00080BC8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80083DCC 00080BCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80083DD0 00080BD0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80083DD4 00080BD4*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*80083DD8 00080BD8*/ PPC::Runtime::ASM::addi(context->r4, context->r5, 0xac);
/*80083DDC 00080BDC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x94);
/*80083DE0 00080BE0*/ PPC::Runtime::ASM::bl(fn_8007E40C);
/*80083DE4 00080BE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80083DE8 00080BE8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80083DEC 00080BEC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80083DF0 00080BF0*/ PPC::Runtime::ASM::blr();
}