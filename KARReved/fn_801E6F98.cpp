//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801CE650.hpp"



void fn_801E6F98(PPC::Runtime::GCContext* context)
{
/*801E6F98 001E3D98*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801E6F9C 001E3D9C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E6FA0 001E3DA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E6FA4 001E3DA4*/ PPC::Runtime::ASM::bl(fn_801CE650);
/*801E6FA8 001E3DA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E6FAC 001E3DAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E6FB0 001E3DB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801E6FB4 001E3DB4*/ PPC::Runtime::ASM::blr();
}