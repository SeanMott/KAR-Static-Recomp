//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80382D18(PPC::Runtime::GCContext* context)
{
/*80382D18 0037FB18*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80382D1C 0037FB1C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80382D20 0037FB20*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*80382D24 0037FB24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80382D28 0037FB28*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x8);
/*80382D2C 0037FB2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80382D30 0037FB30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80382D34 0037FB34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80382D38 0037FB38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80382D3C 0037FB3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80382D40 0037FB40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80382D44 0037FB44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80382D48 0037FB48*/ PPC::Runtime::ASM::b(.L_80382D64);
RUNTIME_PPC_JUMP_LABEL(.L_80382D4C, 0x80382D4C) //this is a jump label
/*80382D4C 0037FB4C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r5));
/*80382D50 0037FB50*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x8);
/*80382D54 0037FB54*/ PPC::Runtime::ASM::bge(.L_80382D60);
/*80382D58 0037FB58*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r0, 24, 2);
/*80382D5C 0037FB5C*/ PPC::Runtime::ASM::stwx(context->r8, context->r7, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80382D60, 0x80382D60) //this is a jump label
/*80382D60 0037FB60*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_80382D64, 0x80382D64) //this is a jump label
/*80382D64 0037FB64*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*80382D68 0037FB68*/ PPC::Runtime::ASM::bne(.L_80382D4C);
/*80382D6C 0037FB6C*/ PPC::Runtime::ASM::lis(context->r7, lbl_804F461C @ Get_MemoryOffset_HighBit);
/*80382D70 0037FB70*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80382D74 0037FB74*/ PPC::Runtime::ASM::addi(context->r7, context->r7, lbl_804F461C @ Get_MemoryOffset_LowBit);
/*80382D78 0037FB78*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*80382D7C 0037FB7C*/ PPC::Runtime::ASM::b(.L_80382D98);
RUNTIME_PPC_JUMP_LABEL(.L_80382D80, 0x80382D80) //this is a jump label
/*80382D80 0037FB80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r4));
/*80382D84 0037FB84*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80382D88 0037FB88*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80382D8C 0037FB8C*/ PPC::Runtime::ASM::lwzx(context->r0, context->r7, context->r0);
/*80382D90 0037FB90*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80382D94 0037FB94*/ PPC::Runtime::ASM::stwx(context->r8, context->r5, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80382D98, 0x80382D98) //this is a jump label
/*80382D98 0037FB98*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80382D9C 0037FB9C*/ PPC::Runtime::ASM::bne(.L_80382D80);
/*80382DA0 0037FBA0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80382DA4 0037FBA4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80382DA8 0037FBA8*/ PPC::Runtime::ASM::b(.L_80382DC4);
RUNTIME_PPC_JUMP_LABEL(.L_80382DAC, 0x80382DAC) //this is a jump label
/*80382DAC 0037FBAC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r6));
/*80382DB0 0037FBB0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x8);
/*80382DB4 0037FBB4*/ PPC::Runtime::ASM::bge(.L_80382DC0);
/*80382DB8 0037FBB8*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r0, 24, 2);
/*80382DBC 0037FBBC*/ PPC::Runtime::ASM::stwx(context->r5, context->r4, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80382DC0, 0x80382DC0) //this is a jump label
/*80382DC0 0037FBC0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
RUNTIME_PPC_JUMP_LABEL(.L_80382DC4, 0x80382DC4) //this is a jump label
/*80382DC4 0037FBC4*/ PPC::Runtime::ASM::cmplwi(context->r6, 0x0);
/*80382DC8 0037FBC8*/ PPC::Runtime::ASM::bne(.L_80382DAC);
/*80382DCC 0037FBCC*/ PPC::Runtime::ASM::slwi(context->r4, context->r3, 2);
/*80382DD0 0037FBD0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80382DD4 0037FBD4*/ PPC::Runtime::ASM::subfic(context->r0, context->r3, 0x7);
/*80382DD8 0037FBD8*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r4);
/*80382DDC 0037FBDC*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80382DE0 0037FBE0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x7);
/*80382DE4 0037FBE4*/ PPC::Runtime::ASM::bge(.L_80382E04);
RUNTIME_PPC_JUMP_LABEL(.L_80382DE8, 0x80382DE8) //this is a jump label
/*80382DE8 0037FBE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80382DEC 0037FBEC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80382DF0 0037FBF0*/ PPC::Runtime::ASM::bne(.L_80382DF8);
/*80382DF4 0037FBF4*/ PPC::Runtime::ASM::b(.L_80382E08);
RUNTIME_PPC_JUMP_LABEL(.L_80382DF8, 0x80382DF8) //this is a jump label
/*80382DF8 0037FBF8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4);
/*80382DFC 0037FBFC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*80382E00 0037FC00*/ PPC::Runtime::ASM::bdnz(.L_80382DE8);
RUNTIME_PPC_JUMP_LABEL(.L_80382E04, 0x80382E04) //this is a jump label
/*80382E04 0037FC04*/ PPC::Runtime::ASM::li(context->r3, -0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80382E08, 0x80382E08) //this is a jump label
/*80382E08 0037FC08*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80382E0C 0037FC0C*/ PPC::Runtime::ASM::blr();
}