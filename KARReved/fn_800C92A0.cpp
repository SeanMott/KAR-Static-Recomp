//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800B90A8.hpp"
#include "fn_800BBA14.hpp"
#include "fn_800B5B94.hpp"
#include "fn_800B5AF0.hpp"
#include "fn_800B90A8.hpp"
#include "fn_800BBA14.hpp"
#include "fn_800B5B94.hpp"
#include "fn_800B5B44.hpp"
#include "fn_800B5AF0.hpp"



void fn_800C92A0(PPC::Runtime::GCContext* context)
{
/*800C92A0 000C60A0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xb0, context->r1));
/*800C92A4 000C60A4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800C92A8 000C60A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*800C92AC 000C60AC*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*800C92B0 000C60B0*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*800C92B4 000C60B4*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*800C92B8 000C60B8*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*800C92BC 000C60BC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*800C92C0 000C60C0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*800C92C4 000C60C4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*800C92C8 000C60C8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800C92CC 000C60CC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r3));
/*800C92D0 000C60D0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r29));
/*800C92D4 000C60D4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800C92D8 000C60D8*/ PPC::Runtime::ASM::beq(.L_800C92E0);
/*800C92DC 000C60DC*/ PPC::Runtime::ASM::b(.L_800C9324);
RUNTIME_PPC_JUMP_LABEL(.L_800C92E0, 0x800C92E0) //this is a jump label
/*800C92E0 000C60E0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800C92E4 000C60E4*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetInterestWObj);
/*800C92E8 000C60E8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800C92EC 000C60EC*/ PPC::Runtime::ASM::beq(.L_800C9300);
/*800C92F0 000C60F0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*800C92F4 000C60F4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800C92F8 000C60F8*/ PPC::Runtime::ASM::beq(.L_800C9300);
/*800C92FC 000C60FC*/ PPC::Runtime::ASM::b(.L_800C9324);
RUNTIME_PPC_JUMP_LABEL(.L_800C9300, 0x800C9300) //this is a jump label
/*800C9300 000C6100*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800C9304 000C6104*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetEyePositionWObj);
/*800C9308 000C6108*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800C930C 000C610C*/ PPC::Runtime::ASM::beq(.L_800C9320);
/*800C9310 000C6110*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*800C9314 000C6114*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800C9318 000C6118*/ PPC::Runtime::ASM::beq(.L_800C9320);
/*800C931C 000C611C*/ PPC::Runtime::ASM::b(.L_800C9324);
RUNTIME_PPC_JUMP_LABEL(.L_800C9320, 0x800C9320) //this is a jump label
/*800C9320 000C6120*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800C9324, 0x800C9324) //this is a jump label
/*800C9324 000C6124*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800C9328 000C6128*/ PPC::Runtime::ASM::beq(.L_800C933C);
/*800C932C 000C612C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800C9330 000C6130*/ PPC::Runtime::ASM::bl(fn_HSD_AObjGetFlags);
/*800C9334 000C6134*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 1, 1);
/*800C9338 000C6138*/ PPC::Runtime::ASM::beq(.L_800C9488);
RUNTIME_PPC_JUMP_LABEL(.L_800C933C, 0x800C933C) //this is a jump label
/*800C933C 000C613C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x200, context->r31));
/* 800C9340 000C6140  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*800C9344 000C6144*/ PPC::Runtime::ASM::beq(.L_800C9468);
/*800C9348 000C6148*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1fc, context->r31));
/*800C934C 000C614C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800C9350 000C6150*/ PPC::Runtime::ASM::blt(.L_800C935C);
/*800C9354 000C6154*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x20);
/*800C9358 000C6158*/ PPC::Runtime::ASM::blt(.L_800C9364);
RUNTIME_PPC_JUMP_LABEL(.L_800C935C, 0x800C935C) //this is a jump label
/*800C935C 000C615C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800C9360 000C6160*/ PPC::Runtime::ASM::b(.L_800C9378);
RUNTIME_PPC_JUMP_LABEL(.L_800C9364, 0x800C9364) //this is a jump label
/*800C9364 000C6164*/ PPC::Runtime::ASM::lis(context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800C9368 000C6168*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800C936C 000C616C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800C9370 000C6170*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800C9374 000C6174*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800C9378, 0x800C9378) //this is a jump label
/*800C9378 000C6178*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800C937C 000C617C*/ PPC::Runtime::ASM::beq(.L_800C9388);
/*800C9380 000C6180*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800C9384 000C6184*/ PPC::Runtime::ASM::b(.L_800C938C);
RUNTIME_PPC_JUMP_LABEL(.L_800C9388, 0x800C9388) //this is a jump label
/*800C9388 000C6188*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800C938C, 0x800C938C) //this is a jump label
/*800C938C 000C618C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800C9390 000C6190*/ PPC::Runtime::ASM::beq(.L_800C939C);
/*800C9394 000C6194*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800C9398 000C6198*/ PPC::Runtime::ASM::b(.L_800C93A0);
RUNTIME_PPC_JUMP_LABEL(.L_800C939C, 0x800C939C) //this is a jump label
/*800C939C 000C619C*/ PPC::Runtime::ASM::li(context->r9, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800C93A0, 0x800C93A0) //this is a jump label
/*800C93A0 000C61A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r9));
/*800C93A4 000C61A4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x50);
/*800C93A8 000C61A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r9));
/*800C93AC 000C61AC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*800C93B0 000C61B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800C93B4 000C61B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r9));
/*800C93B8 000C61B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r9));
/*800C93BC 000C61BC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*800C93C0 000C61C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*800C93C4 000C61C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r9));
/*800C93C8 000C61C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xfc, context->r9));
/*800C93CC 000C61CC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*800C93D0 000C61D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*800C93D4 000C61D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r9));
/*800C93D8 000C61D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r9));
/*800C93DC 000C61DC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*800C93E0 000C61E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*800C93E4 000C61E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r9));
/*800C93E8 000C61E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r9));
/*800C93EC 000C61EC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*800C93F0 000C61F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*800C93F4 000C61F4*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r9));
/*800C93F8 000C61F8*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r9));
/*800C93FC 000C61FC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r9));
/*800C9400 000C6200*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r9));
/*800C9404 000C6204*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17c, context->r31));
/*800C9408 000C6208*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r9));
/*800C940C 000C620C*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800C9410 000C6210*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r3));
/*800C9414 000C6214*/ PPC::Runtime::ASM::extrwi(context->r30, context->r0, 1, 28);
/*800C9418 000C6218*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800C941C 000C621C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800C9420 000C6220*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800C9424 000C6224*/ PPC::Runtime::ASM::bl(fn_800B90A8);
/*800C9428 000C6228*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800C942C 000C622C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800C9430 000C6230*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r31));
/*800C9434 000C6234*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800C9438 000C6238*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r31));
/*800C943C 000C623C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800C9440 000C6240*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r31));
/*800C9444 000C6244*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r31));
/*800C9448 000C6248*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*800C944C 000C624C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r30, 3, 28, 28);
/*800C9450 000C6250*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*800C9454 000C6254*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17c, context->r31));
/*800C9458 000C6258*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r31));
/*800C945C 000C625C*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r3));
/*800C9460 000C6260*/ PPC::Runtime::ASM::bl(fn_800BBA14);
/*800C9464 000C6264*/ PPC::Runtime::ASM::b(.L_800C9478);
RUNTIME_PPC_JUMP_LABEL(.L_800C9468, 0x800C9468) //this is a jump label
/*800C9468 000C6268*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x180, context->r31));
/*800C946C 000C626C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800C9470 000C6270*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800C9474 000C6274*/ PPC::Runtime::ASM::bl(fn_800B5B94);
RUNTIME_PPC_JUMP_LABEL(.L_800C9478, 0x800C9478) //this is a jump label
/*800C9478 000C6278*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800C947C 000C627C*/ PPC::Runtime::ASM::bl(fn_800B5AF0);
/*800C9480 000C6280*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C9484 000C6284*/ PPC::Runtime::ASM::b(.L_800C9660);
RUNTIME_PPC_JUMP_LABEL(.L_800C9488, 0x800C9488) //this is a jump label
/*800C9488 000C6288*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1cc, context->r31));
/*800C948C 000C628C*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*800C9490 000C6290*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*800C9494 000C6294*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800C9498 000C6298*/ PPC::Runtime::ASM::xoris(context->r0, context->r3, 0x8000);
/*800C949C 000C629C*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805DF478 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800C94A0 000C62A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*800C94A4 000C62A4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*800C94A8 000C62A8*/ PPC::Runtime::ASM::fsubs(context->f30, context->f0, context->f1);
/*800C94AC 000C62AC*/ PPC::Runtime::ASM::bne(.L_800C94C0);
/*800C94B0 000C62B0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6048 @ Get_MemoryOffset_SDA21);
/*800C94B4 000C62B4*/ PPC::Runtime::ASM::li(context->r4, 0xab);
/*800C94B8 000C62B8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6050 @ Get_MemoryOffset_SDA21);
/*800C94BC 000C62BC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800C94C0, 0x800C94C0) //this is a jump label
/*800C94C0 000C62C0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800C94C4 000C62C4*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*800C94C8 000C62C8*/ PPC::Runtime::ASM::bne(.L_800C94DC);
/*800C94CC 000C62CC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6048 @ Get_MemoryOffset_SDA21);
/*800C94D0 000C62D0*/ PPC::Runtime::ASM::li(context->r4, 0x95);
/*800C94D4 000C62D4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6050 @ Get_MemoryOffset_SDA21);
/*800C94D8 000C62D8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800C94DC, 0x800C94DC) //this is a jump label
/*800C94DC 000C62DC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800C94E0 000C62E0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f31, context->f0);
/*800C94E4 000C62E4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f30);
/*800C94E8 000C62E8*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*800C94EC 000C62EC*/ PPC::Runtime::ASM::bne(.L_800C965C);
/*800C94F0 000C62F0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x200, context->r31));
/* 800C94F4 000C62F4  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*800C94F8 000C62F8*/ PPC::Runtime::ASM::beq(.L_800C961C);
/*800C94FC 000C62FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1fc, context->r31));
/*800C9500 000C6300*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800C9504 000C6304*/ PPC::Runtime::ASM::blt(.L_800C9510);
/*800C9508 000C6308*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x20);
/*800C950C 000C630C*/ PPC::Runtime::ASM::blt(.L_800C9518);
RUNTIME_PPC_JUMP_LABEL(.L_800C9510, 0x800C9510) //this is a jump label
/*800C9510 000C6310*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800C9514 000C6314*/ PPC::Runtime::ASM::b(.L_800C952C);
RUNTIME_PPC_JUMP_LABEL(.L_800C9518, 0x800C9518) //this is a jump label
/*800C9518 000C6318*/ PPC::Runtime::ASM::lis(context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800C951C 000C631C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800C9520 000C6320*/ PPC::Runtime::ASM::addi(context->r3, context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800C9524 000C6324*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800C9528 000C6328*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800C952C, 0x800C952C) //this is a jump label
/*800C952C 000C632C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800C9530 000C6330*/ PPC::Runtime::ASM::beq(.L_800C953C);
/*800C9534 000C6334*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800C9538 000C6338*/ PPC::Runtime::ASM::b(.L_800C9540);
RUNTIME_PPC_JUMP_LABEL(.L_800C953C, 0x800C953C) //this is a jump label
/*800C953C 000C633C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800C9540, 0x800C9540) //this is a jump label
/*800C9540 000C6340*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800C9544 000C6344*/ PPC::Runtime::ASM::beq(.L_800C9550);
/*800C9548 000C6348*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800C954C 000C634C*/ PPC::Runtime::ASM::b(.L_800C9554);
RUNTIME_PPC_JUMP_LABEL(.L_800C9550, 0x800C9550) //this is a jump label
/*800C9550 000C6350*/ PPC::Runtime::ASM::li(context->r9, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800C9554, 0x800C9554) //this is a jump label
/*800C9554 000C6354*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r9));
/*800C9558 000C6358*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x28);
/*800C955C 000C635C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r9));
/*800C9560 000C6360*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800C9564 000C6364*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800C9568 000C6368*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r9));
/*800C956C 000C636C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r9));
/*800C9570 000C6370*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800C9574 000C6374*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800C9578 000C6378*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r9));
/*800C957C 000C637C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xfc, context->r9));
/*800C9580 000C6380*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*800C9584 000C6384*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*800C9588 000C6388*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r9));
/*800C958C 000C638C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r9));
/*800C9590 000C6390*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800C9594 000C6394*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800C9598 000C6398*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r9));
/*800C959C 000C639C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r9));
/*800C95A0 000C63A0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*800C95A4 000C63A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*800C95A8 000C63A8*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r9));
/*800C95AC 000C63AC*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r9));
/*800C95B0 000C63B0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r9));
/*800C95B4 000C63B4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r9));
/*800C95B8 000C63B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17c, context->r31));
/*800C95BC 000C63BC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r9));
/*800C95C0 000C63C0*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800C95C4 000C63C4*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r3));
/*800C95C8 000C63C8*/ PPC::Runtime::ASM::extrwi(context->r30, context->r0, 1, 28);
/*800C95CC 000C63CC*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C95D0 000C63D0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800C95D4 000C63D4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800C95D8 000C63D8*/ PPC::Runtime::ASM::bl(fn_800B90A8);
/*800C95DC 000C63DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800C95E0 000C63E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C95E4 000C63E4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r31));
/*800C95E8 000C63E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800C95EC 000C63EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r31));
/*800C95F0 000C63F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800C95F4 000C63F4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r31));
/*800C95F8 000C63F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r31));
/*800C95FC 000C63FC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*800C9600 000C6400*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r30, 3, 28, 28);
/*800C9604 000C6404*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*800C9608 000C6408*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17c, context->r31));
/*800C960C 000C640C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r31));
/*800C9610 000C6410*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r3));
/*800C9614 000C6414*/ PPC::Runtime::ASM::bl(fn_800BBA14);
/*800C9618 000C6418*/ PPC::Runtime::ASM::b(.L_800C962C);
RUNTIME_PPC_JUMP_LABEL(.L_800C961C, 0x800C961C) //this is a jump label
/*800C961C 000C641C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x180, context->r31));
/*800C9620 000C6420*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800C9624 000C6424*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800C9628 000C6428*/ PPC::Runtime::ASM::bl(fn_800B5B94);
RUNTIME_PPC_JUMP_LABEL(.L_800C962C, 0x800C962C) //this is a jump label
/*800C962C 000C642C*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f30);
/*800C9630 000C6430*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*800C9634 000C6434*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*800C9638 000C6438*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*800C963C 000C643C*/ PPC::Runtime::ASM::ble(.L_800C964C);
/*800C9640 000C6440*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800C9644 000C6444*/ PPC::Runtime::ASM::bl(fn_800B5B44);
/*800C9648 000C6448*/ PPC::Runtime::ASM::b(.L_800C9654);
RUNTIME_PPC_JUMP_LABEL(.L_800C964C, 0x800C964C) //this is a jump label
/*800C964C 000C644C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800C9650 000C6450*/ PPC::Runtime::ASM::bl(fn_800B5AF0);
RUNTIME_PPC_JUMP_LABEL(.L_800C9654, 0x800C9654) //this is a jump label
/*800C9654 000C6454*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C9658 000C6458*/ PPC::Runtime::ASM::b(.L_800C9660);
RUNTIME_PPC_JUMP_LABEL(.L_800C965C, 0x800C965C) //this is a jump label
/*800C965C 000C645C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800C9660, 0x800C9660) //this is a jump label
/*800C9660 000C6460*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*800C9664 000C6464*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*800C9668 000C6468*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*800C966C 000C646C*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*800C9670 000C6470*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*800C9674 000C6474*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*800C9678 000C6478*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*800C967C 000C647C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*800C9680 000C6480*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800C9684 000C6484*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xb0);
/*800C9688 000C6488*/ PPC::Runtime::ASM::blr();
}