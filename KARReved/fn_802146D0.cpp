//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FED1C.hpp"



void fn_802146D0(PPC::Runtime::GCContext* context)
{
/*802146D0 002114D0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802146D4 002114D4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802146D8 002114D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802146DC 002114DC*/ PPC::Runtime::ASM::bl(fn_801FED1C);
/*802146E0 002114E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802146E4 002114E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802146E8 002114E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802146EC 002114EC*/ PPC::Runtime::ASM::blr();
}