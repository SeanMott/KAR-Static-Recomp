//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "memmove.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_OutPADT(PPC::Runtime::GCContext* context)
{
/*8047FC24 0047CA24*/ PPC::Runtime::ASM::mflr(context->r0);
/*8047FC28 0047CA28*/ PPC::Runtime::ASM::lis(context->r6, lbl_80534558 @ Get_MemoryOffset_HighBit);
/*8047FC2C 0047CA2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8047FC30 0047CA30*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x38, context->r1));
/*8047FC34 0047CA34*/ PPC::Runtime::ASM::stmw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8047FC38 0047CA38*/ PPC::Runtime::ASM::addi(context->r25, context->r3, 0x0);
/*8047FC3C 0047CA3C*/ PPC::Runtime::ASM::addi(context->r26, context->r4, 0x0);
/*8047FC40 0047CA40*/ PPC::Runtime::ASM::addi(context->r27, context->r5, 0x0);
/*8047FC44 0047CA44*/ PPC::Runtime::ASM::addi(context->r30, context->r6, lbl_80534558 @ Get_MemoryOffset_LowBit);
/*8047FC48 0047CA48*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8047FC4C 0047CA4C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r25));
/*8047FC50 0047CA50*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x0);
/*8047FC54 0047CA54*/ PPC::Runtime::ASM::addi(context->r3, context->r25, 0x0);
/*8047FC58 0047CA58*/ PPC::Runtime::ASM::mtlr(context->r12);
/*8047FC5C 0047CA5C*/ PPC::Runtime::ASM::li(context->r4, 0x42);
/* 8047FC60 0047CA60  4E 80 00 21 */ blrl
/* 8047FC64 0047CA64  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*8047FC68 0047CA68*/ PPC::Runtime::ASM::addi(context->r7, context->r28, 0x3c);
/*8047FC6C 0047CA6C*/ PPC::Runtime::ASM::beq(.L_8047FCE0);
/*8047FC70 0047CA70*/ PPC::Runtime::ASM::li(context->r0, 0x11);
/*8047FC74 0047CA74*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*8047FC78 0047CA78*/ PPC::Runtime::ASM::li(context->r0, 0xa7);
/*8047FC7C 0047CA7C*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*8047FC80 0047CA80*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r7));
/*8047FC84 0047CA84*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8047FC88 0047CA88*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8047FC8C 0047CA8C*/ PPC::Runtime::ASM::sth(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r7));
/*8047FC90 0047CA90*/ PPC::Runtime::ASM::li(context->r6, 0x6);
/*8047FC94 0047CA94*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x779d);
/*8047FC98 0047CA98*/ PPC::Runtime::ASM::sth(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*8047FC9C 0047CA9C*/ PPC::Runtime::ASM::addi(context->r4, context->r26, 0x0);
/*8047FCA0 0047CAA0*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x12);
/*8047FCA4 0047CAA4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r28));
/*8047FCA8 0047CAA8*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*8047FCAC 0047CAAC*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
/*8047FCB0 0047CAB0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*8047FCB4 0047CAB4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*8047FCB8 0047CAB8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*8047FCBC 0047CABC*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*8047FCC0 0047CAC0*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r28));
/*8047FCC4 0047CAC4*/ PPC::Runtime::ASM::bl(memmove);
/*8047FCC8 0047CAC8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8047FCCC 0047CACC*/ PPC::Runtime::ASM::addi(context->r3, context->r25, 0x0);
/*8047FCD0 0047CAD0*/ PPC::Runtime::ASM::addi(context->r4, context->r28, 0x0);
/*8047FCD4 0047CAD4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x624, context->r30));
/*8047FCD8 0047CAD8*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 8047FCDC 0047CADC  4E 80 00 21 */ blrl
RUNTIME_PPC_JUMP_LABEL(.L_8047FCE0, 0x8047FCE0) //this is a jump label
/*8047FCE0 0047CAE0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8047FCE4 0047CAE4*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8047FCE8 0047CAE8*/ PPC::Runtime::ASM::lmw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8047FCEC 0047CAEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8047FCF0 0047CAF0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x38);
/*8047FCF4 0047CAF4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8047FCF8 0047CAF8*/ PPC::Runtime::ASM::blr();
}