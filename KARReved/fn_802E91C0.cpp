//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802EA3D4.hpp"
#include "fn_802EA3D4.hpp"



void fn_802E91C0(PPC::Runtime::GCContext* context)
{
/*802E91C0 002E5FC0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*802E91C4 002E5FC4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802E91C8 002E5FC8*/ PPC::Runtime::ASM::lis(context->r5, lbl_804BD3C8 @ Get_MemoryOffset_HighBit);
/*802E91CC 002E5FCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802E91D0 002E5FD0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802E91D4 002E5FD4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802E91D8 002E5FD8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802E91DC 002E5FDC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD3A4 @ Get_MemoryOffset_HighBit);
/*802E91E0 002E5FE0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802E91E4 002E5FE4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BD3A4 @ Get_MemoryOffset_LowBit);
/*802E91E8 002E5FE8*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*802E91EC 002E5FEC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x10);
/*802E91F0 002E5FF0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802E91F4 002E5FF4*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*802E91F8 002E5FF8*/ PPC::Runtime::ASM::addi(context->r4, context->r5, lbl_804BD3C8 @ Get_MemoryOffset_LowBit);
/*802E91FC 002E5FFC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802E9200 002E6000*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802E9204 002E6004*/ PPC::Runtime::ASM::mr(context->r0, context->r6);
/*802E9208 002E6008*/ PPC::Runtime::ASM::lis(context->r6, lbl_804D7738 @ Get_MemoryOffset_HighBit);
/*802E920C 002E600C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDB3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E9210 002E6010*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*802E9214 002E6014*/ PPC::Runtime::ASM::addi(context->r31, context->r6, lbl_804D7738 @ Get_MemoryOffset_LowBit);
/*802E9218 002E6018*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802E921C 002E601C*/ PPC::Runtime::ASM::li(context->r4, 0x2d0);
/*802E9220 002E6020*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802E9224 002E6024*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*802E9228 002E6028*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802E922C 002E602C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*802E9230 002E6030*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*802E9234 002E6034*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*802E9238 002E6038*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*802E923C 002E603C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*802E9240 002E6040*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*802E9244 002E6044*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*802E9248 002E6048*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802E924C 002E604C*/ PPC::Runtime::ASM::bl(fn_802EA3D4);
/*802E9250 002E6050*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1c);
/*802E9254 002E6054*/ PPC::Runtime::ASM::li(context->r4, 0x2d0);
/*802E9258 002E6058*/ PPC::Runtime::ASM::bl(fn_802EA3D4);
/*802E925C 002E605C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*802E9260 002E6060*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*802E9264 002E6064*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*802E9268 002E6068*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*802E926C 002E606C*/ PPC::Runtime::ASM::bl(fn_8038BBE8);
/*802E9270 002E6070*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802E9274 002E6074*/ PPC::Runtime::ASM::li(context->r3, 0x14);
/*802E9278 002E6078*/ PPC::Runtime::ASM::bl(fn_803919FC);
/* 802E927C 002E607C  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*802E9280 002E6080*/ PPC::Runtime::ASM::beq(.L_802E9294);
/*802E9284 002E6084*/ PPC::Runtime::ASM::lbz(context->r0, SkipAddress_56 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E9288 002E6088*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802E928C 002E608C*/ PPC::Runtime::ASM::beq(.L_802E9294);
/*802E9290 002E6090*/ PPC::Runtime::ASM::bl(fn_80391644);
RUNTIME_PPC_JUMP_LABEL(.L_802E9294, 0x802E9294) //this is a jump label
/*802E9294 002E6094*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*802E9298 002E6098*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*802E929C 002E609C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802E92A0 002E60A0*/ PPC::Runtime::ASM::beq(.L_802E92C4);
/*802E92A4 002E60A4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*802E92A8 002E60A8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802E92AC 002E60AC*/ PPC::Runtime::ASM::beq(.L_802E92BC);
/*802E92B0 002E60B0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802E92B4 002E60B4*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802E92B8 002E60B8*/ PPC::Runtime::ASM::bne(.L_802E92C0);
RUNTIME_PPC_JUMP_LABEL(.L_802E92BC, 0x802E92BC) //this is a jump label
/*802E92BC 002E60BC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802E92C0, 0x802E92C0) //this is a jump label
/*802E92C0 002E60C0*/ PPC::Runtime::ASM::bl(fn_8038CCAC);
RUNTIME_PPC_JUMP_LABEL(.L_802E92C4, 0x802E92C4) //this is a jump label
/*802E92C4 002E60C4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802E92C8 002E60C8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802E92CC 002E60CC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E92D0 002E60D0*/ PPC::Runtime::ASM::cmplw(context->r4, context->r3);
/*802E92D4 002E60D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E92D8 002E60D8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802E92DC 002E60DC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802E92E0 002E60E0*/ PPC::Runtime::ASM::beq(.L_802E930C);
/*802E92E4 002E60E4*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802E92E8 002E60E8*/ PPC::Runtime::ASM::beq(.L_802E9304);
/*802E92EC 002E60EC*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*802E92F0 002E60F0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802E92F4 002E60F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802E92F8 002E60F8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802E92FC 002E60FC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E9300 002E6100*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802E9304, 0x802E9304) //this is a jump label
/*802E9304 002E6104*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802E9308 002E6108*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802E930C, 0x802E930C) //this is a jump label
/*802E930C 002E610C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E9310 002E6110*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802E9314 002E6114*/ PPC::Runtime::ASM::beq(.L_802E932C);
/*802E9318 002E6118*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802E931C 002E611C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802E9320 002E6120*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802E9324 002E6124*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E9328 002E6128*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802E932C, 0x802E932C) //this is a jump label
/*802E932C 002E612C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802E9330 002E6130*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802E9334 002E6134*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*802E9338 002E6138*/ PPC::Runtime::ASM::bl(fn_8038D158);
/*802E933C 002E613C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802E9340 002E6140*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetRate @ Get_MemoryOffset_HighBit);
/*802E9344 002E6144*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetRate @ Get_MemoryOffset_LowBit);
/*802E9348 002E6148*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*802E934C 002E614C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*802E9350 002E6150*/ PPC::Runtime::ASM::subi(context->r5, context->r4, 0x1);
/*802E9354 002E6154*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3998 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E9358 002E6158*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*802E935C 002E615C*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/* 802E9360 002E6160  4C C6 32 42 */ crset context->cr1eq
/*802E9364 002E6164*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*802E9368 002E6168*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E39A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E936C 002E616C*/ PPC::Runtime::ASM::addi(context->r28, context->r1, 0x14);
/*802E9370 002E6170*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802E9374 002E6174*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E9378 002E6178*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802E937C 002E617C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802E9380 002E6180*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802E9384 002E6184*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 802E9388 002E6188  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*802E938C 002E618C*/ PPC::Runtime::ASM::bne(.L_802E93A0);
/*802E9390 002E6190*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9568 @ Get_MemoryOffset_SDA21);
/*802E9394 002E6194*/ PPC::Runtime::ASM::li(context->r4, 0x316);
/*802E9398 002E6198*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9570 @ Get_MemoryOffset_SDA21);
/*802E939C 002E619C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802E93A0, 0x802E93A0) //this is a jump label
/*802E93A0 002E61A0*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*802E93A4 002E61A4*/ PPC::Runtime::ASM::bne(.L_802E93B8);
/*802E93A8 002E61A8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9568 @ Get_MemoryOffset_SDA21);
/*802E93AC 002E61AC*/ PPC::Runtime::ASM::li(context->r4, 0x317);
/*802E93B0 002E61B0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9578 @ Get_MemoryOffset_SDA21);
/*802E93B4 002E61B4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802E93B8, 0x802E93B8) //this is a jump label
/*802E93B8 002E61B8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E93BC 002E61BC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*802E93C0 002E61C0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802E93C4 002E61C4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*802E93C8 002E61C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802E93CC 002E61CC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*802E93D0 002E61D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802E93D4 002E61D4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*802E93D8 002E61D8*/ PPC::Runtime::ASM::bne(.L_802E9424);
/*802E93DC 002E61DC*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802E93E0 002E61E0*/ PPC::Runtime::ASM::beq(.L_802E9424);
/*802E93E4 002E61E4*/ PPC::Runtime::ASM::bne(.L_802E93F8);
/*802E93E8 002E61E8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9568 @ Get_MemoryOffset_SDA21);
/*802E93EC 002E61EC*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*802E93F0 002E61F0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9570 @ Get_MemoryOffset_SDA21);
/*802E93F4 002E61F4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802E93F8, 0x802E93F8) //this is a jump label
/*802E93F8 002E61F8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802E93FC 002E61FC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802E9400 002E6200*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*802E9404 002E6204*/ PPC::Runtime::ASM::bne(.L_802E9414);
/*802E9408 002E6208*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*802E940C 002E620C*/ PPC::Runtime::ASM::beq(.L_802E9414);
/*802E9410 002E6210*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802E9414, 0x802E9414) //this is a jump label
/* 802E9414 002E6214  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802E9418 002E6218*/ PPC::Runtime::ASM::bne(.L_802E9424);
/*802E941C 002E621C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802E9420 002E6220*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_802E9424, 0x802E9424) //this is a jump label
/*802E9424 002E6224*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802E9428 002E6228*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xc);
/*802E942C 002E622C*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*802E9430 002E6230*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802E9434 002E6234*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x1c);
/*802E9438 002E6238*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802E943C 002E623C*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*802E9440 002E6240*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*802E9444 002E6244*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802E9448 002E6248*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802E944C 002E624C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802E9450 002E6250*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802E9454 002E6254*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802E9458 002E6258*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802E945C 002E625C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802E9460 002E6260*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*802E9464 002E6264*/ PPC::Runtime::ASM::blr();
}