//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8047269C(PPC::Runtime::GCContext* context)
{
/*8047269C 0046F49C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*804726A0 0046F4A0*/ PPC::Runtime::ASM::addi(context->r7, context->r5, 0x14);
/*804726A4 0046F4A4*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*804726A8 0046F4A8*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r0, 22, 26, 29);
/*804726AC 0046F4AC*/ PPC::Runtime::ASM::subi(context->r6, context->r5, 0x14);
/*804726B0 0046F4B0*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*804726B4 0046F4B4*/ PPC::Runtime::ASM::b(.L_8047271C);
RUNTIME_PPC_JUMP_LABEL(.L_804726B8, 0x804726B8) //this is a jump label
/*804726B8 0046F4B8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x1);
/*804726BC 0046F4BC*/ PPC::Runtime::ASM::bne(.L_804726C8);
/*804726C0 0046F4C0*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*804726C4 0046F4C4*/ PPC::Runtime::ASM::b(.L_804726D8);
RUNTIME_PPC_JUMP_LABEL(.L_804726C8, 0x804726C8) //this is a jump label
/*804726C8 0046F4C8*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r7));
/*804726CC 0046F4CC*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x2);
/*804726D0 0046F4D0*/ PPC::Runtime::ASM::addi(context->r8, context->r5, 0x0);
/*804726D4 0046F4D4*/ PPC::Runtime::ASM::blt(.L_80472730);
RUNTIME_PPC_JUMP_LABEL(.L_804726D8, 0x804726D8) //this is a jump label
/*804726D8 0046F4D8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x2);
/*804726DC 0046F4DC*/ PPC::Runtime::ASM::beq(.L_804726E4);
/*804726E0 0046F4E0*/ PPC::Runtime::ASM::b(.L_80472714);
RUNTIME_PPC_JUMP_LABEL(.L_804726E4, 0x804726E4) //this is a jump label
/*804726E4 0046F4E4*/ PPC::Runtime::ASM::cmpwi(context->r8, 0x4);
/*804726E8 0046F4E8*/ PPC::Runtime::ASM::bne(.L_80472714);
/*804726EC 0046F4EC*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r7));
/*804726F0 0046F4F0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r3));
/*804726F4 0046F4F4*/ PPC::Runtime::ASM::cmpw(context->r4, context->r5);
/*804726F8 0046F4F8*/ PPC::Runtime::ASM::bge(.L_80472700);
/*804726FC 0046F4FC*/ PPC::Runtime::ASM::b(.L_80472704);
RUNTIME_PPC_JUMP_LABEL(.L_80472700, 0x80472700) //this is a jump label
/*80472700 0046F500*/ PPC::Runtime::ASM::mr(context->r4, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_80472704, 0x80472704) //this is a jump label
/*80472704 0046F504*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r3));
/*80472708 0046F508*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r3));
/*8047270C 0046F50C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x220, context->r3));
/*80472710 0046F510*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x224, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80472714, 0x80472714) //this is a jump label
/*80472714 0046F514*/ PPC::Runtime::ASM::add(context->r7, context->r7, context->r8);
/*80472718 0046F518*/ PPC::Runtime::ASM::subf(context->r6, context->r8, context->r6);
RUNTIME_PPC_JUMP_LABEL(.L_8047271C, 0x8047271C) //this is a jump label
/*8047271C 0046F51C*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*80472720 0046F520*/ PPC::Runtime::ASM::ble(.L_80472730);
/*80472724 0046F524*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*80472728 0046F528*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8047272C 0046F52C*/ PPC::Runtime::ASM::bne(.L_804726B8);
RUNTIME_PPC_JUMP_LABEL(.L_80472730, 0x80472730) //this is a jump label
/*80472730 0046F530*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80472734 0046F534*/ PPC::Runtime::ASM::blr();
}