//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801D96AC.hpp"
#include "fn_801EB898.hpp"



void fn_801ECD74(PPC::Runtime::GCContext* context)
{
/*801ECD74 001E9B74*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801ECD78 001E9B78*/ PPC::Runtime::ASM::mflr(context->r0);
/*801ECD7C 001E9B7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ECD80 001E9B80*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801ECD84 001E9B84*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801ECD88 001E9B88*/ PPC::Runtime::ASM::bl(fn_801D96AC);
/*801ECD8C 001E9B8C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801ECD90 001E9B90*/ PPC::Runtime::ASM::bl(fn_801EB898);
/*801ECD94 001E9B94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ECD98 001E9B98*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801ECD9C 001E9B9C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801ECDA0 001E9BA0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801ECDA4 001E9BA4*/ PPC::Runtime::ASM::blr();
}