//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80167A40.hpp"



void fn_80136EC8(PPC::Runtime::GCContext* context)
{
/*80136EC8 00133CC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80136ECC 00133CCC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80136ED0 00133CD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80136ED4 00133CD4*/ PPC::Runtime::ASM::bl(fn_80167A40);
/*80136ED8 00133CD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80136EDC 00133CDC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80136EE0 00133CE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80136EE4 00133CE4*/ PPC::Runtime::ASM::blr();
}