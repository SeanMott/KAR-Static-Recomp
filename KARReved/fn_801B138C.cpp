//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B13AC.hpp"



void fn_801B138C(PPC::Runtime::GCContext* context)
{
/*801B138C 001AE18C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B1390 001AE190*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B1394 001AE194*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B1398 001AE198*/ PPC::Runtime::ASM::bl(fn_801B13AC);
/*801B139C 001AE19C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B13A0 001AE1A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B13A4 001AE1A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B13A8 001AE1A8*/ PPC::Runtime::ASM::blr();
}