//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B5F04.hpp"



void fn_801B656C(PPC::Runtime::GCContext* context)
{
/*801B656C 001B336C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B6570 001B3370*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B6574 001B3374*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B6578 001B3378*/ PPC::Runtime::ASM::bl(fn_801B5F04);
/*801B657C 001B337C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B6580 001B3380*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B6584 001B3384*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B6588 001B3388*/ PPC::Runtime::ASM::blr();
}