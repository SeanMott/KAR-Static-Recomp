//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80088078(PPC::Runtime::GCContext* context)
{
/*80088078 00084E78*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8008807C 00084E7C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80088080 00084E80*/ PPC::Runtime::ASM::lis(context->r4, String_ "NotFoundDbPositionStruc" Get_MemoryOffset_HighBit);
/*80088084 00084E84*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_603 @ Get_MemoryOffset_HighBit);
/*80088088 00084E88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8008808C 00084E8C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80088090 00084E90*/ PPC::Runtime::ASM::addi(context->r31, context->r3, MemoryOffset_603 @ Get_MemoryOffset_LowBit);
/*80088094 00084E94*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80088098 00084E98*/ PPC::Runtime::ASM::addi(context->r30, context->r4, String_ "NotFoundDbPositionStruc" Get_MemoryOffset_LowBit);
/*8008809C 00084E9C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800880A0 00084EA0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800880A4 00084EA4*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800880A8 00084EA8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r5));
/*800880AC 00084EAC*/ PPC::Runtime::ASM::b(.L_800880E8);
RUNTIME_PPC_JUMP_LABEL(.L_800880B0, 0x800880B0) //this is a jump label
/*800880B0 00084EB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*800880B4 00084EB4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*800880B8 00084EB8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800880BC 00084EBC*/ PPC::Runtime::ASM::bne(.L_800880DC);
/*800880C0 00084EC0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800880C4 00084EC4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800880C8 00084EC8*/ PPC::Runtime::ASM::bl(OSReport);
/*800880CC 00084ECC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800880D0 00084ED0*/ PPC::Runtime::ASM::li(context->r4, 0x7cb);
/*800880D4 00084ED4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D5750 @ Get_MemoryOffset_SDA21);
/*800880D8 00084ED8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800880DC, 0x800880DC) //this is a jump label
/*800880DC 00084EDC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800880E0 00084EE0*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*800880E4 00084EE4*/ PPC::Runtime::ASM::mr(context->r28, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_800880E8, 0x800880E8) //this is a jump label
/*800880E8 00084EE8*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*800880EC 00084EEC*/ PPC::Runtime::ASM::bne(.L_800880B0);
/*800880F0 00084EF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800880F4 00084EF4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800880F8 00084EF8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800880FC 00084EFC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80088100 00084F00*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80088104 00084F04*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80088108 00084F08*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8008810C 00084F0C*/ PPC::Runtime::ASM::blr();
}