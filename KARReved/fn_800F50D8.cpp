//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800F50D8(PPC::Runtime::GCContext* context)
{
/*800F50D8 000F1ED8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800F50DC 000F1EDC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F50E0 000F1EE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800F50E4 000F1EE4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800F50E8 000F1EE8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800F50EC 000F1EEC*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*800F50F0 000F1EF0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F50F4 000F1EF4*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*800F50F8 000F1EF8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/* 800F50FC 000F1EFC  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*800F5100 000F1F00*/ PPC::Runtime::ASM::beq(.L_800F5184);
/*800F5104 000F1F04*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*800F5108 000F1F08*/ PPC::Runtime::ASM::lis(context->r3, StructWithStructs_80 @ Get_MemoryOffset_HighBit);
/*800F510C 000F1F0C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, StructWithStructs_80 @ Get_MemoryOffset_LowBit);
/*800F5110 000F1F10*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800F5114 000F1F14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800F5118 000F1F18*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800F511C 000F1F1C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*800F5120 000F1F20*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800F5124 000F1F24*/ PPC::Runtime::ASM::beq(.L_800F5138);
/*800F5128 000F1F28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800F512C 000F1F2C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800F5130 000F1F30*/ PPC::Runtime::ASM::beq(.L_800F5138);
/*800F5134 000F1F34*/ PPC::Runtime::ASM::li(context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800F5138, 0x800F5138) //this is a jump label
/*800F5138 000F1F38*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*800F513C 000F1F3C*/ PPC::Runtime::ASM::bne(.L_800F5158);
/*800F5140 000F1F40*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_979 @ Get_MemoryOffset_HighBit);
/*800F5144 000F1F44*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_982 @ Get_MemoryOffset_HighBit);
/*800F5148 000F1F48*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_979 @ Get_MemoryOffset_LowBit);
/*800F514C 000F1F4C*/ PPC::Runtime::ASM::li(context->r4, 0x215);
/*800F5150 000F1F50*/ PPC::Runtime::ASM::addi(context->r5, context->r5, MemoryOffset_982 @ Get_MemoryOffset_LowBit);
/*800F5154 000F1F54*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800F5158, 0x800F5158) //this is a jump label
/*800F5158 000F1F58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800F515C 000F1F5C*/ PPC::Runtime::ASM::lis(context->r3, StructWithStructs_80 @ Get_MemoryOffset_HighBit);
/*800F5160 000F1F60*/ PPC::Runtime::ASM::addi(context->r5, context->r3, StructWithStructs_80 @ Get_MemoryOffset_LowBit);
/*800F5164 000F1F64*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800F5168 000F1F68*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800F516C 000F1F6C*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*800F5170 000F1F70*/ PPC::Runtime::ASM::lwzx(context->r6, context->r5, context->r0);
/*800F5174 000F1F74*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*800F5178 000F1F78*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*800F517C 000F1F7C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*800F5180 000F1F80*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_800F5184, 0x800F5184) //this is a jump label
/*800F5184 000F1F84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800F5188 000F1F88*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800F518C 000F1F8C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800F5190 000F1F90*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F5194 000F1F94*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800F5198 000F1F98*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F519C 000F1F9C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800F51A0 000F1FA0*/ PPC::Runtime::ASM::blr();
}