//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AC8.hpp"



void fn_801850A8(PPC::Runtime::GCContext* context)
{
/*801850A8 00181EA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801850AC 00181EAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801850B0 00181EB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801850B4 00181EB4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801850B8 00181EB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1188, context->r3));
/*801850BC 00181EBC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801850C0 00181EC0*/ PPC::Runtime::ASM::beq(.L_801850C8);
/*801850C4 00181EC4*/ PPC::Runtime::ASM::bl(fn_80138AC8);
RUNTIME_PPC_JUMP_LABEL(.L_801850C8, 0x801850C8) //this is a jump label
/*801850C8 00181EC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801850CC 00181ECC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801850D0 00181ED0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801850D4 00181ED4*/ PPC::Runtime::ASM::blr();
}