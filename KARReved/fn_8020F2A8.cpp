//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80203458.hpp"



void fn_8020F2A8(PPC::Runtime::GCContext* context)
{
/*8020F2A8 0020C0A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8020F2AC 0020C0AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020F2B0 0020C0B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020F2B4 0020C0B4*/ PPC::Runtime::ASM::bl(fn_80203458);
/*8020F2B8 0020C0B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020F2BC 0020C0BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8020F2C0 0020C0C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8020F2C4 0020C0C4*/ PPC::Runtime::ASM::blr();
}