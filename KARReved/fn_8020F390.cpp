//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FED1C.hpp"



void fn_8020F390(PPC::Runtime::GCContext* context)
{
/*8020F390 0020C190*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8020F394 0020C194*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020F398 0020C198*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020F39C 0020C19C*/ PPC::Runtime::ASM::bl(fn_801FED1C);
/*8020F3A0 0020C1A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020F3A4 0020C1A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8020F3A8 0020C1A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8020F3AC 0020C1AC*/ PPC::Runtime::ASM::blr();
}