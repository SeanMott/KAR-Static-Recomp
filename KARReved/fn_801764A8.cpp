//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138934.hpp"
#include "fn_80175FB4.hpp"
#include "fn_80175FB4.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"



void fn_801764A8(PPC::Runtime::GCContext* context)
{
/*801764A8 001732A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801764AC 001732AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801764B0 001732B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801764B4 001732B4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801764B8 001732B8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801764BC 001732BC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801764C0 001732C0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801764C4 001732C4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801764C8 001732C8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801764CC 001732CC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801764D0 001732D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcd4, context->r3));
/*801764D4 001732D4*/ PPC::Runtime::ASM::li(context->r5, 0x1e);
/*801764D8 001732D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801764DC 001732DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801764E0 001732E0*/ PPC::Runtime::ASM::bl(fn_80138934);
/*801764E4 001732E4*/ PPC::Runtime::ASM::lis(context->r4, fn_80175FB4 @ Get_MemoryOffset_HighBit);
/*801764E8 001732E8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*801764EC 001732EC*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*801764F0 001732F0*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*801764F4 001732F4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80175FB4 @ Get_MemoryOffset_LowBit);
/*801764F8 001732F8*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*801764FC 001732FC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80176500 00173300*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80176504 00173304*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcd4, context->r30));
/*80176508 00173308*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8017650C 0017330C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80176510 00173310*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*80176514 00173314*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80176518 00173318*/ PPC::Runtime::ASM::li(context->r4, 0x96);
/*8017651C 0017331C*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*80176520 00173320*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80176524 00173324*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80176528 00173328*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x72, context->r3));
/*8017652C 0017332C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80176530 00173330*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*80176534 00173334*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r31));
/*80176538 00173338*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xea, context->r31));
/*8017653C 0017333C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r31));
/*80176540 00173340*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x162, context->r31));
/*80176544 00173344*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x164, context->r31));
/*80176548 00173348*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1da, context->r31));
/*8017654C 0017334C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r31));
/*80176550 00173350*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176554 00173354*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80176558 00173358*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8017655C 0017335C*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*80176560 00173360*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176564 00173364*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80176568 00173368*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8017656C 0017336C*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*80176570 00173370*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176574 00173374*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80176578 00173378*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8017657C 0017337C*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*80176580 00173380*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176584 00173384*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80176588 00173388*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8017658C 0017338C*/ PPC::Runtime::ASM::li(context->r4, 0xa);
/*80176590 00173390*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176594 00173394*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80176598 00173398*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8017659C 0017339C*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*801765A0 001733A0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801765A4 001733A4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*801765A8 001733A8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801765AC 001733AC*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*801765B0 001733B0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801765B4 001733B4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*801765B8 001733B8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801765BC 001733BC*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*801765C0 001733C0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801765C4 001733C4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*801765C8 001733C8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801765CC 001733CC*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*801765D0 001733D0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801765D4 001733D4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*801765D8 001733D8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801765DC 001733DC*/ PPC::Runtime::ASM::li(context->r4, 0x11);
/*801765E0 001733E0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801765E4 001733E4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r31));
/*801765E8 001733E8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801765EC 001733EC*/ PPC::Runtime::ASM::li(context->r4, 0x12);
/*801765F0 001733F0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801765F4 001733F4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r31));
/*801765F8 001733F8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801765FC 001733FC*/ PPC::Runtime::ASM::li(context->r4, 0x13);
/*80176600 00173400*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176604 00173404*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r31));
/*80176608 00173408*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8017660C 0017340C*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80176610 00173410*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176614 00173414*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*80176618 00173418*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8017661C 0017341C*/ PPC::Runtime::ASM::li(context->r4, 0x14);
/*80176620 00173420*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176624 00173424*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r31));
/*80176628 00173428*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8017662C 0017342C*/ PPC::Runtime::ASM::li(context->r4, 0xc);
/*80176630 00173430*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176634 00173434*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r31));
/*80176638 00173438*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8017663C 0017343C*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*80176640 00173440*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176644 00173444*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r31));
/*80176648 00173448*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8017664C 0017344C*/ PPC::Runtime::ASM::li(context->r4, 0xd);
/*80176650 00173450*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176654 00173454*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*80176658 00173458*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8017665C 0017345C*/ PPC::Runtime::ASM::li(context->r4, 0xe);
/*80176660 00173460*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176664 00173464*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r31));
/*80176668 00173468*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8017666C 0017346C*/ PPC::Runtime::ASM::li(context->r4, 0x1b);
/*80176670 00173470*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176674 00173474*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r31));
/*80176678 00173478*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8017667C 0017347C*/ PPC::Runtime::ASM::li(context->r4, 0x1c);
/*80176680 00173480*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176684 00173484*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*80176688 00173488*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8017668C 0017348C*/ PPC::Runtime::ASM::li(context->r4, 0x1d);
/*80176690 00173490*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176694 00173494*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r31));
/*80176698 00173498*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8017669C 0017349C*/ PPC::Runtime::ASM::li(context->r4, 0x1a);
/*801766A0 001734A0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801766A4 001734A4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r31));
/*801766A8 001734A8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801766AC 001734AC*/ PPC::Runtime::ASM::li(context->r4, 0x1e);
/*801766B0 001734B0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801766B4 001734B4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r31));
/*801766B8 001734B8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801766BC 001734BC*/ PPC::Runtime::ASM::li(context->r4, 0x16);
/*801766C0 001734C0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801766C4 001734C4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r31));
/*801766C8 001734C8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801766CC 001734CC*/ PPC::Runtime::ASM::li(context->r4, 0x19);
/*801766D0 001734D0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801766D4 001734D4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r31));
/*801766D8 001734D8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801766DC 001734DC*/ PPC::Runtime::ASM::li(context->r4, 0x17);
/*801766E0 001734E0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801766E4 001734E4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r31));
/*801766E8 001734E8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801766EC 001734EC*/ PPC::Runtime::ASM::li(context->r4, 0x18);
/*801766F0 001734F0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801766F4 001734F4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r31));
/*801766F8 001734F8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801766FC 001734FC*/ PPC::Runtime::ASM::li(context->r4, 0x25);
/*80176700 00173500*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176704 00173504*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x178, context->r31));
/*80176708 00173508*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8017670C 0017350C*/ PPC::Runtime::ASM::li(context->r4, 0x26);
/*80176710 00173510*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176714 00173514*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17c, context->r31));
/*80176718 00173518*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8017671C 0017351C*/ PPC::Runtime::ASM::li(context->r4, 0x27);
/*80176720 00173520*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176724 00173524*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x180, context->r31));
/*80176728 00173528*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8017672C 0017352C*/ PPC::Runtime::ASM::li(context->r4, 0x24);
/*80176730 00173530*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176734 00173534*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x184, context->r31));
/*80176738 00173538*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8017673C 0017353C*/ PPC::Runtime::ASM::li(context->r4, 0x28);
/*80176740 00173540*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176744 00173544*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x198, context->r31));
/*80176748 00173548*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8017674C 0017354C*/ PPC::Runtime::ASM::li(context->r4, 0x20);
/*80176750 00173550*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176754 00173554*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x188, context->r31));
/*80176758 00173558*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8017675C 0017355C*/ PPC::Runtime::ASM::li(context->r4, 0x23);
/*80176760 00173560*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176764 00173564*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x194, context->r31));
/*80176768 00173568*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8017676C 0017356C*/ PPC::Runtime::ASM::li(context->r4, 0x21);
/*80176770 00173570*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176774 00173574*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18c, context->r31));
/*80176778 00173578*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8017677C 0017357C*/ PPC::Runtime::ASM::li(context->r4, 0x22);
/*80176780 00173580*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80176784 00173584*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x190, context->r31));
/*80176788 00173588*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8017678C 0017358C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcd8, context->r30));
/*80176790 00173590*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_80176794, 0x80176794) //this is a jump label
/*80176794 00173594*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r28));
/*80176798 00173598*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0x40);
/*8017679C 0017359C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801767A0 001735A0*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*801767A4 001735A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r28));
/*801767A8 001735A8*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0x4c);
/*801767AC 001735AC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801767B0 001735B0*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*801767B4 001735B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r28));
/*801767B8 001735B8*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0x34);
/*801767BC 001735BC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801767C0 001735C0*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*801767C4 001735C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*801767C8 001735C8*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0x58);
/*801767CC 001735CC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801767D0 001735D0*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*801767D4 001735D4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r28));
/*801767D8 001735D8*/ PPC::Runtime::ASM::addi(context->r29, context->r28, 0x78);
/*801767DC 001735DC*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*801767E0 001735E0*/ PPC::Runtime::ASM::bne(.L_801767F4);
/*801767E4 001735E4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6CE0 @ Get_MemoryOffset_SDA21);
/*801767E8 001735E8*/ PPC::Runtime::ASM::li(context->r4, 0x351);
/*801767EC 001735EC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6CE8 @ Get_MemoryOffset_SDA21);
/*801767F0 001735F0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801767F4, 0x801767F4) //this is a jump label
/*801767F4 001735F4*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801767F8 001735F8*/ PPC::Runtime::ASM::bne(.L_8017680C);
/*801767FC 001735FC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6CE0 @ Get_MemoryOffset_SDA21);
/*80176800 00173600*/ PPC::Runtime::ASM::li(context->r4, 0x352);
/*80176804 00173604*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6CF0 @ Get_MemoryOffset_SDA21);
/*80176808 00173608*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8017680C, 0x8017680C) //this is a jump label
/*8017680C 0017360C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*80176810 00173610*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*80176814 00173614*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*80176818 00173618*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x4);
/*8017681C 0017361C*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x78);
/*80176820 00173620*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80176824 00173624*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80176828 00173628*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*8017682C 0017362C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80176830 00173630*/ PPC::Runtime::ASM::blt(.L_80176794);
/*80176834 00173634*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80176838 00173638*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8017683C 0017363C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80176840 00173640*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80176844 00173644*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80176848 00173648*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8017684C 0017364C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80176850 00173650*/ PPC::Runtime::ASM::blr();
}