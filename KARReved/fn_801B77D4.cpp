//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801AB428.hpp"



void fn_801B77D4(PPC::Runtime::GCContext* context)
{
/*801B77D4 001B45D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B77D8 001B45D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B77DC 001B45DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B77E0 001B45E0*/ PPC::Runtime::ASM::bl(fn_801AB428);
/*801B77E4 001B45E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B77E8 001B45E8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B77EC 001B45EC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B77F0 001B45F0*/ PPC::Runtime::ASM::blr();
}