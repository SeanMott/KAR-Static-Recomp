//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_GetNode.hpp"
#include "fn_8047697C.hpp"
#include "fn_PutNode.hpp"
#include "fn_PutNode.hpp"



void fn_8047CCE0(PPC::Runtime::GCContext* context)
{
/*8047CCE0 00479AE0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8047CCE4 00479AE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8047CCE8 00479AE8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8047CCEC 00479AEC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8047CCF0 00479AF0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8047CCF4 00479AF4*/ PPC::Runtime::ASM::addi(context->r30, context->r4, 0x0);
/*8047CCF8 00479AF8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE68C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047CCFC 00479AFC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8047CD00 00479B00*/ PPC::Runtime::ASM::beq(.L_8047CD0C);
/*8047CD04 00479B04*/ PPC::Runtime::ASM::li(context->r3, -0x27);
/*8047CD08 00479B08*/ PPC::Runtime::ASM::b(.L_8047CDCC);
RUNTIME_PPC_JUMP_LABEL(.L_8047CD0C, 0x8047CD0C) //this is a jump label
/*8047CD0C 00479B0C*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x3);
/*8047CD10 00479B10*/ PPC::Runtime::ASM::bge(.L_8047CD1C);
/*8047CD14 00479B14*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*8047CD18 00479B18*/ PPC::Runtime::ASM::bge(.L_8047CD24);
RUNTIME_PPC_JUMP_LABEL(.L_8047CD1C, 0x8047CD1C) //this is a jump label
/*8047CD1C 00479B1C*/ PPC::Runtime::ASM::li(context->r3, -0x1c);
/*8047CD20 00479B20*/ PPC::Runtime::ASM::b(.L_8047CDCC);
RUNTIME_PPC_JUMP_LABEL(.L_8047CD24, 0x8047CD24) //this is a jump label
/*8047CD24 00479B24*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*8047CD28 00479B28*/ PPC::Runtime::ASM::bl(fn_GetNode);
/* 8047CD2C 00479B2C  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*8047CD30 00479B30*/ PPC::Runtime::ASM::beq(.L_8047CD40);
/*8047CD34 00479B34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8047CD38 00479B38*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8047CD3C 00479B3C*/ PPC::Runtime::ASM::bne(.L_8047CD48);
RUNTIME_PPC_JUMP_LABEL(.L_8047CD40, 0x8047CD40) //this is a jump label
/*8047CD40 00479B40*/ PPC::Runtime::ASM::li(context->r3, -0x8);
/*8047CD44 00479B44*/ PPC::Runtime::ASM::b(.L_8047CDCC);
RUNTIME_PPC_JUMP_LABEL(.L_8047CD48, 0x8047CD48) //this is a jump label
/*8047CD48 00479B48*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8047CD4C 00479B4C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x11);
/*8047CD50 00479B50*/ PPC::Runtime::ASM::beq(.L_8047CD64);
/*8047CD54 00479B54*/ PPC::Runtime::ASM::bge(.L_8047CD7C);
/*8047CD58 00479B58*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x6);
/*8047CD5C 00479B5C*/ PPC::Runtime::ASM::beq(.L_8047CD6C);
/*8047CD60 00479B60*/ PPC::Runtime::ASM::b(.L_8047CD7C);
RUNTIME_PPC_JUMP_LABEL(.L_8047CD64, 0x8047CD64) //this is a jump label
/*8047CD64 00479B64*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*8047CD68 00479B68*/ PPC::Runtime::ASM::b(.L_8047CD8C);
RUNTIME_PPC_JUMP_LABEL(.L_8047CD6C, 0x8047CD6C) //this is a jump label
/*8047CD6C 00479B6C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8047CD70 00479B70*/ PPC::Runtime::ASM::bl(fn_8047697C);
/*8047CD74 00479B74*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8047CD78 00479B78*/ PPC::Runtime::ASM::b(.L_8047CD8C);
RUNTIME_PPC_JUMP_LABEL(.L_8047CD7C, 0x8047CD7C) //this is a jump label
/*8047CD7C 00479B7C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8047CD80 00479B80*/ PPC::Runtime::ASM::bl(fn_PutNode);
/*8047CD84 00479B84*/ PPC::Runtime::ASM::li(context->r3, -0x8);
/*8047CD88 00479B88*/ PPC::Runtime::ASM::b(.L_8047CDCC);
RUNTIME_PPC_JUMP_LABEL(.L_8047CD8C, 0x8047CD8C) //this is a jump label
/*8047CD8C 00479B8C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8047CD90 00479B90*/ PPC::Runtime::ASM::bl(fn_PutNode);
/*8047CD94 00479B94*/ PPC::Runtime::ASM::addi(context->r0, context->r30, 0xc);
/*8047CD98 00479B98*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xc);
/*8047CD9C 00479B9C*/ PPC::Runtime::ASM::bgt(.L_8047CDC8);
/*8047CDA0 00479BA0*/ PPC::Runtime::ASM::lis(context->r3, jumptable_80534278 @ Get_MemoryOffset_HighBit);
/*8047CDA4 00479BA4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, jumptable_80534278 @ Get_MemoryOffset_LowBit);
/*8047CDA8 00479BA8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8047CDAC 00479BAC*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*8047CDB0 00479BB0*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8047CDB4 00479BB4*/ PPC::Runtime::ASM::bctr();
/*8047CDB8 00479BB8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8047CDBC 00479BBC*/ PPC::Runtime::ASM::b(.L_8047CDCC);
/*8047CDC0 00479BC0*/ PPC::Runtime::ASM::li(context->r3, -0x38);
/*8047CDC4 00479BC4*/ PPC::Runtime::ASM::b(.L_8047CDCC);
RUNTIME_PPC_JUMP_LABEL(.L_8047CDC8, 0x8047CDC8) //this is a jump label
/*8047CDC8 00479BC8*/ PPC::Runtime::ASM::li(context->r3, -0x1c);
RUNTIME_PPC_JUMP_LABEL(.L_8047CDCC, 0x8047CDCC) //this is a jump label
/*8047CDCC 00479BCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8047CDD0 00479BD0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8047CDD4 00479BD4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8047CDD8 00479BD8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8047CDDC 00479BDC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8047CDE0 00479BE0*/ PPC::Runtime::ASM::blr();
}