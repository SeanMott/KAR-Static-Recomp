//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D4EF4.hpp"
#include "fn_800D4EC8.hpp"
#include "fn_800C3510.hpp"
#include "fn_800C2FD4.hpp"



void fn_800C708C(PPC::Runtime::GCContext* context)
{
/*800C708C 000C3E8C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x170, context->r1));
/*800C7090 000C3E90*/ PPC::Runtime::ASM::mflr(context->r0);
/*800C7094 000C3E94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x174, context->r1));
/*800C7098 000C3E98*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x170);
/*800C709C 000C3E9C*/ PPC::Runtime::ASM::bl(_savegpr_21);
/*800C70A0 000C3EA0*/ PPC::Runtime::ASM::mr(context->r22, context->r3);
/*800C70A4 000C3EA4*/ PPC::Runtime::ASM::mr(context->r23, context->r4);
/*800C70A8 000C3EA8*/ PPC::Runtime::ASM::mr(context->r24, context->r5);
/*800C70AC 000C3EAC*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*800C70B0 000C3EB0*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*800C70B4 000C3EB4*/ PPC::Runtime::ASM::bl(fn_800D4EF4);
/*800C70B8 000C3EB8*/ PPC::Runtime::ASM::mr(context->r21, context->r3);
/*800C70BC 000C3EBC*/ PPC::Runtime::ASM::bl(fn_800D4EC8);
/*800C70C0 000C3EC0*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*800C70C4 000C3EC4*/ PPC::Runtime::ASM::mr(context->r3, context->r23);
/*800C70C8 000C3EC8*/ PPC::Runtime::ASM::mr(context->r29, context->r0);
/*800C70CC 000C3ECC*/ PPC::Runtime::ASM::bl(fn_800C3510);
/*800C70D0 000C3ED0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800C70D4 000C3ED4*/ PPC::Runtime::ASM::cmpwi(context->r31, -0x1);
/*800C70D8 000C3ED8*/ PPC::Runtime::ASM::beq(.L_800C7224);
/*800C70DC 000C3EDC*/ PPC::Runtime::ASM::addi(context->r25, context->r1, 0x70);
/*800C70E0 000C3EE0*/ PPC::Runtime::ASM::addi(context->r26, context->r1, 0x2c);
/*800C70E4 000C3EE4*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*800C70E8 000C3EE8*/ PPC::Runtime::ASM::b(.L_800C721C);
RUNTIME_PPC_JUMP_LABEL(.L_800C70EC, 0x800C70EC) //this is a jump label
/*800C70EC 000C3EEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r23));
/*800C70F0 000C3EF0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800C70F4 000C3EF4*/ PPC::Runtime::ASM::cmpw(context->r0, context->r30);
/*800C70F8 000C3EF8*/ PPC::Runtime::ASM::bne(.L_800C7104);
/*800C70FC 000C3EFC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C7100 000C3F00*/ PPC::Runtime::ASM::b(.L_800C71B8);
RUNTIME_PPC_JUMP_LABEL(.L_800C7104, 0x800C7104) //this is a jump label
/*800C7104 000C3F04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r23));
/*800C7108 000C3F08*/ PPC::Runtime::ASM::cmpw(context->r0, context->r30);
/*800C710C 000C3F0C*/ PPC::Runtime::ASM::bne(.L_800C7118);
/*800C7110 000C3F10*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C7114 000C3F14*/ PPC::Runtime::ASM::b(.L_800C71B8);
RUNTIME_PPC_JUMP_LABEL(.L_800C7118, 0x800C7118) //this is a jump label
/*800C7118 000C3F18*/ PPC::Runtime::ASM::addi(context->r4, context->r23, 0x8);
/*800C711C 000C3F1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d8, context->r23));
/*800C7120 000C3F20*/ PPC::Runtime::ASM::cmpw(context->r0, context->r30);
/*800C7124 000C3F24*/ PPC::Runtime::ASM::bne(.L_800C7130);
/*800C7128 000C3F28*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C712C 000C3F2C*/ PPC::Runtime::ASM::b(.L_800C71B8);
RUNTIME_PPC_JUMP_LABEL(.L_800C7130, 0x800C7130) //this is a jump label
/*800C7130 000C3F30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r4));
/*800C7134 000C3F34*/ PPC::Runtime::ASM::cmpw(context->r0, context->r30);
/*800C7138 000C3F38*/ PPC::Runtime::ASM::bne(.L_800C7144);
/*800C713C 000C3F3C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C7140 000C3F40*/ PPC::Runtime::ASM::b(.L_800C71B8);
RUNTIME_PPC_JUMP_LABEL(.L_800C7144, 0x800C7144) //this is a jump label
/*800C7144 000C3F44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d8, context->r4));
/*800C7148 000C3F48*/ PPC::Runtime::ASM::cmpw(context->r0, context->r30);
/*800C714C 000C3F4C*/ PPC::Runtime::ASM::bne(.L_800C7158);
/*800C7150 000C3F50*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C7154 000C3F54*/ PPC::Runtime::ASM::b(.L_800C71B8);
RUNTIME_PPC_JUMP_LABEL(.L_800C7158, 0x800C7158) //this is a jump label
/*800C7158 000C3F58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r4));
/*800C715C 000C3F5C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r30);
/*800C7160 000C3F60*/ PPC::Runtime::ASM::bne(.L_800C716C);
/*800C7164 000C3F64*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C7168 000C3F68*/ PPC::Runtime::ASM::b(.L_800C71B8);
RUNTIME_PPC_JUMP_LABEL(.L_800C716C, 0x800C716C) //this is a jump label
/*800C716C 000C3F6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e0, context->r4));
/*800C7170 000C3F70*/ PPC::Runtime::ASM::cmpw(context->r0, context->r30);
/*800C7174 000C3F74*/ PPC::Runtime::ASM::bne(.L_800C7180);
/*800C7178 000C3F78*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C717C 000C3F7C*/ PPC::Runtime::ASM::b(.L_800C71B8);
RUNTIME_PPC_JUMP_LABEL(.L_800C7180, 0x800C7180) //this is a jump label
/*800C7180 000C3F80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r4));
/*800C7184 000C3F84*/ PPC::Runtime::ASM::cmpw(context->r0, context->r30);
/*800C7188 000C3F88*/ PPC::Runtime::ASM::bne(.L_800C7194);
/*800C718C 000C3F8C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C7190 000C3F90*/ PPC::Runtime::ASM::b(.L_800C71B8);
RUNTIME_PPC_JUMP_LABEL(.L_800C7194, 0x800C7194) //this is a jump label
/*800C7194 000C3F94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r4));
/*800C7198 000C3F98*/ PPC::Runtime::ASM::cmpw(context->r0, context->r30);
/*800C719C 000C3F9C*/ PPC::Runtime::ASM::bne(.L_800C71A8);
/*800C71A0 000C3FA0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C71A4 000C3FA4*/ PPC::Runtime::ASM::b(.L_800C71B8);
RUNTIME_PPC_JUMP_LABEL(.L_800C71A8, 0x800C71A8) //this is a jump label
/*800C71A8 000C3FA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ec, context->r4));
/*800C71AC 000C3FAC*/ PPC::Runtime::ASM::cmpw(context->r0, context->r30);
/*800C71B0 000C3FB0*/ PPC::Runtime::ASM::bne(.L_800C71B8);
/*800C71B4 000C3FB4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800C71B8, 0x800C71B8) //this is a jump label
/*800C71B8 000C3FB8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800C71BC 000C3FBC*/ PPC::Runtime::ASM::bne(.L_800C7214);
/*800C71C0 000C3FC0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800C71C4 000C3FC4*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*800C71C8 000C3FC8*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800C71CC 000C3FCC*/ PPC::Runtime::ASM::bl(fn_800C2FD4);
/*800C71D0 000C3FD0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800C71D4 000C3FD4*/ PPC::Runtime::ASM::beq(.L_800C7214);
/*800C71D8 000C3FD8*/ PPC::Runtime::ASM::li(context->r0, 0x6);
/*800C71DC 000C3FDC*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*800C71E0 000C3FE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*800C71E4 000C3FE4*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x11);
/*800C71E8 000C3FE8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*800C71EC 000C3FEC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r25));
/*800C71F0 000C3FF0*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0xc);
/*800C71F4 000C3FF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800C71F8 000C3FF8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800C71FC 000C3FFC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800C7200 000C4000*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x96, context->r29));
/*800C7204 000C4004*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*800C7208 000C4008*/ PPC::Runtime::ASM::add(context->r28, context->r28, context->r0);
/*800C720C 000C400C*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x4);
/*800C7210 000C4010*/ PPC::Runtime::ASM::bge(.L_800C7224);
RUNTIME_PPC_JUMP_LABEL(.L_800C7214, 0x800C7214) //this is a jump label
/*800C7214 000C4014*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*800C7218 000C4018*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x9c);
RUNTIME_PPC_JUMP_LABEL(.L_800C721C, 0x800C721C) //this is a jump label
/*800C721C 000C401C*/ PPC::Runtime::ASM::cmpw(context->r30, context->r21);
/*800C7220 000C4020*/ PPC::Runtime::ASM::blt(.L_800C70EC);
RUNTIME_PPC_JUMP_LABEL(.L_800C7224, 0x800C7224) //this is a jump label
/*800C7224 000C4024*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x0);
/*800C7228 000C4028*/ PPC::Runtime::ASM::bne(.L_800C7468);
/*800C722C 000C402C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*800C7230 000C4030*/ PPC::Runtime::ASM::lis(context->r3, StructWithFuncPtrs_41 @ Get_MemoryOffset_HighBit);
/*800C7234 000C4034*/ PPC::Runtime::ASM::addi(context->r5, context->r3, StructWithFuncPtrs_41 @ Get_MemoryOffset_LowBit);
/*800C7238 000C4038*/ PPC::Runtime::ASM::addi(context->r31, context->r1, 0x70);
/*800C723C 000C403C*/ PPC::Runtime::ASM::mulli(context->r4, context->r0, 0x14);
/*800C7240 000C4040*/ PPC::Runtime::ASM::slwi(context->r0, context->r27, 2);
/*800C7244 000C4044*/ PPC::Runtime::ASM::addi(context->r30, context->r1, 0x2c);
/*800C7248 000C4048*/ PPC::Runtime::ASM::mr(context->r26, context->r5);
/*800C724C 000C404C*/ PPC::Runtime::ASM::mulli(context->r3, context->r27, 0xc);
/*800C7250 000C4050*/ PPC::Runtime::ASM::add(context->r30, context->r30, context->r0);
/*800C7254 000C4054*/ PPC::Runtime::ASM::add(context->r4, context->r5, context->r4);
/*800C7258 000C4058*/ PPC::Runtime::ASM::lbz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r4));
/*800C725C 000C405C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*800C7260 000C4060*/ PPC::Runtime::ASM::add(context->r31, context->r31, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_800C7264, 0x800C7264) //this is a jump label
/*800C7264 000C4064*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*800C7268 000C4068*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*800C726C 000C406C*/ PPC::Runtime::ASM::bne(.L_800C727C);
/*800C7270 000C4070*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
/* 800C7274 000C4074  54 00 DF FF */ extrwi. context->r0 , context->r0 , 1 , 26
/*800C7278 000C4078*/ PPC::Runtime::ASM::beq(.L_800C7458);
RUNTIME_PPC_JUMP_LABEL(.L_800C727C, 0x800C727C) //this is a jump label
/*800C727C 000C407C*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x0);
/*800C7280 000C4080*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r26));
/*800C7284 000C4084*/ PPC::Runtime::ASM::beq(.L_800C7298);
/*800C7288 000C4088*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800C728C 000C408C*/ PPC::Runtime::ASM::beq(.L_800C7298);
/*800C7290 000C4090*/ PPC::Runtime::ASM::cmpw(context->r25, context->r0);
/*800C7294 000C4094*/ PPC::Runtime::ASM::beq(.L_800C7458);
RUNTIME_PPC_JUMP_LABEL(.L_800C7298, 0x800C7298) //this is a jump label
/*800C7298 000C4098*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*800C729C 000C409C*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*800C72A0 000C40A0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*800C72A4 000C40A4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*800C72A8 000C40A8*/ PPC::Runtime::ASM::bctrl();
/*800C72AC 000C40AC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800C72B0 000C40B0*/ PPC::Runtime::ASM::cmpwi(context->r5, -0x1);
/*800C72B4 000C40B4*/ PPC::Runtime::ASM::beq(.L_800C7458);
/*800C72B8 000C40B8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
/*800C72BC 000C40BC*/ PPC::Runtime::ASM::mulli(context->r7, context->r5, 0x14);
/*800C72C0 000C40C0*/ PPC::Runtime::ASM::lis(context->r6, StructWithFuncPtrs_41 @ Get_MemoryOffset_HighBit);
/*800C72C4 000C40C4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800C72C8 000C40C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800C72CC 000C40CC*/ PPC::Runtime::ASM::extrwi(context->r9, context->r0, 1, 26);
/*800C72D0 000C40D0*/ PPC::Runtime::ASM::addi(context->r0, context->r6, StructWithFuncPtrs_41 @ Get_MemoryOffset_LowBit);
/*800C72D4 000C40D4*/ PPC::Runtime::ASM::lis(context->r6, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800C72D8 000C40D8*/ PPC::Runtime::ASM::cntlzw(context->r12, context->r9);
/*800C72DC 000C40DC*/ PPC::Runtime::ASM::add(context->r11, context->r0, context->r7);
/*800C72E0 000C40E0*/ PPC::Runtime::ASM::li(context->r10, 0x20);
/*800C72E4 000C40E4*/ PPC::Runtime::ASM::addi(context->r8, context->r6, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800C72E8 000C40E8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800C72EC 000C40EC*/ PPC::Runtime::ASM::srwi(context->r0, context->r12, 5);
/*800C72F0 000C40F0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800C72F4 000C40F4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C72F8 000C40F8*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r11));
/*800C72FC 000C40FC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800C7300 000C4100*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800C7304 000C4104*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800C7308 000C4108*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800C730C 000C410C*/ PPC::Runtime::ASM::mtctr(context->r10);
RUNTIME_PPC_JUMP_LABEL(.L_800C7310, 0x800C7310) //this is a jump label
/*800C7310 000C4110*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x0);
/*800C7314 000C4114*/ PPC::Runtime::ASM::blt(.L_800C7320);
/*800C7318 000C4118*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x20);
/*800C731C 000C411C*/ PPC::Runtime::ASM::blt(.L_800C7328);
RUNTIME_PPC_JUMP_LABEL(.L_800C7320, 0x800C7320) //this is a jump label
/*800C7320 000C4120*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*800C7324 000C4124*/ PPC::Runtime::ASM::b(.L_800C732C);
RUNTIME_PPC_JUMP_LABEL(.L_800C7328, 0x800C7328) //this is a jump label
/*800C7328 000C4128*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r8));
RUNTIME_PPC_JUMP_LABEL(.L_800C732C, 0x800C732C) //this is a jump label
/*800C732C 000C412C*/ PPC::Runtime::ASM::cmplwi(context->r10, 0x0);
/*800C7330 000C4130*/ PPC::Runtime::ASM::beq(.L_800C733C);
/*800C7334 000C4134*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r10));
/*800C7338 000C4138*/ PPC::Runtime::ASM::b(.L_800C7340);
RUNTIME_PPC_JUMP_LABEL(.L_800C733C, 0x800C733C) //this is a jump label
/*800C733C 000C413C*/ PPC::Runtime::ASM::li(context->r10, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800C7340, 0x800C7340) //this is a jump label
/*800C7340 000C4140*/ PPC::Runtime::ASM::cmplwi(context->r10, 0x0);
/*800C7344 000C4144*/ PPC::Runtime::ASM::beq(.L_800C7408);
/*800C7348 000C4148*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r10));
/*800C734C 000C414C*/ PPC::Runtime::ASM::cmplwi(context->r10, 0x0);
/*800C7350 000C4150*/ PPC::Runtime::ASM::beq(.L_800C7408);
/*800C7354 000C4154*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r10));
/*800C7358 000C4158*/ PPC::Runtime::ASM::cmpwi(context->r11, 0x3);
/*800C735C 000C415C*/ PPC::Runtime::ASM::bne(.L_800C7408);
/*800C7360 000C4160*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800C7364 000C4164*/ PPC::Runtime::ASM::beq(.L_800C73A8);
/*800C7368 000C4168*/ PPC::Runtime::ASM::lwz(context->r21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x180, context->r10));
/*800C736C 000C416C*/ PPC::Runtime::ASM::lis(context->r11, StructWithFuncPtrs_41 @ Get_MemoryOffset_HighBit);
/*800C7370 000C4170*/ PPC::Runtime::ASM::addi(context->r12, context->r11, StructWithFuncPtrs_41 @ Get_MemoryOffset_LowBit);
/*800C7374 000C4174*/ PPC::Runtime::ASM::mulli(context->r11, context->r21, 0x14);
/*800C7378 000C4178*/ PPC::Runtime::ASM::add(context->r11, context->r12, context->r11);
/*800C737C 000C417C*/ PPC::Runtime::ASM::lbz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r11));
/*800C7380 000C4180*/ PPC::Runtime::ASM::cmpw(context->r6, context->r11);
/*800C7384 000C4184*/ PPC::Runtime::ASM::beq(.L_800C73A0);
/*800C7388 000C4188*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18c, context->r10));
/*800C738C 000C418C*/ PPC::Runtime::ASM::mulli(context->r11, context->r11, 0x14);
/*800C7390 000C4190*/ PPC::Runtime::ASM::add(context->r11, context->r12, context->r11);
/*800C7394 000C4194*/ PPC::Runtime::ASM::lbz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r11));
/*800C7398 000C4198*/ PPC::Runtime::ASM::cmpw(context->r6, context->r11);
/*800C739C 000C419C*/ PPC::Runtime::ASM::bne(.L_800C73A8);
RUNTIME_PPC_JUMP_LABEL(.L_800C73A0, 0x800C73A0) //this is a jump label
/*800C73A0 000C41A0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800C73A4 000C41A4*/ PPC::Runtime::ASM::b(.L_800C7418);
RUNTIME_PPC_JUMP_LABEL(.L_800C73A8, 0x800C73A8) //this is a jump label
/*800C73A8 000C41A8*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x180, context->r10));
/*800C73AC 000C41AC*/ PPC::Runtime::ASM::cmpw(context->r11, context->r5);
/*800C73B0 000C41B0*/ PPC::Runtime::ASM::bne(.L_800C73D4);
/*800C73B4 000C41B4*/ PPC::Runtime::ASM::cmpwi(context->r9, 0x0);
/*800C73B8 000C41B8*/ PPC::Runtime::ASM::beq(.L_800C7400);
/*800C73BC 000C41BC*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x184, context->r10));
/*800C73C0 000C41C0*/ PPC::Runtime::ASM::cmpw(context->r11, context->r4);
/*800C73C4 000C41C4*/ PPC::Runtime::ASM::bne(.L_800C73D4);
/*800C73C8 000C41C8*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x188, context->r10));
/*800C73CC 000C41CC*/ PPC::Runtime::ASM::cmpw(context->r11, context->r3);
/*800C73D0 000C41D0*/ PPC::Runtime::ASM::beq(.L_800C7400);
RUNTIME_PPC_JUMP_LABEL(.L_800C73D4, 0x800C73D4) //this is a jump label
/*800C73D4 000C41D4*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18c, context->r10));
/*800C73D8 000C41D8*/ PPC::Runtime::ASM::cmpw(context->r11, context->r5);
/*800C73DC 000C41DC*/ PPC::Runtime::ASM::bne(.L_800C7408);
/*800C73E0 000C41E0*/ PPC::Runtime::ASM::cmpwi(context->r9, 0x0);
/*800C73E4 000C41E4*/ PPC::Runtime::ASM::beq(.L_800C7400);
/*800C73E8 000C41E8*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x190, context->r10));
/*800C73EC 000C41EC*/ PPC::Runtime::ASM::cmpw(context->r11, context->r4);
/*800C73F0 000C41F0*/ PPC::Runtime::ASM::bne(.L_800C7408);
/*800C73F4 000C41F4*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x194, context->r10));
/*800C73F8 000C41F8*/ PPC::Runtime::ASM::cmpw(context->r10, context->r3);
/*800C73FC 000C41FC*/ PPC::Runtime::ASM::bne(.L_800C7408);
RUNTIME_PPC_JUMP_LABEL(.L_800C7400, 0x800C7400) //this is a jump label
/*800C7400 000C4200*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800C7404 000C4204*/ PPC::Runtime::ASM::b(.L_800C7418);
RUNTIME_PPC_JUMP_LABEL(.L_800C7408, 0x800C7408) //this is a jump label
/*800C7408 000C4208*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x4);
/*800C740C 000C420C*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*800C7410 000C4210*/ PPC::Runtime::ASM::bdnz(.L_800C7310);
/*800C7414 000C4214*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800C7418, 0x800C7418) //this is a jump label
/*800C7418 000C4218*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800C741C 000C421C*/ PPC::Runtime::ASM::bne(.L_800C7458);
/*800C7420 000C4220*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800C7424 000C4224*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*800C7428 000C4228*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*800C742C 000C422C*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x11);
/*800C7430 000C4230*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800C7434 000C4234*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C7438 000C4238*/ PPC::Runtime::ASM::add(context->r28, context->r28, context->r4);
/*800C743C 000C423C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800C7440 000C4240*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800C7444 000C4244*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800C7448 000C4248*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0xc);
/*800C744C 000C424C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800C7450 000C4250*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*800C7454 000C4254*/ PPC::Runtime::ASM::bge(.L_800C7468);
RUNTIME_PPC_JUMP_LABEL(.L_800C7458, 0x800C7458) //this is a jump label
/*800C7458 000C4258*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*800C745C 000C425C*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x14);
/*800C7460 000C4260*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x7);
/*800C7464 000C4264*/ PPC::Runtime::ASM::blt(.L_800C7264);
RUNTIME_PPC_JUMP_LABEL(.L_800C7468, 0x800C7468) //this is a jump label
/*800C7468 000C4268*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x0);
/*800C746C 000C426C*/ PPC::Runtime::ASM::beq(.L_800C7508);
/*800C7470 000C4270*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6030 @ Get_MemoryOffset_SDA21);
/*800C7474 000C4274*/ PPC::Runtime::ASM::lwz(context->r21, StructWithStructs_27 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800C7478 000C4278*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*800C747C 000C427C*/ PPC::Runtime::ASM::stw(context->r0, StructWithStructs_27 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800C7480 000C4280*/ PPC::Runtime::ASM::bl(fn_HSD_Rand);
/*800C7484 000C4284*/ PPC::Runtime::ASM::mullw(context->r0, context->r28, context->r3);
/*800C7488 000C4288*/ PPC::Runtime::ASM::stw(context->r21, StructWithStructs_27 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800C748C 000C428C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*800C7490 000C4290*/ PPC::Runtime::ASM::li(context->r21, 0x0);
/*800C7494 000C4294*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 16);
/*800C7498 000C4298*/ PPC::Runtime::ASM::addze(context->r4, context->r0);
/*800C749C 000C429C*/ PPC::Runtime::ASM::mtctr(context->r27);
/*800C74A0 000C42A0*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x0);
/*800C74A4 000C42A4*/ PPC::Runtime::ASM::ble(.L_800C74C4);
RUNTIME_PPC_JUMP_LABEL(.L_800C74A8, 0x800C74A8) //this is a jump label
/*800C74A8 000C42A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800C74AC 000C42AC*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*800C74B0 000C42B0*/ PPC::Runtime::ASM::blt(.L_800C74C4);
/*800C74B4 000C42B4*/ PPC::Runtime::ASM::subf(context->r4, context->r0, context->r4);
/*800C74B8 000C42B8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*800C74BC 000C42BC*/ PPC::Runtime::ASM::addi(context->r21, context->r21, 0x1);
/*800C74C0 000C42C0*/ PPC::Runtime::ASM::bdnz(.L_800C74A8);
RUNTIME_PPC_JUMP_LABEL(.L_800C74C4, 0x800C74C4) //this is a jump label
/*800C74C4 000C42C4*/ PPC::Runtime::ASM::cmpw(context->r21, context->r27);
/*800C74C8 000C42C8*/ PPC::Runtime::ASM::blt(.L_800C74E0);
/*800C74CC 000C42CC*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_786 @ Get_MemoryOffset_HighBit);
/*800C74D0 000C42D0*/ PPC::Runtime::ASM::li(context->r4, 0x97d);
/*800C74D4 000C42D4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_786 @ Get_MemoryOffset_LowBit);
/*800C74D8 000C42D8*/ PPC::Runtime::ASM::li(context->r5, String_ "i_LessThen_coun" Get_MemoryOffset_SDA21);
/*800C74DC 000C42DC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800C74E0, 0x800C74E0) //this is a jump label
/*800C74E0 000C42E0*/ PPC::Runtime::ASM::mulli(context->r3, context->r21, 0xc);
/*800C74E4 000C42E4*/ PPC::Runtime::ASM::addi(context->r0, context->r1, 0x70);
/*800C74E8 000C42E8*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r3);
/*800C74EC 000C42EC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*800C74F0 000C42F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*800C74F4 000C42F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*800C74F8 000C42F8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800C74FC 000C42FC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800C7500 000C4300*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800C7504 000C4304*/ PPC::Runtime::ASM::b(.L_800C751C);
RUNTIME_PPC_JUMP_LABEL(.L_800C7508, 0x800C7508) //this is a jump label
/*800C7508 000C4308*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800C750C 000C430C*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*800C7510 000C4310*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800C7514 000C4314*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800C7518 000C4318*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_800C751C, 0x800C751C) //this is a jump label
/*800C751C 000C431C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800C7520 000C4320*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800C7524 000C4324*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*800C7528 000C4328*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r22));
/*800C752C 000C432C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800C7530 000C4330*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r22));
/*800C7534 000C4334*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x170);
/*800C7538 000C4338*/ PPC::Runtime::ASM::bl(_restgpr_21);
/*800C753C 000C433C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x174, context->r1));
/*800C7540 000C4340*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800C7544 000C4344*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x170);
/*800C7548 000C4348*/ PPC::Runtime::ASM::blr();
}