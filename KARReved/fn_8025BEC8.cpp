//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80254058.hpp"



void fn_8025BEC8(PPC::Runtime::GCContext* context)
{
/*8025BEC8 00258CC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025BECC 00258CCC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025BED0 00258CD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025BED4 00258CD4*/ PPC::Runtime::ASM::bl(fn_80254058);
/*8025BED8 00258CD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025BEDC 00258CDC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025BEE0 00258CE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025BEE4 00258CE4*/ PPC::Runtime::ASM::blr();
}