//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005E788.hpp"



void fn_80379298(PPC::Runtime::GCContext* context)
{
/*80379298 00376098*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8037929C 0037609C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803792A0 003760A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803792A4 003760A4*/ PPC::Runtime::ASM::bl(fn_8005E788);
/*803792A8 003760A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803792AC 003760AC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803792B0 003760B0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803792B4 003760B4*/ PPC::Runtime::ASM::blr();
}