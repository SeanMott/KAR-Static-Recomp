//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80157898.hpp"



void fn_80134BC4(PPC::Runtime::GCContext* context)
{
/*80134BC4 001319C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80134BC8 001319C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80134BCC 001319CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80134BD0 001319D0*/ PPC::Runtime::ASM::bl(fn_80157898);
/*80134BD4 001319D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80134BD8 001319D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80134BDC 001319DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80134BE0 001319E0*/ PPC::Runtime::ASM::blr();
}