//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800C3510.hpp"



void fn_800C4498(PPC::Runtime::GCContext* context)
{
/*800C4498 000C1298*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800C449C 000C129C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800C44A0 000C12A0*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_27 @ Get_MemoryOffset_HighBit);
/*800C44A4 000C12A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800C44A8 000C12A8*/ PPC::Runtime::ASM::addi(context->r7, context->r5, MemoryOffset_27 @ Get_MemoryOffset_LowBit);
/*800C44AC 000C12AC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800C44B0 000C12B0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800C44B4 000C12B4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r4));
/*800C44B8 000C12B8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*800C44BC 000C12BC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/* 800C44C0 000C12C0  54 00 07 BF */ clrlwi. context->r0 , context->r0 , 30
/*800C44C4 000C12C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*800C44C8 000C12C8*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800C44CC 000C12CC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C44D0 000C12D0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800C44D4 000C12D4*/ PPC::Runtime::ASM::bne(.L_800C44E4);
/*800C44D8 000C12D8*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*800C44DC 000C12DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800C44E0 000C12E0*/ PPC::Runtime::ASM::b(.L_800C4500);
RUNTIME_PPC_JUMP_LABEL(.L_800C44E4, 0x800C44E4) //this is a jump label
/*800C44E4 000C12E4*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*800C44E8 000C12E8*/ PPC::Runtime::ASM::bl(fn_800C3510);
/*800C44EC 000C12EC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x5);
/*800C44F0 000C12F0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C44F4 000C12F4*/ PPC::Runtime::ASM::bne(.L_800C4500);
/*800C44F8 000C12F8*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*800C44FC 000C12FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_800C4500, 0x800C4500) //this is a jump label
/*800C4500 000C1300*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800C4504 000C1304*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C4508 000C1308*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800C450C 000C130C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800C4510 000C1310*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800C4514 000C1314*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800C4518 000C1318*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800C451C 000C131C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800C4520 000C1320*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800C4524 000C1324*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800C4528 000C1328*/ PPC::Runtime::ASM::blr();
}