//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80194E60.hpp"



void fn_801E096C(PPC::Runtime::GCContext* context)
{
/*801E096C 001DD76C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801E0970 001DD770*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E0974 001DD774*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E0978 001DD778*/ PPC::Runtime::ASM::bl(fn_80194E60);
/*801E097C 001DD77C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E0980 001DD780*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E0984 001DD784*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801E0988 001DD788*/ PPC::Runtime::ASM::blr();
}