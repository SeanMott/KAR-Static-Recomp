//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80217F50.hpp"



void fn_80217E64(PPC::Runtime::GCContext* context)
{
/*80217E64 00214C64*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80217E68 00214C68*/ PPC::Runtime::ASM::mflr(context->r0);
/*80217E6C 00214C6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80217E70 00214C70*/ PPC::Runtime::ASM::bl(fn_80217F50);
/*80217E74 00214C74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80217E78 00214C78*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80217E7C 00214C7C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80217E80 00214C80*/ PPC::Runtime::ASM::blr();
}