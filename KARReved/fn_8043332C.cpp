//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8043332C(PPC::Runtime::GCContext* context)
{
/*8043332C 0043012C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80433330 00430130*/ PPC::Runtime::ASM::mflr(context->r0);
/*80433334 00430134*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80433338 00430138*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8043333C 0043013C*/ PPC::Runtime::ASM::lwz(context->r31, STRUCT_BYTE4_COUNT_1805DE390 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80433340 00430140*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80433344 00430144*/ PPC::Runtime::ASM::beq(.L_804333C0);
/*80433348 00430148*/ PPC::Runtime::ASM::beq(.L_804333B8);
/*8043334C 0043014C*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*80433350 00430150*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80433354 00430154*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80433358 00430158*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 16);
/*8043335C 0043015C*/ PPC::Runtime::ASM::subf(context->r0, context->r4, context->r0);
/*80433360 00430160*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/* 80433364 00430164  54 00 D9 7F */ srwi. context->r0 , context->r0 , 5
/*80433368 00430168*/ PPC::Runtime::ASM::beq(.L_80433370);
/*8043336C 0043016C*/ PPC::Runtime::ASM::b(.L_80433380);
RUNTIME_PPC_JUMP_LABEL(.L_80433370, 0x80433370) //this is a jump label
/*80433370 00430170*/ PPC::Runtime::ASM::subi(context->r3, context->r4, 0x1);
/*80433374 00430174*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r4);
/*80433378 00430178*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8043337C 0043017C*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
RUNTIME_PPC_JUMP_LABEL(.L_80433380, 0x80433380) //this is a jump label
/*80433380 00430180*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80433384 00430184*/ PPC::Runtime::ASM::beq(.L_804333B8);
/*80433388 00430188*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8043338C 0043018C*/ PPC::Runtime::ASM::beq(.L_804333B8);
/*80433390 00430190*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80433394 00430194*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80433398 00430198*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r4));
/*8043339C 0043019C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*804333A0 004301A0*/ PPC::Runtime::ASM::bctrl();
/*804333A4 004301A4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*804333A8 004301A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*804333AC 004301AC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r4));
/*804333B0 004301B0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*804333B4 004301B4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_804333B8, 0x804333B8) //this is a jump label
/*804333B8 004301B8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*804333BC 004301BC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE390 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_804333C0, 0x804333C0) //this is a jump label
/*804333C0 004301C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804333C4 004301C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*804333C8 004301C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804333CC 004301CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*804333D0 004301D0*/ PPC::Runtime::ASM::blr();
}