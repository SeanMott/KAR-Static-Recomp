//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8034D1F8.hpp"



void fn_8030D2A4(PPC::Runtime::GCContext* context)
{
/*8030D2A4 0030A0A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8030D2A8 0030A0A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8030D2AC 0030A0AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8030D2B0 0030A0B0*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*8030D2B4 0030A0B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8030D2B8 0030A0B8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c4, context->r3));
/*8030D2BC 0030A0BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8030D2C0 0030A0C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8030D2C4 0030A0C4*/ PPC::Runtime::ASM::blr();
}