//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8032A2E4(PPC::Runtime::GCContext* context)
{
/*8032A2E4 003270E4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8032A2E8 003270E8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8032A2EC 003270EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8032A2F0 003270F0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8032A2F4 003270F4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8032A2F8 003270F8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 8032A2FC 003270FC  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8032A300 00327100*/ PPC::Runtime::ASM::beq(.L_8032A350);
/*8032A304 00327104*/ PPC::Runtime::ASM::lis(context->r4, lbl_804E4DD0 @ Get_MemoryOffset_HighBit);
/*8032A308 00327108*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804E4DD0 @ Get_MemoryOffset_LowBit);
/*8032A30C 0032710C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8032A310 00327110*/ PPC::Runtime::ASM::beq(.L_8032A340);
/*8032A314 00327114*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F3510 @ Get_MemoryOffset_HighBit);
/*8032A318 00327118*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804F3510 @ Get_MemoryOffset_LowBit);
/*8032A31C 0032711C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8032A320 00327120*/ PPC::Runtime::ASM::beq(.L_8032A340);
/*8032A324 00327124*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD724 @ Get_MemoryOffset_HighBit);
/*8032A328 00327128*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD724 @ Get_MemoryOffset_LowBit);
/*8032A32C 0032712C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8032A330 00327130*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8032A334 00327134*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8032A338 00327138*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8032A33C 0032713C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8032A340, 0x8032A340) //this is a jump label
/*8032A340 00327140*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*8032A344 00327144*/ PPC::Runtime::ASM::ble(.L_8032A350);
/*8032A348 00327148*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8032A34C 0032714C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8032A350, 0x8032A350) //this is a jump label
/*8032A350 00327150*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8032A354 00327154*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8032A358 00327158*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8032A35C 0032715C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8032A360 00327160*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8032A364 00327164*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8032A368 00327168*/ PPC::Runtime::ASM::blr();
}