//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memmove.hpp"
#include "memmove.hpp"
#include "fn_DNSClose.hpp"
#include "fn_DNSOpen.hpp"
#include "fn_DNSOpen.hpp"



void fn_SOSetResolver(PPC::Runtime::GCContext* context)
{
/*8047AC54 00477A54*/ PPC::Runtime::ASM::mflr(context->r0);
/*8047AC58 00477A58*/ PPC::Runtime::ASM::lis(context->r5, lbl_805BE4B0 @ Get_MemoryOffset_HighBit);
/*8047AC5C 00477A5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8047AC60 00477A60*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8047AC64 00477A64*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8047AC68 00477A68*/ PPC::Runtime::ASM::addi(context->r31, context->r5, lbl_805BE4B0 @ Get_MemoryOffset_LowBit);
/*8047AC6C 00477A6C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8047AC70 00477A70*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8047AC74 00477A74*/ PPC::Runtime::ASM::addi(context->r29, context->r4, 0x0);
/*8047AC78 00477A78*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE68C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047AC7C 00477A7C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8047AC80 00477A80*/ PPC::Runtime::ASM::beq(.L_8047AC8C);
/*8047AC84 00477A84*/ PPC::Runtime::ASM::li(context->r3, -0x27);
/*8047AC88 00477A88*/ PPC::Runtime::ASM::b(.L_8047AD24);
RUNTIME_PPC_JUMP_LABEL(.L_8047AC8C, 0x8047AC8C) //this is a jump label
/*8047AC8C 00477A8C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8047AC90 00477A90*/ PPC::Runtime::ASM::beq(.L_8047AC9C);
/*8047AC94 00477A94*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8047AC98 00477A98*/ PPC::Runtime::ASM::b(.L_8047ACA0);
RUNTIME_PPC_JUMP_LABEL(.L_8047AC9C, 0x8047AC9C) //this is a jump label
/*8047AC9C 00477A9C*/ PPC::Runtime::ASM::li(context->r4, STRUCT_BYTE4_COUNT_1805E6298 @ Get_MemoryOffset_SDA21);
RUNTIME_PPC_JUMP_LABEL(.L_8047ACA0, 0x8047ACA0) //this is a jump label
/*8047ACA0 00477AA0*/ PPC::Runtime::ASM::addi(context->r30, context->r31, 0x3f90);
/*8047ACA4 00477AA4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047ACA8 00477AA8*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8047ACAC 00477AAC*/ PPC::Runtime::ASM::bl(memmove);
/*8047ACB0 00477AB0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8047ACB4 00477AB4*/ PPC::Runtime::ASM::beq(.L_8047ACC0);
/*8047ACB8 00477AB8*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8047ACBC 00477ABC*/ PPC::Runtime::ASM::b(.L_8047ACC4);
RUNTIME_PPC_JUMP_LABEL(.L_8047ACC0, 0x8047ACC0) //this is a jump label
/*8047ACC0 00477AC0*/ PPC::Runtime::ASM::li(context->r4, STRUCT_BYTE4_COUNT_1805E6298 @ Get_MemoryOffset_SDA21);
RUNTIME_PPC_JUMP_LABEL(.L_8047ACC4, 0x8047ACC4) //this is a jump label
/*8047ACC4 00477AC4*/ PPC::Runtime::ASM::addi(context->r29, context->r31, 0x3f94);
/*8047ACC8 00477AC8*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*8047ACCC 00477ACC*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8047ACD0 00477AD0*/ PPC::Runtime::ASM::bl(memmove);
/*8047ACD4 00477AD4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3800);
/*8047ACD8 00477AD8*/ PPC::Runtime::ASM::bl(fn_DNSClose);
/*8047ACDC 00477ADC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8047ACE0 00477AE0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805E6298 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047ACE4 00477AE4*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*8047ACE8 00477AE8*/ PPC::Runtime::ASM::beq(.L_8047ACFC);
/*8047ACEC 00477AEC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3800);
/*8047ACF0 00477AF0*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x0);
/*8047ACF4 00477AF4*/ PPC::Runtime::ASM::bl(fn_DNSOpen);
/*8047ACF8 00477AF8*/ PPC::Runtime::ASM::b(.L_8047AD14);
RUNTIME_PPC_JUMP_LABEL(.L_8047ACFC, 0x8047ACFC) //this is a jump label
/*8047ACFC 00477AFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8047AD00 00477B00*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*8047AD04 00477B04*/ PPC::Runtime::ASM::beq(.L_8047AD14);
/*8047AD08 00477B08*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3800);
/*8047AD0C 00477B0C*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x0);
/*8047AD10 00477B10*/ PPC::Runtime::ASM::bl(fn_DNSOpen);
RUNTIME_PPC_JUMP_LABEL(.L_8047AD14, 0x8047AD14) //this is a jump label
/*8047AD14 00477B14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3930, context->r31));
/*8047AD18 00477B18*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8047AD1C 00477B1C*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x4);
/*8047AD20 00477B20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3930, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8047AD24, 0x8047AD24) //this is a jump label
/*8047AD24 00477B24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8047AD28 00477B28*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8047AD2C 00477B2C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8047AD30 00477B30*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8047AD34 00477B34*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8047AD38 00477B38*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8047AD3C 00477B3C*/ PPC::Runtime::ASM::blr();
}