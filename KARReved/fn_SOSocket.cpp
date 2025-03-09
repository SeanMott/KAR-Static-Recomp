//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_GetNode.hpp"
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_8046D8DC.hpp"
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_80475BD8.hpp"
#include "fn_TCPSetTimeout.hpp"
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_UDPOpen.hpp"
#include "fn_UDPSetSendBuff.hpp"
#include "fn_PutNode.hpp"
#include "fn_PutNode.hpp"
#include "OSDisableInterrupts.hpp"
#include "fn_OSWakeupThread.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSDisableInterrupts.hpp"
#include "fn_OSWakeupThread.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSDisableInterrupts.hpp"
#include "fn_OSWakeupThread.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSDisableInterrupts.hpp"
#include "fn_OSWakeupThread.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSDisableInterrupts.hpp"
#include "fn_OSWakeupThread.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSDisableInterrupts.hpp"
#include "fn_OSWakeupThread.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_PutNode.hpp"
#include "fn_PutNode.hpp"
#include "fn_OSInitMutex.hpp"
#include "fn_OSInitMutex.hpp"
#include "fn_PutNode.hpp"



void fn_SOSocket(PPC::Runtime::GCContext* context)
{
/*8047B888 00478688*/ PPC::Runtime::ASM::mflr(context->r0);
/*8047B88C 0047868C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8047B890 00478690*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x58, context->r1));
/*8047B894 00478694*/ PPC::Runtime::ASM::stmw(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8047B898 00478698*/ PPC::Runtime::ASM::addi(context->r26, context->r4, 0x0);
/*8047B89C 0047869C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8047B8A0 004786A0*/ PPC::Runtime::ASM::li(context->r25, 0x0);
/*8047B8A4 004786A4*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE68C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B8A8 004786A8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8047B8AC 004786AC*/ PPC::Runtime::ASM::beq(.L_8047B8B8);
/*8047B8B0 004786B0*/ PPC::Runtime::ASM::li(context->r3, -0x27);
/*8047B8B4 004786B4*/ PPC::Runtime::ASM::b(.L_8047BEE0);
RUNTIME_PPC_JUMP_LABEL(.L_8047B8B8, 0x8047B8B8) //this is a jump label
/*8047B8B8 004786B8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*8047B8BC 004786BC*/ PPC::Runtime::ASM::beq(.L_8047B8C8);
/*8047B8C0 004786C0*/ PPC::Runtime::ASM::li(context->r3, -0x5);
/*8047B8C4 004786C4*/ PPC::Runtime::ASM::b(.L_8047BEE0);
RUNTIME_PPC_JUMP_LABEL(.L_8047B8C8, 0x8047B8C8) //this is a jump label
/*8047B8C8 004786C8*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*8047B8CC 004786CC*/ PPC::Runtime::ASM::beq(.L_8047B8D8);
/*8047B8D0 004786D0*/ PPC::Runtime::ASM::li(context->r3, -0x44);
/*8047B8D4 004786D4*/ PPC::Runtime::ASM::b(.L_8047BEE0);
RUNTIME_PPC_JUMP_LABEL(.L_8047B8D8, 0x8047B8D8) //this is a jump label
/*8047B8D8 004786D8*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*8047B8DC 004786DC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8047B8E0 004786E0*/ PPC::Runtime::ASM::bl(fn_GetNode);
/*8047B8E4 004786E4*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8047B8E8 004786E8*/ PPC::Runtime::ASM::li(context->r0, 0x20);
/*8047B8EC 004786EC*/ PPC::Runtime::ASM::lis(context->r4, lbl_805BE4B0 @ Get_MemoryOffset_HighBit);
/*8047B8F0 004786F0*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8047B8F4 004786F4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_805BE4B0 @ Get_MemoryOffset_LowBit);
/*8047B8F8 004786F8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8047B8FC, 0x8047B8FC) //this is a jump label
/*8047B8FC 004786FC*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*8047B900 00478700*/ PPC::Runtime::ASM::addi(context->r30, context->r4, 0x0);
/*8047B904 00478704*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8047B908 00478708*/ PPC::Runtime::ASM::bne(.L_8047B918);
/*8047B90C 0047870C*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8047B910 00478710*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*8047B914 00478714*/ PPC::Runtime::ASM::b(.L_8047BA20);
RUNTIME_PPC_JUMP_LABEL(.L_8047B918, 0x8047B918) //this is a jump label
/*8047B918 00478718*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a, context->r4));
/*8047B91C 0047871C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x38);
/*8047B920 00478720*/ PPC::Runtime::ASM::addi(context->r30, context->r4, 0x0);
/*8047B924 00478724*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8047B928 00478728*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8047B92C 0047872C*/ PPC::Runtime::ASM::bne(.L_8047B93C);
/*8047B930 00478730*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8047B934 00478734*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*8047B938 00478738*/ PPC::Runtime::ASM::b(.L_8047BA20);
RUNTIME_PPC_JUMP_LABEL(.L_8047B93C, 0x8047B93C) //this is a jump label
/*8047B93C 0047873C*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a, context->r4));
/*8047B940 00478740*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x38);
/*8047B944 00478744*/ PPC::Runtime::ASM::addi(context->r30, context->r4, 0x0);
/*8047B948 00478748*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8047B94C 0047874C*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8047B950 00478750*/ PPC::Runtime::ASM::bne(.L_8047B960);
/*8047B954 00478754*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8047B958 00478758*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*8047B95C 0047875C*/ PPC::Runtime::ASM::b(.L_8047BA20);
RUNTIME_PPC_JUMP_LABEL(.L_8047B960, 0x8047B960) //this is a jump label
/*8047B960 00478760*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a, context->r4));
/*8047B964 00478764*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x38);
/*8047B968 00478768*/ PPC::Runtime::ASM::addi(context->r30, context->r4, 0x0);
/*8047B96C 0047876C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8047B970 00478770*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8047B974 00478774*/ PPC::Runtime::ASM::bne(.L_8047B984);
/*8047B978 00478778*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8047B97C 0047877C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*8047B980 00478780*/ PPC::Runtime::ASM::b(.L_8047BA20);
RUNTIME_PPC_JUMP_LABEL(.L_8047B984, 0x8047B984) //this is a jump label
/*8047B984 00478784*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a, context->r4));
/*8047B988 00478788*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x38);
/*8047B98C 0047878C*/ PPC::Runtime::ASM::addi(context->r30, context->r4, 0x0);
/*8047B990 00478790*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8047B994 00478794*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8047B998 00478798*/ PPC::Runtime::ASM::bne(.L_8047B9A8);
/*8047B99C 0047879C*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8047B9A0 004787A0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*8047B9A4 004787A4*/ PPC::Runtime::ASM::b(.L_8047BA20);
RUNTIME_PPC_JUMP_LABEL(.L_8047B9A8, 0x8047B9A8) //this is a jump label
/*8047B9A8 004787A8*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a, context->r4));
/*8047B9AC 004787AC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x38);
/*8047B9B0 004787B0*/ PPC::Runtime::ASM::addi(context->r30, context->r4, 0x0);
/*8047B9B4 004787B4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8047B9B8 004787B8*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8047B9BC 004787BC*/ PPC::Runtime::ASM::bne(.L_8047B9CC);
/*8047B9C0 004787C0*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8047B9C4 004787C4*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*8047B9C8 004787C8*/ PPC::Runtime::ASM::b(.L_8047BA20);
RUNTIME_PPC_JUMP_LABEL(.L_8047B9CC, 0x8047B9CC) //this is a jump label
/*8047B9CC 004787CC*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a, context->r4));
/*8047B9D0 004787D0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x38);
/*8047B9D4 004787D4*/ PPC::Runtime::ASM::addi(context->r30, context->r4, 0x0);
/*8047B9D8 004787D8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8047B9DC 004787DC*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8047B9E0 004787E0*/ PPC::Runtime::ASM::bne(.L_8047B9F0);
/*8047B9E4 004787E4*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8047B9E8 004787E8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*8047B9EC 004787EC*/ PPC::Runtime::ASM::b(.L_8047BA20);
RUNTIME_PPC_JUMP_LABEL(.L_8047B9F0, 0x8047B9F0) //this is a jump label
/*8047B9F0 004787F0*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a, context->r4));
/*8047B9F4 004787F4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x38);
/*8047B9F8 004787F8*/ PPC::Runtime::ASM::addi(context->r30, context->r4, 0x0);
/*8047B9FC 004787FC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8047BA00 00478800*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8047BA04 00478804*/ PPC::Runtime::ASM::bne(.L_8047BA14);
/*8047BA08 00478808*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8047BA0C 0047880C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*8047BA10 00478810*/ PPC::Runtime::ASM::b(.L_8047BA20);
RUNTIME_PPC_JUMP_LABEL(.L_8047BA14, 0x8047BA14) //this is a jump label
/*8047BA14 00478814*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x38);
/*8047BA18 00478818*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8047BA1C 0047881C*/ PPC::Runtime::ASM::bdnz(.L_8047B8FC);
RUNTIME_PPC_JUMP_LABEL(.L_8047BA20, 0x8047BA20) //this is a jump label
/*8047BA20 00478820*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8047BA24 00478824*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8047BA28 00478828*/ PPC::Runtime::ASM::bne(.L_8047BA34);
/*8047BA2C 0047882C*/ PPC::Runtime::ASM::li(context->r3, -0x21);
/*8047BA30 00478830*/ PPC::Runtime::ASM::b(.L_8047BEE0);
RUNTIME_PPC_JUMP_LABEL(.L_8047BA34, 0x8047BA34) //this is a jump label
/*8047BA34 00478834*/ PPC::Runtime::ASM::lwz(context->r28, STRUCT_BYTE4_COUNT_1805DE698 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BA38 00478838*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*8047BA3C 0047883C*/ PPC::Runtime::ASM::beq(.L_8047BA44);
/*8047BA40 00478840*/ PPC::Runtime::ASM::b(.L_8047BA5C);
RUNTIME_PPC_JUMP_LABEL(.L_8047BA44, 0x8047BA44) //this is a jump label
/*8047BA44 00478844*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8047BA48 00478848*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*8047BA4C 0047884C*/ PPC::Runtime::ASM::bl(fn_8046D8DC);
/*8047BA50 00478850*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8047BA54 00478854*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x28);
/*8047BA58 00478858*/ PPC::Runtime::ASM::slwi(context->r28, context->r0, 1);
RUNTIME_PPC_JUMP_LABEL(.L_8047BA5C, 0x8047BA5C) //this is a jump label
/*8047BA5C 0047885C*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x2);
/*8047BA60 00478860*/ PPC::Runtime::ASM::beq(.L_8047BB40);
/*8047BA64 00478864*/ PPC::Runtime::ASM::bge(.L_8047BC08);
/*8047BA68 00478868*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x1);
/*8047BA6C 0047886C*/ PPC::Runtime::ASM::bge(.L_8047BA74);
/*8047BA70 00478870*/ PPC::Runtime::ASM::b(.L_8047BC08);
RUNTIME_PPC_JUMP_LABEL(.L_8047BA74, 0x8047BA74) //this is a jump label
/*8047BA74 00478874*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DE668 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BA78 00478878*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8047BA7C 0047887C*/ PPC::Runtime::ASM::li(context->r4, 0x2d0);
/*8047BA80 00478880*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 8047BA84 00478884  4E 80 00 21 */ blrl
/* 8047BA88 00478888  7C 78 1B 79 */ mr. context->r24 , context->r3
/*8047BA8C 0047888C*/ PPC::Runtime::ASM::beq(.L_8047BAA4);
/*8047BA90 00478890*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8047BA94 00478894*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BA98 00478898*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x2d0);
/*8047BA9C 0047889C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BAA0 004788A0*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_8047BAA4, 0x8047BAA4) //this is a jump label
/*8047BAA4 004788A4*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DE668 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BAA8 004788A8*/ PPC::Runtime::ASM::addi(context->r29, context->r24, 0x0);
/*8047BAAC 004788AC*/ PPC::Runtime::ASM::addi(context->r4, context->r28, 0x0);
/*8047BAB0 004788B0*/ PPC::Runtime::ASM::mtlr(context->r12);
/*8047BAB4 004788B4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/* 8047BAB8 004788B8  4E 80 00 21 */ blrl
/* 8047BABC 004788BC  7C 78 1B 79 */ mr. context->r24 , context->r3
/*8047BAC0 004788C0*/ PPC::Runtime::ASM::beq(.L_8047BAD8);
/*8047BAC4 004788C4*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8047BAC8 004788C8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BACC 004788CC*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r28);
/*8047BAD0 004788D0*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BAD4 004788D4*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_8047BAD8, 0x8047BAD8) //this is a jump label
/*8047BAD8 004788D8*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DE668 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BADC 004788DC*/ PPC::Runtime::ASM::addi(context->r27, context->r24, 0x0);
/*8047BAE0 004788E0*/ PPC::Runtime::ASM::addi(context->r4, context->r28, 0x0);
/*8047BAE4 004788E4*/ PPC::Runtime::ASM::mtlr(context->r12);
/*8047BAE8 004788E8*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/* 8047BAEC 004788EC  4E 80 00 21 */ blrl
/* 8047BAF0 004788F0  7C 78 1B 79 */ mr. context->r24 , context->r3
/*8047BAF4 004788F4*/ PPC::Runtime::ASM::beq(.L_8047BB0C);
/*8047BAF8 004788F8*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8047BAFC 004788FC*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BB00 00478900*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r28);
/*8047BB04 00478904*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BB08 00478908*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_8047BB0C, 0x8047BB0C) //this is a jump label
/*8047BB0C 0047890C*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*8047BB10 00478910*/ PPC::Runtime::ASM::addi(context->r4, context->r27, 0x0);
/*8047BB14 00478914*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0x0);
/*8047BB18 00478918*/ PPC::Runtime::ASM::addi(context->r6, context->r24, 0x0);
/*8047BB1C 0047891C*/ PPC::Runtime::ASM::addi(context->r7, context->r28, 0x0);
/*8047BB20 00478920*/ PPC::Runtime::ASM::bl(fn_80475BD8);
/* 8047BB24 00478924  7C 77 1B 79 */ mr. context->r23 , context->r3
/*8047BB28 00478928*/ PPC::Runtime::ASM::blt(.L_8047BC20);
/*8047BB2C 0047892C*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE6A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BB30 00478930*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8047BB34 00478934*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DE6A4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BB38 00478938*/ PPC::Runtime::ASM::bl(fn_TCPSetTimeout);
/*8047BB3C 0047893C*/ PPC::Runtime::ASM::b(.L_8047BC20);
RUNTIME_PPC_JUMP_LABEL(.L_8047BB40, 0x8047BB40) //this is a jump label
/*8047BB40 00478940*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DE668 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BB44 00478944*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*8047BB48 00478948*/ PPC::Runtime::ASM::li(context->r4, 0xf0);
/*8047BB4C 0047894C*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 8047BB50 00478950  4E 80 00 21 */ blrl
/* 8047BB54 00478954  7C 78 1B 79 */ mr. context->r24 , context->r3
/*8047BB58 00478958*/ PPC::Runtime::ASM::beq(.L_8047BB70);
/*8047BB5C 0047895C*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8047BB60 00478960*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BB64 00478964*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0xf0);
/*8047BB68 00478968*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BB6C 0047896C*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_8047BB70, 0x8047BB70) //this is a jump label
/*8047BB70 00478970*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DE668 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BB74 00478974*/ PPC::Runtime::ASM::addi(context->r25, context->r24, 0x0);
/*8047BB78 00478978*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*8047BB7C 0047897C*/ PPC::Runtime::ASM::mtlr(context->r12);
/*8047BB80 00478980*/ PPC::Runtime::ASM::li(context->r4, 0x5b2);
/* 8047BB84 00478984  4E 80 00 21 */ blrl
/* 8047BB88 00478988  7C 78 1B 79 */ mr. context->r24 , context->r3
/*8047BB8C 0047898C*/ PPC::Runtime::ASM::beq(.L_8047BBA4);
/*8047BB90 00478990*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8047BB94 00478994*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BB98 00478998*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x5b2);
/*8047BB9C 0047899C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BBA0 004789A0*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_8047BBA4, 0x8047BBA4) //this is a jump label
/*8047BBA4 004789A4*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DE668 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BBA8 004789A8*/ PPC::Runtime::ASM::addi(context->r27, context->r24, 0x0);
/*8047BBAC 004789AC*/ PPC::Runtime::ASM::li(context->r3, 0x5);
/*8047BBB0 004789B0*/ PPC::Runtime::ASM::mtlr(context->r12);
/*8047BBB4 004789B4*/ PPC::Runtime::ASM::li(context->r4, 0x1000);
/* 8047BBB8 004789B8  4E 80 00 21 */ blrl
/* 8047BBBC 004789BC  7C 78 1B 79 */ mr. context->r24 , context->r3
/*8047BBC0 004789C0*/ PPC::Runtime::ASM::beq(.L_8047BBD8);
/*8047BBC4 004789C4*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8047BBC8 004789C8*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BBCC 004789CC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1000);
/*8047BBD0 004789D0*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BBD4 004789D4*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_8047BBD8, 0x8047BBD8) //this is a jump label
/*8047BBD8 004789D8*/ PPC::Runtime::ASM::addi(context->r3, context->r25, 0x0);
/*8047BBDC 004789DC*/ PPC::Runtime::ASM::addi(context->r4, context->r24, 0x0);
/*8047BBE0 004789E0*/ PPC::Runtime::ASM::li(context->r5, 0x1000);
/*8047BBE4 004789E4*/ PPC::Runtime::ASM::bl(fn_UDPOpen);
/* 8047BBE8 004789E8  7C 77 1B 79 */ mr. context->r23 , context->r3
/*8047BBEC 004789EC*/ PPC::Runtime::ASM::blt(.L_8047BC20);
/*8047BBF0 004789F0*/ PPC::Runtime::ASM::addi(context->r3, context->r25, 0x0);
/*8047BBF4 004789F4*/ PPC::Runtime::ASM::addi(context->r4, context->r27, 0x0);
/*8047BBF8 004789F8*/ PPC::Runtime::ASM::li(context->r5, 0x5b2);
/*8047BBFC 004789FC*/ PPC::Runtime::ASM::bl(fn_UDPSetSendBuff);
/*8047BC00 00478A00*/ PPC::Runtime::ASM::mr(context->r23, context->r3);
/*8047BC04 00478A04*/ PPC::Runtime::ASM::b(.L_8047BC20);
RUNTIME_PPC_JUMP_LABEL(.L_8047BC08, 0x8047BC08) //this is a jump label
/*8047BC08 00478A08*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8047BC0C 00478A0C*/ PPC::Runtime::ASM::bl(fn_PutNode);
/*8047BC10 00478A10*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8047BC14 00478A14*/ PPC::Runtime::ASM::bl(fn_PutNode);
/*8047BC18 00478A18*/ PPC::Runtime::ASM::li(context->r3, -0x45);
/*8047BC1C 00478A1C*/ PPC::Runtime::ASM::b(.L_8047BEE0);
RUNTIME_PPC_JUMP_LABEL(.L_8047BC20, 0x8047BC20) //this is a jump label
/*8047BC20 00478A20*/ PPC::Runtime::ASM::cmpwi(context->r23, 0x0);
/*8047BC24 00478A24*/ PPC::Runtime::ASM::bge(.L_8047BE84);
/*8047BC28 00478A28*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x2);
/*8047BC2C 00478A2C*/ PPC::Runtime::ASM::beq(.L_8047BD58);
/*8047BC30 00478A30*/ PPC::Runtime::ASM::bge(.L_8047BE6C);
/*8047BC34 00478A34*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x1);
/*8047BC38 00478A38*/ PPC::Runtime::ASM::bge(.L_8047BC40);
/*8047BC3C 00478A3C*/ PPC::Runtime::ASM::b(.L_8047BE6C);
RUNTIME_PPC_JUMP_LABEL(.L_8047BC40, 0x8047BC40) //this is a jump label
/*8047BC40 00478A40*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8047BC44 00478A44*/ PPC::Runtime::ASM::beq(.L_8047BC9C);
/*8047BC48 00478A48*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DE66C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BC4C 00478A4C*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x0);
/*8047BC50 00478A50*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8047BC54 00478A54*/ PPC::Runtime::ASM::mtlr(context->r12);
/*8047BC58 00478A58*/ PPC::Runtime::ASM::li(context->r5, 0x2d0);
/* 8047BC5C 00478A5C  4E 80 00 21 */ blrl
/*8047BC60 00478A60*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8047BC64 00478A64*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BC68 00478A68*/ PPC::Runtime::ASM::addi(context->r25, context->r3, 0x0);
/*8047BC6C 00478A6C*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x2d0);
/*8047BC70 00478A70*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BC74 00478A74*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BC78 00478A78*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8047BC7C 00478A7C*/ PPC::Runtime::ASM::bne(.L_8047BC94);
/*8047BC80 00478A80*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE68C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BC84 00478A84*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8047BC88 00478A88*/ PPC::Runtime::ASM::bne(.L_8047BC94);
/*8047BC8C 00478A8C*/ PPC::Runtime::ASM::li(context->r3, SkipAddress_5 @ Get_MemoryOffset_SDA21);
/*8047BC90 00478A90*/ PPC::Runtime::ASM::bl(fn_OSWakeupThread);
RUNTIME_PPC_JUMP_LABEL(.L_8047BC94, 0x8047BC94) //this is a jump label
/*8047BC94 00478A94*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8047BC98 00478A98*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_8047BC9C, 0x8047BC9C) //this is a jump label
/*8047BC9C 00478A9C*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*8047BCA0 00478AA0*/ PPC::Runtime::ASM::beq(.L_8047BCF8);
/*8047BCA4 00478AA4*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DE66C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BCA8 00478AA8*/ PPC::Runtime::ASM::addi(context->r4, context->r27, 0x0);
/*8047BCAC 00478AAC*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0x0);
/*8047BCB0 00478AB0*/ PPC::Runtime::ASM::mtlr(context->r12);
/*8047BCB4 00478AB4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/* 8047BCB8 00478AB8  4E 80 00 21 */ blrl
/*8047BCBC 00478ABC*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8047BCC0 00478AC0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BCC4 00478AC4*/ PPC::Runtime::ASM::addi(context->r25, context->r3, 0x0);
/*8047BCC8 00478AC8*/ PPC::Runtime::ASM::subf(context->r0, context->r28, context->r0);
/*8047BCCC 00478ACC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BCD0 00478AD0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BCD4 00478AD4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8047BCD8 00478AD8*/ PPC::Runtime::ASM::bne(.L_8047BCF0);
/*8047BCDC 00478ADC*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE68C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BCE0 00478AE0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8047BCE4 00478AE4*/ PPC::Runtime::ASM::bne(.L_8047BCF0);
/*8047BCE8 00478AE8*/ PPC::Runtime::ASM::li(context->r3, SkipAddress_5 @ Get_MemoryOffset_SDA21);
/*8047BCEC 00478AEC*/ PPC::Runtime::ASM::bl(fn_OSWakeupThread);
RUNTIME_PPC_JUMP_LABEL(.L_8047BCF0, 0x8047BCF0) //this is a jump label
/*8047BCF0 00478AF0*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8047BCF4 00478AF4*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_8047BCF8, 0x8047BCF8) //this is a jump label
/*8047BCF8 00478AF8*/ PPC::Runtime::ASM::cmplwi(context->r24, 0x0);
/*8047BCFC 00478AFC*/ PPC::Runtime::ASM::beq(.L_8047BE6C);
/*8047BD00 00478B00*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DE66C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BD04 00478B04*/ PPC::Runtime::ASM::addi(context->r4, context->r24, 0x0);
/*8047BD08 00478B08*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0x0);
/*8047BD0C 00478B0C*/ PPC::Runtime::ASM::mtlr(context->r12);
/*8047BD10 00478B10*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/* 8047BD14 00478B14  4E 80 00 21 */ blrl
/*8047BD18 00478B18*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8047BD1C 00478B1C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BD20 00478B20*/ PPC::Runtime::ASM::addi(context->r24, context->r3, 0x0);
/*8047BD24 00478B24*/ PPC::Runtime::ASM::subf(context->r0, context->r28, context->r0);
/*8047BD28 00478B28*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BD2C 00478B2C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BD30 00478B30*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8047BD34 00478B34*/ PPC::Runtime::ASM::bne(.L_8047BD4C);
/*8047BD38 00478B38*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE68C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BD3C 00478B3C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8047BD40 00478B40*/ PPC::Runtime::ASM::bne(.L_8047BD4C);
/*8047BD44 00478B44*/ PPC::Runtime::ASM::li(context->r3, SkipAddress_5 @ Get_MemoryOffset_SDA21);
/*8047BD48 00478B48*/ PPC::Runtime::ASM::bl(fn_OSWakeupThread);
RUNTIME_PPC_JUMP_LABEL(.L_8047BD4C, 0x8047BD4C) //this is a jump label
/*8047BD4C 00478B4C*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*8047BD50 00478B50*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8047BD54 00478B54*/ PPC::Runtime::ASM::b(.L_8047BE6C);
RUNTIME_PPC_JUMP_LABEL(.L_8047BD58, 0x8047BD58) //this is a jump label
/*8047BD58 00478B58*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*8047BD5C 00478B5C*/ PPC::Runtime::ASM::beq(.L_8047BDB4);
/*8047BD60 00478B60*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DE66C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BD64 00478B64*/ PPC::Runtime::ASM::addi(context->r4, context->r25, 0x0);
/*8047BD68 00478B68*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*8047BD6C 00478B6C*/ PPC::Runtime::ASM::mtlr(context->r12);
/*8047BD70 00478B70*/ PPC::Runtime::ASM::li(context->r5, 0xf0);
/* 8047BD74 00478B74  4E 80 00 21 */ blrl
/*8047BD78 00478B78*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8047BD7C 00478B7C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BD80 00478B80*/ PPC::Runtime::ASM::addi(context->r25, context->r3, 0x0);
/*8047BD84 00478B84*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0xf0);
/*8047BD88 00478B88*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BD8C 00478B8C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BD90 00478B90*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8047BD94 00478B94*/ PPC::Runtime::ASM::bne(.L_8047BDAC);
/*8047BD98 00478B98*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE68C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BD9C 00478B9C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8047BDA0 00478BA0*/ PPC::Runtime::ASM::bne(.L_8047BDAC);
/*8047BDA4 00478BA4*/ PPC::Runtime::ASM::li(context->r3, SkipAddress_5 @ Get_MemoryOffset_SDA21);
/*8047BDA8 00478BA8*/ PPC::Runtime::ASM::bl(fn_OSWakeupThread);
RUNTIME_PPC_JUMP_LABEL(.L_8047BDAC, 0x8047BDAC) //this is a jump label
/*8047BDAC 00478BAC*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8047BDB0 00478BB0*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_8047BDB4, 0x8047BDB4) //this is a jump label
/*8047BDB4 00478BB4*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*8047BDB8 00478BB8*/ PPC::Runtime::ASM::beq(.L_8047BE10);
/*8047BDBC 00478BBC*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DE66C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BDC0 00478BC0*/ PPC::Runtime::ASM::addi(context->r4, context->r27, 0x0);
/*8047BDC4 00478BC4*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*8047BDC8 00478BC8*/ PPC::Runtime::ASM::mtlr(context->r12);
/*8047BDCC 00478BCC*/ PPC::Runtime::ASM::li(context->r5, 0x5b2);
/* 8047BDD0 00478BD0  4E 80 00 21 */ blrl
/*8047BDD4 00478BD4*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8047BDD8 00478BD8*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BDDC 00478BDC*/ PPC::Runtime::ASM::addi(context->r25, context->r3, 0x0);
/*8047BDE0 00478BE0*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x5b2);
/*8047BDE4 00478BE4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BDE8 00478BE8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BDEC 00478BEC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8047BDF0 00478BF0*/ PPC::Runtime::ASM::bne(.L_8047BE08);
/*8047BDF4 00478BF4*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE68C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BDF8 00478BF8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8047BDFC 00478BFC*/ PPC::Runtime::ASM::bne(.L_8047BE08);
/*8047BE00 00478C00*/ PPC::Runtime::ASM::li(context->r3, SkipAddress_5 @ Get_MemoryOffset_SDA21);
/*8047BE04 00478C04*/ PPC::Runtime::ASM::bl(fn_OSWakeupThread);
RUNTIME_PPC_JUMP_LABEL(.L_8047BE08, 0x8047BE08) //this is a jump label
/*8047BE08 00478C08*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8047BE0C 00478C0C*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_8047BE10, 0x8047BE10) //this is a jump label
/*8047BE10 00478C10*/ PPC::Runtime::ASM::cmplwi(context->r24, 0x0);
/*8047BE14 00478C14*/ PPC::Runtime::ASM::beq(.L_8047BE6C);
/*8047BE18 00478C18*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DE66C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BE1C 00478C1C*/ PPC::Runtime::ASM::addi(context->r4, context->r24, 0x0);
/*8047BE20 00478C20*/ PPC::Runtime::ASM::li(context->r3, 0x5);
/*8047BE24 00478C24*/ PPC::Runtime::ASM::mtlr(context->r12);
/*8047BE28 00478C28*/ PPC::Runtime::ASM::li(context->r5, 0x1000);
/* 8047BE2C 00478C2C  4E 80 00 21 */ blrl
/*8047BE30 00478C30*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8047BE34 00478C34*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BE38 00478C38*/ PPC::Runtime::ASM::addi(context->r24, context->r3, 0x0);
/*8047BE3C 00478C3C*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1000);
/*8047BE40 00478C40*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BE44 00478C44*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BE48 00478C48*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8047BE4C 00478C4C*/ PPC::Runtime::ASM::bne(.L_8047BE64);
/*8047BE50 00478C50*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE68C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047BE54 00478C54*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8047BE58 00478C58*/ PPC::Runtime::ASM::bne(.L_8047BE64);
/*8047BE5C 00478C5C*/ PPC::Runtime::ASM::li(context->r3, SkipAddress_5 @ Get_MemoryOffset_SDA21);
/*8047BE60 00478C60*/ PPC::Runtime::ASM::bl(fn_OSWakeupThread);
RUNTIME_PPC_JUMP_LABEL(.L_8047BE64, 0x8047BE64) //this is a jump label
/*8047BE64 00478C64*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*8047BE68 00478C68*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_8047BE6C, 0x8047BE6C) //this is a jump label
/*8047BE6C 00478C6C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8047BE70 00478C70*/ PPC::Runtime::ASM::bl(fn_PutNode);
/*8047BE74 00478C74*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8047BE78 00478C78*/ PPC::Runtime::ASM::bl(fn_PutNode);
/*8047BE7C 00478C7C*/ PPC::Runtime::ASM::li(context->r3, -0x31);
/*8047BE80 00478C80*/ PPC::Runtime::ASM::b(.L_8047BEE0);
RUNTIME_PPC_JUMP_LABEL(.L_8047BE84, 0x8047BE84) //this is a jump label
/*8047BE84 00478C84*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8047BE88 00478C88*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r30));
/*8047BE8C 00478C8C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*8047BE90 00478C90*/ PPC::Runtime::ASM::bl(fn_OSInitMutex);
/*8047BE94 00478C94*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x20);
/*8047BE98 00478C98*/ PPC::Runtime::ASM::bl(fn_OSInitMutex);
/*8047BE9C 00478C9C*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x2);
/*8047BEA0 00478CA0*/ PPC::Runtime::ASM::beq(.L_8047BEC8);
/*8047BEA4 00478CA4*/ PPC::Runtime::ASM::bge(.L_8047BED4);
/*8047BEA8 00478CA8*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x1);
/*8047BEAC 00478CAC*/ PPC::Runtime::ASM::bge(.L_8047BEB4);
/*8047BEB0 00478CB0*/ PPC::Runtime::ASM::b(.L_8047BED4);
RUNTIME_PPC_JUMP_LABEL(.L_8047BEB4, 0x8047BEB4) //this is a jump label
/*8047BEB4 00478CB4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c8, context->r29));
/*8047BEB8 00478CB8*/ PPC::Runtime::ASM::li(context->r0, 0x6);
/*8047BEBC 00478CBC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8047BEC0 00478CC0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8047BEC4 00478CC4*/ PPC::Runtime::ASM::b(.L_8047BED4);
RUNTIME_PPC_JUMP_LABEL(.L_8047BEC8, 0x8047BEC8) //this is a jump label
/*8047BEC8 00478CC8*/ PPC::Runtime::ASM::li(context->r0, 0x11);
/*8047BECC 00478CCC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8047BED0 00478CD0*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8047BED4, 0x8047BED4) //this is a jump label
/*8047BED4 00478CD4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8047BED8 00478CD8*/ PPC::Runtime::ASM::bl(fn_PutNode);
/*8047BEDC 00478CDC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_8047BEE0, 0x8047BEE0) //this is a jump label
/*8047BEE0 00478CE0*/ PPC::Runtime::ASM::lmw(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8047BEE4 00478CE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8047BEE8 00478CE8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x58);
/*8047BEEC 00478CEC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8047BEF0 00478CF0*/ PPC::Runtime::ASM::blr();
}