//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "fn_8047558C.hpp"
#include "fn_8047558C.hpp"
#include "fn_TCPSendIn.hpp"
#include "fn_8047477C.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_SendAsync(PPC::Runtime::GCContext* context)
{
/*80476038 00472E38*/ PPC::Runtime::ASM::mflr(context->r0);
/*8047603C 00472E3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80476040 00472E40*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x48, context->r1));
/*80476044 00472E44*/ PPC::Runtime::ASM::stmw(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80476048 00472E48*/ PPC::Runtime::ASM::addi(context->r24, context->r3, 0x0);
/*8047604C 00472E4C*/ PPC::Runtime::ASM::addi(context->r25, context->r4, 0x0);
/*80476050 00472E50*/ PPC::Runtime::ASM::addi(context->r26, context->r5, 0x0);
/*80476054 00472E54*/ PPC::Runtime::ASM::addi(context->r27, context->r6, 0x0);
/*80476058 00472E58*/ PPC::Runtime::ASM::addi(context->r31, context->r7, 0x0);
/*8047605C 00472E5C*/ PPC::Runtime::ASM::addi(context->r28, context->r8, 0x0);
/*80476060 00472E60*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80476064 00472E64*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*80476068 00472E68*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/*8047606C 00472E6C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x6);
/*80476070 00472E70*/ PPC::Runtime::ASM::bne(.L_8047607C);
/*80476074 00472E74*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x0);
/*80476078 00472E78*/ PPC::Runtime::ASM::bge(.L_80476084);
RUNTIME_PPC_JUMP_LABEL(.L_8047607C, 0x8047607C) //this is a jump label
/*8047607C 00472E7C*/ PPC::Runtime::ASM::li(context->r29, -0xc);
/*80476080 00472E80*/ PPC::Runtime::ASM::b(.L_80476208);
RUNTIME_PPC_JUMP_LABEL(.L_80476084, 0x80476084) //this is a jump label
/*80476084 00472E84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x180, context->r24));
/*80476088 00472E88*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8047608C 00472E8C*/ PPC::Runtime::ASM::beq(.L_80476098);
/*80476090 00472E90*/ PPC::Runtime::ASM::li(context->r29, -0x1);
/*80476094 00472E94*/ PPC::Runtime::ASM::b(.L_80476208);
RUNTIME_PPC_JUMP_LABEL(.L_80476098, 0x80476098) //this is a jump label
/* 80476098 00472E98  57 77 07 FF */ clrlwi. context->r23 , context->r27 , 31
/*8047609C 00472E9C*/ PPC::Runtime::ASM::beq(.L_804760B0);
/*804760A0 00472EA0*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x0);
/*804760A4 00472EA4*/ PPC::Runtime::ASM::bne(.L_804760B0);
/*804760A8 00472EA8*/ PPC::Runtime::ASM::li(context->r29, -0xc);
/*804760AC 00472EAC*/ PPC::Runtime::ASM::b(.L_80476208);
RUNTIME_PPC_JUMP_LABEL(.L_804760B0, 0x804760B0) //this is a jump label
/*804760B0 00472EB0*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*804760B4 00472EB4*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*804760B8 00472EB8*/ PPC::Runtime::ASM::beq(.L_804760C0);
/*804760BC 00472EBC*/ PPC::Runtime::ASM::b(.L_804760C8);
RUNTIME_PPC_JUMP_LABEL(.L_804760C0, 0x804760C0) //this is a jump label
/*804760C0 00472EC0*/ PPC::Runtime::ASM::lis(context->r3, fn_8047558C @ Get_MemoryOffset_HighBit);
/*804760C4 00472EC4*/ PPC::Runtime::ASM::addi(context->r31, context->r3, fn_8047558C @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_804760C8, 0x804760C8) //this is a jump label
/*804760C8 00472EC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r24));
/*804760CC 00472ECC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*804760D0 00472ED0*/ PPC::Runtime::ASM::bge(.L_804760EC);
/*804760D4 00472ED4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*804760D8 00472ED8*/ PPC::Runtime::ASM::beq(.L_80476104);
/*804760DC 00472EDC*/ PPC::Runtime::ASM::bge(.L_8047610C);
/*804760E0 00472EE0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*804760E4 00472EE4*/ PPC::Runtime::ASM::bge(.L_804760FC);
/*804760E8 00472EE8*/ PPC::Runtime::ASM::b(.L_80476204);
RUNTIME_PPC_JUMP_LABEL(.L_804760EC, 0x804760EC) //this is a jump label
/*804760EC 00472EEC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x7);
/*804760F0 00472EF0*/ PPC::Runtime::ASM::beq(.L_8047610C);
/*804760F4 00472EF4*/ PPC::Runtime::ASM::blt(.L_80476204);
/*804760F8 00472EF8*/ PPC::Runtime::ASM::b(.L_80476204);
RUNTIME_PPC_JUMP_LABEL(.L_804760FC, 0x804760FC) //this is a jump label
/*804760FC 00472EFC*/ PPC::Runtime::ASM::li(context->r29, -0x4);
/*80476100 00472F00*/ PPC::Runtime::ASM::b(.L_80476208);
RUNTIME_PPC_JUMP_LABEL(.L_80476104, 0x80476104) //this is a jump label
/*80476104 00472F04*/ PPC::Runtime::ASM::li(context->r29, -0x6);
/*80476108 00472F08*/ PPC::Runtime::ASM::b(.L_80476208);
RUNTIME_PPC_JUMP_LABEL(.L_8047610C, 0x8047610C) //this is a jump label
/*8047610C 00472F0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r24));
/*80476110 00472F10*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 28, 28);
/*80476114 00472F14*/ PPC::Runtime::ASM::beq(.L_80476120);
/*80476118 00472F18*/ PPC::Runtime::ASM::li(context->r29, -0x8);
/*8047611C 00472F1C*/ PPC::Runtime::ASM::b(.L_80476208);
RUNTIME_PPC_JUMP_LABEL(.L_80476120, 0x80476120) //this is a jump label
/*80476120 00472F20*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80476124 00472F24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x188, context->r24));
/*80476128 00472F28*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8047612C 00472F2C*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18c, context->r24));
/*80476130 00472F30*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x190, context->r24));
/*80476134 00472F34*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x180, context->r24));
/*80476138 00472F38*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x184, context->r24));
/*8047613C 00472F3C*/ PPC::Runtime::ASM::beq(.L_80476148);
/*80476140 00472F40*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*80476144 00472F44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_80476148, 0x80476148) //this is a jump label
/*80476148 00472F48*/ PPC::Runtime::ASM::addi(context->r3, context->r24, 0x0);
/*8047614C 00472F4C*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r27, 0, 29, 29);
/*80476150 00472F50*/ PPC::Runtime::ASM::bl(fn_TCPSendIn);
/*80476154 00472F54*/ PPC::Runtime::ASM::cmplwi(context->r23, 0x0);
/*80476158 00472F58*/ PPC::Runtime::ASM::beq(.L_8047619C);
/*8047615C 00472F5C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x190, context->r24));
/*80476160 00472F60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r24));
/*80476164 00472F64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r24));
/*80476168 00472F68*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*8047616C 00472F6C*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*80476170 00472F70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r24));
/*80476174 00472F74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r24));
/*80476178 00472F78*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*8047617C 00472F7C*/ PPC::Runtime::ASM::bge(.L_8047619C);
/*80476180 00472F80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r24));
/*80476184 00472F84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r24));
/*80476188 00472F88*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*8047618C 00472F8C*/ PPC::Runtime::ASM::bne(.L_8047619C);
/*80476190 00472F90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r24));
/*80476194 00472F94*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80476198 00472F98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r24));
RUNTIME_PPC_JUMP_LABEL(.L_8047619C, 0x8047619C) //this is a jump label
/*8047619C 00472F9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x190, context->r24));
/*804761A0 00472FA0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*804761A4 00472FA4*/ PPC::Runtime::ASM::bgt(.L_804761E0);
/*804761A8 00472FA8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x184, context->r24));
/*804761AC 00472FAC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*804761B0 00472FB0*/ PPC::Runtime::ASM::beq(.L_804761C4);
/*804761B4 00472FB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x188, context->r24));
/*804761B8 00472FB8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*804761BC 00472FBC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*804761C0 00472FC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x184, context->r24));
RUNTIME_PPC_JUMP_LABEL(.L_804761C4, 0x804761C4) //this is a jump label
/*804761C4 00472FC4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*804761C8 00472FC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x180, context->r24));
/*804761CC 00472FCC*/ PPC::Runtime::ASM::addi(context->r12, context->r31, 0x0);
/*804761D0 00472FD0*/ PPC::Runtime::ASM::mtlr(context->r12);
/*804761D4 00472FD4*/ PPC::Runtime::ASM::addi(context->r3, context->r24, 0x0);
/*804761D8 00472FD8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x188, context->r24));
/* 804761DC 00472FDC  4E 80 00 21 */ blrl
RUNTIME_PPC_JUMP_LABEL(.L_804761E0, 0x804761E0) //this is a jump label
/*804761E0 00472FE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r24));
/*804761E4 00472FE4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*804761E8 00472FE8*/ PPC::Runtime::ASM::beq(.L_804761F4);
/*804761EC 00472FEC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x7);
/*804761F0 00472FF0*/ PPC::Runtime::ASM::bne(.L_80476208);
RUNTIME_PPC_JUMP_LABEL(.L_804761F4, 0x804761F4) //this is a jump label
/*804761F4 00472FF4*/ PPC::Runtime::ASM::addi(context->r3, context->r24, 0x0);
/*804761F8 00472FF8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*804761FC 00472FFC*/ PPC::Runtime::ASM::bl(fn_8047477C);
/*80476200 00473000*/ PPC::Runtime::ASM::b(.L_80476208);
RUNTIME_PPC_JUMP_LABEL(.L_80476204, 0x80476204) //this is a jump label
/*80476204 00473004*/ PPC::Runtime::ASM::li(context->r29, -0x8);
RUNTIME_PPC_JUMP_LABEL(.L_80476208, 0x80476208) //this is a jump label
/*80476208 00473008*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8047620C 0047300C*/ PPC::Runtime::ASM::beq(.L_8047621C);
/*80476210 00473010*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*80476214 00473014*/ PPC::Runtime::ASM::bge(.L_8047621C);
/*80476218 00473018*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_8047621C, 0x8047621C) //this is a jump label
/*8047621C 0047301C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80476220 00473020*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80476224 00473024*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80476228 00473028*/ PPC::Runtime::ASM::lmw(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8047622C 0047302C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80476230 00473030*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x48);
/*80476234 00473034*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80476238 00473038*/ PPC::Runtime::ASM::blr();
}