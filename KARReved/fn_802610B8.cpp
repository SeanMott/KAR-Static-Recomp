//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80254058.hpp"



void fn_802610B8(PPC::Runtime::GCContext* context)
{
/*802610B8 0025DEB8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802610BC 0025DEBC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802610C0 0025DEC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802610C4 0025DEC4*/ PPC::Runtime::ASM::bl(fn_80254058);
/*802610C8 0025DEC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802610CC 0025DECC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802610D0 0025DED0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802610D4 0025DED4*/ PPC::Runtime::ASM::blr();
}