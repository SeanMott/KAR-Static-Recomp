//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8016A638.hpp"



void fn_80136F98(PPC::Runtime::GCContext* context)
{
/*80136F98 00133D98*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80136F9C 00133D9C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80136FA0 00133DA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80136FA4 00133DA4*/ PPC::Runtime::ASM::bl(fn_8016A638);
/*80136FA8 00133DA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80136FAC 00133DAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80136FB0 00133DB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80136FB4 00133DB4*/ PPC::Runtime::ASM::blr();
}