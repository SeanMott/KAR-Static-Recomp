//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_8000BC30.hpp"



void fn_8003EDC4(PPC::Runtime::GCContext* context)
{
/*8003EDC4 0003BBC4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8003EDC8 0003BBC8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8003EDCC 0003BBCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003EDD0 0003BBD0*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8003EDD4 0003BBD4*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*8003EDD8 0003BBD8*/ PPC::Runtime::ASM::bl(fn_8000BC30);
/*8003EDDC 0003BBDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003EDE0 0003BBE0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8003EDE4 0003BBE4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8003EDE8 0003BBE8*/ PPC::Runtime::ASM::blr();
}