//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_TObjAssignResources.hpp"
#include "fn_HSD_StateRegisterTexGen?.hpp"
#include "fn_TObjSetupMtx.hpp"
#include "fn___assert.hpp"
#include "fn___assert.hpp"
#include "fn___assert.hpp"
#include "fn_GXInitTlutObj.hpp"
#include "fn_GXLoadTlut.hpp"
#include "fn_GXInitTexObjCI.hpp"
#include "fn_GXInitTexObj.hpp"
#include "fn___assert.hpp"
#include "fn_GXInitTexObjLOD.hpp"
#include "fn_GXLoadTexObj.hpp"



void fn_HSD_TObjSetup_ParseDatFile_ImageStructure(PPC::Runtime::GCContext* context)
{
/*803F7158 003F3F58*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x90, context->r1));
/*803F715C 003F3F5C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803F7160 003F3F60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*803F7164 003F3F64*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x90);
/*803F7168 003F3F68*/ PPC::Runtime::ASM::bl(_savegpr_22);
/* 803F716C 003F3F6C  7C 77 1B 79 */ mr. context->r23 , context->r3
/*803F7170 003F3F70*/ PPC::Runtime::ASM::lis(context->r4, lbl_80501E30 @ Get_MemoryOffset_HighBit);
/*803F7174 003F3F74*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_80501E30 @ Get_MemoryOffset_LowBit);
/*803F7178 003F3F78*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*803F717C 003F3F7C*/ PPC::Runtime::ASM::li(context->r22, 0x0);
/*803F7180 003F3F80*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*803F7184 003F3F84*/ PPC::Runtime::ASM::stw(context->r23, STRUCT_BYTE4_COUNT_1805DE17C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803F7188 003F3F88*/ PPC::Runtime::ASM::li(context->r27, 0x10);
/*803F718C 003F3F8C*/ PPC::Runtime::ASM::beq(.L_803F7424);
/*803F7190 003F3F90*/ PPC::Runtime::ASM::bl(fn_HSD_TObjAssignResources);
/*803F7194 003F3F94*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803F7198 003F3F98*/ PPC::Runtime::ASM::ble(.L_803F741C);
/*803F719C 003F3F9C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*803F71A0 003F3FA0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x4c);
/*803F71A4 003F3FA4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*803F71A8 003F3FA8*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*803F71AC 003F3FAC*/ PPC::Runtime::ASM::bl(fn_HSD_StateRegisterTexGen?);
/*803F71B0 003F3FB0*/ PPC::Runtime::ASM::b(.L_803F741C);
RUNTIME_PPC_JUMP_LABEL(.L_803F71B4, 0x803F71B4) //this is a jump label
/*803F71B4 003F3FB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r23));
/*803F71B8 003F3FB8*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r23));
/*803F71BC 003F3FBC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xff);
/*803F71C0 003F3FC0*/ PPC::Runtime::ASM::beq(.L_803F7418);
/*803F71C4 003F3FC4*/ PPC::Runtime::ASM::mr(context->r3, context->r23);
/*803F71C8 003F3FC8*/ PPC::Runtime::ASM::bl(fn_TObjSetupMtx);
/*803F71CC 003F3FCC*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*803F71D0 003F3FD0*/ PPC::Runtime::ASM::bne(.L_803F71E4);
/*803F71D4 003F3FD4*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x2e8);
/*803F71D8 003F3FD8*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_1278 @ Get_MemoryOffset_SDA21);
/*803F71DC 003F3FDC*/ PPC::Runtime::ASM::li(context->r4, 0x683);
/*803F71E0 003F3FE0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_803F71E4, 0x803F71E4) //this is a jump label
/*803F71E4 003F3FE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*803F71E8 003F3FE8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803F71EC 003F3FEC*/ PPC::Runtime::ASM::bne(.L_803F7200);
/*803F71F0 003F3FF0*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x2f4);
/*803F71F4 003F3FF4*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_1278 @ Get_MemoryOffset_SDA21);
/*803F71F8 003F3FF8*/ PPC::Runtime::ASM::li(context->r4, 0x684);
/*803F71FC 003F3FFC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_803F7200, 0x803F7200) //this is a jump label
/*803F7200 003F4000*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r23));
/*803F7204 003F4004*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*803F7208 003F4008*/ PPC::Runtime::ASM::beq(.L_803F7210);
/*803F720C 003F400C*/ PPC::Runtime::ASM::b(.L_803F7214);
RUNTIME_PPC_JUMP_LABEL(.L_803F7210, 0x803F7210) //this is a jump label
/*803F7210 003F4010*/ PPC::Runtime::ASM::addi(context->r30, context->r31, 0x2d8);
RUNTIME_PPC_JUMP_LABEL(.L_803F7214, 0x803F7214) //this is a jump label
/*803F7214 003F4014*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*803F7218 003F4018*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803F721C 003F401C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xb);
/*803F7220 003F4020*/ PPC::Runtime::ASM::bge(.L_803F723C);
/*803F7224 003F4024*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x7);
/*803F7228 003F4028*/ PPC::Runtime::ASM::beq(.L_803F73C4);
/*803F722C 003F402C*/ PPC::Runtime::ASM::bge(.L_803F7248);
/*803F7230 003F4030*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803F7234 003F4034*/ PPC::Runtime::ASM::bge(.L_803F7390);
/*803F7238 003F4038*/ PPC::Runtime::ASM::b(.L_803F73C4);
RUNTIME_PPC_JUMP_LABEL(.L_803F723C, 0x803F723C) //this is a jump label
/*803F723C 003F403C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xe);
/*803F7240 003F4040*/ PPC::Runtime::ASM::beq(.L_803F7390);
/*803F7244 003F4044*/ PPC::Runtime::ASM::b(.L_803F73C4);
RUNTIME_PPC_JUMP_LABEL(.L_803F7248, 0x803F7248) //this is a jump label
/*803F7248 003F4048*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r23));
/*803F724C 003F404C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xff);
/*803F7250 003F4050*/ PPC::Runtime::ASM::beq(.L_803F7264);
/*803F7254 003F4054*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r23));
/*803F7258 003F4058*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r0, 24, 2);
/*803F725C 003F405C*/ PPC::Runtime::ASM::lwzx(context->r24, context->r3, context->r0);
/*803F7260 003F4060*/ PPC::Runtime::ASM::b(.L_803F7268);
RUNTIME_PPC_JUMP_LABEL(.L_803F7264, 0x803F7264) //this is a jump label
/*803F7264 003F4064*/ PPC::Runtime::ASM::lwz(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r23));
RUNTIME_PPC_JUMP_LABEL(.L_803F7268, 0x803F7268) //this is a jump label
/*803F7268 003F4068*/ PPC::Runtime::ASM::cmplwi(context->r24, 0x0);
/*803F726C 003F406C*/ PPC::Runtime::ASM::bne(.L_803F7280);
/*803F7270 003F4070*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_1278 @ Get_MemoryOffset_SDA21);
/*803F7274 003F4074*/ PPC::Runtime::ASM::li(context->r4, 0x694);
/*803F7278 003F4078*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_1274 @ Get_MemoryOffset_SDA21);
/*803F727C 003F407C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_803F7280, 0x803F7280) //this is a jump label
/*803F7280 003F4080*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x1c);
/*803F7284 003F4084*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*803F7288 003F4088*/ PPC::Runtime::ASM::mtctr(context->r29);
/*803F728C 003F408C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*803F7290 003F4090*/ PPC::Runtime::ASM::ble(.L_803F72C4);
RUNTIME_PPC_JUMP_LABEL(.L_803F7294, 0x803F7294) //this is a jump label
/*803F7294 003F4094*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803F7298 003F4098*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803F729C 003F409C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r24));
/*803F72A0 003F40A0*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*803F72A4 003F40A4*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*803F72A8 003F40A8*/ PPC::Runtime::ASM::bne(.L_803F72B0);
/*803F72AC 003F40AC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803F72B0, 0x803F72B0) //this is a jump label
/*803F72B0 003F40B0*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*803F72B4 003F40B4*/ PPC::Runtime::ASM::beq(.L_803F72C4);
/*803F72B8 003F40B8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4);
/*803F72BC 003F40BC*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*803F72C0 003F40C0*/ PPC::Runtime::ASM::bdnz(.L_803F7294);
RUNTIME_PPC_JUMP_LABEL(.L_803F72C4, 0x803F72C4) //this is a jump label
/*803F72C4 003F40C4*/ PPC::Runtime::ASM::cmpw(context->r6, context->r29);
/*803F72C8 003F40C8*/ PPC::Runtime::ASM::bge(.L_803F72E4);
/*803F72CC 003F40CC*/ PPC::Runtime::ASM::slwi(context->r0, context->r6, 2);
/*803F72D0 003F40D0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x1c);
/*803F72D4 003F40D4*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*803F72D8 003F40D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803F72DC 003F40DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r24));
/*803F72E0 003F40E0*/ PPC::Runtime::ASM::b(.L_803F7348);
RUNTIME_PPC_JUMP_LABEL(.L_803F72E4, 0x803F72E4) //this is a jump label
/*803F72E4 003F40E4*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x8);
/*803F72E8 003F40E8*/ PPC::Runtime::ASM::bge(.L_803F7340);
/*803F72EC 003F40EC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r24));
/*803F72F0 003F40F0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x100);
/*803F72F4 003F40F4*/ PPC::Runtime::ASM::ble(.L_803F7304);
/*803F72F8 003F40F8*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r24));
/*803F72FC 003F40FC*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*803F7300 003F4100*/ PPC::Runtime::ASM::b(.L_803F730C);
RUNTIME_PPC_JUMP_LABEL(.L_803F7304, 0x803F7304) //this is a jump label
/*803F7304 003F4104*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r24));
/*803F7308 003F4108*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803F730C, 0x803F730C) //this is a jump label
/*803F730C 003F410C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*803F7310 003F4110*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*803F7314 003F4114*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r24));
/*803F7318 003F4118*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r24));
/*803F731C 003F411C*/ PPC::Runtime::ASM::bl(fn_GXInitTlutObj);
/*803F7320 003F4120*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r24));
/*803F7324 003F4124*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*803F7328 003F4128*/ PPC::Runtime::ASM::bl(fn_GXLoadTlut);
/*803F732C 003F412C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x1c);
/*803F7330 003F4130*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*803F7334 003F4134*/ PPC::Runtime::ASM::stwx(context->r24, context->r3, context->r22);
/*803F7338 003F4138*/ PPC::Runtime::ASM::addi(context->r22, context->r22, 0x4);
/*803F733C 003F413C*/ PPC::Runtime::ASM::b(.L_803F7348);
RUNTIME_PPC_JUMP_LABEL(.L_803F7340, 0x803F7340) //this is a jump label
/*803F7340 003F4140*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803F7344 003F4144*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r24));
RUNTIME_PPC_JUMP_LABEL(.L_803F7348, 0x803F7348) //this is a jump label
/*803F7348 003F4148*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r24));
/*803F734C 003F414C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x3c);
/*803F7350 003F4150*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803F7354 003F4154*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*803F7358 003F4158*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*803F735C 003F415C*/ PPC::Runtime::ASM::neg(context->r0, context->r6);
/*803F7360 003F4160*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*803F7364 003F4164*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r6);
/*803F7368 003F4168*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r26));
/*803F736C 003F416C*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*803F7370 003F4170*/ PPC::Runtime::ASM::srwi(context->r10, context->r0, 31);
/*803F7374 003F4174*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r23));
/*803F7378 003F4178*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r23));
/*803F737C 003F417C*/ PPC::Runtime::ASM::bl(fn_GXInitTexObjCI);
/*803F7380 003F4180*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x5);
/*803F7384 003F4184*/ PPC::Runtime::ASM::bne(.L_803F73D4);
/*803F7388 003F4188*/ PPC::Runtime::ASM::li(context->r25, 0x3);
/*803F738C 003F418C*/ PPC::Runtime::ASM::b(.L_803F73D4);
RUNTIME_PPC_JUMP_LABEL(.L_803F7390, 0x803F7390) //this is a jump label
/*803F7390 003F4190*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*803F7394 003F4194*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x3c);
/*803F7398 003F4198*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*803F739C 003F419C*/ PPC::Runtime::ASM::neg(context->r0, context->r6);
/*803F73A0 003F41A0*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*803F73A4 003F41A4*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r6);
/*803F73A8 003F41A8*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r26));
/*803F73AC 003F41AC*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*803F73B0 003F41B0*/ PPC::Runtime::ASM::srwi(context->r10, context->r0, 31);
/*803F73B4 003F41B4*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r23));
/*803F73B8 003F41B8*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r23));
/*803F73BC 003F41BC*/ PPC::Runtime::ASM::bl(fn_GXInitTexObj);
/*803F73C0 003F41C0*/ PPC::Runtime::ASM::b(.L_803F73D4);
RUNTIME_PPC_JUMP_LABEL(.L_803F73C4, 0x803F73C4) //this is a jump label
/*803F73C4 003F41C4*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_1278 @ Get_MemoryOffset_SDA21);
/*803F73C8 003F41C8*/ PPC::Runtime::ASM::li(context->r4, 0x6d0);
/*803F73CC 003F41CC*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_1275 @ Get_MemoryOffset_SDA21);
/*803F73D0 003F41D0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_803F73D4, 0x803F73D4) //this is a jump label
/*803F73D4 003F41D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*803F73D8 003F41D8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803F73DC 003F41DC*/ PPC::Runtime::ASM::bne(.L_803F73E4);
/*803F73E0 003F41E0*/ PPC::Runtime::ASM::clrlwi(context->r25, context->r25, 31);
RUNTIME_PPC_JUMP_LABEL(.L_803F73E4, 0x803F73E4) //this is a jump label
/*803F73E4 003F41E4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r23));
/*803F73E8 003F41E8*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*803F73EC 003F41EC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
/*803F73F0 003F41F0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x3c);
/*803F73F4 003F41F4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*803F73F8 003F41F8*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*803F73FC 003F41FC*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*803F7400 003F4200*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r30));
/*803F7404 003F4204*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*803F7408 003F4208*/ PPC::Runtime::ASM::bl(fn_GXInitTexObjLOD);
/*803F740C 003F420C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r23));
/*803F7410 003F4210*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x3c);
/*803F7414 003F4214*/ PPC::Runtime::ASM::bl(fn_GXLoadTexObj);
RUNTIME_PPC_JUMP_LABEL(.L_803F7418, 0x803F7418) //this is a jump label
/*803F7418 003F4218*/ PPC::Runtime::ASM::lwz(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r23));
RUNTIME_PPC_JUMP_LABEL(.L_803F741C, 0x803F741C) //this is a jump label
/*803F741C 003F421C*/ PPC::Runtime::ASM::cmplwi(context->r23, 0x0);
/*803F7420 003F4220*/ PPC::Runtime::ASM::bne(.L_803F71B4);
RUNTIME_PPC_JUMP_LABEL(.L_803F7424, 0x803F7424) //this is a jump label
/*803F7424 003F4224*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x90);
/*803F7428 003F4228*/ PPC::Runtime::ASM::bl(_restgpr_22);
/*803F742C 003F422C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*803F7430 003F4230*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803F7434 003F4234*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x90);
/*803F7438 003F4238*/ PPC::Runtime::ASM::blr();
}