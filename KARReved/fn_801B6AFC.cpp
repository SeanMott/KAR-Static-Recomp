//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801AB370.hpp"



void fn_801B6AFC(PPC::Runtime::GCContext* context)
{
/*801B6AFC 001B38FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B6B00 001B3900*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B6B04 001B3904*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B6B08 001B3908*/ PPC::Runtime::ASM::bl(fn_801AB370);
/*801B6B0C 001B390C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B6B10 001B3910*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B6B14 001B3914*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B6B18 001B3918*/ PPC::Runtime::ASM::blr();
}