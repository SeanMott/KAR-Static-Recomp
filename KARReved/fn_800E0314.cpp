//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800E0314(PPC::Runtime::GCContext* context)
{
/*800E0314 000DD114*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800E0318 000DD118*/ PPC::Runtime::ASM::mflr(context->r0);
/*800E031C 000DD11C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800E0320 000DD120*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800E0324 000DD124*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800E0328 000DD128*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800E032C 000DD12C*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*800E0330 000DD130*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800E0334 000DD134*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*800E0338 000DD138*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_941 @ Get_MemoryOffset_HighBit);
/*800E033C 000DD13C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r28));
/*800E0340 000DD140*/ PPC::Runtime::ASM::addi(context->r31, context->r3, MemoryOffset_941 @ Get_MemoryOffset_LowBit);
/*800E0344 000DD144*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800E0348 000DD148*/ PPC::Runtime::ASM::bne(.L_800E035C);
/*800E034C 000DD14C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x4c);
/*800E0350 000DD150*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x218);
/*800E0354 000DD154*/ PPC::Runtime::ASM::li(context->r4, 0x12);
/*800E0358 000DD158*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E035C, 0x800E035C) //this is a jump label
/*800E035C 000DD15C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*800E0360 000DD160*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800E0364 000DD164*/ PPC::Runtime::ASM::blt(.L_800E037C);
/*800E0368 000DD168*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800E036C 000DD16C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800E0370 000DD170*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*800E0374 000DD174*/ PPC::Runtime::ASM::bge(.L_800E037C);
/*800E0378 000DD178*/ PPC::Runtime::ASM::li(context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800E037C, 0x800E037C) //this is a jump label
/*800E037C 000DD17C*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*800E0380 000DD180*/ PPC::Runtime::ASM::bne(.L_800E0394);
/*800E0384 000DD184*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x4c);
/*800E0388 000DD188*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x240);
/*800E038C 000DD18C*/ PPC::Runtime::ASM::li(context->r4, 0x13);
/*800E0390 000DD190*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E0394, 0x800E0394) //this is a jump label
/*800E0394 000DD194*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r28));
/*800E0398 000DD198*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r29);
/*800E039C 000DD19C*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 24);
/*800E03A0 000DD1A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800E03A4 000DD1A4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800E03A8 000DD1A8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800E03AC 000DD1AC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800E03B0 000DD1B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800E03B4 000DD1B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800E03B8 000DD1B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800E03BC 000DD1BC*/ PPC::Runtime::ASM::blr();
}