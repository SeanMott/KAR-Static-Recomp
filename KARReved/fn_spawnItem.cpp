//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80254C88.hpp"
#include "fn_802546E4.hpp"
#include "fn_80254444.hpp"
#include "fn_8024FCE0.hpp"
#include "fn_8024FCE0.hpp"
#include "memset.hpp"
#include "fn_8024FC1C.hpp"
#include "fn_8024FC1C.hpp"
#include "fn_8025125C.hpp"
#include "fn_spawnItem_initData.hpp"
#include "fn_80251294.hpp"
#include "fn_802524AC.hpp"
#include "fn_80252504.hpp"
#include "fn_80252824.hpp"
#include "fn_80255FF8.hpp"
#include "fn_80254318.hpp"
#include "fn_80254384.hpp"
#include "fn_80252174.hpp"
#include "fn_Jumbotron_StopPlaying_TakeNoParams.hpp"
#include "fn_8024F68C.hpp"
#include "fn_8024F68C.hpp"
#include "fn_8024F71C.hpp"
#include "fn_8024F71C.hpp"
#include "fn_8024F778.hpp"
#include "fn_8024F778.hpp"
#include "fn_8024F814.hpp"
#include "fn_8024F814.hpp"
#include "fn_8024F848.hpp"
#include "fn_8024F848.hpp"
#include "fn_8024F88C.hpp"
#include "fn_8024F88C.hpp"
#include "fn_8024F8F0.hpp"
#include "fn_8024F8F0.hpp"
#include "fn_8024F8F4.hpp"
#include "fn_8024F8F4.hpp"
#include "fn_checkBoxDamage.hpp"
#include "fn_checkBoxDamage.hpp"
#include "fn_8024FA38.hpp"
#include "fn_8024FA38.hpp"
#include "fn_80254C50.hpp"
#include "fn_80254444.hpp"
#include "fn_802547CC.hpp"
#include "fn_802503C0.hpp"
#include "fn_8025133C.hpp"
#include "fn_80250340.hpp"
#include "fn_8018C3B4.hpp"
#include "fn_80251F1C.hpp"
#include "fn_8018CB04.hpp"
#include "fn_80252B48.hpp"
#include "fn_802557A8.hpp"
#include "fn_802569E8.hpp"
#include "fn_802619BC.hpp"



void fn_spawnItem(PPC::Runtime::GCContext* context)
{
/*8024EEF4 0024BCF4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8024EEF8 0024BCF8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8024EEFC 0024BCFC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B5F18 @ Get_MemoryOffset_HighBit);
/*8024EF00 0024BD00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8024EF04 0024BD04*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8024EF08 0024BD08*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8024EF0C 0024BD0C*/ PPC::Runtime::ASM::addi(context->r30, context->r4, lbl_804B5F18 @ Get_MemoryOffset_LowBit);
/*8024EF10 0024BD10*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8024EF14 0024BD14*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8024EF18 0024BD18*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8024EF1C 0024BD1C*/ PPC::Runtime::ASM::li(context->r28, -0x1);
/*8024EF20 0024BD20*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1DbLevel @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8024EF24 0024BD24*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8024EF28 0024BD28*/ PPC::Runtime::ASM::blt(.L_8024EF78);
/*8024EF2C 0024BD2C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8024EF30 0024BD30*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8024EF34 0024BD34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*8024EF38 0024BD38*/ PPC::Runtime::ASM::b(.L_8024EF44);
RUNTIME_PPC_JUMP_LABEL(.L_8024EF3C, 0x8024EF3C) //this is a jump label
/*8024EF3C 0024BD3C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8024EF40 0024BD40*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8024EF44, 0x8024EF44) //this is a jump label
/*8024EF44 0024BD44*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8024EF48 0024BD48*/ PPC::Runtime::ASM::bne(.L_8024EF3C);
/*8024EF4C 0024BD4C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1NULL_2 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8024EF50 0024BD50*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8024EF54 0024BD54*/ PPC::Runtime::ASM::cmpw(context->r4, context->r5);
/*8024EF58 0024BD58*/ PPC::Runtime::ASM::beq(.L_8024EF78);
/*8024EF5C 0024BD5C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x64);
/*8024EF60 0024BD60*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8024EF64 0024BD64*/ PPC::Runtime::ASM::bl(OSReport);
/*8024EF68 0024BD68*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7360 @ Get_MemoryOffset_SDA21);
/*8024EF6C 0024BD6C*/ PPC::Runtime::ASM::li(context->r4, 0x6b);
/*8024EF70 0024BD70*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7368 @ Get_MemoryOffset_SDA21);
/*8024EF74 0024BD74*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8024EF78, 0x8024EF78) //this is a jump label
/*8024EF78 0024BD78*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1NULL_2 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8024EF7C 0024BD7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8024EF80 0024BD80*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x64);
/*8024EF84 0024BD84*/ PPC::Runtime::ASM::ble(.L_8024EFA8);
/*8024EF88 0024BD88*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1DbLevel @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8024EF8C 0024BD8C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8024EF90 0024BD90*/ PPC::Runtime::ASM::blt(.L_8024EFA0);
/*8024EF94 0024BD94*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xc4);
/*8024EF98 0024BD98*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8024EF9C 0024BD9C*/ PPC::Runtime::ASM::bl(OSReport);
RUNTIME_PPC_JUMP_LABEL(.L_8024EFA0, 0x8024EFA0) //this is a jump label
/*8024EFA0 0024BDA0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8024EFA4 0024BDA4*/ PPC::Runtime::ASM::b(.L_8024F390);
RUNTIME_PPC_JUMP_LABEL(.L_8024EFA8, 0x8024EFA8) //this is a jump label
/*8024EFA8 0024BDA8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8024EFAC 0024BDAC*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8024EFB0 0024BDB0*/ PPC::Runtime::ASM::beq(.L_8024EFBC);
/*8024EFB4 0024BDB4*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x45);
/*8024EFB8 0024BDB8*/ PPC::Runtime::ASM::blt(.L_8024EFD8);
RUNTIME_PPC_JUMP_LABEL(.L_8024EFBC, 0x8024EFBC) //this is a jump label
/*8024EFBC 0024BDBC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xf0);
/*8024EFC0 0024BDC0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8024EFC4 0024BDC4*/ PPC::Runtime::ASM::bl(OSReport);
/*8024EFC8 0024BDC8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7360 @ Get_MemoryOffset_SDA21);
/*8024EFCC 0024BDCC*/ PPC::Runtime::ASM::li(context->r4, 0x24e);
/*8024EFD0 0024BDD0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7368 @ Get_MemoryOffset_SDA21);
/*8024EFD4 0024BDD4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8024EFD8, 0x8024EFD8) //this is a jump label
/*8024EFD8 0024BDD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r29));
/*8024EFDC 0024BDDC*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8024EFE0 0024BDE0*/ PPC::Runtime::ASM::beq(.L_8024F054);
/*8024EFE4 0024BDE4*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0xc);
/*8024EFE8 0024BDE8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8024EFEC 0024BDEC*/ PPC::Runtime::ASM::bl(fn_80254C88);
/*8024EFF0 0024BDF0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8024EFF4 0024BDF4*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0xc);
/*8024EFF8 0024BDF8*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E2C78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8024EFFC 0024BDFC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8024F000 0024BE00*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8024F004 0024BE04*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*8024F008 0024BE08*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8024F00C 0024BE0C*/ PPC::Runtime::ASM::fmuls(context->f3, context->f2, context->f4);
/*8024F010 0024BE10*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f4);
/*8024F014 0024BE14*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2C7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8024F018 0024BE18*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f4);
/*8024F01C 0024BE1C*/ PPC::Runtime::ASM::li(context->r6, 0xa);
/*8024F020 0024BE20*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8024F024 0024BE24*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8024F028 0024BE28*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8024F02C 0024BE2C*/ PPC::Runtime::ASM::bl(fn_802546E4);
/*8024F030 0024BE30*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8024F034 0024BE34*/ PPC::Runtime::ASM::bl(fn_80254444);
/*8024F038 0024BE38*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*8024F03C 0024BE3C*/ PPC::Runtime::ASM::bne(.L_8024F054);
/*8024F040 0024BE40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r29));
/*8024F044 0024BE44*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8024F048 0024BE48*/ PPC::Runtime::ASM::bne(.L_8024F054);
/*8024F04C 0024BE4C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8024F050 0024BE50*/ PPC::Runtime::ASM::b(.L_8024F390);
RUNTIME_PPC_JUMP_LABEL(.L_8024F054, 0x8024F054) //this is a jump label
/*8024F054 0024BE54*/ PPC::Runtime::ASM::li(context->r3, 0x16);
/*8024F058 0024BE58*/ PPC::Runtime::ASM::li(context->r4, 0xd);
/*8024F05C 0024BE5C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8024F060 0024BE60*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*8024F064 0024BE64*/ PPC::Runtime::ASM::lis(context->r4, fn_8024FCE0 @ Get_MemoryOffset_HighBit);
/*8024F068 0024BE68*/ PPC::Runtime::ASM::li(context->r5, 0xa);
/*8024F06C 0024BE6C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8024FCE0 @ Get_MemoryOffset_LowBit);
/*8024F070 0024BE70*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8024F074 0024BE74*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*8024F078 0024BE78*/ PPC::Runtime::ASM::bl(fn_GObj_AddGXLink);
/*8024F07C 0024BE7C*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055DD2C @ Get_MemoryOffset_HighBit);
/*8024F080 0024BE80*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055DD2C @ Get_MemoryOffset_LowBit);
/*8024F084 0024BE84*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*8024F088 0024BE88*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8024F08C 0024BE8C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8024F090 0024BE90*/ PPC::Runtime::ASM::li(context->r5, 0x3a0);
/*8024F094 0024BE94*/ PPC::Runtime::ASM::bl(memset);
/*8024F098 0024BE98*/ PPC::Runtime::ASM::lis(context->r4, fn_8024FC1C @ Get_MemoryOffset_HighBit);
/*8024F09C 0024BE9C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024F0A0 0024BEA0*/ PPC::Runtime::ASM::addi(context->r5, context->r4, fn_8024FC1C @ Get_MemoryOffset_LowBit);
/*8024F0A4 0024BEA4*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*8024F0A8 0024BEA8*/ PPC::Runtime::ASM::li(context->r4, 0x16);
/*8024F0AC 0024BEAC*/ PPC::Runtime::ASM::bl(fn_GObj_AddUserData);
/*8024F0B0 0024BEB0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024F0B4 0024BEB4*/ PPC::Runtime::ASM::bl(fn_8025125C);
/*8024F0B8 0024BEB8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024F0BC 0024BEBC*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8024F0C0 0024BEC0*/ PPC::Runtime::ASM::bl(fn_spawnItem_initData);
/*8024F0C4 0024BEC4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024F0C8 0024BEC8*/ PPC::Runtime::ASM::bl(fn_80251294);
/*8024F0CC 0024BECC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8024F0D0 0024BED0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*8024F0D4 0024BED4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8024F0D8 0024BED8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8024F0DC 0024BEDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*8024F0E0 0024BEE0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*8024F0E4 0024BEE4*/ PPC::Runtime::ASM::bl(fn_JObj_LoadJoint);
/*8024F0E8 0024BEE8*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8024F0EC 0024BEEC*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8024F0F0 0024BEF0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024F0F4 0024BEF4*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*8024F0F8 0024BEF8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8024F0FC 0024BEFC*/ PPC::Runtime::ASM::bl(fn_802524AC);
/*8024F100 0024BF00*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024F104 0024BF04*/ PPC::Runtime::ASM::bl(fn_80252504);
/*8024F108 0024BF08*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024F10C 0024BF0C*/ PPC::Runtime::ASM::bl(fn_80252824);
/*8024F110 0024BF10*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024F114 0024BF14*/ PPC::Runtime::ASM::bl(fn_80255FF8);
/*8024F118 0024BF18*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r29));
/*8024F11C 0024BF1C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8024F120 0024BF20*/ PPC::Runtime::ASM::bl(fn_80254318);
/*8024F124 0024BF24*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8024F128 0024BF28*/ PPC::Runtime::ASM::bl(fn_80254384);
/*8024F12C 0024BF2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8024F130 0024BF30*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B6088 @ Get_MemoryOffset_HighBit);
/*8024F134 0024BF34*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B6088 @ Get_MemoryOffset_LowBit);
/*8024F138 0024BF38*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8024F13C 0024BF3C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*8024F140 0024BF40*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8024F144 0024BF44*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*8024F148 0024BF48*/ PPC::Runtime::ASM::beq(.L_8024F158);
/*8024F14C 0024BF4C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024F150 0024BF50*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8024F154 0024BF54*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8024F158, 0x8024F158) //this is a jump label
/*8024F158 0024BF58*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8024F15C 0024BF5C*/ PPC::Runtime::ASM::bl(fn_80252174);
/*8024F160 0024BF60*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8024F164 0024BF64*/ PPC::Runtime::ASM::bl(fn_Jumbotron_StopPlaying_TakeNoParams);
/*8024F168 0024BF68*/ PPC::Runtime::ASM::lis(context->r4, fn_8024F68C @ Get_MemoryOffset_HighBit);
/*8024F16C 0024BF6C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024F170 0024BF70*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8024F68C @ Get_MemoryOffset_LowBit);
/*8024F174 0024BF74*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8024F178 0024BF78*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8024F17C 0024BF7C*/ PPC::Runtime::ASM::lis(context->r4, fn_8024F71C @ Get_MemoryOffset_HighBit);
/*8024F180 0024BF80*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024F184 0024BF84*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8024F71C @ Get_MemoryOffset_LowBit);
/*8024F188 0024BF88*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8024F18C 0024BF8C*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8024F190 0024BF90*/ PPC::Runtime::ASM::lis(context->r4, fn_8024F778 @ Get_MemoryOffset_HighBit);
/*8024F194 0024BF94*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024F198 0024BF98*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8024F778 @ Get_MemoryOffset_LowBit);
/*8024F19C 0024BF9C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8024F1A0 0024BFA0*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8024F1A4 0024BFA4*/ PPC::Runtime::ASM::lis(context->r4, fn_8024F814 @ Get_MemoryOffset_HighBit);
/*8024F1A8 0024BFA8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024F1AC 0024BFAC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8024F814 @ Get_MemoryOffset_LowBit);
/*8024F1B0 0024BFB0*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*8024F1B4 0024BFB4*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8024F1B8 0024BFB8*/ PPC::Runtime::ASM::lis(context->r4, fn_8024F848 @ Get_MemoryOffset_HighBit);
/*8024F1BC 0024BFBC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024F1C0 0024BFC0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8024F848 @ Get_MemoryOffset_LowBit);
/*8024F1C4 0024BFC4*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*8024F1C8 0024BFC8*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8024F1CC 0024BFCC*/ PPC::Runtime::ASM::lis(context->r4, fn_8024F88C @ Get_MemoryOffset_HighBit);
/*8024F1D0 0024BFD0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024F1D4 0024BFD4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8024F88C @ Get_MemoryOffset_LowBit);
/*8024F1D8 0024BFD8*/ PPC::Runtime::ASM::li(context->r5, 0x7);
/*8024F1DC 0024BFDC*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8024F1E0 0024BFE0*/ PPC::Runtime::ASM::lis(context->r4, fn_8024F8F0 @ Get_MemoryOffset_HighBit);
/*8024F1E4 0024BFE4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024F1E8 0024BFE8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8024F8F0 @ Get_MemoryOffset_LowBit);
/*8024F1EC 0024BFEC*/ PPC::Runtime::ASM::li(context->r5, 0x8);
/*8024F1F0 0024BFF0*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8024F1F4 0024BFF4*/ PPC::Runtime::ASM::lis(context->r4, fn_8024F8F4 @ Get_MemoryOffset_HighBit);
/*8024F1F8 0024BFF8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024F1FC 0024BFFC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8024F8F4 @ Get_MemoryOffset_LowBit);
/*8024F200 0024C000*/ PPC::Runtime::ASM::li(context->r5, 0x9);
/*8024F204 0024C004*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8024F208 0024C008*/ PPC::Runtime::ASM::lis(context->r4, fn_checkBoxDamage @ Get_MemoryOffset_HighBit);
/*8024F20C 0024C00C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024F210 0024C010*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_checkBoxDamage @ Get_MemoryOffset_LowBit);
/*8024F214 0024C014*/ PPC::Runtime::ASM::li(context->r5, 0xa);
/*8024F218 0024C018*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8024F21C 0024C01C*/ PPC::Runtime::ASM::lis(context->r4, fn_8024FA38 @ Get_MemoryOffset_HighBit);
/*8024F220 0024C020*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024F224 0024C024*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8024FA38 @ Get_MemoryOffset_LowBit);
/*8024F228 0024C028*/ PPC::Runtime::ASM::li(context->r5, 0x15);
/*8024F22C 0024C02C*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8024F230 0024C030*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8024F234 0024C034*/ PPC::Runtime::ASM::bl(fn_80254C50);
/*8024F238 0024C038*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r29));
/*8024F23C 0024C03C*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8024F240 0024C040*/ PPC::Runtime::ASM::beq(.L_8024F28C);
/*8024F244 0024C044*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a8, context->r30));
/*8024F248 0024C048*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8024F24C 0024C04C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8024F250 0024C050*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r30));
/*8024F254 0024C054*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b0, context->r30));
/*8024F258 0024C058*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8024F25C 0024C05C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r30));
/*8024F260 0024C060*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r29));
/*8024F264 0024C064*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8024F268 0024C068*/ PPC::Runtime::ASM::bne(.L_8024F28C);
/*8024F26C 0024C06C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8024F270 0024C070*/ PPC::Runtime::ASM::bl(fn_80254444);
/*8024F274 0024C074*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8024F278 0024C078*/ PPC::Runtime::ASM::bne(.L_8024F28C);
/*8024F27C 0024C07C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2C70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8024F280 0024C080*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8024F284 0024C084*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8024F288 0024C088*/ PPC::Runtime::ASM::bl(fn_802547CC);
RUNTIME_PPC_JUMP_LABEL(.L_8024F28C, 0x8024F28C) //this is a jump label
/*8024F28C 0024C08C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8024F290 0024C090*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8024F294 0024C094*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2C74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8024F298 0024C098*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r28));
/*8024F29C 0024C09C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8024F2A0 0024C0A0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2C70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8024F2A4 0024C0A4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r28));
/*8024F2A8 0024C0A8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r28));
/*8024F2AC 0024C0AC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x358, context->r28));
/*8024F2B0 0024C0B0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 6, 25, 25);
/*8024F2B4 0024C0B4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x358, context->r28));
/*8024F2B8 0024C0B8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r28));
/*8024F2BC 0024C0BC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r28));
/*8024F2C0 0024C0C0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r28));
/*8024F2C4 0024C0C4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x350, context->r28));
/*8024F2C8 0024C0C8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x354, context->r28));
/*8024F2CC 0024C0CC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r28));
/*8024F2D0 0024C0D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r28));
/*8024F2D4 0024C0D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r28));
/*8024F2D8 0024C0D8*/ PPC::Runtime::ASM::bl(fn_802503C0);
/*8024F2DC 0024C0DC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024F2E0 0024C0E0*/ PPC::Runtime::ASM::bl(fn_8025133C);
/*8024F2E4 0024C0E4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8024F2E8 0024C0E8*/ PPC::Runtime::ASM::bl(fn_80250340);
/*8024F2EC 0024C0EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r28));
/*8024F2F0 0024C0F0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8024F2F4 0024C0F4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r28));
/*8024F2F8 0024C0F8*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*8024F2FC 0024C0FC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8024F300 0024C100*/ PPC::Runtime::ASM::bl(fn_8018C3B4);
/*8024F304 0024C104*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8024F308 0024C108*/ PPC::Runtime::ASM::bl(fn_80251F1C);
/*8024F30C 0024C10C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r28));
/*8024F310 0024C110*/ PPC::Runtime::ASM::bl(fn_8018CB04);
/*8024F314 0024C114*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8024F318 0024C118*/ PPC::Runtime::ASM::bl(fn_80252B48);
/*8024F31C 0024C11C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r29));
/*8024F320 0024C120*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8024F324 0024C124*/ PPC::Runtime::ASM::bne(.L_8024F330);
/*8024F328 0024C128*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8024F32C 0024C12C*/ PPC::Runtime::ASM::bl(fn_802557A8);
RUNTIME_PPC_JUMP_LABEL(.L_8024F330, 0x8024F330) //this is a jump label
/*8024F330 0024C130*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8024F334 0024C134*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B6088 @ Get_MemoryOffset_HighBit);
/*8024F338 0024C138*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B6088 @ Get_MemoryOffset_LowBit);
/*8024F33C 0024C13C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8024F340 0024C140*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*8024F344 0024C144*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*8024F348 0024C148*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*8024F34C 0024C14C*/ PPC::Runtime::ASM::beq(.L_8024F35C);
/*8024F350 0024C150*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024F354 0024C154*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8024F358 0024C158*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8024F35C, 0x8024F35C) //this is a jump label
/*8024F35C 0024C15C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8024F360 0024C160*/ PPC::Runtime::ASM::bl(fn_802569E8);
/*8024F364 0024C164*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8024F368 0024C168*/ PPC::Runtime::ASM::bl(fn_802619BC);
/*8024F36C 0024C16C*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1NULL_2 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8024F370 0024C170*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024F374 0024C174*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8024F378 0024C178*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*8024F37C 0024C17C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8024F380 0024C180*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1NULL_2 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8024F384 0024C184*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8024F388 0024C188*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*8024F38C 0024C18C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_8024F390, 0x8024F390) //this is a jump label
/*8024F390 0024C190*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8024F394 0024C194*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8024F398 0024C198*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8024F39C 0024C19C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8024F3A0 0024C1A0*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8024F3A4 0024C1A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8024F3A8 0024C1A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8024F3AC 0024C1AC*/ PPC::Runtime::ASM::blr();
}