//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8003B6D4.hpp"



void fn_8003C734(PPC::Runtime::GCContext* context)
{
/*8003C734 00039534*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8003C738 00039538*/ PPC::Runtime::ASM::mflr(context->r0);
/*8003C73C 0003953C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003C740 00039540*/ PPC::Runtime::ASM::bl(fn_8003B6D4);
/*8003C744 00039544*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003C748 00039548*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8003C74C 0003954C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8003C750 00039550*/ PPC::Runtime::ASM::blr();
}