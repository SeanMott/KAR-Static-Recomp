//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250E54.hpp"



void fn_8025BBA4(PPC::Runtime::GCContext* context)
{
/*8025BBA4 002589A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025BBA8 002589A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025BBAC 002589AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025BBB0 002589B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025BBB4 002589B4*/ PPC::Runtime::ASM::bl(fn_80250E54);
/*8025BBB8 002589B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025BBBC 002589BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025BBC0 002589C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025BBC4 002589C4*/ PPC::Runtime::ASM::blr();
}