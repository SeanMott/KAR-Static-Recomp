//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80055DAC.hpp"
#include "fn_80056074.hpp"



void fn_801E92EC(PPC::Runtime::GCContext* context)
{
/*801E92EC 001E60EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801E92F0 001E60F0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E92F4 001E60F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801E92F8 001E60F8*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801E92FC 001E60FC*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*801E9300 001E6100*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E9304 001E6104*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801E9308 001E6108*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801E930C 001E610C*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*801E9310 001E6110*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E9314 001E6114*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801E9318 001E6118*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801E931C 001E611C*/ PPC::Runtime::ASM::b(.L_801E9354);
RUNTIME_PPC_JUMP_LABEL(.L_801E9320, 0x801E9320) //this is a jump label
/*801E9320 001E6120*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r31));
/*801E9324 001E6124*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r30);
/*801E9328 001E6128*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/* 801E932C 001E612C  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801E9330 001E6130*/ PPC::Runtime::ASM::beq(.L_801E934C);
/*801E9334 001E6134*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801E9338 001E6138*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801E933C 001E613C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r28));
/*801E9340 001E6140*/ PPC::Runtime::ASM::bl(fn_HSD_AObjReqAnim);
/*801E9344 001E6144*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801E9348 001E6148*/ PPC::Runtime::ASM::bl(fn_80055DAC);
RUNTIME_PPC_JUMP_LABEL(.L_801E934C, 0x801E934C) //this is a jump label
/*801E934C 001E614C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x8);
/*801E9350 001E6150*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801E9354, 0x801E9354) //this is a jump label
/*801E9354 001E6154*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*801E9358 001E6158*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801E935C 001E615C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801E9360 001E6160*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*801E9364 001E6164*/ PPC::Runtime::ASM::blt(.L_801E9320);
/*801E9368 001E6168*/ PPC::Runtime::ASM::mr(context->r30, context->r31);
/*801E936C 001E616C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801E9370 001E6170*/ PPC::Runtime::ASM::b(.L_801E93D8);
RUNTIME_PPC_JUMP_LABEL(.L_801E9374, 0x801E9374) //this is a jump label
/*801E9374 001E6174*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xce0, context->r30));
/*801E9378 001E6178*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801E937C 001E617C*/ PPC::Runtime::ASM::beq(.L_801E93D0);
/*801E9380 001E6180*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd58, context->r30));
/*801E9384 001E6184*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801E9388 001E6188*/ PPC::Runtime::ASM::beq(.L_801E93D0);
/*801E938C 001E618C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a3c, context->r31));
/*801E9390 001E6190*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801E9394 001E6194*/ PPC::Runtime::ASM::beq(.L_801E93A4);
/*801E9398 001E6198*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1688, context->r30));
/*801E939C 001E619C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801E93A0 001E61A0*/ PPC::Runtime::ASM::bne(.L_801E93D0);
RUNTIME_PPC_JUMP_LABEL(.L_801E93A4, 0x801E93A4) //this is a jump label
/*801E93A4 001E61A4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a3d, context->r31));
/*801E93A8 001E61A8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801E93AC 001E61AC*/ PPC::Runtime::ASM::beq(.L_801E93BC);
/*801E93B0 001E61B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11f0, context->r30));
/*801E93B4 001E61B4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801E93B8 001E61B8*/ PPC::Runtime::ASM::bne(.L_801E93D0);
RUNTIME_PPC_JUMP_LABEL(.L_801E93BC, 0x801E93BC) //this is a jump label
/*801E93BC 001E61BC*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801E93C0 001E61C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*801E93C4 001E61C4*/ PPC::Runtime::ASM::bl(fn_HSD_AObjReqAnim);
/*801E93C8 001E61C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xce0, context->r30));
/*801E93CC 001E61CC*/ PPC::Runtime::ASM::bl(fn_80056074);
RUNTIME_PPC_JUMP_LABEL(.L_801E93D0, 0x801E93D0) //this is a jump label
/*801E93D0 001E61D0*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*801E93D4 001E61D4*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801E93D8, 0x801E93D8) //this is a jump label
/*801E93D8 001E61D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc74, context->r31));
/*801E93DC 001E61DC*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*801E93E0 001E61E0*/ PPC::Runtime::ASM::blt(.L_801E9374);
/*801E93E4 001E61E4*/ PPC::Runtime::ASM::mr(context->r30, context->r31);
/*801E93E8 001E61E8*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801E93EC 001E61EC*/ PPC::Runtime::ASM::b(.L_801E9454);
RUNTIME_PPC_JUMP_LABEL(.L_801E93F0, 0x801E93F0) //this is a jump label
/*801E93F0 001E61F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdd0, context->r30));
/*801E93F4 001E61F4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801E93F8 001E61F8*/ PPC::Runtime::ASM::beq(.L_801E944C);
/*801E93FC 001E61FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe48, context->r30));
/*801E9400 001E6200*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801E9404 001E6204*/ PPC::Runtime::ASM::beq(.L_801E944C);
/*801E9408 001E6208*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a3c, context->r31));
/*801E940C 001E620C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801E9410 001E6210*/ PPC::Runtime::ASM::beq(.L_801E9420);
/*801E9414 001E6214*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1778, context->r30));
/*801E9418 001E6218*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801E941C 001E621C*/ PPC::Runtime::ASM::bne(.L_801E944C);
RUNTIME_PPC_JUMP_LABEL(.L_801E9420, 0x801E9420) //this is a jump label
/*801E9420 001E6220*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a3d, context->r31));
/*801E9424 001E6224*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801E9428 001E6228*/ PPC::Runtime::ASM::beq(.L_801E9438);
/*801E942C 001E622C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12e0, context->r30));
/*801E9430 001E6230*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801E9434 001E6234*/ PPC::Runtime::ASM::bne(.L_801E944C);
RUNTIME_PPC_JUMP_LABEL(.L_801E9438, 0x801E9438) //this is a jump label
/*801E9438 001E6238*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801E943C 001E623C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r3));
/*801E9440 001E6240*/ PPC::Runtime::ASM::bl(fn_HSD_AObjReqAnim);
/*801E9444 001E6244*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdd0, context->r30));
/*801E9448 001E6248*/ PPC::Runtime::ASM::bl(fn_HSD_TObjAnim?);
RUNTIME_PPC_JUMP_LABEL(.L_801E944C, 0x801E944C) //this is a jump label
/*801E944C 001E624C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*801E9450 001E6250*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801E9454, 0x801E9454) //this is a jump label
/*801E9454 001E6254*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc78, context->r31));
/*801E9458 001E6258*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*801E945C 001E625C*/ PPC::Runtime::ASM::blt(.L_801E93F0);
/*801E9460 001E6260*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801E9464 001E6264*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801E9468 001E6268*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E946C 001E626C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801E9470 001E6270*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E9474 001E6274*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801E9478 001E6278*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E947C 001E627C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801E9480 001E6280*/ PPC::Runtime::ASM::blr();
}