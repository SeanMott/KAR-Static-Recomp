//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80064EA4.hpp"



void fn_80065668(PPC::Runtime::GCContext* context)
{
/*80065668 00062468*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8006566C 0006246C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80065670 00062470*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80065674 00062474*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80065678 00062478*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8006567C 0006247C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80065680 00062480*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 25);
/*80065684 00062484*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*80065688 00062488*/ PPC::Runtime::ASM::beq(.L_800657CC);
/*8006568C 0006248C*/ PPC::Runtime::ASM::bge(.L_800657CC);
/*80065690 00062490*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*80065694 00062494*/ PPC::Runtime::ASM::bge(.L_80065750);
/*80065698 00062498*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8006569C 0006249C*/ PPC::Runtime::ASM::bge(.L_800656A4);
/*800656A0 000624A0*/ PPC::Runtime::ASM::b(.L_800657CC);
RUNTIME_PPC_JUMP_LABEL(.L_800656A4, 0x800656A4) //this is a jump label
/*800656A4 000624A4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800656A8 000624A8*/ PPC::Runtime::ASM::bl(fn_80064EA4);
/*800656AC 000624AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*800656B0 000624B0*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*800656B4 000624B4*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800656B8 000624B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800656BC 000624BC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x22, context->r31));
/*800656C0 000624C0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*800656C4 000624C4*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*800656C8 000624C8*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800656CC 000624CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800656D0 000624D0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x23, context->r31));
/*800656D4 000624D4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*800656D8 000624D8*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*800656DC 000624DC*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800656E0 000624E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800656E4 000624E4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*800656E8 000624E8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*800656EC 000624EC*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*800656F0 000624F0*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800656F4 000624F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800656F8 000624F8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r31));
/*800656FC 000624FC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x22, context->r31));
/*80065700 00062500*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80065704 00062504*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80065708 00062508*/ PPC::Runtime::ASM::bne(.L_800657CC);
/*8006570C 0006250C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x23, context->r31));
/*80065710 00062510*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d, context->r31));
/*80065714 00062514*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80065718 00062518*/ PPC::Runtime::ASM::bne(.L_800657CC);
/*8006571C 0006251C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80065720 00062520*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e, context->r31));
/*80065724 00062524*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80065728 00062528*/ PPC::Runtime::ASM::bne(.L_800657CC);
/*8006572C 0006252C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r31));
/*80065730 00062530*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f, context->r31));
/*80065734 00062534*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80065738 00062538*/ PPC::Runtime::ASM::bne(.L_800657CC);
/*8006573C 0006253C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r31));
/*80065740 00062540*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80065744 00062544*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*80065748 00062548*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r31));
/*8006574C 0006254C*/ PPC::Runtime::ASM::b(.L_800657CC);
RUNTIME_PPC_JUMP_LABEL(.L_80065750, 0x80065750) //this is a jump label
/*80065750 00062550*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*80065754 00062554*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80065758 00062558*/ PPC::Runtime::ASM::beq(.L_80065760);
/*8006575C 0006255C*/ PPC::Runtime::ASM::b(.L_800657CC);
RUNTIME_PPC_JUMP_LABEL(.L_80065760, 0x80065760) //this is a jump label
/*80065760 00062560*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80065764 00062564*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80065768 00062568*/ PPC::Runtime::ASM::b(.L_800657C0);
RUNTIME_PPC_JUMP_LABEL(.L_8006576C, 0x8006576C) //this is a jump label
/*8006576C 0006256C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*80065770 00062570*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x280);
/*80065774 00062574*/ PPC::Runtime::ASM::bge(.L_80065788);
/*80065778 00062578*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x51, context->r31));
/*8006577C 0006257C*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*80065780 00062580*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*80065784 00062584*/ PPC::Runtime::ASM::b(.L_800657BC);
RUNTIME_PPC_JUMP_LABEL(.L_80065788, 0x80065788) //this is a jump label
/*80065788 00062588*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*8006578C 0006258C*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x1e0);
/*80065790 00062590*/ PPC::Runtime::ASM::bge(.L_800657A8);
/*80065794 00062594*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x52, context->r31));
/*80065798 00062598*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*8006579C 0006259C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*800657A0 000625A0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*800657A4 000625A4*/ PPC::Runtime::ASM::b(.L_800657BC);
RUNTIME_PPC_JUMP_LABEL(.L_800657A8, 0x800657A8) //this is a jump label
/*800657A8 000625A8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r31));
/*800657AC 000625AC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800657B0 000625B0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*800657B4 000625B4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r31));
/*800657B8 000625B8*/ PPC::Runtime::ASM::b(.L_800657CC);
RUNTIME_PPC_JUMP_LABEL(.L_800657BC, 0x800657BC) //this is a jump label
/*800657BC 000625BC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800657C0, 0x800657C0) //this is a jump label
/*800657C0 000625C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*800657C4 000625C4*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*800657C8 000625C8*/ PPC::Runtime::ASM::blt(.L_8006576C);
RUNTIME_PPC_JUMP_LABEL(.L_800657CC, 0x800657CC) //this is a jump label
/*800657CC 000625CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800657D0 000625D0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800657D4 000625D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800657D8 000625D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800657DC 000625DC*/ PPC::Runtime::ASM::blr();
}