//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8000A300(PPC::Runtime::GCContext* context)
{
/*8000A300 00007100*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000A304 00007104*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000A308 00007108*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000A30C 0000710C*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8000A310 00007110*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r3));
/*8000A314 00007114*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 2, 29);
/*8000A318 00007118*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000A31C 0000711C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000A320 00007120*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000A324 00007124*/ PPC::Runtime::ASM::blr();
}