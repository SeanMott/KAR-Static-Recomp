//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___CARDGetControlBlock.hpp"
#include "fn___CARDGetDirBlock.hpp"
#include "fn_memcmp.hpp"
#include "fn_memcmp.hpp"
#include "fn___CARDCompareFileName.hpp"
#include "fn___CARDGetDirBlock.hpp"
#include "fn___CARDPutControlBlock.hpp"



void fn_CARDOpen(PPC::Runtime::GCContext* context)
{
/*803E70EC 003E3EEC*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E70F0 003E3EF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803E70F4 003E3EF4*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*803E70F8 003E3EF8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*803E70FC 003E3EFC*/ PPC::Runtime::ASM::stmw(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E7100 003E3F00*/ PPC::Runtime::ASM::addi(context->r28, context->r4, 0x0);
/*803E7104 003E3F04*/ PPC::Runtime::ASM::addi(context->r29, context->r5, 0x0);
/*803E7108 003E3F08*/ PPC::Runtime::ASM::addi(context->r27, context->r3, 0x0);
/*803E710C 003E3F0C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*803E7110 003E3F10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803E7114 003E3F14*/ PPC::Runtime::ASM::bl(fn___CARDGetControlBlock);
/*803E7118 003E3F18*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803E711C 003E3F1C*/ PPC::Runtime::ASM::bge(.L_803E7124);
/*803E7120 003E3F20*/ PPC::Runtime::ASM::b(.L_803E7250);
RUNTIME_PPC_JUMP_LABEL(.L_803E7124, 0x803E7124) //this is a jump label
/*803E7124 003E3F24*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E7128 003E3F28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803E712C 003E3F2C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803E7130 003E3F30*/ PPC::Runtime::ASM::bne(.L_803E713C);
/*803E7134 003E3F34*/ PPC::Runtime::ASM::li(context->r23, -0x3);
/*803E7138 003E3F38*/ PPC::Runtime::ASM::b(.L_803E71F0);
RUNTIME_PPC_JUMP_LABEL(.L_803E713C, 0x803E713C) //this is a jump label
/*803E713C 003E3F3C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803E7140 003E3F40*/ PPC::Runtime::ASM::bl(fn___CARDGetDirBlock);
/*803E7144 003E3F44*/ PPC::Runtime::ASM::lis(context->r4, lbl_8056E708 @ Get_MemoryOffset_HighBit);
/*803E7148 003E3F48*/ PPC::Runtime::ASM::addi(context->r23, context->r3, 0x0);
/*803E714C 003E3F4C*/ PPC::Runtime::ASM::addi(context->r26, context->r4, lbl_8056E708 @ Get_MemoryOffset_LowBit);
/*803E7150 003E3F50*/ PPC::Runtime::ASM::li(context->r25, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803E7154, 0x803E7154) //this is a jump label
/*803E7154 003E3F54*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r23));
/*803E7158 003E3F58*/ PPC::Runtime::ASM::addi(context->r24, context->r23, 0x0);
/*803E715C 003E3F5C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xff);
/*803E7160 003E3F60*/ PPC::Runtime::ASM::bne(.L_803E716C);
/*803E7164 003E3F64*/ PPC::Runtime::ASM::li(context->r0, -0x4);
/*803E7168 003E3F68*/ PPC::Runtime::ASM::b(.L_803E71B4);
RUNTIME_PPC_JUMP_LABEL(.L_803E716C, 0x803E716C) //this is a jump label
/*803E716C 003E3F6C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r31));
/*803E7170 003E3F70*/ PPC::Runtime::ASM::cmplw(context->r4, context->r26);
/*803E7174 003E3F74*/ PPC::Runtime::ASM::beq(.L_803E71A8);
/*803E7178 003E3F78*/ PPC::Runtime::ASM::addi(context->r3, context->r24, 0x0);
/*803E717C 003E3F7C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*803E7180 003E3F80*/ PPC::Runtime::ASM::bl(fn_memcmp);
/*803E7184 003E3F84*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803E7188 003E3F88*/ PPC::Runtime::ASM::bne(.L_803E71B0);
/*803E718C 003E3F8C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r31));
/*803E7190 003E3F90*/ PPC::Runtime::ASM::addi(context->r3, context->r24, 0x4);
/*803E7194 003E3F94*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*803E7198 003E3F98*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*803E719C 003E3F9C*/ PPC::Runtime::ASM::bl(fn_memcmp);
/*803E71A0 003E3FA0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803E71A4 003E3FA4*/ PPC::Runtime::ASM::bne(.L_803E71B0);
RUNTIME_PPC_JUMP_LABEL(.L_803E71A8, 0x803E71A8) //this is a jump label
/*803E71A8 003E3FA8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803E71AC 003E3FAC*/ PPC::Runtime::ASM::b(.L_803E71B4);
RUNTIME_PPC_JUMP_LABEL(.L_803E71B0, 0x803E71B0) //this is a jump label
/*803E71B0 003E3FB0*/ PPC::Runtime::ASM::li(context->r0, -0xa);
RUNTIME_PPC_JUMP_LABEL(.L_803E71B4, 0x803E71B4) //this is a jump label
/*803E71B4 003E3FB4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803E71B8 003E3FB8*/ PPC::Runtime::ASM::blt(.L_803E71DC);
/*803E71BC 003E3FBC*/ PPC::Runtime::ASM::addi(context->r3, context->r23, 0x0);
/*803E71C0 003E3FC0*/ PPC::Runtime::ASM::addi(context->r4, context->r28, 0x0);
/*803E71C4 003E3FC4*/ PPC::Runtime::ASM::bl(fn___CARDCompareFileName);
/*803E71C8 003E3FC8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803E71CC 003E3FCC*/ PPC::Runtime::ASM::beq(.L_803E71DC);
/*803E71D0 003E3FD0*/ PPC::Runtime::ASM::addi(context->r30, context->r25, 0x0);
/*803E71D4 003E3FD4*/ PPC::Runtime::ASM::li(context->r23, 0x0);
/*803E71D8 003E3FD8*/ PPC::Runtime::ASM::b(.L_803E71F0);
RUNTIME_PPC_JUMP_LABEL(.L_803E71DC, 0x803E71DC) //this is a jump label
/*803E71DC 003E3FDC*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x1);
/*803E71E0 003E3FE0*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x7f);
/*803E71E4 003E3FE4*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x40);
/*803E71E8 003E3FE8*/ PPC::Runtime::ASM::blt(.L_803E7154);
/*803E71EC 003E3FEC*/ PPC::Runtime::ASM::li(context->r23, -0x4);
RUNTIME_PPC_JUMP_LABEL(.L_803E71F0, 0x803E71F0) //this is a jump label
/*803E71F0 003E3FF0*/ PPC::Runtime::ASM::cmpwi(context->r23, 0x0);
/*803E71F4 003E3FF4*/ PPC::Runtime::ASM::blt(.L_803E7244);
/*803E71F8 003E3FF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E71FC 003E3FFC*/ PPC::Runtime::ASM::bl(fn___CARDGetDirBlock);
/*803E7200 003E4000*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 6);
/*803E7204 003E4004*/ PPC::Runtime::ASM::add(context->r5, context->r3, context->r0);
/*803E7208 003E4008*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x36, context->r5));
/*803E720C 003E400C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x5);
/*803E7210 003E4010*/ PPC::Runtime::ASM::blt(.L_803E7224);
/*803E7214 003E4014*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E7218 003E4018*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*803E721C 003E401C*/ PPC::Runtime::ASM::cmplw(context->r4, context->r0);
/*803E7220 003E4020*/ PPC::Runtime::ASM::blt(.L_803E722C);
RUNTIME_PPC_JUMP_LABEL(.L_803E7224, 0x803E7224) //this is a jump label
/*803E7224 003E4024*/ PPC::Runtime::ASM::li(context->r23, -0x6);
/*803E7228 003E4028*/ PPC::Runtime::ASM::b(.L_803E7244);
RUNTIME_PPC_JUMP_LABEL(.L_803E722C, 0x803E722C) //this is a jump label
/*803E722C 003E402C*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*803E7230 003E4030*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803E7234 003E4034*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*803E7238 003E4038*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*803E723C 003E403C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x36, context->r5));
/*803E7240 003E4040*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_803E7244, 0x803E7244) //this is a jump label
/*803E7244 003E4044*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E7248 003E4048*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803E724C 003E404C*/ PPC::Runtime::ASM::bl(fn___CARDPutControlBlock);
RUNTIME_PPC_JUMP_LABEL(.L_803E7250, 0x803E7250) //this is a jump label
/*803E7250 003E4050*/ PPC::Runtime::ASM::lmw(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E7254 003E4054*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*803E7258 003E4058*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*803E725C 003E405C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E7260 003E4060*/ PPC::Runtime::ASM::blr();
}