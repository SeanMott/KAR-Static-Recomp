//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802DF6F8.hpp"
#include "fn_802DF6F8.hpp"
#include "fn_802DF6F8.hpp"
#include "fn_802DF6F8.hpp"



void fn_802DF61C(PPC::Runtime::GCContext* context)
{
/*802DF61C 002DC41C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802DF620 002DC420*/ PPC::Runtime::ASM::mflr(context->r0);
/*802DF624 002DC424*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802DF628 002DC428*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*802DF62C 002DC42C*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*802DF630 002DC430*/ PPC::Runtime::ASM::lis(context->r6, lbl_804D40F0 @ Get_MemoryOffset_HighBit);
/*802DF634 002DC434*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*802DF638 002DC438*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*802DF63C 002DC43C*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*802DF640 002DC440*/ PPC::Runtime::ASM::addi(context->r31, context->r6, lbl_804D40F0 @ Get_MemoryOffset_LowBit);
/*802DF644 002DC444*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*802DF648 002DC448*/ PPC::Runtime::ASM::b(.L_802DF65C);
RUNTIME_PPC_JUMP_LABEL(.L_802DF64C, 0x802DF64C) //this is a jump label
/*802DF64C 002DC44C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DF650 002DC450*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DF654 002DC454*/ PPC::Runtime::ASM::bl(OSReport);
/*802DF658 002DC458*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DF65C, 0x802DF65C) //this is a jump label
/*802DF65C 002DC45C*/ PPC::Runtime::ASM::cmplw(context->r30, context->r29);
/*802DF660 002DC460*/ PPC::Runtime::ASM::blt(.L_802DF64C);
/*802DF664 002DC464*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*802DF668 002DC468*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2a08);
/*802DF66C 002DC46C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DF670 002DC470*/ PPC::Runtime::ASM::bl(OSReport);
/*802DF674 002DC474*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*802DF678 002DC478*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x1);
/*802DF67C 002DC47C*/ PPC::Runtime::ASM::li(context->r4, lbl_805D93FC @ Get_MemoryOffset_SDA21);
/*802DF680 002DC480*/ PPC::Runtime::ASM::bl(fn_802DF6F8);
/*802DF684 002DC484*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x3c);
/*802DF688 002DC488*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x2a14);
/*802DF68C 002DC48C*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x1);
/*802DF690 002DC490*/ PPC::Runtime::ASM::bl(fn_802DF6F8);
/*802DF694 002DC494*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x78);
/*802DF698 002DC498*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x2a20);
/*802DF69C 002DC49C*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x1);
/*802DF6A0 002DC4A0*/ PPC::Runtime::ASM::bl(fn_802DF6F8);
/*802DF6A4 002DC4A4*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0xb4);
/*802DF6A8 002DC4A8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x2a30);
/*802DF6AC 002DC4AC*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x1);
/*802DF6B0 002DC4B0*/ PPC::Runtime::ASM::bl(fn_802DF6F8);
/*802DF6B4 002DC4B4*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*802DF6B8 002DC4B8*/ PPC::Runtime::ASM::b(.L_802DF6CC);
RUNTIME_PPC_JUMP_LABEL(.L_802DF6BC, 0x802DF6BC) //this is a jump label
/*802DF6BC 002DC4BC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D93C0 @ Get_MemoryOffset_SDA21);
/*802DF6C0 002DC4C0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DF6C4 002DC4C4*/ PPC::Runtime::ASM::bl(OSReport);
/*802DF6C8 002DC4C8*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802DF6CC, 0x802DF6CC) //this is a jump label
/*802DF6CC 002DC4CC*/ PPC::Runtime::ASM::cmplw(context->r30, context->r29);
/*802DF6D0 002DC4D0*/ PPC::Runtime::ASM::blt(.L_802DF6BC);
/*802DF6D4 002DC4D4*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_RightCurlBracke" 2 @ Get_MemoryOffset_SDA21);
/*802DF6D8 002DC4D8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802DF6DC 002DC4DC*/ PPC::Runtime::ASM::bl(OSReport);
/*802DF6E0 002DC4E0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*802DF6E4 002DC4E4*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*802DF6E8 002DC4E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802DF6EC 002DC4EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802DF6F0 002DC4F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802DF6F4 002DC4F4*/ PPC::Runtime::ASM::blr();
}