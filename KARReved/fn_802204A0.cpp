//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80192608.hpp"



void fn_802204A0(PPC::Runtime::GCContext* context)
{
/*802204A0 0021D2A0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802204A4 0021D2A4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802204A8 0021D2A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802204AC 0021D2AC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802204B0 0021D2B0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802204B4 0021D2B4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b6, context->r3));
/* 802204B8 0021D2B8  54 00 DF FF */ extrwi. context->r0 , context->r0 , 1 , 26
/*802204BC 0021D2BC*/ PPC::Runtime::ASM::beq(.L_8022051C);
/*802204C0 0021D2C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802204C4 0021D2C4*/ PPC::Runtime::ASM::bl(fn_80192608);
/*802204C8 0021D2C8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802204CC 0021D2CC*/ PPC::Runtime::ASM::beq(.L_802204F8);
/*802204D0 0021D2D0*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b6, context->r31));
/* 802204D4 0021D2D4  54 80 E7 FF */ extrwi. context->r0 , context->r4 , 1 , 27
/*802204D8 0021D2D8*/ PPC::Runtime::ASM::bne(.L_8022051C);
/*802204DC 0021D2DC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802204E0 0021D2E0*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r3, 6, 25, 25);
/*802204E4 0021D2E4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b6, context->r31));
/*802204E8 0021D2E8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b6, context->r31));
/*802204EC 0021D2EC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 4, 27, 27);
/*802204F0 0021D2F0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b6, context->r31));
/*802204F4 0021D2F4*/ PPC::Runtime::ASM::b(.L_8022051C);
RUNTIME_PPC_JUMP_LABEL(.L_802204F8, 0x802204F8) //this is a jump label
/*802204F8 0021D2F8*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b6, context->r31));
/* 802204FC 0021D2FC  54 80 E7 FF */ extrwi. context->r0 , context->r4 , 1 , 27
/*80220500 0021D300*/ PPC::Runtime::ASM::beq(.L_8022051C);
/*80220504 0021D304*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80220508 0021D308*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r3, 6, 25, 25);
/*8022050C 0021D30C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b6, context->r31));
/*80220510 0021D310*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b6, context->r31));
/*80220514 0021D314*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 4, 27, 27);
/*80220518 0021D318*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b6, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8022051C, 0x8022051C) //this is a jump label
/*8022051C 0021D31C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80220520 0021D320*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80220524 0021D324*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80220528 0021D328*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8022052C 0021D32C*/ PPC::Runtime::ASM::blr();
}