//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80200C04.hpp"
#include "fn_80200838.hpp"



void fn_801FC29C(PPC::Runtime::GCContext* context)
{
/*801FC29C 001F909C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801FC2A0 001F90A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FC2A4 001F90A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FC2A8 001F90A8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801FC2AC 001F90AC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801FC2B0 001F90B0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*801FC2B4 001F90B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*801FC2B8 001F90B8*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*801FC2BC 001F90BC*/ PPC::Runtime::ASM::beq(.L_801FC2E0);
/*801FC2C0 001F90C0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801FC2C4 001F90C4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 4);
/*801FC2C8 001F90C8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*801FC2CC 001F90CC*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*801FC2D0 001F90D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*801FC2D4 001F90D4*/ PPC::Runtime::ASM::bl(fn_80200C04);
/*801FC2D8 001F90D8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FC2DC 001F90DC*/ PPC::Runtime::ASM::bl(fn_80200838);
RUNTIME_PPC_JUMP_LABEL(.L_801FC2E0, 0x801FC2E0) //this is a jump label
/*801FC2E0 001F90E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FC2E4 001F90E4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801FC2E8 001F90E8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FC2EC 001F90EC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801FC2F0 001F90F0*/ PPC::Runtime::ASM::blr();
}