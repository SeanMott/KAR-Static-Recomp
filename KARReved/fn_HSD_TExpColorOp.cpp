//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"
#include "fn___assert.hpp"



void fn_HSD_TExpColorOp(PPC::Runtime::GCContext* context)
{
/*80422300 0041F100*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80422304 0041F104*/ PPC::Runtime::ASM::mflr(context->r0);
/*80422308 0041F108*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8042230C 0041F10C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80422310 0041F110*/ PPC::Runtime::ASM::bl(_savegpr_27);
/* 80422314 0041F114  7C 7B 1B 79 */ mr. context->r27 , context->r3
/*80422318 0041F118*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*8042231C 0041F11C*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*80422320 0041F120*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*80422324 0041F124*/ PPC::Runtime::ASM::mr(context->r31, context->r7);
/*80422328 0041F128*/ PPC::Runtime::ASM::bne(.L_8042233C);
/*8042232C 0041F12C*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_480 @ Get_MemoryOffset_SDA21);
/*80422330 0041F130*/ PPC::Runtime::ASM::li(context->r4, 0x19a);
/*80422334 0041F134*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_479 @ Get_MemoryOffset_SDA21);
/*80422338 0041F138*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8042233C, 0x8042233C) //this is a jump label
/*8042233C 0041F13C*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*80422340 0041F140*/ PPC::Runtime::ASM::bne(.L_8042234C);
/*80422344 0041F144*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80422348 0041F148*/ PPC::Runtime::ASM::b(.L_80422374);
RUNTIME_PPC_JUMP_LABEL(.L_8042234C, 0x8042234C) //this is a jump label
/*8042234C 0041F14C*/ PPC::Runtime::ASM::addis(context->r0, context->r27, 0x1);
/*80422350 0041F150*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*80422354 0041F154*/ PPC::Runtime::ASM::bne(.L_80422360);
/*80422358 0041F158*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8042235C 0041F15C*/ PPC::Runtime::ASM::b(.L_80422374);
RUNTIME_PPC_JUMP_LABEL(.L_80422360, 0x80422360) //this is a jump label
/*80422360 0041F160*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xfffe);
/*80422364 0041F164*/ PPC::Runtime::ASM::bne(.L_80422370);
/*80422368 0041F168*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*8042236C 0041F16C*/ PPC::Runtime::ASM::b(.L_80422374);
RUNTIME_PPC_JUMP_LABEL(.L_80422370, 0x80422370) //this is a jump label
/*80422370 0041F170*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_80422374, 0x80422374) //this is a jump label
/*80422374 0041F174*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80422378 0041F178*/ PPC::Runtime::ASM::beq(.L_80422390);
/*8042237C 0041F17C*/ PPC::Runtime::ASM::lis(context->r4, lbl_80504978 @ Get_MemoryOffset_HighBit);
/*80422380 0041F180*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_480 @ Get_MemoryOffset_SDA21);
/*80422384 0041F184*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_80504978 @ Get_MemoryOffset_LowBit);
/*80422388 0041F188*/ PPC::Runtime::ASM::li(context->r4, 0x19b);
/*8042238C 0041F18C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80422390, 0x80422390) //this is a jump label
/*80422390 0041F190*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r31, 24);
/*80422394 0041F194*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r27));
/*80422398 0041F198*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*8042239C 0041F19C*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*804223A0 0041F1A0*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*804223A4 0041F1A4*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
/*804223A8 0041F1A8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r27));
/*804223AC 0041F1AC*/ PPC::Runtime::ASM::beq(.L_804223B8);
/*804223B0 0041F1B0*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x1);
/*804223B4 0041F1B4*/ PPC::Runtime::ASM::bne(.L_804223C4);
RUNTIME_PPC_JUMP_LABEL(.L_804223B8, 0x804223B8) //this is a jump label
/*804223B8 0041F1B8*/ PPC::Runtime::ASM::stb(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r27));
/*804223BC 0041F1BC*/ PPC::Runtime::ASM::stb(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*804223C0 0041F1C0*/ PPC::Runtime::ASM::b(.L_804223D0);
RUNTIME_PPC_JUMP_LABEL(.L_804223C4, 0x804223C4) //this is a jump label
/*804223C4 0041F1C4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*804223C8 0041F1C8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r27));
/*804223CC 0041F1CC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_804223D0, 0x804223D0) //this is a jump label
/*804223D0 0041F1D0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*804223D4 0041F1D4*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*804223D8 0041F1D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*804223DC 0041F1DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804223E0 0041F1E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*804223E4 0041F1E4*/ PPC::Runtime::ASM::blr();
}