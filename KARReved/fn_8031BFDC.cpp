//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8031BFDC(PPC::Runtime::GCContext* context)
{
/*8031BFDC 00318DDC*/ PPC::Runtime::ASM::cmplw(context->r3, context->r4);
/*8031BFE0 00318DE0*/ PPC::Runtime::ASM::beqlr();
/*8031BFE4 00318DE4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8031BFE8 00318DE8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8031BFEC 00318DEC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8031BFF0 00318DF0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*8031BFF4 00318DF4*/ PPC::Runtime::ASM::mfcr(context->r0);
/*8031BFF8 00318DF8*/ PPC::Runtime::ASM::subi(context->r8, context->r4, 0x4);
/*8031BFFC 00318DFC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r4));
/*8031C000 00318E00*/ PPC::Runtime::ASM::srwi(context->r7, context->r0, 31);
/*8031C004 00318E04*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*8031C008 00318E08*/ PPC::Runtime::ASM::mfcr(context->r0);
/*8031C00C 00318E0C*/ PPC::Runtime::ASM::cmplwi(context->r7, 0x0);
/*8031C010 00318E10*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
/*8031C014 00318E14*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*8031C018 00318E18*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 5);
/*8031C01C 00318E1C*/ PPC::Runtime::ASM::beq(.L_8031C074);
/* 8031C020 00318E20  54 80 06 3F */ clrlwi. context->r0 , context->r4 , 24
/*8031C024 00318E24*/ PPC::Runtime::ASM::beq(.L_8031C074);
/*8031C028 00318E28*/ PPC::Runtime::ASM::mr(context->r4, context->r8);
/*8031C02C 00318E2C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*8031C030 00318E30*/ PPC::Runtime::ASM::b(.L_8031C038);
RUNTIME_PPC_JUMP_LABEL(.L_8031C034, 0x8031C034) //this is a jump label
/*8031C034 00318E34*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_8031C038, 0x8031C038) //this is a jump label
/*8031C038 00318E38*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8031C03C 00318E3C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8031C040 00318E40*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f1);
/*8031C044 00318E44*/ PPC::Runtime::ASM::blt(.L_8031C034);
RUNTIME_PPC_JUMP_LABEL(.L_8031C048, 0x8031C048) //this is a jump label
/*8031C048 00318E48*/ PPC::Runtime::ASM::lfsu(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r4));
/*8031C04C 00318E4C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*8031C050 00318E50*/ PPC::Runtime::ASM::bge(.L_8031C048);
/*8031C054 00318E54*/ PPC::Runtime::ASM::cmplw(context->r3, context->r4);
/*8031C058 00318E58*/ PPC::Runtime::ASM::bgelr();
/*8031C05C 00318E5C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8031C060 00318E60*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8031C064 00318E64*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*8031C068 00318E68*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8031C06C 00318E6C*/ PPC::Runtime::ASM::b(.L_8031C038);
/*8031C070 00318E70*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8031C074, 0x8031C074) //this is a jump label
/* 8031C074 00318E74  54 80 06 3F */ clrlwi. context->r0 , context->r4 , 24
/*8031C078 00318E78*/ PPC::Runtime::ASM::beq(.L_8031C0A8);
/*8031C07C 00318E7C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r8);
/*8031C080 00318E80*/ PPC::Runtime::ASM::beqlr();
RUNTIME_PPC_JUMP_LABEL(.L_8031C084, 0x8031C084) //this is a jump label
/*8031C084 00318E84*/ PPC::Runtime::ASM::subi(context->r8, context->r8, 0x4);
/*8031C088 00318E88*/ PPC::Runtime::ASM::cmplw(context->r3, context->r8);
/*8031C08C 00318E8C*/ PPC::Runtime::ASM::beq(.L_8031C09C);
/*8031C090 00318E90*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*8031C094 00318E94*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*8031C098 00318E98*/ PPC::Runtime::ASM::bge(.L_8031C084);
RUNTIME_PPC_JUMP_LABEL(.L_8031C09C, 0x8031C09C) //this is a jump label
/*8031C09C 00318E9C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r8);
/*8031C0A0 00318EA0*/ PPC::Runtime::ASM::bne(.L_8031C0E0);
/*8031C0A4 00318EA4*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8031C0A8, 0x8031C0A8) //this is a jump label
/*8031C0A8 00318EA8*/ PPC::Runtime::ASM::cmplwi(context->r7, 0x0);
/*8031C0AC 00318EAC*/ PPC::Runtime::ASM::beq(.L_8031C0E0);
/*8031C0B0 00318EB0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*8031C0B4 00318EB4*/ PPC::Runtime::ASM::addi(context->r0, context->r8, 0x4);
/*8031C0B8 00318EB8*/ PPC::Runtime::ASM::b(.L_8031C0C0);
RUNTIME_PPC_JUMP_LABEL(.L_8031C0BC, 0x8031C0BC) //this is a jump label
/*8031C0BC 00318EBC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_8031C0C0, 0x8031C0C0) //this is a jump label
/*8031C0C0 00318EC0*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8031C0C4 00318EC4*/ PPC::Runtime::ASM::beq(.L_8031C0D4);
/*8031C0C8 00318EC8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8031C0CC 00318ECC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*8031C0D0 00318ED0*/ PPC::Runtime::ASM::blt(.L_8031C0BC);
RUNTIME_PPC_JUMP_LABEL(.L_8031C0D4, 0x8031C0D4) //this is a jump label
/*8031C0D4 00318ED4*/ PPC::Runtime::ASM::addi(context->r0, context->r8, 0x4);
/*8031C0D8 00318ED8*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8031C0DC 00318EDC*/ PPC::Runtime::ASM::beqlr();
RUNTIME_PPC_JUMP_LABEL(.L_8031C0E0, 0x8031C0E0) //this is a jump label
/*8031C0E0 00318EE0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8031C0E4 00318EE4*/ PPC::Runtime::ASM::mr(context->r7, context->r8);
/*8031C0E8 00318EE8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*8031C0EC 00318EEC*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x4);
/*8031C0F0 00318EF0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8031C0F4 00318EF4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8031C0F8 00318EF8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*8031C0FC 00318EFC*/ PPC::Runtime::ASM::b(.L_8031C104);
RUNTIME_PPC_JUMP_LABEL(.L_8031C100, 0x8031C100) //this is a jump label
/*8031C100 00318F00*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_8031C104, 0x8031C104) //this is a jump label
/*8031C104 00318F04*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8031C108 00318F08*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8031C10C 00318F0C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f1);
/*8031C110 00318F10*/ PPC::Runtime::ASM::blt(.L_8031C100);
RUNTIME_PPC_JUMP_LABEL(.L_8031C114, 0x8031C114) //this is a jump label
/*8031C114 00318F14*/ PPC::Runtime::ASM::lfsu(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r7));
/*8031C118 00318F18*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*8031C11C 00318F1C*/ PPC::Runtime::ASM::bge(.L_8031C114);
/*8031C120 00318F20*/ PPC::Runtime::ASM::cmplw(context->r6, context->r7);
/*8031C124 00318F24*/ PPC::Runtime::ASM::bge(.L_8031C13C);
/*8031C128 00318F28*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*8031C12C 00318F2C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8031C130 00318F30*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x4);
/*8031C134 00318F34*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*8031C138 00318F38*/ PPC::Runtime::ASM::b(.L_8031C104);
RUNTIME_PPC_JUMP_LABEL(.L_8031C13C, 0x8031C13C) //this is a jump label
/*8031C13C 00318F3C*/ PPC::Runtime::ASM::mr(context->r3, context->r6);
/*8031C140 00318F40*/ PPC::Runtime::ASM::blr();
}