//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B77D4.hpp"



void fn_801B74CC(PPC::Runtime::GCContext* context)
{
/*801B74CC 001B42CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B74D0 001B42D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B74D4 001B42D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B74D8 001B42D8*/ PPC::Runtime::ASM::bl(fn_801B77D4);
/*801B74DC 001B42DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B74E0 001B42E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B74E4 001B42E4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B74E8 001B42E8*/ PPC::Runtime::ASM::blr();
}