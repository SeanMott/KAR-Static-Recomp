//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8007A7E0.hpp"



void fn_8007AB78(PPC::Runtime::GCContext* context)
{
/*8007AB78 00077978*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8007AB7C 0007797C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8007AB80 00077980*/ PPC::Runtime::ASM::mr(context->r6, context->r5);
/*8007AB84 00077984*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007AB88 00077988*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8007AB8C 0007798C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r7));
/*8007AB90 00077990*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r5));
/*8007AB94 00077994*/ PPC::Runtime::ASM::bl(fn_8007A7E0);
/*8007AB98 00077998*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007AB9C 0007799C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8007ABA0 000779A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8007ABA4 000779A4*/ PPC::Runtime::ASM::blr();
}