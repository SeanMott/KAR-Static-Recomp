//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800E9064(PPC::Runtime::GCContext* context)
{
/*800E9064 000E5E64*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800E9068 000E5E68*/ PPC::Runtime::ASM::mflr(context->r0);
/*800E906C 000E5E6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800E9070 000E5E70*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800E9074 000E5E74*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*800E9078 000E5E78*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800E907C 000E5E7C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800E9080 000E5E80*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800E9084 000E5E84*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800E9088 000E5E88*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_960 @ Get_MemoryOffset_HighBit);
/*800E908C 000E5E8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800E9090 000E5E90*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*800E9094 000E5E94*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*800E9098 000E5E98*/ PPC::Runtime::ASM::addi(context->r31, context->r3, MemoryOffset_960 @ Get_MemoryOffset_LowBit);
/*800E909C 000E5E9C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800E90A0 000E5EA0*/ PPC::Runtime::ASM::bne(.L_800E90B4);
/*800E90A4 000E5EA4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*800E90A8 000E5EA8*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x38);
/*800E90AC 000E5EAC*/ PPC::Runtime::ASM::li(context->r4, 0x113);
/*800E90B0 000E5EB0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E90B4, 0x800E90B4) //this is a jump label
/*800E90B4 000E5EB4*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*800E90B8 000E5EB8*/ PPC::Runtime::ASM::xor(context->r0, context->r30, context->r0);
/*800E90BC 000E5EBC*/ PPC::Runtime::ASM::srawi(context->r3, context->r0, 1);
/*800E90C0 000E5EC0*/ PPC::Runtime::ASM::and(context->r0, context->r0, context->r30);
/*800E90C4 000E5EC4*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r3);
/* 800E90C8 000E5EC8  54 00 0F FF */ srwi. context->r0 , context->r0 , 31
/*800E90CC 000E5ECC*/ PPC::Runtime::ASM::beq(.L_800E90FC);
/*800E90D0 000E5ED0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800E90D4 000E5ED4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800E90D8 000E5ED8*/ PPC::Runtime::ASM::beq(.L_800E90E4);
/*800E90DC 000E5EDC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800E90E0 000E5EE0*/ PPC::Runtime::ASM::b(.L_800E90E8);
RUNTIME_PPC_JUMP_LABEL(.L_800E90E4, 0x800E90E4) //this is a jump label
/*800E90E4 000E5EE4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800E90E8, 0x800E90E8) //this is a jump label
/*800E90E8 000E5EE8*/ PPC::Runtime::ASM::xor(context->r0, context->r4, context->r30);
/*800E90EC 000E5EEC*/ PPC::Runtime::ASM::srawi(context->r3, context->r0, 1);
/*800E90F0 000E5EF0*/ PPC::Runtime::ASM::and(context->r0, context->r0, context->r4);
/*800E90F4 000E5EF4*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r3);
/*800E90F8 000E5EF8*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
RUNTIME_PPC_JUMP_LABEL(.L_800E90FC, 0x800E90FC) //this is a jump label
/*800E90FC 000E5EFC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800E9100 000E5F00*/ PPC::Runtime::ASM::bne(.L_800E9124);
/*800E9104 000E5F04*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*800E9108 000E5F08*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x48);
/*800E910C 000E5F0C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800E9110 000E5F10*/ PPC::Runtime::ASM::bl(OSReport);
/*800E9114 000E5F14*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*800E9118 000E5F18*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x58);
/*800E911C 000E5F1C*/ PPC::Runtime::ASM::li(context->r4, 0x114);
/*800E9120 000E5F20*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E9124, 0x800E9124) //this is a jump label
/*800E9124 000E5F24*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*800E9128 000E5F28*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 3);
/*800E912C 000E5F2C*/ PPC::Runtime::ASM::lwzx(context->r31, context->r3, context->r0);
/*800E9130 000E5F30*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*800E9134 000E5F34*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800E9138 000E5F38*/ PPC::Runtime::ASM::bne(.L_800E914C);
/*800E913C 000E5F3C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6158 @ Get_MemoryOffset_SDA21);
/*800E9140 000E5F40*/ PPC::Runtime::ASM::li(context->r4, 0xab);
/*800E9144 000E5F44*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6160 @ Get_MemoryOffset_SDA21);
/*800E9148 000E5F48*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E914C, 0x800E914C) //this is a jump label
/*800E914C 000E5F4C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*800E9150 000E5F50*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800E9154 000E5F54*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800E9158 000E5F58*/ PPC::Runtime::ASM::fmuls(context->f1, context->f31, context->f0);
/*800E915C 000E5F5C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnimByFlags);
/*800E9160 000E5F60*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800E9164 000E5F64*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*800E9168 000E5F68*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*800E916C 000E5F6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800E9170 000E5F70*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800E9174 000E5F74*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800E9178 000E5F78*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800E917C 000E5F7C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800E9180 000E5F80*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800E9184 000E5F84*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800E9188 000E5F88*/ PPC::Runtime::ASM::blr();
}