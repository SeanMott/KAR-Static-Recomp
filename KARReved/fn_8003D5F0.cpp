//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8003D5F0(PPC::Runtime::GCContext* context)
{
/*8003D5F0 0003A3F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8003D5F4 0003A3F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8003D5F8 0003A3F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003D5FC 0003A3FC*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8003D600 0003A400*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003D604 0003A404*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35d, context->r3));
/*8003D608 0003A408*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8003D60C 0003A40C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8003D610 0003A410*/ PPC::Runtime::ASM::blr();
}