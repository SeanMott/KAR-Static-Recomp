//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80228F08.hpp"



void fn_801A9FE8(PPC::Runtime::GCContext* context)
{
/*801A9FE8 001A6DE8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A9FEC 001A6DEC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A9FF0 001A6DF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A9FF4 001A6DF4*/ PPC::Runtime::ASM::bl(fn_80228F08);
/*801A9FF8 001A6DF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A9FFC 001A6DFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AA000 001A6E00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AA004 001A6E04*/ PPC::Runtime::ASM::blr();
}