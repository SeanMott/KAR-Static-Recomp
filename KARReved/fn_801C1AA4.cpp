//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C1B2C.hpp"



void fn_801C1AA4(PPC::Runtime::GCContext* context)
{
/*801C1AA4 001BE8A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C1AA8 001BE8A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C1AAC 001BE8AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1AB0 001BE8B0*/ PPC::Runtime::ASM::bl(fn_801C1B2C);
/*801C1AB4 001BE8B4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C1AB8 001BE8B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1ABC 001BE8BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C1AC0 001BE8C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C1AC4 001BE8C4*/ PPC::Runtime::ASM::blr();
}