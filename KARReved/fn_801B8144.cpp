//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A20C4.hpp"



void fn_801B8144(PPC::Runtime::GCContext* context)
{
/*801B8144 001B4F44*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B8148 001B4F48*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B814C 001B4F4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B8150 001B4F50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801B8154 001B4F54*/ PPC::Runtime::ASM::bl(fn_801A20C4);
/*801B8158 001B4F58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B815C 001B4F5C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B8160 001B4F60*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B8164 001B4F64*/ PPC::Runtime::ASM::blr();
}