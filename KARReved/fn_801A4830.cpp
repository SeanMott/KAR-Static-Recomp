//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A2D58.hpp"



void fn_801A4830(PPC::Runtime::GCContext* context)
{
/*801A4830 001A1630*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A4834 001A1634*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A4838 001A1638*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A483C 001A163C*/ PPC::Runtime::ASM::bl(fn_801A2D58);
/*801A4840 001A1640*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A4844 001A1644*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A4848 001A1648*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A484C 001A164C*/ PPC::Runtime::ASM::blr();
}