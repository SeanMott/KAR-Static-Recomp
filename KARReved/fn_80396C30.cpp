//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803969A4.hpp"
#include "fn_803969A4.hpp"



void fn_80396C30(PPC::Runtime::GCContext* context)
{
/*80396C30 00393A30*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80396C34 00393A34*/ PPC::Runtime::ASM::mflr(context->r0);
/*80396C38 00393A38*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F55B0 @ Get_MemoryOffset_HighBit);
/*80396C3C 00393A3C*/ PPC::Runtime::ASM::lis(context->r3, lbl_80503488 @ Get_MemoryOffset_HighBit);
/*80396C40 00393A40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80396C44 00393A44*/ PPC::Runtime::ASM::li(context->r7, 0x4c);
/*80396C48 00393A48*/ PPC::Runtime::ASM::li(context->r8, 0x1c);
/*80396C4C 00393A4C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80396C50 00393A50*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_804F55B0 @ Get_MemoryOffset_LowBit);
/*80396C54 00393A54*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_80503488 @ Get_MemoryOffset_LowBit);
/*80396C58 00393A58*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xf0);
/*80396C5C 00393A5C*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x13c);
/*80396C60 00393A60*/ PPC::Runtime::ASM::addi(context->r6, context->r31, 0x1d0);
/*80396C64 00393A64*/ PPC::Runtime::ASM::bl(fn_hsdInitClassInfo);
/*80396C68 00393A68*/ PPC::Runtime::ASM::lis(context->r4, fn_803969A4 @ Get_MemoryOffset_HighBit);
/*80396C6C 00393A6C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xf0);
/*80396C70 00393A70*/ PPC::Runtime::ASM::addi(context->r0, context->r4, fn_803969A4 @ Get_MemoryOffset_LowBit);
/*80396C74 00393A74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r3));
/*80396C78 00393A78*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80396C7C 00393A7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80396C80 00393A80*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80396C84 00393A84*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80396C88 00393A88*/ PPC::Runtime::ASM::blr();
}