//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8006BA28.hpp"
#include "fn_8006BA28.hpp"
#include "fn_8006BA28.hpp"
#include "fn_800E9628.hpp"
#include "fn_800E9958.hpp"
#include "fn_802440AC.hpp"
#include "fn_802440AC.hpp"



void fn_800E92CC(PPC::Runtime::GCContext* context)
{
/*800E92CC 000E60CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*800E92D0 000E60D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*800E92D4 000E60D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800E92D8 000E60D8*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800E92DC 000E60DC*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*800E92E0 000E60E0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800E92E4 000E60E4*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*800E92E8 000E60E8*/ PPC::Runtime::ASM::lwz(context->r8, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800E92EC 000E60EC*/ PPC::Runtime::ASM::lis(context->r9, MemoryOffset_960 @ Get_MemoryOffset_HighBit);
/*800E92F0 000E60F0*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*800E92F4 000E60F4*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*800E92F8 000E60F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*800E92FC 000E60FC*/ PPC::Runtime::ASM::mr(context->r28, context->r5);
/*800E9300 000E6100*/ PPC::Runtime::ASM::mr(context->r29, context->r6);
/*800E9304 000E6104*/ PPC::Runtime::ASM::mr(context->r30, context->r7);
/*800E9308 000E6108*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*800E930C 000E610C*/ PPC::Runtime::ASM::addi(context->r31, context->r9, MemoryOffset_960 @ Get_MemoryOffset_LowBit);
/*800E9310 000E6110*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*800E9314 000E6114*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800E9318 000E6118*/ PPC::Runtime::ASM::bne(.L_800E932C);
/*800E931C 000E611C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*800E9320 000E6120*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xe0);
/*800E9324 000E6124*/ PPC::Runtime::ASM::li(context->r4, 0x129);
/*800E9328 000E6128*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E932C, 0x800E932C) //this is a jump label
/*800E932C 000E612C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800E9330 000E6130*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*800E9334 000E6134*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800E9338 000E6138*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800E933C 000E613C*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*800E9340 000E6140*/ PPC::Runtime::ASM::bne(.L_800E9354);
/*800E9344 000E6144*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*800E9348 000E6148*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x38);
/*800E934C 000E614C*/ PPC::Runtime::ASM::li(context->r4, 0x113);
/*800E9350 000E6150*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E9354, 0x800E9354) //this is a jump label
/*800E9354 000E6154*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*800E9358 000E6158*/ PPC::Runtime::ASM::xor(context->r0, context->r27, context->r0);
/*800E935C 000E615C*/ PPC::Runtime::ASM::srawi(context->r3, context->r0, 1);
/*800E9360 000E6160*/ PPC::Runtime::ASM::and(context->r0, context->r0, context->r27);
/*800E9364 000E6164*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r3);
/* 800E9368 000E6168  54 00 0F FF */ srwi. context->r0 , context->r0 , 31
/*800E936C 000E616C*/ PPC::Runtime::ASM::beq(.L_800E939C);
/*800E9370 000E6170*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*800E9374 000E6174*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800E9378 000E6178*/ PPC::Runtime::ASM::beq(.L_800E9384);
/*800E937C 000E617C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800E9380 000E6180*/ PPC::Runtime::ASM::b(.L_800E9388);
RUNTIME_PPC_JUMP_LABEL(.L_800E9384, 0x800E9384) //this is a jump label
/*800E9384 000E6184*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800E9388, 0x800E9388) //this is a jump label
/*800E9388 000E6188*/ PPC::Runtime::ASM::xor(context->r0, context->r4, context->r27);
/*800E938C 000E618C*/ PPC::Runtime::ASM::srawi(context->r3, context->r0, 1);
/*800E9390 000E6190*/ PPC::Runtime::ASM::and(context->r0, context->r0, context->r4);
/*800E9394 000E6194*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r3);
/*800E9398 000E6198*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
RUNTIME_PPC_JUMP_LABEL(.L_800E939C, 0x800E939C) //this is a jump label
/*800E939C 000E619C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800E93A0 000E61A0*/ PPC::Runtime::ASM::bne(.L_800E93C4);
/*800E93A4 000E61A4*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*800E93A8 000E61A8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x48);
/*800E93AC 000E61AC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800E93B0 000E61B0*/ PPC::Runtime::ASM::bl(OSReport);
/*800E93B4 000E61B4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*800E93B8 000E61B8*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x58);
/*800E93BC 000E61BC*/ PPC::Runtime::ASM::li(context->r4, 0x114);
/*800E93C0 000E61C0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E93C4, 0x800E93C4) //this is a jump label
/*800E93C4 000E61C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*800E93C8 000E61C8*/ PPC::Runtime::ASM::slwi(context->r0, context->r27, 2);
/*800E93CC 000E61CC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r25));
/*800E93D0 000E61D0*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*800E93D4 000E61D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800E93D8 000E61D8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800E93DC 000E61DC*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*800E93E0 000E61E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800E93E4 000E61E4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800E93E8 000E61E8*/ PPC::Runtime::ASM::lwzx(context->r25, context->r4, context->r0);
/*800E93EC 000E61EC*/ PPC::Runtime::ASM::bne(.L_800E9424);
/*800E93F0 000E61F0*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800E93F4 000E61F4*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*800E93F8 000E61F8*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*800E93FC 000E61FC*/ PPC::Runtime::ASM::bl(fn_8006BA28);
/*800E9400 000E6200*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800E9404 000E6204*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*800E9408 000E6208*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800E940C 000E620C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800E9410 000E6210*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800E9414 000E6214*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800E9418 000E6218*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800E941C 000E621C*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x590, context->r3));
/*800E9420 000E6220*/ PPC::Runtime::ASM::b(.L_800E9454);
RUNTIME_PPC_JUMP_LABEL(.L_800E9424, 0x800E9424) //this is a jump label
/*800E9424 000E6224*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800E9428 000E6228*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*800E942C 000E622C*/ PPC::Runtime::ASM::subi(context->r4, context->r28, 0x1);
/*800E9430 000E6230*/ PPC::Runtime::ASM::bl(fn_8006BA28);
/*800E9434 000E6234*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800E9438 000E6238*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*800E943C 000E623C*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*800E9440 000E6240*/ PPC::Runtime::ASM::bl(fn_8006BA28);
/*800E9444 000E6244*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*800E9448 000E6248*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*800E944C 000E624C*/ PPC::Runtime::ASM::bl(fn_800E9628);
/*800E9450 000E6250*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_800E9454, 0x800E9454) //this is a jump label
/*800E9454 000E6254*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*800E9458 000E6258*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*800E945C 000E625C*/ PPC::Runtime::ASM::bl(fn_800E9958);
/*800E9460 000E6260*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800E9464 000E6264*/ PPC::Runtime::ASM::beq(.L_800E94A0);
/*800E9468 000E6268*/ PPC::Runtime::ASM::slwi(context->r3, context->r27, 3);
/*800E946C 000E626C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*800E9470 000E6270*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*800E9474 000E6274*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*800E9478 000E6278*/ PPC::Runtime::ASM::lwzx(context->r25, context->r4, context->r0);
/*800E947C 000E627C*/ PPC::Runtime::ASM::mr(context->r6, context->r29);
/*800E9480 000E6280*/ PPC::Runtime::ASM::addi(context->r3, context->r25, 0x64);
/*800E9484 000E6284*/ PPC::Runtime::ASM::addi(context->r4, context->r25, 0x4);
/*800E9488 000E6288*/ PPC::Runtime::ASM::bl(fn_802440AC);
/*800E948C 000E628C*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*800E9490 000E6290*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*800E9494 000E6294*/ PPC::Runtime::ASM::addi(context->r3, context->r25, 0x64);
/*800E9498 000E6298*/ PPC::Runtime::ASM::addi(context->r4, context->r25, 0x4);
/*800E949C 000E629C*/ PPC::Runtime::ASM::bl(fn_802440AC);
RUNTIME_PPC_JUMP_LABEL(.L_800E94A0, 0x800E94A0) //this is a jump label
/*800E94A0 000E62A0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*800E94A4 000E62A4*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*800E94A8 000E62A8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800E94AC 000E62AC*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800E94B0 000E62B0*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*800E94B4 000E62B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800E94B8 000E62B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800E94BC 000E62BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*800E94C0 000E62C0*/ PPC::Runtime::ASM::blr();
}