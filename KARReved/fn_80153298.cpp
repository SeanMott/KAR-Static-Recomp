//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80153298(PPC::Runtime::GCContext* context)
{
/*80153298 00150098*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8015329C 0015009C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801532A0 001500A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801532A4 001500A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801532A8 001500A8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801532AC 001500AC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801532B0 001500B0*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*801532B4 001500B4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801532B8 001500B8*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*801532BC 001500BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c0, context->r3));
/*801532C0 001500C0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801532C4 001500C4*/ PPC::Runtime::ASM::beq(.L_801532D8);
/*801532C8 001500C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801532CC 001500CC*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*801532D0 001500D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*801532D4 001500D4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
RUNTIME_PPC_JUMP_LABEL(.L_801532D8, 0x801532D8) //this is a jump label
/*801532D8 001500D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801532DC 001500DC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801532E0 001500E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801532E4 001500E4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801532E8 001500E8*/ PPC::Runtime::ASM::blr();
}