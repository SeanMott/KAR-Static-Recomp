//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8037AFD0.hpp"
#include "fn_8037B028.hpp"
#include "fn_8037AFD0.hpp"
#include "fn_8037B028.hpp"
#include "fn_8037AFD0.hpp"
#include "fn_8037B028.hpp"
#include "fn_8037B33C.hpp"



void fn_8032EBC8(PPC::Runtime::GCContext* context)
{
/*8032EBC8 0032B9C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8032EBCC 0032B9CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8032EBD0 0032B9D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/* 8032EBD4 0032B9D4  54 80 06 3F */ clrlwi. context->r0 , context->r4 , 24
/*8032EBD8 0032B9D8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804E3808 @ Get_MemoryOffset_HighBit);
/*8032EBDC 0032B9DC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8032EBE0 0032B9E0*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_804E3808 @ Get_MemoryOffset_LowBit);
/*8032EBE4 0032B9E4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8032EBE8 0032B9E8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8032EBEC 0032B9EC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8032EBF0 0032B9F0*/ PPC::Runtime::ASM::beq(.L_8032ECE8);
/*8032EBF4 0032B9F4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8032EBF8 0032B9F8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8032EBFC 0032B9FC*/ PPC::Runtime::ASM::li(context->r5, lbl_805DA908 @ Get_MemoryOffset_SDA21);
/*8032EC00 0032BA00*/ PPC::Runtime::ASM::li(context->r6, lbl_805DA900 @ Get_MemoryOffset_SDA21);
/*8032EC04 0032BA04*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8032EC08 0032BA08*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8032EC0C 0032BA0C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*8032EC10 0032BA10*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xf40);
/*8032EC14 0032BA14*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*8032EC18 0032BA18*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8032EC1C 0032BA1C*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x50);
/*8032EC20 0032BA20*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8032EC24 0032BA24*/ PPC::Runtime::ASM::bl(fn_8037AFD0);
/*8032EC28 0032BA28*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*8032EC2C 0032BA2C*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x50);
/*8032EC30 0032BA30*/ PPC::Runtime::ASM::li(context->r4, 0x27a4);
/*8032EC34 0032BA34*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8032EC38 0032BA38*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8032EC3C 0032BA3C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8032EC40 0032BA40*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*8032EC44 0032BA44*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8032EC48 0032BA48*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8032EC4C 0032BA4C*/ PPC::Runtime::ASM::li(context->r5, lbl_805DA908 @ Get_MemoryOffset_SDA21);
/*8032EC50 0032BA50*/ PPC::Runtime::ASM::li(context->r6, lbl_805DA900 @ Get_MemoryOffset_SDA21);
/*8032EC54 0032BA54*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8032EC58 0032BA58*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8032EC5C 0032BA5C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*8032EC60 0032BA60*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xf54);
/*8032EC64 0032BA64*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*8032EC68 0032BA68*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8032EC6C 0032BA6C*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x9c);
/*8032EC70 0032BA70*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8032EC74 0032BA74*/ PPC::Runtime::ASM::bl(fn_8037AFD0);
/*8032EC78 0032BA78*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*8032EC7C 0032BA7C*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x9c);
/*8032EC80 0032BA80*/ PPC::Runtime::ASM::li(context->r4, 0x27a4);
/*8032EC84 0032BA84*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8032EC88 0032BA88*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8032EC8C 0032BA8C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8032EC90 0032BA90*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*8032EC94 0032BA94*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8032EC98 0032BA98*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8032EC9C 0032BA9C*/ PPC::Runtime::ASM::li(context->r5, lbl_805DA908 @ Get_MemoryOffset_SDA21);
/*8032ECA0 0032BAA0*/ PPC::Runtime::ASM::li(context->r6, lbl_805DA900 @ Get_MemoryOffset_SDA21);
/*8032ECA4 0032BAA4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8032ECA8 0032BAA8*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8032ECAC 0032BAAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*8032ECB0 0032BAB0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xf68);
/*8032ECB4 0032BAB4*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*8032ECB8 0032BAB8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8032ECBC 0032BABC*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0xe8);
/*8032ECC0 0032BAC0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8032ECC4 0032BAC4*/ PPC::Runtime::ASM::bl(fn_8037AFD0);
/*8032ECC8 0032BAC8*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*8032ECCC 0032BACC*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0xe8);
/*8032ECD0 0032BAD0*/ PPC::Runtime::ASM::li(context->r4, 0x27a4);
/*8032ECD4 0032BAD4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8032ECD8 0032BAD8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8032ECDC 0032BADC*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8032ECE0 0032BAE0*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*8032ECE4 0032BAE4*/ PPC::Runtime::ASM::b(.L_8032ED0C);
RUNTIME_PPC_JUMP_LABEL(.L_8032ECE8, 0x8032ECE8) //this is a jump label
/*8032ECE8 0032BAE8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8032ECEC 0032BAEC*/ PPC::Runtime::ASM::mr(context->r30, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_8032ECF0, 0x8032ECF0) //this is a jump label
/*8032ECF0 0032BAF0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x50);
/*8032ECF4 0032BAF4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8032ECF8 0032BAF8*/ PPC::Runtime::ASM::bl(fn_8037B33C);
/*8032ECFC 0032BAFC*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8032ED00 0032BB00*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4c);
/*8032ED04 0032BB04*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x3);
/*8032ED08 0032BB08*/ PPC::Runtime::ASM::blt(.L_8032ECF0);
RUNTIME_PPC_JUMP_LABEL(.L_8032ED0C, 0x8032ED0C) //this is a jump label
/*8032ED0C 0032BB0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8032ED10 0032BB10*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8032ED14 0032BB14*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8032ED18 0032BB18*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8032ED1C 0032BB1C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8032ED20 0032BB20*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8032ED24 0032BB24*/ PPC::Runtime::ASM::blr();
}