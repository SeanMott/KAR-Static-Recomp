//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8042A2E4(PPC::Runtime::GCContext* context)
{
/*8042A2E4 004270E4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8042A2E8 004270E8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8042A2EC 004270EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8042A2F0 004270F0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 8042A2F4 004270F4  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*8042A2F8 004270F8*/ PPC::Runtime::ASM::beq(.L_8042A368);
/*8042A2FC 004270FC*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*8042A300 00427100*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8042A304 00427104*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8042A308 00427108*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 16);
/*8042A30C 0042710C*/ PPC::Runtime::ASM::subf(context->r0, context->r4, context->r0);
/*8042A310 00427110*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/* 8042A314 00427114  54 00 D9 7F */ srwi. context->r0 , context->r0 , 5
/*8042A318 00427118*/ PPC::Runtime::ASM::beq(.L_8042A320);
/*8042A31C 0042711C*/ PPC::Runtime::ASM::b(.L_8042A330);
RUNTIME_PPC_JUMP_LABEL(.L_8042A320, 0x8042A320) //this is a jump label
/*8042A320 00427120*/ PPC::Runtime::ASM::subi(context->r3, context->r4, 0x1);
/*8042A324 00427124*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r4);
/*8042A328 00427128*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8042A32C 0042712C*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
RUNTIME_PPC_JUMP_LABEL(.L_8042A330, 0x8042A330) //this is a jump label
/*8042A330 00427130*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8042A334 00427134*/ PPC::Runtime::ASM::beq(.L_8042A368);
/*8042A338 00427138*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8042A33C 0042713C*/ PPC::Runtime::ASM::beq(.L_8042A368);
/*8042A340 00427140*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8042A344 00427144*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8042A348 00427148*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r4));
/*8042A34C 0042714C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8042A350 00427150*/ PPC::Runtime::ASM::bctrl();
/*8042A354 00427154*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8042A358 00427158*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8042A35C 0042715C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r4));
/*8042A360 00427160*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8042A364 00427164*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8042A368, 0x8042A368) //this is a jump label
/*8042A368 00427168*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8042A36C 0042716C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8042A370 00427170*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8042A374 00427174*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8042A378 00427178*/ PPC::Runtime::ASM::blr();
}