//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80062CA4.hpp"
#include "fn_80062ECC.hpp"
#include "fn_800638F8.hpp"
#include "fn_80062CA4.hpp"
#include "fn_spawnFormationStar_setParam.hpp"



void fn_cityTrialSpawnFormationStar(PPC::Runtime::GCContext* context)
{
/*801DF408 001DC208*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x90, context->r1));
/*801DF40C 001DC20C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801DF410 001DC210*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*801DF414 001DC214*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*801DF418 001DC218*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*801DF41C 001DC21C*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*801DF420 001DC220*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*801DF424 001DC224*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*801DF428 001DC228*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*801DF42C 001DC22C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*801DF430 001DC230*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*801DF434 001DC234*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801DF438 001DC238*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD830 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DF43C 001DC23C*/ PPC::Runtime::ASM::fmr(context->f29, context->f1);
/*801DF440 001DC240*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801DF444 001DC244*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*801DF448 001DC248*/ PPC::Runtime::ASM::bge(.L_801DF80C);
/*801DF44C 001DC24C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
/*801DF450 001DC250*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801DF454 001DC254*/ PPC::Runtime::ASM::lfs(context->f31, CONST_FLOAT_VALUE_0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DF458 001DC258*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801DF45C 001DC25C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*801DF460 001DC260*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*801DF464 001DC264*/ PPC::Runtime::ASM::beq(.L_801DF470);
/*801DF468 001DC268*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r0);
/*801DF46C 001DC26C*/ PPC::Runtime::ASM::mr(context->r5, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_801DF470, 0x801DF470) //this is a jump label
/*801DF470 001DC270*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x51, context->r30));
/*801DF474 001DC274*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*801DF478 001DC278*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*801DF47C 001DC27C*/ PPC::Runtime::ASM::beq(.L_801DF488);
/*801DF480 001DC280*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r0);
/*801DF484 001DC284*/ PPC::Runtime::ASM::or(context->r5, context->r5, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_801DF488, 0x801DF488) //this is a jump label
/*801DF488 001DC288*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x52, context->r30));
/*801DF48C 001DC28C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*801DF490 001DC290*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*801DF494 001DC294*/ PPC::Runtime::ASM::beq(.L_801DF4A0);
/*801DF498 001DC298*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r0);
/*801DF49C 001DC29C*/ PPC::Runtime::ASM::or(context->r5, context->r5, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_801DF4A0, 0x801DF4A0) //this is a jump label
/*801DF4A0 001DC2A0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x53, context->r30));
/*801DF4A4 001DC2A4*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*801DF4A8 001DC2A8*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*801DF4AC 001DC2AC*/ PPC::Runtime::ASM::beq(.L_801DF4B8);
/*801DF4B0 001DC2B0*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r0);
/*801DF4B4 001DC2B4*/ PPC::Runtime::ASM::or(context->r5, context->r5, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_801DF4B8, 0x801DF4B8) //this is a jump label
/*801DF4B8 001DC2B8*/ PPC::Runtime::ASM::lwz(context->r3, SKIP_ADDRESS_OFFSET_1 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DF4BC 001DC2BC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801DF4C0 001DC2C0*/ PPC::Runtime::ASM::lfs(context->f0, CONST_FLOAT_VALUE_1 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DF4C4 001DC2C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*801DF4C8 001DC2C8*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f29);
/*801DF4CC 001DC2CC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801DF4D0 001DC2D0*/ PPC::Runtime::ASM::beq(.L_801DF4F4);
/*801DF4D4 001DC2D4*/ PPC::Runtime::ASM::mr(context->r3, context->r6);
RUNTIME_PPC_JUMP_LABEL(.L_801DF4D8, 0x801DF4D8) //this is a jump label
/*801DF4D8 001DC2D8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801DF4DC 001DC2DC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f29, context->f0);
/*801DF4E0 001DC2E0*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*801DF4E4 001DC2E4*/ PPC::Runtime::ASM::beq(.L_801DF4F4);
/*801DF4E8 001DC2E8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x6c);
/*801DF4EC 001DC2EC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*801DF4F0 001DC2F0*/ PPC::Runtime::ASM::b(.L_801DF4D8);
RUNTIME_PPC_JUMP_LABEL(.L_801DF4F4, 0x801DF4F4) //this is a jump label
/*801DF4F4 001DC2F4*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0x6c);
/*801DF4F8 001DC2F8*/ PPC::Runtime::ASM::li(context->r0, 0x13);
/*801DF4FC 001DC2FC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801DF500 001DC300*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801DF504 001DC304*/ PPC::Runtime::ASM::add(context->r4, context->r6, context->r4);
/*801DF508 001DC308*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_801DF50C, 0x801DF50C) //this is a jump label
/*801DF50C 001DC30C*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r7);
/*801DF510 001DC310*/ PPC::Runtime::ASM::and.(context->r0, context->r5, context->r0);
/*801DF514 001DC314*/ PPC::Runtime::ASM::bne(.L_801DF520);
/*801DF518 001DC318*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*801DF51C 001DC31C*/ PPC::Runtime::ASM::fadds(context->f31, context->f31, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801DF520, 0x801DF520) //this is a jump label
/*801DF520 001DC320*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*801DF524 001DC324*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*801DF528 001DC328*/ PPC::Runtime::ASM::bdnz(.L_801DF50C);
/*801DF52C 001DC32C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
/*801DF530 001DC330*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801DF534 001DC334*/ PPC::Runtime::ASM::lfs(context->f30, CONST_FLOAT_VALUE_0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DF538 001DC338*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801DF53C 001DC33C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*801DF540 001DC340*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*801DF544 001DC344*/ PPC::Runtime::ASM::beq(.L_801DF550);
/*801DF548 001DC348*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r0);
/*801DF54C 001DC34C*/ PPC::Runtime::ASM::mr(context->r29, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_801DF550, 0x801DF550) //this is a jump label
/*801DF550 001DC350*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x51, context->r30));
/*801DF554 001DC354*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*801DF558 001DC358*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*801DF55C 001DC35C*/ PPC::Runtime::ASM::beq(.L_801DF568);
/*801DF560 001DC360*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r0);
/*801DF564 001DC364*/ PPC::Runtime::ASM::or(context->r29, context->r29, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_801DF568, 0x801DF568) //this is a jump label
/*801DF568 001DC368*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x52, context->r30));
/*801DF56C 001DC36C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*801DF570 001DC370*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*801DF574 001DC374*/ PPC::Runtime::ASM::beq(.L_801DF580);
/*801DF578 001DC378*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r0);
/*801DF57C 001DC37C*/ PPC::Runtime::ASM::or(context->r29, context->r29, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_801DF580, 0x801DF580) //this is a jump label
/*801DF580 001DC380*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x53, context->r30));
/*801DF584 001DC384*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*801DF588 001DC388*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*801DF58C 001DC38C*/ PPC::Runtime::ASM::beq(.L_801DF598);
/*801DF590 001DC390*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r0);
/*801DF594 001DC394*/ PPC::Runtime::ASM::or(context->r29, context->r29, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_801DF598, 0x801DF598) //this is a jump label
/*801DF598 001DC398*/ PPC::Runtime::ASM::bl(fn_HSD_Randf);
/*801DF59C 001DC39C*/ PPC::Runtime::ASM::lwz(context->r3, SKIP_ADDRESS_OFFSET_1 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DF5A0 001DC3A0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f31, context->f1);
/*801DF5A4 001DC3A4*/ PPC::Runtime::ASM::lfs(context->f0, CONST_FLOAT_VALUE_1 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DF5A8 001DC3A8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801DF5AC 001DC3AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*801DF5B0 001DC3B0*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f29);
/*801DF5B4 001DC3B4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801DF5B8 001DC3B8*/ PPC::Runtime::ASM::beq(.L_801DF5DC);
/*801DF5BC 001DC3BC*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_801DF5C0, 0x801DF5C0) //this is a jump label
/*801DF5C0 001DC3C0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801DF5C4 001DC3C4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f29, context->f0);
/*801DF5C8 001DC3C8*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*801DF5CC 001DC3CC*/ PPC::Runtime::ASM::beq(.L_801DF5DC);
/*801DF5D0 001DC3D0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x6c);
/*801DF5D4 001DC3D4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*801DF5D8 001DC3D8*/ PPC::Runtime::ASM::b(.L_801DF5C0);
RUNTIME_PPC_JUMP_LABEL(.L_801DF5DC, 0x801DF5DC) //this is a jump label
/*801DF5DC 001DC3DC*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0x6c);
/*801DF5E0 001DC3E0*/ PPC::Runtime::ASM::li(context->r0, 0x13);
/*801DF5E4 001DC3E4*/ PPC::Runtime::ASM::lfs(context->f0, CONST_FLOAT_VALUE_0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DF5E8 001DC3E8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*801DF5EC 001DC3EC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801DF5F0 001DC3F0*/ PPC::Runtime::ASM::add(context->r4, context->r5, context->r4);
/*801DF5F4 001DC3F4*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_801DF5F8, 0x801DF5F8) //this is a jump label
/*801DF5F8 001DC3F8*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r31);
/*801DF5FC 001DC3FC*/ PPC::Runtime::ASM::and.(context->r0, context->r29, context->r0);
/*801DF600 001DC400*/ PPC::Runtime::ASM::bne(.L_801DF620);
/*801DF604 001DC404*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*801DF608 001DC408*/ PPC::Runtime::ASM::fcmpu(cr0, context->f2, context->f0);
/*801DF60C 001DC40C*/ PPC::Runtime::ASM::beq(.L_801DF620);
/*801DF610 001DC410*/ PPC::Runtime::ASM::fadds(context->f30, context->f30, context->f2);
/*801DF614 001DC414*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f30);
/*801DF618 001DC418*/ PPC::Runtime::ASM::bge(.L_801DF620);
/*801DF61C 001DC41C*/ PPC::Runtime::ASM::b(.L_801DF630);
RUNTIME_PPC_JUMP_LABEL(.L_801DF620, 0x801DF620) //this is a jump label
/*801DF620 001DC420*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*801DF624 001DC424*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*801DF628 001DC428*/ PPC::Runtime::ASM::bdnz(.L_801DF5F8);
/*801DF62C 001DC42C*/ PPC::Runtime::ASM::li(context->r31, 0x1a);
RUNTIME_PPC_JUMP_LABEL(.L_801DF630, 0x801DF630) //this is a jump label
/*801DF630 001DC430*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*801DF634 001DC434*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_43 @ Get_MemoryOffset_HighBit);
/*801DF638 001DC438*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_44 @ Get_MemoryOffset_HighBit);
/*801DF63C 001DC43C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*801DF640 001DC440*/ PPC::Runtime::ASM::add(context->r6, context->r30, context->r0);
/*801DF644 001DC444*/ PPC::Runtime::ASM::addi(context->r8, context->r5, MemoryOffset_43 @ Get_MemoryOffset_LowBit);
/*801DF648 001DC448*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r6));
/*801DF64C 001DC44C*/ PPC::Runtime::ASM::addi(context->r7, context->r4, MemoryOffset_44 @ Get_MemoryOffset_LowBit);
/*801DF650 001DC450*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*801DF654 001DC454*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*801DF658 001DC458*/ PPC::Runtime::ASM::subi(context->r5, context->r6, 0x3);
/*801DF65C 001DC45C*/ PPC::Runtime::ASM::subfic(context->r0, context->r6, 0x3);
/*801DF660 001DC460*/ PPC::Runtime::ASM::nor(context->r5, context->r5, context->r0);
/*801DF664 001DC464*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x1);
/*801DF668 001DC468*/ PPC::Runtime::ASM::srawi(context->r5, context->r5, 31);
/*801DF66C 001DC46C*/ PPC::Runtime::ASM::andc(context->r0, context->r0, context->r5);
/*801DF670 001DC470*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*801DF674 001DC474*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*801DF678 001DC478*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*801DF67C 001DC47C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*801DF680 001DC480*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801DF684 001DC484*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*801DF688 001DC488*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801DF68C 001DC48C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*801DF690 001DC490*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801DF694 001DC494*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*801DF698 001DC498*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*801DF69C 001DC49C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*801DF6A0 001DC4A0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801DF6A4 001DC4A4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801DF6A8 001DC4A8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801DF6AC 001DC4AC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*801DF6B0 001DC4B0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*801DF6B4 001DC4B4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*801DF6B8 001DC4B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801DF6BC 001DC4BC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801DF6C0 001DC4C0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801DF6C4 001DC4C4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*801DF6C8 001DC4C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*801DF6CC 001DC4CC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801DF6D0 001DC4D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801DF6D4 001DC4D4*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*801DF6D8 001DC4D8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD830 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DF6DC 001DC4DC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*801DF6E0 001DC4E0*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DF6E4 001DC4E4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x38);
/*801DF6E8 001DC4E8*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*801DF6EC 001DC4EC*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
/*801DF6F0 001DC4F0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r5));
/*801DF6F4 001DC4F4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801DF6F8 001DC4F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1cc, context->r5));
/*801DF6FC 001DC4FC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801DF700 001DC500*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r5));
/*801DF704 001DC504*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801DF708 001DC508*/ PPC::Runtime::ASM::bl(fn_80062ECC);
/*801DF70C 001DC50C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801DF710 001DC510*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*801DF714 001DC514*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801DF718 001DC518*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801DF71C 001DC51C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*801DF720 001DC520*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*801DF724 001DC524*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801DF728 001DC528*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801DF72C 001DC52C*/ PPC::Runtime::ASM::fmadds(context->f1, context->f3, context->f2, context->f0);
/*801DF730 001DC530*/ PPC::Runtime::ASM::lfs(context->f0, CONST_FLOAT_VALUE_0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DF734 001DC534*/ PPC::Runtime::ASM::fmadds(context->f1, context->f5, context->f4, context->f1);
/*801DF738 001DC538*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801DF73C 001DC53C*/ PPC::Runtime::ASM::bge(.L_801DF748);
/*801DF740 001DC540*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1C74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DF744 001DC544*/ PPC::Runtime::ASM::fmuls(context->f30, context->f30, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801DF748, 0x801DF748) //this is a jump label
/*801DF748 001DC548*/ PPC::Runtime::ASM::lfs(context->f0, CONST_FLOAT_VALUE_0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DF74C 001DC54C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f30, context->f0);
/*801DF750 001DC550*/ PPC::Runtime::ASM::beq(.L_801DF7AC);
/*801DF754 001DC554*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801DF758 001DC558*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801DF75C 001DC55C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*801DF760 001DC560*/ PPC::Runtime::ASM::lfs(context->f0, CONST_FLOAT_VALUE_0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DF764 001DC564*/ PPC::Runtime::ASM::fcmpu(cr0, context->f31, context->f0);
/*801DF768 001DC568*/ PPC::Runtime::ASM::beq(.L_801DF7AC);
/*801DF76C 001DC56C*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*801DF770 001DC570*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801DF774 001DC574*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x44);
/*801DF778 001DC578*/ PPC::Runtime::ASM::bl(fn_800638F8);
/*801DF77C 001DC57C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801DF780 001DC580*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*801DF784 001DC584*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*801DF788 001DC588*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801DF78C 001DC58C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801DF790 001DC590*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801DF794 001DC594*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f31);
/*801DF798 001DC598*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f31);
/*801DF79C 001DC59C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f31);
/*801DF7A0 001DC5A0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801DF7A4 001DC5A4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801DF7A8 001DC5A8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_801DF7AC, 0x801DF7AC) //this is a jump label
/*801DF7AC 001DC5AC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*801DF7B0 001DC5B0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801DF7B4 001DC5B4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801DF7B8 001DC5B8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*801DF7BC 001DC5BC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801DF7C0 001DC5C0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x38);
/*801DF7C4 001DC5C4*/ PPC::Runtime::ASM::fadds(context->f2, context->f2, context->f0);
/*801DF7C8 001DC5C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801DF7CC 001DC5CC*/ PPC::Runtime::ASM::addi(context->r6, context->r30, 0x44);
/*801DF7D0 001DC5D0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801DF7D4 001DC5D4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*801DF7D8 001DC5D8*/ PPC::Runtime::ASM::fadds(context->f1, context->f2, context->f1);
/*801DF7DC 001DC5DC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801DF7E0 001DC5E0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*801DF7E4 001DC5E4*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801DF7E8 001DC5E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801DF7EC 001DC5EC*/ PPC::Runtime::ASM::bl(fn_spawnFormationStar_setParam);
/*801DF7F0 001DC5F0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD830 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DF7F4 001DC5F4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*801DF7F8 001DC5F8*/ PPC::Runtime::ASM::blt(.L_801DF80C);
/*801DF7FC 001DC5FC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc6, context->r30));
/*801DF800 001DC600*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801DF804 001DC604*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 5, 26, 26);
/*801DF808 001DC608*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc6, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_801DF80C, 0x801DF80C) //this is a jump label
/*801DF80C 001DC60C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*801DF810 001DC610*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*801DF814 001DC614*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*801DF818 001DC618*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*801DF81C 001DC61C*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*801DF820 001DC620*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*801DF824 001DC624*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*801DF828 001DC628*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*801DF82C 001DC62C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*801DF830 001DC630*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801DF834 001DC634*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801DF838 001DC638*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x90);
/*801DF83C 001DC63C*/ PPC::Runtime::ASM::blr();
}