//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138BA4.hpp"



void fn_8015643C(PPC::Runtime::GCContext* context)
{
/*8015643C 0015323C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80156440 00153240*/ PPC::Runtime::ASM::mflr(context->r0);
/*80156444 00153244*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80156448 00153248*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8015644C 0015324C*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*80156450 00153250*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80156454 00153254*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80156458 00153258*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015645C 0015325C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80156460 00153260*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80156464 00153264*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6a4, context->r3));
/*80156468 00153268*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8015646C 0015326C*/ PPC::Runtime::ASM::beq(.L_801564BC);
/*80156470 00153270*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80156474 00153274*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*80156478 00153278*/ PPC::Runtime::ASM::extsb(context->r5, context->r29);
/*8015647C 0015327C*/ PPC::Runtime::ASM::lis(context->r3, StructValues_98 @ Get_MemoryOffset_HighBit);
/*80156480 00153280*/ PPC::Runtime::ASM::add(context->r4, context->r6, context->r5);
/*80156484 00153284*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80156488 00153288*/ PPC::Runtime::ASM::stb(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8015648C 0015328C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80156490 00153290*/ PPC::Runtime::ASM::addi(context->r3, context->r3, StructValues_98 @ Get_MemoryOffset_LowBit);
/*80156494 00153294*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*80156498 00153298*/ PPC::Runtime::ASM::lwzx(context->r4, context->r3, context->r0);
/*8015649C 0015329C*/ PPC::Runtime::ASM::bge(.L_801564A8);
/*801564A0 001532A0*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*801564A4 001532A4*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_801564A8, 0x801564A8) //this is a jump label
/*801564A8 001532A8*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 2);
/*801564AC 001532AC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E07A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801564B0 001532B0*/ PPC::Runtime::ASM::add(context->r3, context->r6, context->r0);
/*801564B4 001532B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*801564B8 001532B8*/ PPC::Runtime::ASM::bl(fn_80138BA4);
RUNTIME_PPC_JUMP_LABEL(.L_801564BC, 0x801564BC) //this is a jump label
/*801564BC 001532BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801564C0 001532C0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801564C4 001532C4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801564C8 001532C8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801564CC 001532CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801564D0 001532D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801564D4 001532D4*/ PPC::Runtime::ASM::blr();
}