//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802DDC94(PPC::Runtime::GCContext* context)
{
/*802DDC94 002DAA94*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802DDC98 002DAA98*/ PPC::Runtime::ASM::mr(context->r9, context->r3);
/*802DDC9C 002DAA9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4000, context->r3));
/*802DDCA0 002DAAA0*/ PPC::Runtime::ASM::li(context->r0, 0x7);
/*802DDCA4 002DAAA4*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*802DDCA8 002DAAA8*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD97C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DDCAC 002DAAAC*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_802DDCB0, 0x802DDCB0) //this is a jump label
/*802DDCB0 002DAAB0*/ PPC::Runtime::ASM::addi(context->r4, context->r10, 0x1);
/*802DDCB4 002DAAB4*/ PPC::Runtime::ASM::addi(context->r0, context->r10, 0x2);
/*802DDCB8 002DAAB8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*802DDCBC 002DAABC*/ PPC::Runtime::ASM::addi(context->r8, context->r10, 0x3);
/*802DDCC0 002DAAC0*/ PPC::Runtime::ASM::addi(context->r7, context->r10, 0x4);
/*802DDCC4 002DAAC4*/ PPC::Runtime::ASM::addi(context->r6, context->r10, 0x5);
/*802DDCC8 002DAAC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r9));
/*802DDCCC 002DAACC*/ PPC::Runtime::ASM::addi(context->r5, context->r10, 0x6);
/*802DDCD0 002DAAD0*/ PPC::Runtime::ASM::addi(context->r4, context->r10, 0x7);
/*802DDCD4 002DAAD4*/ PPC::Runtime::ASM::addi(context->r0, context->r10, 0x8);
/*802DDCD8 002DAAD8*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x200, context->r9));
/*802DDCDC 002DAADC*/ PPC::Runtime::ASM::addi(context->r10, context->r10, 0x8);
/*802DDCE0 002DAAE0*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r9));
/*802DDCE4 002DAAE4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x400, context->r9));
/*802DDCE8 002DAAE8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x500, context->r9));
/*802DDCEC 002DAAEC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x600, context->r9));
/*802DDCF0 002DAAF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x700, context->r9));
/*802DDCF4 002DAAF4*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x800);
/*802DDCF8 002DAAF8*/ PPC::Runtime::ASM::bdnz(.L_802DDCB0);
/*802DDCFC 002DAAFC*/ PPC::Runtime::ASM::slwi(context->r4, context->r10, 8);
/*802DDD00 002DAB00*/ PPC::Runtime::ASM::subfic(context->r0, context->r10, 0x3f);
/*802DDD04 002DAB04*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r4);
/*802DDD08 002DAB08*/ PPC::Runtime::ASM::mtctr(context->r0);
/*802DDD0C 002DAB0C*/ PPC::Runtime::ASM::cmplwi(context->r10, 0x3f);
/*802DDD10 002DAB10*/ PPC::Runtime::ASM::bge(.L_802DDD28);
RUNTIME_PPC_JUMP_LABEL(.L_802DDD14, 0x802DDD14) //this is a jump label
/*802DDD14 002DAB14*/ PPC::Runtime::ASM::addi(context->r0, context->r10, 0x1);
/*802DDD18 002DAB18*/ PPC::Runtime::ASM::addi(context->r10, context->r10, 0x1);
/*802DDD1C 002DAB1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802DDD20 002DAB20*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x100);
/*802DDD24 002DAB24*/ PPC::Runtime::ASM::bdnz(.L_802DDD14);
RUNTIME_PPC_JUMP_LABEL(.L_802DDD28, 0x802DDD28) //this is a jump label
/*802DDD28 002DAB28*/ PPC::Runtime::ASM::slwi(context->r0, context->r10, 8);
/*802DDD2C 002DAB2C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802DDD30 002DAB30*/ PPC::Runtime::ASM::stwx(context->r4, context->r3, context->r0);
/*802DDD34 002DAB34*/ PPC::Runtime::ASM::li(context->r0, 0x40);
/*802DDD38 002DAB38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4004, context->r3));
/*802DDD3C 002DAB3C*/ PPC::Runtime::ASM::blr();
}