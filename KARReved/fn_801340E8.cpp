//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801529C4.hpp"



void fn_801340E8(PPC::Runtime::GCContext* context)
{
/*801340E8 00130EE8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801340EC 00130EEC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801340F0 00130EF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801340F4 00130EF4*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x3);
/*801340F8 00130EF8*/ PPC::Runtime::ASM::extsb(context->r5, context->r0);
/*801340FC 00130EFC*/ PPC::Runtime::ASM::bl(fn_801529C4);
/*80134100 00130F00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80134104 00130F04*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80134108 00130F08*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8013410C 00130F0C*/ PPC::Runtime::ASM::blr();
}