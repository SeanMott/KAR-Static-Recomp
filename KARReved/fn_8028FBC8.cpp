//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80296894.hpp"



void fn_8028FBC8(PPC::Runtime::GCContext* context)
{
/*8028FBC8 0028C9C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8028FBCC 0028C9CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028FBD0 0028C9D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8028FBD4 0028C9D4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8028FBD8 0028C9D8*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8028FBDC 0028C9DC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/* 8028FBE0 0028C9E0  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8028FBE4 0028C9E4*/ PPC::Runtime::ASM::beq(.L_8028FC8C);
/*8028FBE8 0028C9E8*/ PPC::Runtime::ASM::beq(.L_8028FC7C);
/*8028FBEC 0028C9EC*/ PPC::Runtime::ASM::beq(.L_8028FC7C);
/*8028FBF0 0028C9F0*/ PPC::Runtime::ASM::beq(.L_8028FC7C);
/*8028FBF4 0028C9F4*/ PPC::Runtime::ASM::addi(context->r7, context->r30, 0xc);
/*8028FBF8 0028C9F8*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8028FBFC 0028C9FC*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8028FC00 0028CA00*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8028FC04 0028CA04*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*8028FC08 0028CA08*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x10);
/*8028FC0C 0028CA0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8028FC10 0028CA10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028FC14 0028CA14*/ PPC::Runtime::ASM::bl(fn_80296894);
/*8028FC18 0028CA18*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*8028FC1C 0028CA1C*/ PPC::Runtime::ASM::beq(.L_8028FC50);
/*8028FC20 0028CA20*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*8028FC24 0028CA24*/ PPC::Runtime::ASM::beq(.L_8028FC50);
/*8028FC28 0028CA28*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*8028FC2C 0028CA2C*/ PPC::Runtime::ASM::beq(.L_8028FC50);
/*8028FC30 0028CA30*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*8028FC34 0028CA34*/ PPC::Runtime::ASM::beq(.L_8028FC50);
/*8028FC38 0028CA38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8028FC3C 0028CA3C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028FC40 0028CA40*/ PPC::Runtime::ASM::beq(.L_8028FC50);
/*8028FC44 0028CA44*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028FC48 0028CA48*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD9A4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028FC4C 0028CA4C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028FC50, 0x8028FC50) //this is a jump label
/*8028FC50 0028CA50*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8028FC54 0028CA54*/ PPC::Runtime::ASM::beq(.L_8028FC7C);
/*8028FC58 0028CA58*/ PPC::Runtime::ASM::beq(.L_8028FC7C);
/*8028FC5C 0028CA5C*/ PPC::Runtime::ASM::beq(.L_8028FC7C);
/*8028FC60 0028CA60*/ PPC::Runtime::ASM::beq(.L_8028FC7C);
/*8028FC64 0028CA64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028FC68 0028CA68*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028FC6C 0028CA6C*/ PPC::Runtime::ASM::beq(.L_8028FC7C);
/*8028FC70 0028CA70*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028FC74 0028CA74*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD9A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028FC78 0028CA78*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028FC7C, 0x8028FC7C) //this is a jump label
/*8028FC7C 0028CA7C*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*8028FC80 0028CA80*/ PPC::Runtime::ASM::ble(.L_8028FC8C);
/*8028FC84 0028CA84*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028FC88 0028CA88*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028FC8C, 0x8028FC8C) //this is a jump label
/*8028FC8C 0028CA8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8028FC90 0028CA90*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028FC94 0028CA94*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8028FC98 0028CA98*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8028FC9C 0028CA9C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028FCA0 0028CAA0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8028FCA4 0028CAA4*/ PPC::Runtime::ASM::blr();
}