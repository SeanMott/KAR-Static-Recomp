//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B8290.hpp"



void fn_801B83C4(PPC::Runtime::GCContext* context)
{
/*801B83C4 001B51C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B83C8 001B51C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B83CC 001B51CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B83D0 001B51D0*/ PPC::Runtime::ASM::bl(fn_801B8290);
/*801B83D4 001B51D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B83D8 001B51D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B83DC 001B51DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B83E0 001B51E0*/ PPC::Runtime::ASM::blr();
}