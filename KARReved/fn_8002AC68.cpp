//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_?loadData2.hpp"
#include "fn_80134A0C.hpp"
#include "fn_80134A2C.hpp"
#include "fn_80134A2C.hpp"
#include "fn_80134A2C.hpp"
#include "fn_80134B24.hpp"
#include "fn_80134D84.hpp"
#include "fn_80061690.hpp"
#include "fn_?loadData2.hpp"
#include "fn_80134A0C.hpp"
#include "fn_80134A2C.hpp"
#include "fn_80134A2C.hpp"
#include "fn_80134A2C.hpp"
#include "fn_80134DE4.hpp"
#include "fn_801349CC.hpp"
#include "fn_8013492C.hpp"
#include "fn_8002A630.hpp"
#include "fn_801349EC.hpp"
#include "fn_?loadData2.hpp"
#include "fn_801349EC.hpp"
#include "fn_80134DC4.hpp"
#include "fn_80134D84.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_?loadData2.hpp"
#include "fn_80134A0C.hpp"
#include "fn_80134A2C.hpp"
#include "fn_80134A2C.hpp"
#include "fn_80134A2C.hpp"
#include "fn_80134DE4.hpp"
#include "fn_80134DA4.hpp"
#include "fn_80134DA4.hpp"
#include "fn_80134D84.hpp"



void fn_8002AC68(PPC::Runtime::GCContext* context)
{
/*8002AC68 00027A68*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8002AC6C 00027A6C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8002AC70 00027A70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8002AC74 00027A74*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8002AC78 00027A78*/ PPC::Runtime::ASM::bl(_savegpr_22);
/*8002AC7C 00027A7C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8002AC80 00027A80*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8002AC84 00027A84*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r31, 24);
/*8002AC88 00027A88*/ PPC::Runtime::ASM::lis(context->r4, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*8002AC8C 00027A8C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*8002AC90 00027A90*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x197);
/*8002AC94 00027A94*/ PPC::Runtime::ASM::addi(context->r3, context->r4, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
/*8002AC98 00027A98*/ PPC::Runtime::ASM::extsb(context->r27, context->r31);
/*8002AC9C 00027A9C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8002ACA0 00027AA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8002ACA4 00027AA4*/ PPC::Runtime::ASM::add(context->r28, context->r30, context->r27);
/*8002ACA8 00027AA8*/ PPC::Runtime::ASM::lbz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r28));
/*8002ACAC 00027AAC*/ PPC::Runtime::ASM::andi.(context->r0, context->r0, 0x1160);
/*8002ACB0 00027AB0*/ PPC::Runtime::ASM::beq(.L_8002B07C);
/*8002ACB4 00027AB4*/ PPC::Runtime::ASM::extsb(context->r23, context->r26);
/*8002ACB8 00027AB8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8002ACBC 00027ABC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r30));
/*8002ACC0 00027AC0*/ PPC::Runtime::ASM::slw(context->r29, context->r0, context->r23);
/*8002ACC4 00027AC4*/ PPC::Runtime::ASM::and.(context->r0, context->r3, context->r29);
/*8002ACC8 00027AC8*/ PPC::Runtime::ASM::beq(.L_8002ADDC);
/*8002ACCC 00027ACC*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*8002ACD0 00027AD0*/ PPC::Runtime::ASM::li(context->r25, 0x0);
/*8002ACD4 00027AD4*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8002ACD8, 0x8002ACD8) //this is a jump label
/*8002ACD8 00027AD8*/ PPC::Runtime::ASM::cmpw(context->r25, context->r27);
/*8002ACDC 00027ADC*/ PPC::Runtime::ASM::beq(.L_8002ADD4);
/*8002ACE0 00027AE0*/ PPC::Runtime::ASM::add(context->r3, context->r30, context->r25);
/*8002ACE4 00027AE4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r3));
/*8002ACE8 00027AE8*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8002ACEC 00027AEC*/ PPC::Runtime::ASM::cmpw(context->r0, context->r23);
/*8002ACF0 00027AF0*/ PPC::Runtime::ASM::bne(.L_8002ADD4);
/*8002ACF4 00027AF4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r3));
/*8002ACF8 00027AF8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8002ACFC 00027AFC*/ PPC::Runtime::ASM::bne(.L_8002ADD4);
/*8002AD00 00027B00*/ PPC::Runtime::ASM::add(context->r24, context->r30, context->r23);
/*8002AD04 00027B04*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b, context->r24));
/*8002AD08 00027B08*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f, context->r24));
/*8002AD0C 00027B0C*/ PPC::Runtime::ASM::lbz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f, context->r24));
/*8002AD10 00027B10*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x23, context->r24));
/*8002AD14 00027B14*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*8002AD18 00027B18*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8002AD1C 00027B1C*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8002AD20 00027B20*/ PPC::Runtime::ASM::mr(context->r4, context->r22);
/*8002AD24 00027B24*/ PPC::Runtime::ASM::bl(fn_80134A0C);
/*8002AD28 00027B28*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f, context->r24));
/*8002AD2C 00027B2C*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f, context->r24));
/*8002AD30 00027B30*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8002AD34 00027B34*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33, context->r24));
/*8002AD38 00027B38*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8002AD3C 00027B3C*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b, context->r24));
/*8002AD40 00027B40*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x27, context->r24));
/*8002AD44 00027B44*/ PPC::Runtime::ASM::beq(.L_8002AD78);
/*8002AD48 00027B48*/ PPC::Runtime::ASM::bge(.L_8002AD58);
/*8002AD4C 00027B4C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8002AD50 00027B50*/ PPC::Runtime::ASM::bge(.L_8002AD64);
/*8002AD54 00027B54*/ PPC::Runtime::ASM::b(.L_8002ADA8);
RUNTIME_PPC_JUMP_LABEL(.L_8002AD58, 0x8002AD58) //this is a jump label
/*8002AD58 00027B58*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*8002AD5C 00027B5C*/ PPC::Runtime::ASM::bge(.L_8002ADA8);
/*8002AD60 00027B60*/ PPC::Runtime::ASM::b(.L_8002AD8C);
RUNTIME_PPC_JUMP_LABEL(.L_8002AD64, 0x8002AD64) //this is a jump label
/*8002AD64 00027B64*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8002AD68 00027B68*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8002AD6C 00027B6C*/ PPC::Runtime::ASM::li(context->r6, -0x1);
/*8002AD70 00027B70*/ PPC::Runtime::ASM::bl(fn_80134A2C);
/*8002AD74 00027B74*/ PPC::Runtime::ASM::b(.L_8002ADA8);
RUNTIME_PPC_JUMP_LABEL(.L_8002AD78, 0x8002AD78) //this is a jump label
/*8002AD78 00027B78*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8002AD7C 00027B7C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8002AD80 00027B80*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*8002AD84 00027B84*/ PPC::Runtime::ASM::bl(fn_80134A2C);
/*8002AD88 00027B88*/ PPC::Runtime::ASM::b(.L_8002ADA8);
RUNTIME_PPC_JUMP_LABEL(.L_8002AD8C, 0x8002AD8C) //this is a jump label
/*8002AD8C 00027B8C*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8002AD90 00027B90*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8002AD94 00027B94*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*8002AD98 00027B98*/ PPC::Runtime::ASM::li(context->r6, -0x1);
/*8002AD9C 00027B9C*/ PPC::Runtime::ASM::li(context->r7, -0x1);
/*8002ADA0 00027BA0*/ PPC::Runtime::ASM::li(context->r8, -0x1);
/*8002ADA4 00027BA4*/ PPC::Runtime::ASM::bl(fn_80134A2C);
RUNTIME_PPC_JUMP_LABEL(.L_8002ADA8, 0x8002ADA8) //this is a jump label
/*8002ADA8 00027BA8*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8002ADAC 00027BAC*/ PPC::Runtime::ASM::bl(fn_80134B24);
/*8002ADB0 00027BB0*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8002ADB4 00027BB4*/ PPC::Runtime::ASM::bl(fn_80134D84);
/*8002ADB8 00027BB8*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r30));
/*8002ADBC 00027BBC*/ PPC::Runtime::ASM::add(context->r3, context->r30, context->r25);
/*8002ADC0 00027BC0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8002ADC4 00027BC4*/ PPC::Runtime::ASM::andc(context->r4, context->r4, context->r29);
/*8002ADC8 00027BC8*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r30));
/*8002ADCC 00027BCC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r3));
/*8002ADD0 00027BD0*/ PPC::Runtime::ASM::b(.L_8002ADDC);
RUNTIME_PPC_JUMP_LABEL(.L_8002ADD4, 0x8002ADD4) //this is a jump label
/*8002ADD4 00027BD4*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x1);
/*8002ADD8 00027BD8*/ PPC::Runtime::ASM::bdnz(.L_8002ACD8);
RUNTIME_PPC_JUMP_LABEL(.L_8002ADDC, 0x8002ADDC) //this is a jump label
/*8002ADDC 00027BDC*/ PPC::Runtime::ASM::bl(fn_80061690);
/*8002ADE0 00027BE0*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r28));
/*8002ADE4 00027BE4*/ PPC::Runtime::ASM::extsb(context->r3, context->r31);
/*8002ADE8 00027BE8*/ PPC::Runtime::ASM::add(context->r25, context->r30, context->r27);
/*8002ADEC 00027BEC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8002ADF0 00027BF0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b, context->r25));
/*8002ADF4 00027BF4*/ PPC::Runtime::ASM::add(context->r3, context->r30, context->r3);
/*8002ADF8 00027BF8*/ PPC::Runtime::ASM::mr(context->r28, context->r31);
/*8002ADFC 00027BFC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f, context->r25));
/*8002AE00 00027C00*/ PPC::Runtime::ASM::lbz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f, context->r3));
/*8002AE04 00027C04*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x23, context->r3));
/*8002AE08 00027C08*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*8002AE0C 00027C0C*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8002AE10 00027C10*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AE14 00027C14*/ PPC::Runtime::ASM::mr(context->r4, context->r22);
/*8002AE18 00027C18*/ PPC::Runtime::ASM::bl(fn_80134A0C);
/*8002AE1C 00027C1C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f, context->r25));
/*8002AE20 00027C20*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f, context->r25));
/*8002AE24 00027C24*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8002AE28 00027C28*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33, context->r25));
/*8002AE2C 00027C2C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8002AE30 00027C30*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b, context->r25));
/*8002AE34 00027C34*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x27, context->r25));
/*8002AE38 00027C38*/ PPC::Runtime::ASM::beq(.L_8002AE6C);
/*8002AE3C 00027C3C*/ PPC::Runtime::ASM::bge(.L_8002AE4C);
/*8002AE40 00027C40*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8002AE44 00027C44*/ PPC::Runtime::ASM::bge(.L_8002AE58);
/*8002AE48 00027C48*/ PPC::Runtime::ASM::b(.L_8002AE9C);
RUNTIME_PPC_JUMP_LABEL(.L_8002AE4C, 0x8002AE4C) //this is a jump label
/*8002AE4C 00027C4C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*8002AE50 00027C50*/ PPC::Runtime::ASM::bge(.L_8002AE9C);
/*8002AE54 00027C54*/ PPC::Runtime::ASM::b(.L_8002AE80);
RUNTIME_PPC_JUMP_LABEL(.L_8002AE58, 0x8002AE58) //this is a jump label
/*8002AE58 00027C58*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AE5C 00027C5C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8002AE60 00027C60*/ PPC::Runtime::ASM::li(context->r6, -0x1);
/*8002AE64 00027C64*/ PPC::Runtime::ASM::bl(fn_80134A2C);
/*8002AE68 00027C68*/ PPC::Runtime::ASM::b(.L_8002AE9C);
RUNTIME_PPC_JUMP_LABEL(.L_8002AE6C, 0x8002AE6C) //this is a jump label
/*8002AE6C 00027C6C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AE70 00027C70*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8002AE74 00027C74*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*8002AE78 00027C78*/ PPC::Runtime::ASM::bl(fn_80134A2C);
/*8002AE7C 00027C7C*/ PPC::Runtime::ASM::b(.L_8002AE9C);
RUNTIME_PPC_JUMP_LABEL(.L_8002AE80, 0x8002AE80) //this is a jump label
/*8002AE80 00027C80*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AE84 00027C84*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8002AE88 00027C88*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*8002AE8C 00027C8C*/ PPC::Runtime::ASM::li(context->r6, -0x1);
/*8002AE90 00027C90*/ PPC::Runtime::ASM::li(context->r7, -0x1);
/*8002AE94 00027C94*/ PPC::Runtime::ASM::li(context->r8, -0x1);
/*8002AE98 00027C98*/ PPC::Runtime::ASM::bl(fn_80134A2C);
RUNTIME_PPC_JUMP_LABEL(.L_8002AE9C, 0x8002AE9C) //this is a jump label
/*8002AE9C 00027C9C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AEA0 00027CA0*/ PPC::Runtime::ASM::bl(fn_80134DE4);
/*8002AEA4 00027CA4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AEA8 00027CA8*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*8002AEAC 00027CAC*/ PPC::Runtime::ASM::bl(fn_801349CC);
/*8002AEB0 00027CB0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AEB4 00027CB4*/ PPC::Runtime::ASM::bl(fn_8013492C);
/*8002AEB8 00027CB8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AEBC 00027CBC*/ PPC::Runtime::ASM::bl(fn_8002A630);
/*8002AEC0 00027CC0*/ PPC::Runtime::ASM::add(context->r3, context->r30, context->r27);
/*8002AEC4 00027CC4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x23, context->r3));
/*8002AEC8 00027CC8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x14);
/*8002AECC 00027CCC*/ PPC::Runtime::ASM::bne(.L_8002AEE0);
/*8002AED0 00027CD0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AED4 00027CD4*/ PPC::Runtime::ASM::li(context->r4, 0x14);
/*8002AED8 00027CD8*/ PPC::Runtime::ASM::bl(fn_801349EC);
/*8002AEDC 00027CDC*/ PPC::Runtime::ASM::b(.L_8002AEF0);
RUNTIME_PPC_JUMP_LABEL(.L_8002AEE0, 0x8002AEE0) //this is a jump label
/*8002AEE0 00027CE0*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*8002AEE4 00027CE4*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8002AEE8 00027CE8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AEEC 00027CEC*/ PPC::Runtime::ASM::bl(fn_801349EC);
RUNTIME_PPC_JUMP_LABEL(.L_8002AEF0, 0x8002AEF0) //this is a jump label
/*8002AEF0 00027CF0*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8002AEF4 00027CF4*/ PPC::Runtime::ASM::bl(fn_80134DC4);
/*8002AEF8 00027CF8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8002AEFC 00027CFC*/ PPC::Runtime::ASM::bl(fn_80134D84);
/*8002AF00 00027D00*/ PPC::Runtime::ASM::add(context->r3, context->r30, context->r27);
/*8002AF04 00027D04*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8002AF08 00027D08*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r3));
/*8002AF0C 00027D0C*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8002AF10 00027D10*/ PPC::Runtime::ASM::extsb(context->r27, context->r31);
/*8002AF14 00027D14*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8002AF18 00027D18*/ PPC::Runtime::ASM::cmpw(context->r0, context->r27);
/*8002AF1C 00027D1C*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x197);
/*8002AF20 00027D20*/ PPC::Runtime::ASM::beq(.L_8002AF30);
/*8002AF24 00027D24*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b, context->r30));
/*8002AF28 00027D28*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8002AF2C 00027D2C*/ PPC::Runtime::ASM::bne(.L_8002B07C);
RUNTIME_PPC_JUMP_LABEL(.L_8002AF30, 0x8002AF30) //this is a jump label
/*8002AF30 00027D30*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8002AF34 00027D34*/ PPC::Runtime::ASM::cmpw(context->r0, context->r27);
/*8002AF38 00027D38*/ PPC::Runtime::ASM::beq(.L_8002AF48);
/*8002AF3C 00027D3C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8002AF40 00027D40*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8002AF44 00027D44*/ PPC::Runtime::ASM::bne(.L_8002B07C);
RUNTIME_PPC_JUMP_LABEL(.L_8002AF48, 0x8002AF48) //this is a jump label
/*8002AF48 00027D48*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8002AF4C 00027D4C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r27);
/*8002AF50 00027D50*/ PPC::Runtime::ASM::beq(.L_8002AF60);
/*8002AF54 00027D54*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d, context->r30));
/*8002AF58 00027D58*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8002AF5C 00027D5C*/ PPC::Runtime::ASM::bne(.L_8002B07C);
RUNTIME_PPC_JUMP_LABEL(.L_8002AF60, 0x8002AF60) //this is a jump label
/*8002AF60 00027D60*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*8002AF64 00027D64*/ PPC::Runtime::ASM::cmpw(context->r0, context->r27);
/*8002AF68 00027D68*/ PPC::Runtime::ASM::beq(.L_8002AF78);
/*8002AF6C 00027D6C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r30));
/*8002AF70 00027D70*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8002AF74 00027D74*/ PPC::Runtime::ASM::bne(.L_8002B07C);
RUNTIME_PPC_JUMP_LABEL(.L_8002AF78, 0x8002AF78) //this is a jump label
/*8002AF78 00027D78*/ PPC::Runtime::ASM::li(context->r28, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8002AF7C, 0x8002AF7C) //this is a jump label
/*8002AF7C 00027D7C*/ PPC::Runtime::ASM::cmpw(context->r28, context->r27);
/*8002AF80 00027D80*/ PPC::Runtime::ASM::beq(.L_8002B070);
/*8002AF84 00027D84*/ PPC::Runtime::ASM::add(context->r23, context->r30, context->r28);
/*8002AF88 00027D88*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8002AF8C 00027D8C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b, context->r23));
/*8002AF90 00027D90*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f, context->r23));
/*8002AF94 00027D94*/ PPC::Runtime::ASM::lbz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f, context->r23));
/*8002AF98 00027D98*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x23, context->r23));
/*8002AF9C 00027D9C*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*8002AFA0 00027DA0*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8002AFA4 00027DA4*/ PPC::Runtime::ASM::mr(context->r4, context->r22);
/*8002AFA8 00027DA8*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*8002AFAC 00027DAC*/ PPC::Runtime::ASM::bl(fn_80134A0C);
/*8002AFB0 00027DB0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f, context->r23));
/*8002AFB4 00027DB4*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*8002AFB8 00027DB8*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f, context->r23));
/*8002AFBC 00027DBC*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8002AFC0 00027DC0*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33, context->r23));
/*8002AFC4 00027DC4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8002AFC8 00027DC8*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b, context->r23));
/*8002AFCC 00027DCC*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x27, context->r23));
/*8002AFD0 00027DD0*/ PPC::Runtime::ASM::beq(.L_8002B000);
/*8002AFD4 00027DD4*/ PPC::Runtime::ASM::bge(.L_8002AFE4);
/*8002AFD8 00027DD8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8002AFDC 00027DDC*/ PPC::Runtime::ASM::bge(.L_8002AFF0);
/*8002AFE0 00027DE0*/ PPC::Runtime::ASM::b(.L_8002B028);
RUNTIME_PPC_JUMP_LABEL(.L_8002AFE4, 0x8002AFE4) //this is a jump label
/*8002AFE4 00027DE4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*8002AFE8 00027DE8*/ PPC::Runtime::ASM::bge(.L_8002B028);
/*8002AFEC 00027DEC*/ PPC::Runtime::ASM::b(.L_8002B010);
RUNTIME_PPC_JUMP_LABEL(.L_8002AFF0, 0x8002AFF0) //this is a jump label
/*8002AFF0 00027DF0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8002AFF4 00027DF4*/ PPC::Runtime::ASM::li(context->r6, -0x1);
/*8002AFF8 00027DF8*/ PPC::Runtime::ASM::bl(fn_80134A2C);
/*8002AFFC 00027DFC*/ PPC::Runtime::ASM::b(.L_8002B028);
RUNTIME_PPC_JUMP_LABEL(.L_8002B000, 0x8002B000) //this is a jump label
/*8002B000 00027E00*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8002B004 00027E04*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*8002B008 00027E08*/ PPC::Runtime::ASM::bl(fn_80134A2C);
/*8002B00C 00027E0C*/ PPC::Runtime::ASM::b(.L_8002B028);
RUNTIME_PPC_JUMP_LABEL(.L_8002B010, 0x8002B010) //this is a jump label
/*8002B010 00027E10*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8002B014 00027E14*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*8002B018 00027E18*/ PPC::Runtime::ASM::li(context->r6, -0x1);
/*8002B01C 00027E1C*/ PPC::Runtime::ASM::li(context->r7, -0x1);
/*8002B020 00027E20*/ PPC::Runtime::ASM::li(context->r8, -0x1);
/*8002B024 00027E24*/ PPC::Runtime::ASM::bl(fn_80134A2C);
RUNTIME_PPC_JUMP_LABEL(.L_8002B028, 0x8002B028) //this is a jump label
/*8002B028 00027E28*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*8002B02C 00027E2C*/ PPC::Runtime::ASM::bl(fn_80134DE4);
/*8002B030 00027E30*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8002B034 00027E34*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8002B038 00027E38*/ PPC::Runtime::ASM::slw(context->r0, context->r0, context->r28);
/*8002B03C 00027E3C*/ PPC::Runtime::ASM::and.(context->r0, context->r3, context->r0);
/*8002B040 00027E40*/ PPC::Runtime::ASM::beq(.L_8002B068);
/*8002B044 00027E44*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f, context->r23));
/*8002B048 00027E48*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*8002B04C 00027E4C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8002B050 00027E50*/ PPC::Runtime::ASM::bne(.L_8002B060);
/*8002B054 00027E54*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8002B058 00027E58*/ PPC::Runtime::ASM::bl(fn_80134DA4);
/*8002B05C 00027E5C*/ PPC::Runtime::ASM::b(.L_8002B068);
RUNTIME_PPC_JUMP_LABEL(.L_8002B060, 0x8002B060) //this is a jump label
/*8002B060 00027E60*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8002B064 00027E64*/ PPC::Runtime::ASM::bl(fn_80134DA4);
RUNTIME_PPC_JUMP_LABEL(.L_8002B068, 0x8002B068) //this is a jump label
/*8002B068 00027E68*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*8002B06C 00027E6C*/ PPC::Runtime::ASM::bl(fn_80134D84);
RUNTIME_PPC_JUMP_LABEL(.L_8002B070, 0x8002B070) //this is a jump label
/*8002B070 00027E70*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*8002B074 00027E74*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x4);
/*8002B078 00027E78*/ PPC::Runtime::ASM::blt(.L_8002AF7C);
RUNTIME_PPC_JUMP_LABEL(.L_8002B07C, 0x8002B07C) //this is a jump label
/*8002B07C 00027E7C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8002B080 00027E80*/ PPC::Runtime::ASM::bl(_restgpr_22);
/*8002B084 00027E84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8002B088 00027E88*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8002B08C 00027E8C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8002B090 00027E90*/ PPC::Runtime::ASM::blr();
}