//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803696C8.hpp"
#include "fn_80369830.hpp"



void fn_80369048(PPC::Runtime::GCContext* context)
{
/*80369048 00365E48*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8036904C 00365E4C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80369050 00365E50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80369054 00365E54*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80369058 00365E58*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8036905C 00365E5C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80369060 00365E60*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80369064 00365E64*/ PPC::Runtime::ASM::addi(context->r30, context->r29, 0x10);
/*80369068 00365E68*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8036906C 00365E6C*/ PPC::Runtime::ASM::b(.L_8036907C);
RUNTIME_PPC_JUMP_LABEL(.L_80369070, 0x80369070) //this is a jump label
/*80369070 00365E70*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8);
/*80369074 00365E74*/ PPC::Runtime::ASM::bl(fn_803696C8);
/*80369078 00365E78*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8036907C, 0x8036907C) //this is a jump label
/*8036907C 00365E7C*/ PPC::Runtime::ASM::cmplw(context->r31, context->r30);
/*80369080 00365E80*/ PPC::Runtime::ASM::bne(.L_80369070);
/*80369084 00365E84*/ PPC::Runtime::ASM::lis(context->r4, lbl_804EFAA8 @ Get_MemoryOffset_HighBit);
/*80369088 00365E88*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x4);
/*8036908C 00365E8C*/ PPC::Runtime::ASM::addi(context->r7, context->r4, lbl_804EFAA8 @ Get_MemoryOffset_LowBit);
/*80369090 00365E90*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*80369094 00365E94*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*80369098 00365E98*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*8036909C 00365E9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*803690A0 00365EA0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803690A4 00365EA4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803690A8 00365EA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803690AC 00365EAC*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803690B0 00365EB0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803690B4 00365EB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803690B8 00365EB8*/ PPC::Runtime::ASM::bl(fn_80369830);
/*803690BC 00365EBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803690C0 00365EC0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803690C4 00365EC4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803690C8 00365EC8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803690CC 00365ECC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803690D0 00365ED0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*803690D4 00365ED4*/ PPC::Runtime::ASM::blr();
}