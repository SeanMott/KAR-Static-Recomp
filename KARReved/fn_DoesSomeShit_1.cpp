//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_DoesSomeShitWithHSD_1.hpp"



void fn_DoesSomeShit_1(PPC::Runtime::GCContext* context)
{
/*80133388 00130188*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8013338C 0013018C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80133390 00130190*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80133394 00130194*/ PPC::Runtime::ASM::bl(fn_DoesSomeShitWithHSD_1);
/*80133398 00130198*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013339C 0013019C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801333A0 001301A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801333A4 001301A4*/ PPC::Runtime::ASM::blr();
}