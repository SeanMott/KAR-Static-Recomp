//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8000A9E4(PPC::Runtime::GCContext* context)
{
/*8000A9E4 000077E4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000A9E8 000077E8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000A9EC 000077EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000A9F0 000077F0*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8000A9F4 000077F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000A9F8 000077F8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x831, context->r3));
/*8000A9FC 000077FC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000AA00 00007800*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000AA04 00007804*/ PPC::Runtime::ASM::blr();
}