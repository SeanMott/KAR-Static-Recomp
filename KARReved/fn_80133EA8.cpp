//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801507A8.hpp"



void fn_80133EA8(PPC::Runtime::GCContext* context)
{
/*80133EA8 00130CA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80133EAC 00130CAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80133EB0 00130CB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80133EB4 00130CB4*/ PPC::Runtime::ASM::bl(fn_801507A8);
/*80133EB8 00130CB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80133EBC 00130CBC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80133EC0 00130CC0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80133EC4 00130CC4*/ PPC::Runtime::ASM::blr();
}