//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A2D58.hpp"



void fn_801BA638(PPC::Runtime::GCContext* context)
{
/*801BA638 001B7438*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BA63C 001B743C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BA640 001B7440*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BA644 001B7444*/ PPC::Runtime::ASM::bl(fn_801A2D58);
/*801BA648 001B7448*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BA64C 001B744C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BA650 001B7450*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BA654 001B7454*/ PPC::Runtime::ASM::blr();
}