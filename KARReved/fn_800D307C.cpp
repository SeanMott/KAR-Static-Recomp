//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800D307C(PPC::Runtime::GCContext* context)
{
/*800D307C 000CFE7C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800D3080 000CFE80*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D3084 000CFE84*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_898 @ Get_MemoryOffset_HighBit);
/*800D3088 000CFE88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800D308C 000CFE8C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800D3090 000CFE90*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800D3094 000CFE94*/ PPC::Runtime::ASM::addi(context->r30, context->r4, MemoryOffset_898 @ Get_MemoryOffset_LowBit);
/*800D3098 000CFE98*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D309C 000CFE9C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800D30A0 000CFEA0*/ PPC::Runtime::ASM::lwz(context->r31, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D30A4 000CFEA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x454, context->r31));
/*800D30A8 000CFEA8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800D30AC 000CFEAC*/ PPC::Runtime::ASM::bne(.L_800D30C0);
/*800D30B0 000CFEB0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x68);
/*800D30B4 000CFEB4*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x66c);
/*800D30B8 000CFEB8*/ PPC::Runtime::ASM::li(context->r4, 0x113);
/*800D30BC 000CFEBC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D30C0, 0x800D30C0) //this is a jump label
/*800D30C0 000CFEC0*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*800D30C4 000CFEC4*/ PPC::Runtime::ASM::xor(context->r0, context->r29, context->r0);
/*800D30C8 000CFEC8*/ PPC::Runtime::ASM::srawi(context->r3, context->r0, 1);
/*800D30CC 000CFECC*/ PPC::Runtime::ASM::and(context->r0, context->r0, context->r29);
/*800D30D0 000CFED0*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r3);
/* 800D30D4 000CFED4  54 00 0F FF */ srwi. context->r0 , context->r0 , 31
/*800D30D8 000CFED8*/ PPC::Runtime::ASM::beq(.L_800D3108);
/*800D30DC 000CFEDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x454, context->r31));
/*800D30E0 000CFEE0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800D30E4 000CFEE4*/ PPC::Runtime::ASM::beq(.L_800D30F0);
/*800D30E8 000CFEE8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800D30EC 000CFEEC*/ PPC::Runtime::ASM::b(.L_800D30F4);
RUNTIME_PPC_JUMP_LABEL(.L_800D30F0, 0x800D30F0) //this is a jump label
/*800D30F0 000CFEF0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800D30F4, 0x800D30F4) //this is a jump label
/*800D30F4 000CFEF4*/ PPC::Runtime::ASM::xor(context->r0, context->r4, context->r29);
/*800D30F8 000CFEF8*/ PPC::Runtime::ASM::srawi(context->r3, context->r0, 1);
/*800D30FC 000CFEFC*/ PPC::Runtime::ASM::and(context->r0, context->r0, context->r4);
/*800D3100 000CFF00*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r3);
/*800D3104 000CFF04*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
RUNTIME_PPC_JUMP_LABEL(.L_800D3108, 0x800D3108) //this is a jump label
/*800D3108 000CFF08*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800D310C 000CFF0C*/ PPC::Runtime::ASM::bne(.L_800D3130);
/*800D3110 000CFF10*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*800D3114 000CFF14*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x67c);
/*800D3118 000CFF18*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800D311C 000CFF1C*/ PPC::Runtime::ASM::bl(OSReport);
/*800D3120 000CFF20*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x68);
/*800D3124 000CFF24*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x68c);
/*800D3128 000CFF28*/ PPC::Runtime::ASM::li(context->r4, 0x114);
/*800D312C 000CFF2C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D3130, 0x800D3130) //this is a jump label
/*800D3130 000CFF30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x454, context->r31));
/*800D3134 000CFF34*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 2);
/*800D3138 000CFF38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800D313C 000CFF3C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*800D3140 000CFF40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800D3144 000CFF44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800D3148 000CFF48*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800D314C 000CFF4C*/ PPC::Runtime::ASM::bne(.L_800D3158);
/*800D3150 000CFF50*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800D3154 000CFF54*/ PPC::Runtime::ASM::b(.L_800D315C);
RUNTIME_PPC_JUMP_LABEL(.L_800D3158, 0x800D3158) //this is a jump label
/*800D3158 000CFF58*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800D315C, 0x800D315C) //this is a jump label
/*800D315C 000CFF5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800D3160 000CFF60*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800D3164 000CFF64*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800D3168 000CFF68*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D316C 000CFF6C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D3170 000CFF70*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800D3174 000CFF74*/ PPC::Runtime::ASM::blr();
}