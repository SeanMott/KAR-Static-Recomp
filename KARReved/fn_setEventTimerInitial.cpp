//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800DA668.hpp"
#include "fn_800EDB68.hpp"
#include "fn_800EDB68.hpp"



void fn_setEventTimerInitial(PPC::Runtime::GCContext* context)
{
/*800EDB88 000EA988*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800EDB8C 000EA98C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800EDB90 000EA990*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800EDB94 000EA994*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800EDB98 000EA998*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800EDB9C 000EA99C*/ PPC::Runtime::ASM::bl(fn_800DA668);
/* 800EDBA0 000EA9A0  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*800EDBA4 000EA9A4*/ PPC::Runtime::ASM::beq(.L_800EDCA0);
/*800EDBA8 000EA9A8*/ PPC::Runtime::ASM::li(context->r3, 0xb);
/*800EDBAC 000EA9AC*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*800EDBB0 000EA9B0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800EDBB4 000EA9B4*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*800EDBB8 000EA9B8*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD6F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EDBBC 000EA9BC*/ PPC::Runtime::ASM::li(context->r3, 0xc8);
/*800EDBC0 000EA9C0*/ PPC::Runtime::ASM::bl(fn__HSD_MemAlloc);
/*800EDBC4 000EA9C4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800EDBC8 000EA9C8*/ PPC::Runtime::ASM::lis(context->r4, fn_800EDB68 @ Get_MemoryOffset_HighBit);
/*800EDBCC 000EA9CC*/ PPC::Runtime::ASM::addi(context->r5, context->r4, fn_800EDB68 @ Get_MemoryOffset_LowBit);
/*800EDBD0 000EA9D0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EDBD4 000EA9D4*/ PPC::Runtime::ASM::li(context->r4, 0xb);
/*800EDBD8 000EA9D8*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/*800EDBDC 000EA9DC*/ PPC::Runtime::ASM::bl(fn_GObj_AddUserData);
/*800EDBE0 000EA9E0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800EDBE4 000EA9E4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800EDBE8 000EA9E8*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*800EDBEC 000EA9EC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800EDBF0 000EA9F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800EDBF4 000EA9F4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*800EDBF8 000EA9F8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*800EDBFC 000EA9FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800EDC00 000EAA00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800EDC04 000EAA04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*800EDC08 000EAA08*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xa);
/*800EDC0C 000EAA0C*/ PPC::Runtime::ASM::ble(.L_800EDC28);
/*800EDC10 000EAA10*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_968 @ Get_MemoryOffset_HighBit);
/*800EDC14 000EAA14*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_969 @ Get_MemoryOffset_HighBit);
/*800EDC18 000EAA18*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_968 @ Get_MemoryOffset_LowBit);
/*800EDC1C 000EAA1C*/ PPC::Runtime::ASM::li(context->r4, 0x49);
/*800EDC20 000EAA20*/ PPC::Runtime::ASM::addi(context->r5, context->r5, MemoryOffset_969 @ Get_MemoryOffset_LowBit);
/*800EDC24 000EAA24*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800EDC28, 0x800EDC28) //this is a jump label
/*800EDC28 000EAA28*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800EDC2C 000EAA2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*800EDC30 000EAA30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*800EDC34 000EAA34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*800EDC38 000EAA38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*800EDC3C 000EAA3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*800EDC40 000EAA40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*800EDC44 000EAA44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*800EDC48 000EAA48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*800EDC4C 000EAA4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*800EDC50 000EAA50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*800EDC54 000EAA54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*800EDC58 000EAA58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*800EDC5C 000EAA5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r31));
/*800EDC60 000EAA60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r31));
/*800EDC64 000EAA64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r31));
/*800EDC68 000EAA68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*800EDC6C 000EAA6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r31));
/*800EDC70 000EAA70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r31));
/*800EDC74 000EAA74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800EDC78 000EAA78*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800EDC7C 000EAA7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800EDC80 000EAA80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800EDC84 000EAA84*/ PPC::Runtime::ASM::subf(context->r3, context->r3, context->r0);
/*800EDC88 000EAA88*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*800EDC8C 000EAA8C*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*800EDC90 000EAA90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800EDC94 000EAA94*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*800EDC98 000EAA98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*800EDC9C 000EAA9C*/ PPC::Runtime::ASM::b(.L_800EDCA8);
RUNTIME_PPC_JUMP_LABEL(.L_800EDCA0, 0x800EDCA0) //this is a jump label
/*800EDCA0 000EAAA0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800EDCA4 000EAAA4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD6F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_800EDCA8, 0x800EDCA8) //this is a jump label
/*800EDCA8 000EAAA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800EDCAC 000EAAAC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800EDCB0 000EAAB0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800EDCB4 000EAAB4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800EDCB8 000EAAB8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800EDCBC 000EAABC*/ PPC::Runtime::ASM::blr();
}