//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80296368.hpp"



void fn_802FEBB0(PPC::Runtime::GCContext* context)
{
/*802FEBB0 002FB9B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802FEBB4 002FB9B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802FEBB8 002FB9B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FEBBC 002FB9BC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802FEBC0 002FB9C0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802FEBC4 002FB9C4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802FEBC8 002FB9C8  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802FEBCC 002FB9CC*/ PPC::Runtime::ASM::beq(.L_802FEC30);
/*802FEBD0 002FB9D0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804DBEA0 @ Get_MemoryOffset_HighBit);
/*802FEBD4 002FB9D4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xc);
/*802FEBD8 002FB9D8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804DBEA0 @ Get_MemoryOffset_LowBit);
/*802FEBDC 002FB9DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FEBE0 002FB9E0*/ PPC::Runtime::ASM::beq(.L_802FEBF8);
/*802FEBE4 002FB9E4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xc);
/*802FEBE8 002FB9E8*/ PPC::Runtime::ASM::beq(.L_802FEBF8);
/*802FEBEC 002FB9EC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xc);
/*802FEBF0 002FB9F0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802FEBF4 002FB9F4*/ PPC::Runtime::ASM::bl(fn_80296368);
RUNTIME_PPC_JUMP_LABEL(.L_802FEBF8, 0x802FEBF8) //this is a jump label
/*802FEBF8 002FB9F8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FEBFC 002FB9FC*/ PPC::Runtime::ASM::beq(.L_802FEC20);
/*802FEC00 002FBA00*/ PPC::Runtime::ASM::lis(context->r4, lbl_804DBEC8 @ Get_MemoryOffset_HighBit);
/*802FEC04 002FBA04*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802FEC08 002FBA08*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804DBEC8 @ Get_MemoryOffset_LowBit);
/*802FEC0C 002FBA0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FEC10 002FBA10*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FEC14 002FBA14*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802FEC18 002FBA18*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FEC1C 002FBA1C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802FEC20, 0x802FEC20) //this is a jump label
/*802FEC20 002FBA20*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802FEC24 002FBA24*/ PPC::Runtime::ASM::ble(.L_802FEC30);
/*802FEC28 002FBA28*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802FEC2C 002FBA2C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802FEC30, 0x802FEC30) //this is a jump label
/*802FEC30 002FBA30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FEC34 002FBA34*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802FEC38 002FBA38*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802FEC3C 002FBA3C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802FEC40 002FBA40*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802FEC44 002FBA44*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802FEC48 002FBA48*/ PPC::Runtime::ASM::blr();
}