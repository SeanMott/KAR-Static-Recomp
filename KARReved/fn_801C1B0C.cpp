//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80193004.hpp"



void fn_801C1B0C(PPC::Runtime::GCContext* context)
{
/*801C1B0C 001BE90C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C1B10 001BE910*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C1B14 001BE914*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1B18 001BE918*/ PPC::Runtime::ASM::bl(fn_80193004);
/*801C1B1C 001BE91C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1B20 001BE920*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C1B24 001BE924*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C1B28 001BE928*/ PPC::Runtime::ASM::blr();
}