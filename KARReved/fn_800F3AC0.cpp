//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80204054.hpp"



void fn_800F3AC0(PPC::Runtime::GCContext* context)
{
/*800F3AC0 000F08C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800F3AC4 000F08C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F3AC8 000F08C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F3ACC 000F08CC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 800F3AD0 000F08D0  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*800F3AD4 000F08D4*/ PPC::Runtime::ASM::beq(.L_800F3B14);
/*800F3AD8 000F08D8*/ PPC::Runtime::ASM::bl(fn_80204054);
/*800F3ADC 000F08DC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800F3AE0 000F08E0*/ PPC::Runtime::ASM::blt(.L_800F3B14);
/*800F3AE4 000F08E4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3AE8 000F08E8*/ PPC::Runtime::ASM::mulli(context->r5, context->r3, 0x5c);
/*800F3AEC 000F08EC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800F3AF0 000F08F0*/ PPC::Runtime::ASM::add(context->r3, context->r6, context->r5);
/*800F3AF4 000F08F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*800F3AF8 000F08F8*/ PPC::Runtime::ASM::cmplw(context->r0, context->r31);
/*800F3AFC 000F08FC*/ PPC::Runtime::ASM::bne(.L_800F3B14);
/*800F3B00 000F0900*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0x52);
/*800F3B04 000F0904*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800F3B08 000F0908*/ PPC::Runtime::ASM::lbzx(context->r0, context->r6, context->r3);
/*800F3B0C 000F090C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*800F3B10 000F0910*/ PPC::Runtime::ASM::stbx(context->r0, context->r6, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_800F3B14, 0x800F3B14) //this is a jump label
/*800F3B14 000F0914*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F3B18 000F0918*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F3B1C 000F091C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F3B20 000F0920*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800F3B24 000F0924*/ PPC::Runtime::ASM::blr();
}