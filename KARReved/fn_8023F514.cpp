//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802369E0.hpp"
#include "fn_802369F0.hpp"



void fn_8023F514(PPC::Runtime::GCContext* context)
{
/*8023F514 0023C314*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8023F518 0023C318*/ PPC::Runtime::ASM::mflr(context->r0);
/*8023F51C 0023C31C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8023F520 0023C320*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8023F524 0023C324*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8023F528 0023C328*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023F52C 0023C32C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8023F530 0023C330*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8023F534 0023C334*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8023F538 0023C338*/ PPC::Runtime::ASM::beq(.L_8023F57C);
/*8023F53C 0023C33C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8023F540 0023C340*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*8023F544 0023C344*/ PPC::Runtime::ASM::beq(.L_8023F57C);
/*8023F548 0023C348*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r5));
/* 8023F54C 0023C34C  54 00 E7 FF */ extrwi. context->r0 , context->r0 , 1 , 27
/*8023F550 0023C350*/ PPC::Runtime::ASM::bne(.L_8023F57C);
/*8023F554 0023C354*/ PPC::Runtime::ASM::lis(context->r4, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*8023F558 0023C358*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_8055D7A0 @ Get_MemoryOffset_LowBit);
/*8023F55C 0023C35C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r31));
/*8023F560 0023C360*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r31));
/*8023F564 0023C364*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r5));
/*8023F568 0023C368*/ PPC::Runtime::ASM::bl(fn_802369E0);
/*8023F56C 0023C36C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8023F570 0023C370*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*8023F574 0023C374*/ PPC::Runtime::ASM::bl(fn_802369F0);
/*8023F578 0023C378*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8023F57C, 0x8023F57C) //this is a jump label
/*8023F57C 0023C37C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8023F580 0023C380*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8023F584 0023C384*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8023F588 0023C388*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023F58C 0023C38C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8023F590 0023C390*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8023F594 0023C394*/ PPC::Runtime::ASM::blr();
}