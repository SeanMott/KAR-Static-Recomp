//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C7F34.hpp"



void fn_801942AC(PPC::Runtime::GCContext* context)
{
/*801942AC 001910AC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801942B0 001910B0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801942B4 001910B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801942B8 001910B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r3));
/*801942BC 001910BC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801942C0 001910C0*/ PPC::Runtime::ASM::beq(.L_801942CC);
/*801942C4 001910C4*/ PPC::Runtime::ASM::bl(fn_801C7F34);
/*801942C8 001910C8*/ PPC::Runtime::ASM::b(.L_801942D0);
RUNTIME_PPC_JUMP_LABEL(.L_801942CC, 0x801942CC) //this is a jump label
/*801942CC 001910CC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801942D0, 0x801942D0) //this is a jump label
/*801942D0 001910D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801942D4 001910D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801942D8 001910D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801942DC 001910DC*/ PPC::Runtime::ASM::blr();
}