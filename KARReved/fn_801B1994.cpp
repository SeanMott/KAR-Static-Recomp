//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B19CC.hpp"



void fn_801B1994(PPC::Runtime::GCContext* context)
{
/*801B1994 001AE794*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B1998 001AE798*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B199C 001AE79C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B19A0 001AE7A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3d8, context->r3));
/*801B19A4 001AE7A4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 23, 23);
/*801B19A8 001AE7A8*/ PPC::Runtime::ASM::bne(.L_801B19B8);
/*801B19AC 001AE7AC*/ PPC::Runtime::ASM::bl(fn_801B19CC);
/*801B19B0 001AE7B0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801B19B4 001AE7B4*/ PPC::Runtime::ASM::b(.L_801B19BC);
RUNTIME_PPC_JUMP_LABEL(.L_801B19B8, 0x801B19B8) //this is a jump label
/*801B19B8 001AE7B8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801B19BC, 0x801B19BC) //this is a jump label
/*801B19BC 001AE7BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B19C0 001AE7C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B19C4 001AE7C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B19C8 001AE7C8*/ PPC::Runtime::ASM::blr();
}