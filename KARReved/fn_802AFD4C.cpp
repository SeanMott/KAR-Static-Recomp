//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802B3C3C.hpp"
#include "fn_802B3C24.hpp"
#include "fn_802B3778.hpp"
#include "fn_802B3860.hpp"
#include "fn_802B3B74.hpp"
#include "fn_802B3B74.hpp"



void fn_802AFD4C(PPC::Runtime::GCContext* context)
{
/*802AFD4C 002ACB4C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r1));
/*802AFD50 002ACB50*/ PPC::Runtime::ASM::mflr(context->r0);
/*802AFD54 002ACB54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802AFD58 002ACB58*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x80);
/*802AFD5C 002ACB5C*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*802AFD60 002ACB60*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*802AFD64 002ACB64*/ PPC::Runtime::ASM::mr(context->r26, context->r4);
/*802AFD68 002ACB68*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802AFD6C 002ACB6C*/ PPC::Runtime::ASM::addi(context->r31, context->r25, 0x4);
/*802AFD70 002ACB70*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*802AFD74 002ACB74*/ PPC::Runtime::ASM::li(context->r28, 0x1);
/*802AFD78 002ACB78*/ PPC::Runtime::ASM::li(context->r27, 0x1);
/*802AFD7C 002ACB7C*/ PPC::Runtime::ASM::b(.L_802AFDB4);
RUNTIME_PPC_JUMP_LABEL(.L_802AFD80, 0x802AFD80) //this is a jump label
/*802AFD80 002ACB80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*802AFD84 002ACB84*/ PPC::Runtime::ASM::mr(context->r31, context->r30);
/*802AFD88 002ACB88*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*802AFD8C 002ACB8C*/ PPC::Runtime::ASM::bl(fn_strcmp);
/*802AFD90 002ACB90*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802AFD94 002ACB94*/ PPC::Runtime::ASM::bge(.L_802AFDA4);
/*802AFD98 002ACB98*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802AFD9C 002ACB9C*/ PPC::Runtime::ASM::li(context->r28, 0x1);
/*802AFDA0 002ACBA0*/ PPC::Runtime::ASM::b(.L_802AFDB4);
RUNTIME_PPC_JUMP_LABEL(.L_802AFDA4, 0x802AFDA4) //this is a jump label
/*802AFDA4 002ACBA4*/ PPC::Runtime::ASM::mr(context->r29, context->r30);
/*802AFDA8 002ACBA8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802AFDAC 002ACBAC*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*802AFDB0 002ACBB0*/ PPC::Runtime::ASM::li(context->r27, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802AFDB4, 0x802AFDB4) //this is a jump label
/*802AFDB4 002ACBB4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802AFDB8 002ACBB8*/ PPC::Runtime::ASM::bne(.L_802AFD80);
/*802AFDBC 002ACBBC*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802AFDC0 002ACBC0*/ PPC::Runtime::ASM::beq(.L_802AFDD8);
/*802AFDC4 002ACBC4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*802AFDC8 002ACBC8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*802AFDCC 002ACBCC*/ PPC::Runtime::ASM::bl(fn_strcmp);
/*802AFDD0 002ACBD0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802AFDD4 002ACBD4*/ PPC::Runtime::ASM::bge(.L_802AFEB0);
RUNTIME_PPC_JUMP_LABEL(.L_802AFDD8, 0x802AFDD8) //this is a jump label
/*802AFDD8 002ACBD8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x30);
/*802AFDDC 002ACBDC*/ PPC::Runtime::ASM::bl(fn_802B3C3C);
/*802AFDE0 002ACBE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*802AFDE4 002ACBE4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802AFDE8 002ACBE8*/ PPC::Runtime::ASM::addi(context->r29, context->r1, 0x44);
/*802AFDEC 002ACBEC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802AFDF0 002ACBF0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x30);
/*802AFDF4 002ACBF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802AFDF8 002ACBF8*/ PPC::Runtime::ASM::mr(context->r26, context->r29);
/*802AFDFC 002ACBFC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802AFE00 002ACC00*/ PPC::Runtime::ASM::bl(fn_802B3C24);
/*802AFE04 002ACC04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802AFE08 002ACC08*/ PPC::Runtime::ASM::addi(context->r30, context->r1, 0x34);
/*802AFE0C 002ACC0C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802AFE10 002ACC10*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*802AFE14 002ACC14*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*802AFE18 002ACC18*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x28);
/*802AFE1C 002ACC1C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802AFE20 002ACC20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802AFE24 002ACC24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802AFE28 002ACC28*/ PPC::Runtime::ASM::bl(fn_802B3778);
/*802AFE2C 002ACC2C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802AFE30 002ACC30*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*802AFE34 002ACC34*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*802AFE38 002ACC38*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*802AFE3C 002ACC3C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*802AFE40 002ACC40*/ PPC::Runtime::ASM::mr(context->r6, context->r27);
/*802AFE44 002ACC44*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x40);
/*802AFE48 002ACC48*/ PPC::Runtime::ASM::bl(fn_802B3860);
/*802AFE4C 002ACC4C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802AFE50 002ACC50*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0xc);
/*802AFE54 002ACC54*/ PPC::Runtime::ASM::beq(.L_802AFE88);
/*802AFE58 002ACC58*/ PPC::Runtime::ASM::beq(.L_802AFE88);
/*802AFE5C 002ACC5C*/ PPC::Runtime::ASM::beq(.L_802AFE88);
/*802AFE60 002ACC60*/ PPC::Runtime::ASM::beq(.L_802AFE88);
/*802AFE64 002ACC64*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x4);
/*802AFE68 002ACC68*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*802AFE6C 002ACC6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802AFE70 002ACC70*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*802AFE74 002ACC74*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802AFE78 002ACC78*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*802AFE7C 002ACC7C*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x10);
/*802AFE80 002ACC80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AFE84 002ACC84*/ PPC::Runtime::ASM::bl(fn_802B3B74);
RUNTIME_PPC_JUMP_LABEL(.L_802AFE88, 0x802AFE88) //this is a jump label
/*802AFE88 002ACC88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802AFE8C 002ACC8C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*802AFE90 002ACC90*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802AFE94 002ACC94*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x30);
/*802AFE98 002ACC98*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x18);
/*802AFE9C 002ACC9C*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x1c);
/*802AFEA0 002ACCA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802AFEA4 002ACCA4*/ PPC::Runtime::ASM::bl(fn_802B3B74);
/*802AFEA8 002ACCA8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802AFEAC 002ACCAC*/ PPC::Runtime::ASM::b(.L_802AFEB4);
RUNTIME_PPC_JUMP_LABEL(.L_802AFEB0, 0x802AFEB0) //this is a jump label
/*802AFEB0 002ACCB0*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0xc);
RUNTIME_PPC_JUMP_LABEL(.L_802AFEB4, 0x802AFEB4) //this is a jump label
/*802AFEB4 002ACCB4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x80);
/*802AFEB8 002ACCB8*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*802AFEBC 002ACCBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802AFEC0 002ACCC0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802AFEC4 002ACCC4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x80);
/*802AFEC8 002ACCC8*/ PPC::Runtime::ASM::blr();
}