//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803792B8.hpp"



void fn_8028ECE0(PPC::Runtime::GCContext* context)
{
/*8028ECE0 0028BAE0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8028ECE4 0028BAE4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028ECE8 0028BAE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028ECEC 0028BAEC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028ECF0 0028BAF0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8028ECF4 0028BAF4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 8028ECF8 0028BAF8  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8028ECFC 0028BAFC*/ PPC::Runtime::ASM::beq(.L_8028ED88);
/*8028ED00 0028BB00*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD410 @ Get_MemoryOffset_HighBit);
/*8028ED04 0028BB04*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x1c);
/*8028ED08 0028BB08*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BD410 @ Get_MemoryOffset_LowBit);
/*8028ED0C 0028BB0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028ED10 0028BB10*/ PPC::Runtime::ASM::beq(.L_8028ED5C);
/*8028ED14 0028BB14*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*8028ED18 0028BB18*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*8028ED1C 0028BB1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8028ED20 0028BB20*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8028ED24 0028BB24*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8028ED28 0028BB28*/ PPC::Runtime::ASM::beq(.L_8028ED34);
/*8028ED2C 0028BB2C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028ED30 0028BB30*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_8028ED34, 0x8028ED34) //this is a jump label
/*8028ED34 0028BB34*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x1c);
/*8028ED38 0028BB38*/ PPC::Runtime::ASM::beq(.L_8028ED5C);
/*8028ED3C 0028BB3C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*8028ED40 0028BB40*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1c);
/*8028ED44 0028BB44*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*8028ED48 0028BB48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8028ED4C 0028BB4C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8028ED50 0028BB50*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028ED54 0028BB54*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028ED58 0028BB58*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028ED5C, 0x8028ED5C) //this is a jump label
/*8028ED5C 0028BB5C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8028ED60 0028BB60*/ PPC::Runtime::ASM::beq(.L_8028ED78);
/*8028ED64 0028BB64*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD3EC @ Get_MemoryOffset_HighBit);
/*8028ED68 0028BB68*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028ED6C 0028BB6C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BD3EC @ Get_MemoryOffset_LowBit);
/*8028ED70 0028BB70*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028ED74 0028BB74*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDB84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8028ED78, 0x8028ED78) //this is a jump label
/*8028ED78 0028BB78*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*8028ED7C 0028BB7C*/ PPC::Runtime::ASM::ble(.L_8028ED88);
/*8028ED80 0028BB80*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028ED84 0028BB84*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028ED88, 0x8028ED88) //this is a jump label
/*8028ED88 0028BB88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028ED8C 0028BB8C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028ED90 0028BB90*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028ED94 0028BB94*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8028ED98 0028BB98*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028ED9C 0028BB9C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8028EDA0 0028BBA0*/ PPC::Runtime::ASM::blr();
}