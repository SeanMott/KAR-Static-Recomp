//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80179DB0.hpp"



void fn_801330E4(PPC::Runtime::GCContext* context)
{
/*801330E4 0012FEE4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801330E8 0012FEE8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801330EC 0012FEEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801330F0 0012FEF0*/ PPC::Runtime::ASM::bl(fn_80179DB0);
/*801330F4 0012FEF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801330F8 0012FEF8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801330FC 0012FEFC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80133100 0012FF00*/ PPC::Runtime::ASM::blr();
}