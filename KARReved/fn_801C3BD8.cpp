//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A020C.hpp"



void fn_801C3BD8(PPC::Runtime::GCContext* context)
{
/*801C3BD8 001C09D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C3BDC 001C09DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C3BE0 001C09E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C3BE4 001C09E4*/ PPC::Runtime::ASM::bl(fn_801A020C);
/*801C3BE8 001C09E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C3BEC 001C09EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C3BF0 001C09F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C3BF4 001C09F4*/ PPC::Runtime::ASM::blr();
}