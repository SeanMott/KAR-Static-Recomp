//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8037D024.hpp"



void fn_8037CEBC(PPC::Runtime::GCContext* context)
{
/*8037CEBC 00379CBC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8037CEC0 00379CC0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8037CEC4 00379CC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037CEC8 00379CC8*/ PPC::Runtime::ASM::bl(fn_8037D024);
/*8037CECC 00379CCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037CED0 00379CD0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8037CED4 00379CD4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8037CED8 00379CD8*/ PPC::Runtime::ASM::blr();
}