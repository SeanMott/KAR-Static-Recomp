//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802DE418(PPC::Runtime::GCContext* context)
{
/*802DE418 002DB218*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802DE41C 002DB21C*/ PPC::Runtime::ASM::mflr(context->r0);
/*802DE420 002DB220*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802DE424 002DB224*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*802DE428 002DB228*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*802DE42C 002DB22C*/ PPC::Runtime::ASM::lis(context->r5, lbl_804D40F0 @ Get_MemoryOffset_HighBit);
/*802DE430 002DB230*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*802DE434 002DB234*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*802DE438 002DB238*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*802DE43C 002DB23C*/ PPC::Runtime::ASM::addi(context->r31, context->r5, lbl_804D40F0 @ Get_MemoryOffset_LowBit);
/*802DE440 002DB240*/ PPC::Runtime::ASM::b(.L_802DE454);
RUNTIME_PPC_JUMP_LABEL(.L_802DE444, 0x802DE444) //this is a jump label
/*802DE444 002DB244*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE448 002DB248*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE44C 002DB24C*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE450 002DB250*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE454, 0x802DE454) //this is a jump label
/*802DE454 002DB254*/ PPC::Runtime::ASM::cmplw(context->r28, context->r30);
/*802DE458 002DB258*/ PPC::Runtime::ASM::blt(.L_802DE444);
/*802DE45C 002DB25C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93D8 @ Get_MemoryOffset_SDA21);
/*802DE460 002DB260*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE464 002DB264*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE468 002DB268*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*802DE46C 002DB26C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*802DE470 002DB270*/ PPC::Runtime::ASM::b(.L_802DE484);
RUNTIME_PPC_JUMP_LABEL(.L_802DE474, 0x802DE474) //this is a jump label
/*802DE474 002DB274*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE478 002DB278*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE47C 002DB27C*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE480 002DB280*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE484, 0x802DE484) //this is a jump label
/*802DE484 002DB284*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*802DE488 002DB288*/ PPC::Runtime::ASM::blt(.L_802DE474);
/*802DE48C 002DB28C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x231c);
/*802DE490 002DB290*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 1 @ Get_MemoryOffset_SDA21);
/*802DE494 002DB294*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE498 002DB298*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE49C 002DB29C*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*802DE4A0 002DB2A0*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*802DE4A4 002DB2A4*/ PPC::Runtime::ASM::b(.L_802DE4B8);
RUNTIME_PPC_JUMP_LABEL(.L_802DE4A8, 0x802DE4A8) //this is a jump label
/*802DE4A8 002DB2A8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE4AC 002DB2AC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE4B0 002DB2B0*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE4B4 002DB2B4*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE4B8, 0x802DE4B8) //this is a jump label
/*802DE4B8 002DB2B8*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*802DE4BC 002DB2BC*/ PPC::Runtime::ASM::blt(.L_802DE4A8);
/*802DE4C0 002DB2C0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802DE4C4 002DB2C4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x218c);
/*802DE4C8 002DB2C8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*802DE4CC 002DB2CC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802DE4D0 002DB2D0*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/* 802DE4D4 002DB2D4  4C C6 32 42 */ crset context->cr1eq
/*802DE4D8 002DB2D8*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE4DC 002DB2DC*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*802DE4E0 002DB2E0*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*802DE4E4 002DB2E4*/ PPC::Runtime::ASM::b(.L_802DE4F8);
RUNTIME_PPC_JUMP_LABEL(.L_802DE4E8, 0x802DE4E8) //this is a jump label
/*802DE4E8 002DB2E8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE4EC 002DB2EC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE4F0 002DB2F0*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE4F4 002DB2F4*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE4F8, 0x802DE4F8) //this is a jump label
/*802DE4F8 002DB2F8*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*802DE4FC 002DB2FC*/ PPC::Runtime::ASM::blt(.L_802DE4E8);
/*802DE500 002DB300*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x232c);
/*802DE504 002DB304*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 1 @ Get_MemoryOffset_SDA21);
/*802DE508 002DB308*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE50C 002DB30C*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE510 002DB310*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*802DE514 002DB314*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*802DE518 002DB318*/ PPC::Runtime::ASM::b(.L_802DE52C);
RUNTIME_PPC_JUMP_LABEL(.L_802DE51C, 0x802DE51C) //this is a jump label
/*802DE51C 002DB31C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE520 002DB320*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE524 002DB324*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE528 002DB328*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE52C, 0x802DE52C) //this is a jump label
/*802DE52C 002DB32C*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*802DE530 002DB330*/ PPC::Runtime::ASM::blt(.L_802DE51C);
/*802DE534 002DB334*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*802DE538 002DB338*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x218c);
/*802DE53C 002DB33C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802DE540 002DB340*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*802DE544 002DB344*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/* 802DE548 002DB348  4C C6 32 42 */ crset context->cr1eq
/*802DE54C 002DB34C*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE550 002DB350*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*802DE554 002DB354*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*802DE558 002DB358*/ PPC::Runtime::ASM::b(.L_802DE56C);
RUNTIME_PPC_JUMP_LABEL(.L_802DE55C, 0x802DE55C) //this is a jump label
/*802DE55C 002DB35C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE560 002DB360*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE564 002DB364*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE568 002DB368*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE56C, 0x802DE56C) //this is a jump label
/*802DE56C 002DB36C*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*802DE570 002DB370*/ PPC::Runtime::ASM::blt(.L_802DE55C);
/*802DE574 002DB374*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x233c);
/*802DE578 002DB378*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 1 @ Get_MemoryOffset_SDA21);
/*802DE57C 002DB37C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE580 002DB380*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE584 002DB384*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*802DE588 002DB388*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*802DE58C 002DB38C*/ PPC::Runtime::ASM::b(.L_802DE5A0);
RUNTIME_PPC_JUMP_LABEL(.L_802DE590, 0x802DE590) //this is a jump label
/*802DE590 002DB390*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE594 002DB394*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE598 002DB398*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE59C 002DB39C*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE5A0, 0x802DE5A0) //this is a jump label
/*802DE5A0 002DB3A0*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*802DE5A4 002DB3A4*/ PPC::Runtime::ASM::blt(.L_802DE590);
/*802DE5A8 002DB3A8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*802DE5AC 002DB3AC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x218c);
/*802DE5B0 002DB3B0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*802DE5B4 002DB3B4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*802DE5B8 002DB3B8*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/* 802DE5BC 002DB3BC  4C C6 32 42 */ crset context->cr1eq
/*802DE5C0 002DB3C0*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE5C4 002DB3C4*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*802DE5C8 002DB3C8*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*802DE5CC 002DB3CC*/ PPC::Runtime::ASM::b(.L_802DE5E0);
RUNTIME_PPC_JUMP_LABEL(.L_802DE5D0, 0x802DE5D0) //this is a jump label
/*802DE5D0 002DB3D0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE5D4 002DB3D4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE5D8 002DB3D8*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE5DC 002DB3DC*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE5E0, 0x802DE5E0) //this is a jump label
/*802DE5E0 002DB3E0*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*802DE5E4 002DB3E4*/ PPC::Runtime::ASM::blt(.L_802DE5D0);
/*802DE5E8 002DB3E8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x234c);
/*802DE5EC 002DB3EC*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 1 @ Get_MemoryOffset_SDA21);
/*802DE5F0 002DB3F0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE5F4 002DB3F4*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE5F8 002DB3F8*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*802DE5FC 002DB3FC*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*802DE600 002DB400*/ PPC::Runtime::ASM::b(.L_802DE614);
RUNTIME_PPC_JUMP_LABEL(.L_802DE604, 0x802DE604) //this is a jump label
/*802DE604 002DB404*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE608 002DB408*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE60C 002DB40C*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE610 002DB410*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE614, 0x802DE614) //this is a jump label
/*802DE614 002DB414*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*802DE618 002DB418*/ PPC::Runtime::ASM::blt(.L_802DE604);
/*802DE61C 002DB41C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*802DE620 002DB420*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x218c);
/*802DE624 002DB424*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*802DE628 002DB428*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*802DE62C 002DB42C*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/* 802DE630 002DB430  4C C6 32 42 */ crset context->cr1eq
/*802DE634 002DB434*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE638 002DB438*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*802DE63C 002DB43C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*802DE640 002DB440*/ PPC::Runtime::ASM::b(.L_802DE654);
RUNTIME_PPC_JUMP_LABEL(.L_802DE644, 0x802DE644) //this is a jump label
/*802DE644 002DB444*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE648 002DB448*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE64C 002DB44C*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE650 002DB450*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE654, 0x802DE654) //this is a jump label
/*802DE654 002DB454*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*802DE658 002DB458*/ PPC::Runtime::ASM::blt(.L_802DE644);
/*802DE65C 002DB45C*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 1 @ Get_MemoryOffset_SDA21);
/*802DE660 002DB460*/ PPC::Runtime::ASM::li(context->r4, lbl_805D93F0 @ Get_MemoryOffset_SDA21);
/*802DE664 002DB464*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE668 002DB468*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE66C 002DB46C*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*802DE670 002DB470*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*802DE674 002DB474*/ PPC::Runtime::ASM::b(.L_802DE688);
RUNTIME_PPC_JUMP_LABEL(.L_802DE678, 0x802DE678) //this is a jump label
/*802DE678 002DB478*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE67C 002DB47C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE680 002DB480*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE684 002DB484*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE688, 0x802DE688) //this is a jump label
/*802DE688 002DB488*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*802DE68C 002DB48C*/ PPC::Runtime::ASM::blt(.L_802DE678);
/*802DE690 002DB490*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*802DE694 002DB494*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x218c);
/*802DE698 002DB498*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r29));
/*802DE69C 002DB49C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r29));
/*802DE6A0 002DB4A0*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r29));
/* 802DE6A4 002DB4A4  4C C6 32 42 */ crset context->cr1eq
/*802DE6A8 002DB4A8*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE6AC 002DB4AC*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*802DE6B0 002DB4B0*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*802DE6B4 002DB4B4*/ PPC::Runtime::ASM::b(.L_802DE6C8);
RUNTIME_PPC_JUMP_LABEL(.L_802DE6B8, 0x802DE6B8) //this is a jump label
/*802DE6B8 002DB4B8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE6BC 002DB4BC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE6C0 002DB4C0*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE6C4 002DB4C4*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE6C8, 0x802DE6C8) //this is a jump label
/*802DE6C8 002DB4C8*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*802DE6CC 002DB4CC*/ PPC::Runtime::ASM::blt(.L_802DE6B8);
/*802DE6D0 002DB4D0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x2358);
/*802DE6D4 002DB4D4*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 1 @ Get_MemoryOffset_SDA21);
/*802DE6D8 002DB4D8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE6DC 002DB4DC*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE6E0 002DB4E0*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*802DE6E4 002DB4E4*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*802DE6E8 002DB4E8*/ PPC::Runtime::ASM::b(.L_802DE6FC);
RUNTIME_PPC_JUMP_LABEL(.L_802DE6EC, 0x802DE6EC) //this is a jump label
/*802DE6EC 002DB4EC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE6F0 002DB4F0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE6F4 002DB4F4*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE6F8 002DB4F8*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE6FC, 0x802DE6FC) //this is a jump label
/*802DE6FC 002DB4FC*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*802DE700 002DB500*/ PPC::Runtime::ASM::blt(.L_802DE6EC);
/*802DE704 002DB504*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r29));
/*802DE708 002DB508*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x218c);
/*802DE70C 002DB50C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r29));
/*802DE710 002DB510*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r29));
/*802DE714 002DB514*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r29));
/* 802DE718 002DB518  4C C6 32 42 */ crset context->cr1eq
/*802DE71C 002DB51C*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE720 002DB520*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*802DE724 002DB524*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*802DE728 002DB528*/ PPC::Runtime::ASM::b(.L_802DE73C);
RUNTIME_PPC_JUMP_LABEL(.L_802DE72C, 0x802DE72C) //this is a jump label
/*802DE72C 002DB52C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE730 002DB530*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE734 002DB534*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE738 002DB538*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE73C, 0x802DE73C) //this is a jump label
/*802DE73C 002DB53C*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*802DE740 002DB540*/ PPC::Runtime::ASM::blt(.L_802DE72C);
/*802DE744 002DB544*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x2364);
/*802DE748 002DB548*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 1 @ Get_MemoryOffset_SDA21);
/*802DE74C 002DB54C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE750 002DB550*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE754 002DB554*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*802DE758 002DB558*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*802DE75C 002DB55C*/ PPC::Runtime::ASM::b(.L_802DE770);
RUNTIME_PPC_JUMP_LABEL(.L_802DE760, 0x802DE760) //this is a jump label
/*802DE760 002DB560*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE764 002DB564*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE768 002DB568*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE76C 002DB56C*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE770, 0x802DE770) //this is a jump label
/*802DE770 002DB570*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*802DE774 002DB574*/ PPC::Runtime::ASM::blt(.L_802DE760);
/*802DE778 002DB578*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r29));
/*802DE77C 002DB57C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x218c);
/*802DE780 002DB580*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r29));
/*802DE784 002DB584*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r29));
/*802DE788 002DB588*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r29));
/* 802DE78C 002DB58C  4C C6 32 42 */ crset context->cr1eq
/*802DE790 002DB590*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE794 002DB594*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*802DE798 002DB598*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*802DE79C 002DB59C*/ PPC::Runtime::ASM::b(.L_802DE7B0);
RUNTIME_PPC_JUMP_LABEL(.L_802DE7A0, 0x802DE7A0) //this is a jump label
/*802DE7A0 002DB5A0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE7A4 002DB5A4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE7A8 002DB5A8*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE7AC 002DB5AC*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE7B0, 0x802DE7B0) //this is a jump label
/*802DE7B0 002DB5B0*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*802DE7B4 002DB5B4*/ PPC::Runtime::ASM::blt(.L_802DE7A0);
/*802DE7B8 002DB5B8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x2374);
/*802DE7BC 002DB5BC*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 1 @ Get_MemoryOffset_SDA21);
/*802DE7C0 002DB5C0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE7C4 002DB5C4*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE7C8 002DB5C8*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*802DE7CC 002DB5CC*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*802DE7D0 002DB5D0*/ PPC::Runtime::ASM::b(.L_802DE7E4);
RUNTIME_PPC_JUMP_LABEL(.L_802DE7D4, 0x802DE7D4) //this is a jump label
/*802DE7D4 002DB5D4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE7D8 002DB5D8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE7DC 002DB5DC*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE7E0 002DB5E0*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE7E4, 0x802DE7E4) //this is a jump label
/*802DE7E4 002DB5E4*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*802DE7E8 002DB5E8*/ PPC::Runtime::ASM::blt(.L_802DE7D4);
/*802DE7EC 002DB5EC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r29));
/*802DE7F0 002DB5F0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x218c);
/*802DE7F4 002DB5F4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r29));
/*802DE7F8 002DB5F8*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r29));
/*802DE7FC 002DB5FC*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r29));
/* 802DE800 002DB600  4C C6 32 42 */ crset context->cr1eq
/*802DE804 002DB604*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE808 002DB608*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*802DE80C 002DB60C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*802DE810 002DB610*/ PPC::Runtime::ASM::b(.L_802DE824);
RUNTIME_PPC_JUMP_LABEL(.L_802DE814, 0x802DE814) //this is a jump label
/*802DE814 002DB614*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE818 002DB618*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE81C 002DB61C*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE820 002DB620*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE824, 0x802DE824) //this is a jump label
/*802DE824 002DB624*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*802DE828 002DB628*/ PPC::Runtime::ASM::blt(.L_802DE814);
/*802DE82C 002DB62C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x238c);
/*802DE830 002DB630*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 1 @ Get_MemoryOffset_SDA21);
/*802DE834 002DB634*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE838 002DB638*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE83C 002DB63C*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*802DE840 002DB640*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*802DE844 002DB644*/ PPC::Runtime::ASM::b(.L_802DE858);
RUNTIME_PPC_JUMP_LABEL(.L_802DE848, 0x802DE848) //this is a jump label
/*802DE848 002DB648*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE84C 002DB64C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE850 002DB650*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE854 002DB654*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE858, 0x802DE858) //this is a jump label
/*802DE858 002DB658*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*802DE85C 002DB65C*/ PPC::Runtime::ASM::blt(.L_802DE848);
/*802DE860 002DB660*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r29));
/*802DE864 002DB664*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x218c);
/*802DE868 002DB668*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r29));
/*802DE86C 002DB66C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r29));
/*802DE870 002DB670*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r29));
/* 802DE874 002DB674  4C C6 32 42 */ crset context->cr1eq
/*802DE878 002DB678*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE87C 002DB67C*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*802DE880 002DB680*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*802DE884 002DB684*/ PPC::Runtime::ASM::b(.L_802DE898);
RUNTIME_PPC_JUMP_LABEL(.L_802DE888, 0x802DE888) //this is a jump label
/*802DE888 002DB688*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE88C 002DB68C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE890 002DB690*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE894 002DB694*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE898, 0x802DE898) //this is a jump label
/*802DE898 002DB698*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*802DE89C 002DB69C*/ PPC::Runtime::ASM::blt(.L_802DE888);
/*802DE8A0 002DB6A0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x23a0);
/*802DE8A4 002DB6A4*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 1 @ Get_MemoryOffset_SDA21);
/*802DE8A8 002DB6A8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE8AC 002DB6AC*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE8B0 002DB6B0*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*802DE8B4 002DB6B4*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*802DE8B8 002DB6B8*/ PPC::Runtime::ASM::b(.L_802DE8CC);
RUNTIME_PPC_JUMP_LABEL(.L_802DE8BC, 0x802DE8BC) //this is a jump label
/*802DE8BC 002DB6BC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE8C0 002DB6C0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE8C4 002DB6C4*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE8C8 002DB6C8*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE8CC, 0x802DE8CC) //this is a jump label
/*802DE8CC 002DB6CC*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*802DE8D0 002DB6D0*/ PPC::Runtime::ASM::blt(.L_802DE8BC);
/*802DE8D4 002DB6D4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r29));
/*802DE8D8 002DB6D8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x218c);
/*802DE8DC 002DB6DC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r29));
/*802DE8E0 002DB6E0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r29));
/*802DE8E4 002DB6E4*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r29));
/* 802DE8E8 002DB6E8  4C C6 32 42 */ crset context->cr1eq
/*802DE8EC 002DB6EC*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE8F0 002DB6F0*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*802DE8F4 002DB6F4*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*802DE8F8 002DB6F8*/ PPC::Runtime::ASM::b(.L_802DE90C);
RUNTIME_PPC_JUMP_LABEL(.L_802DE8FC, 0x802DE8FC) //this is a jump label
/*802DE8FC 002DB6FC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE900 002DB700*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE904 002DB704*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE908 002DB708*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE90C, 0x802DE90C) //this is a jump label
/*802DE90C 002DB70C*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*802DE910 002DB710*/ PPC::Runtime::ASM::blt(.L_802DE8FC);
/*802DE914 002DB714*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x23b0);
/*802DE918 002DB718*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 1 @ Get_MemoryOffset_SDA21);
/*802DE91C 002DB71C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE920 002DB720*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE924 002DB724*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*802DE928 002DB728*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*802DE92C 002DB72C*/ PPC::Runtime::ASM::b(.L_802DE940);
RUNTIME_PPC_JUMP_LABEL(.L_802DE930, 0x802DE930) //this is a jump label
/*802DE930 002DB730*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE934 002DB734*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE938 002DB738*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE93C 002DB73C*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE940, 0x802DE940) //this is a jump label
/*802DE940 002DB740*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*802DE944 002DB744*/ PPC::Runtime::ASM::blt(.L_802DE930);
/*802DE948 002DB748*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r29));
/*802DE94C 002DB74C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x218c);
/*802DE950 002DB750*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r29));
/*802DE954 002DB754*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r29));
/*802DE958 002DB758*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r29));
/* 802DE95C 002DB75C  4C C6 32 42 */ crset context->cr1eq
/*802DE960 002DB760*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE964 002DB764*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*802DE968 002DB768*/ PPC::Runtime::ASM::b(.L_802DE97C);
RUNTIME_PPC_JUMP_LABEL(.L_802DE96C, 0x802DE96C) //this is a jump label
/*802DE96C 002DB76C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DE970 002DB770*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE974 002DB774*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE978 002DB778*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DE97C, 0x802DE97C) //this is a jump label
/*802DE97C 002DB77C*/ PPC::Runtime::ASM::cmplw(context->r28, context->r30);
/*802DE980 002DB780*/ PPC::Runtime::ASM::blt(.L_802DE96C);
/*802DE984 002DB784*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_RightCurlBracke" 2 @ Get_MemoryOffset_SDA21);
/*802DE988 002DB788*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DE98C 002DB78C*/ PPC::Runtime::ASM::bl(OSReport);
/*802DE990 002DB790*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*802DE994 002DB794*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*802DE998 002DB798*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802DE99C 002DB79C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802DE9A0 002DB7A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802DE9A4 002DB7A4*/ PPC::Runtime::ASM::blr();
}