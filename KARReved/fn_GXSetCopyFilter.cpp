//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_GXSetCopyFilter(PPC::Runtime::GCContext* context)
{
/*803CCA34 003C9834*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/* 803CCA38 003C9838  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803CCA3C 003C983C*/ PPC::Runtime::ASM::stmw(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803CCA40 003C9840*/ PPC::Runtime::ASM::beq(.L_803CCB68);
/*803CCA44 003C9844*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*803CCA48 003C9848*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r4));
/*803CCA4C 003C984C*/ PPC::Runtime::ASM::slwi(context->r30, context->r0, 4);
/*803CCA50 003C9850*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CCA54 003C9854*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r4));
/*803CCA58 003C9858*/ PPC::Runtime::ASM::slwi(context->r25, context->r3, 4);
/*803CCA5C 003C985C*/ PPC::Runtime::ASM::lbz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r4));
/*803CCA60 003C9860*/ PPC::Runtime::ASM::rlwimi(context->r30, context->r8, 0, 28, 31);
/*803CCA64 003C9864*/ PPC::Runtime::ASM::lbz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*803CCA68 003C9868*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r4));
/*803CCA6C 003C986C*/ PPC::Runtime::ASM::rlwimi(context->r25, context->r10, 0, 28, 31);
/*803CCA70 003C9870*/ PPC::Runtime::ASM::slwi(context->r27, context->r11, 8);
/*803CCA74 003C9874*/ PPC::Runtime::ASM::lbz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*803CCA78 003C9878*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r4));
/*803CCA7C 003C987C*/ PPC::Runtime::ASM::slwi(context->r26, context->r9, 8);
/*803CCA80 003C9880*/ PPC::Runtime::ASM::lbz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r4));
/*803CCA84 003C9884*/ PPC::Runtime::ASM::rlwimi(context->r27, context->r30, 0, 24, 31);
/*803CCA88 003C9888*/ PPC::Runtime::ASM::lbz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*803CCA8C 003C988C*/ PPC::Runtime::ASM::slwi(context->r23, context->r7, 4);
/*803CCA90 003C9890*/ PPC::Runtime::ASM::lbz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*803CCA94 003C9894*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r4));
/*803CCA98 003C9898*/ PPC::Runtime::ASM::slwi(context->r24, context->r3, 8);
/*803CCA9C 003C989C*/ PPC::Runtime::ASM::rlwimi(context->r23, context->r12, 0, 28, 31);
/*803CCAA0 003C98A0*/ PPC::Runtime::ASM::lbz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r4));
/*803CCAA4 003C98A4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 4);
/*803CCAA8 003C98A8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r29, 0, 28, 31);
/*803CCAAC 003C98AC*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*803CCAB0 003C98B0*/ PPC::Runtime::ASM::slwi(context->r28, context->r28, 12);
/*803CCAB4 003C98B4*/ PPC::Runtime::ASM::lbz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r4));
/*803CCAB8 003C98B8*/ PPC::Runtime::ASM::rlwimi(context->r28, context->r27, 0, 20, 31);
/*803CCABC 003C98BC*/ PPC::Runtime::ASM::lbz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803CCAC0 003C98C0*/ PPC::Runtime::ASM::rlwimi(context->r24, context->r23, 0, 24, 31);
/*803CCAC4 003C98C4*/ PPC::Runtime::ASM::lbz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r4));
/*803CCAC8 003C98C8*/ PPC::Runtime::ASM::slwi(context->r23, context->r8, 8);
/*803CCACC 003C98CC*/ PPC::Runtime::ASM::lbz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r4));
/*803CCAD0 003C98D0*/ PPC::Runtime::ASM::rlwimi(context->r26, context->r25, 0, 24, 31);
/*803CCAD4 003C98D4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r4));
/*803CCAD8 003C98D8*/ PPC::Runtime::ASM::slwi(context->r25, context->r10, 12);
/*803CCADC 003C98DC*/ PPC::Runtime::ASM::lbz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r4));
/*803CCAE0 003C98E0*/ PPC::Runtime::ASM::rlwimi(context->r23, context->r0, 0, 24, 31);
/*803CCAE4 003C98E4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17, context->r4));
/*803CCAE8 003C98E8*/ PPC::Runtime::ASM::slwi(context->r27, context->r31, 12);
/*803CCAEC 003C98EC*/ PPC::Runtime::ASM::lbz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r4));
/*803CCAF0 003C98F0*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r4));
/*803CCAF4 003C98F4*/ PPC::Runtime::ASM::slwi(context->r4, context->r29, 16);
/*803CCAF8 003C98F8*/ PPC::Runtime::ASM::slwi(context->r7, context->r7, 12);
/*803CCAFC 003C98FC*/ PPC::Runtime::ASM::slwi(context->r10, context->r12, 16);
/*803CCB00 003C9900*/ PPC::Runtime::ASM::rlwimi(context->r27, context->r26, 0, 20, 31);
/*803CCB04 003C9904*/ PPC::Runtime::ASM::slwi(context->r12, context->r3, 16);
/*803CCB08 003C9908*/ PPC::Runtime::ASM::rlwimi(context->r7, context->r23, 0, 20, 31);
/*803CCB0C 003C990C*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r28, 0, 16, 31);
/*803CCB10 003C9910*/ PPC::Runtime::ASM::slwi(context->r3, context->r30, 20);
/*803CCB14 003C9914*/ PPC::Runtime::ASM::rlwimi(context->r25, context->r24, 0, 20, 31);
/*803CCB18 003C9918*/ PPC::Runtime::ASM::slwi(context->r9, context->r9, 16);
/*803CCB1C 003C991C*/ PPC::Runtime::ASM::rlwimi(context->r10, context->r27, 0, 16, 31);
/*803CCB20 003C9920*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r4, 0, 12, 31);
/*803CCB24 003C9924*/ PPC::Runtime::ASM::rlwimi(context->r12, context->r7, 0, 16, 31);
/*803CCB28 003C9928*/ PPC::Runtime::ASM::clrlwi(context->r7, context->r3, 8);
/*803CCB2C 003C992C*/ PPC::Runtime::ASM::slwi(context->r3, context->r11, 20);
/*803CCB30 003C9930*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r10, 0, 12, 31);
/*803CCB34 003C9934*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r3, 8);
/*803CCB38 003C9938*/ PPC::Runtime::ASM::slwi(context->r3, context->r8, 20);
/*803CCB3C 003C993C*/ PPC::Runtime::ASM::rlwimi(context->r9, context->r25, 0, 16, 31);
/*803CCB40 003C9940*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r9, 0, 12, 31);
/*803CCB44 003C9944*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 20);
/*803CCB48 003C9948*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r12, 0, 12, 31);
/*803CCB4C 003C994C*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r3, 8);
/*803CCB50 003C9950*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 8);
/*803CCB54 003C9954*/ PPC::Runtime::ASM::oris(context->r8, context->r7, 0x100);
/*803CCB58 003C9958*/ PPC::Runtime::ASM::oris(context->r7, context->r4, 0x200);
/*803CCB5C 003C995C*/ PPC::Runtime::ASM::oris(context->r9, context->r3, 0x300);
/*803CCB60 003C9960*/ PPC::Runtime::ASM::oris(context->r10, context->r0, 0x400);
/*803CCB64 003C9964*/ PPC::Runtime::ASM::b(.L_803CCB88);
RUNTIME_PPC_JUMP_LABEL(.L_803CCB68, 0x803CCB68) //this is a jump label
/*803CCB68 003C9968*/ PPC::Runtime::ASM::lis(context->r8, 0x166);
/*803CCB6C 003C996C*/ PPC::Runtime::ASM::lis(context->r7, 0x266);
/*803CCB70 003C9970*/ PPC::Runtime::ASM::lis(context->r4, 0x366);
/*803CCB74 003C9974*/ PPC::Runtime::ASM::lis(context->r3, 0x466);
/*803CCB78 003C9978*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x6666);
/*803CCB7C 003C997C*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x6666);
/*803CCB80 003C9980*/ PPC::Runtime::ASM::addi(context->r9, context->r4, 0x6666);
/*803CCB84 003C9984*/ PPC::Runtime::ASM::addi(context->r10, context->r3, 0x6666);
RUNTIME_PPC_JUMP_LABEL(.L_803CCB88, 0x803CCB88) //this is a jump label
/*803CCB88 003C9988*/ PPC::Runtime::ASM::li(context->r4, 0x61);
/*803CCB8C 003C998C*/ PPC::Runtime::ASM::lis(context->r3, 0xcc01);
/*803CCB90 003C9990*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/* 803CCB94 003C9994  54 A0 06 3F */ clrlwi. context->r0 , context->r5 , 24
/*803CCB98 003C9998*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*803CCB9C 003C999C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*803CCBA0 003C99A0*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*803CCBA4 003C99A4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*803CCBA8 003C99A8*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*803CCBAC 003C99AC*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*803CCBB0 003C99B0*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*803CCBB4 003C99B4*/ PPC::Runtime::ASM::beq(.L_803CCC1C);
/*803CCBB8 003C99B8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*803CCBBC 003C99BC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r6));
/*803CCBC0 003C99C0*/ PPC::Runtime::ASM::oris(context->r5, context->r0, 0x5300);
/*803CCBC4 003C99C4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*803CCBC8 003C99C8*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r6));
/*803CCBCC 003C99CC*/ PPC::Runtime::ASM::rlwinm(context->r7, context->r5, 0, 26, 19);
/*803CCBD0 003C99D0*/ PPC::Runtime::ASM::slwi(context->r5, context->r3, 6);
/*803CCBD4 003C99D4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r6));
/*803CCBD8 003C99D8*/ PPC::Runtime::ASM::or(context->r7, context->r7, context->r5);
/*803CCBDC 003C99DC*/ PPC::Runtime::ASM::oris(context->r8, context->r0, 0x5400);
/*803CCBE0 003C99E0*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r6));
/*803CCBE4 003C99E4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r6));
/*803CCBE8 003C99E8*/ PPC::Runtime::ASM::rlwinm(context->r6, context->r7, 0, 20, 13);
/*803CCBEC 003C99EC*/ PPC::Runtime::ASM::slwi(context->r4, context->r4, 12);
/*803CCBF0 003C99F0*/ PPC::Runtime::ASM::or(context->r6, context->r6, context->r4);
/*803CCBF4 003C99F4*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r8, 0, 26, 19);
/*803CCBF8 003C99F8*/ PPC::Runtime::ASM::slwi(context->r3, context->r3, 6);
/*803CCBFC 003C99FC*/ PPC::Runtime::ASM::or(context->r3, context->r4, context->r3);
/*803CCC00 003C9A00*/ PPC::Runtime::ASM::rlwinm(context->r6, context->r6, 0, 14, 7);
/*803CCC04 003C9A04*/ PPC::Runtime::ASM::slwi(context->r4, context->r5, 18);
/*803CCC08 003C9A08*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r3, 0, 20, 13);
/*803CCC0C 003C9A0C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 12);
/*803CCC10 003C9A10*/ PPC::Runtime::ASM::or(context->r6, context->r6, context->r4);
/*803CCC14 003C9A14*/ PPC::Runtime::ASM::or(context->r7, context->r3, context->r0);
/*803CCC18 003C9A18*/ PPC::Runtime::ASM::b(.L_803CCC2C);
RUNTIME_PPC_JUMP_LABEL(.L_803CCC1C, 0x803CCC1C) //this is a jump label
/*803CCC1C 003C9A1C*/ PPC::Runtime::ASM::lis(context->r4, 0x5359);
/*803CCC20 003C9A20*/ PPC::Runtime::ASM::lis(context->r3, 0x5400);
/*803CCC24 003C9A24*/ PPC::Runtime::ASM::addi(context->r6, context->r4, 0x5000);
/*803CCC28 003C9A28*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x15);
RUNTIME_PPC_JUMP_LABEL(.L_803CCC2C, 0x803CCC2C) //this is a jump label
/*803CCC2C 003C9A2C*/ PPC::Runtime::ASM::li(context->r5, 0x61);
/*803CCC30 003C9A30*/ PPC::Runtime::ASM::lwz(context->r3, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CCC34 003C9A34*/ PPC::Runtime::ASM::lis(context->r4, 0xcc01);
/*803CCC38 003C9A38*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r4));
/*803CCC3C 003C9A3C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803CCC40 003C9A40*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r4));
/*803CCC44 003C9A44*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r4));
/*803CCC48 003C9A48*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r4));
/*803CCC4C 003C9A4C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*803CCC50 003C9A50*/ PPC::Runtime::ASM::lmw(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803CCC54 003C9A54*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*803CCC58 003C9A58*/ PPC::Runtime::ASM::blr();
}