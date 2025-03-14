//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_HSD_PadRumbleRemove(PPC::Runtime::GCContext* context)
{
/*804144F4 004112F4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*804144F8 004112F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*804144FC 004112FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80414500 00411300*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80414504 00411304*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058B080 @ Get_MemoryOffset_HighBit);
/*80414508 00411308*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8041450C 0041130C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058B080 @ Get_MemoryOffset_LowBit);
/*80414510 00411310*/ PPC::Runtime::ASM::slwi(context->r31, context->r0, 1);
/*80414514 00411314*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r3));
/*80414518 00411318*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r31);
/*8041451C 0041131C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r3));
/*80414520 00411320*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80414524 00411324*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*80414528 00411328*/ PPC::Runtime::ASM::bne(.L_804145A4);
/*8041452C 0041132C*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80414530 00411330*/ PPC::Runtime::ASM::lis(context->r5, lbl_8058B080 @ Get_MemoryOffset_HighBit);
/*80414534 00411334*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18058BB88 @ Get_MemoryOffset_HighBit);
/*80414538 00411338*/ PPC::Runtime::ASM::addi(context->r6, context->r5, lbl_8058B080 @ Get_MemoryOffset_LowBit);
/*8041453C 0041133C*/ PPC::Runtime::ASM::add(context->r5, context->r6, context->r31);
/*80414540 00411340*/ PPC::Runtime::ASM::addi(context->r0, context->r4, STRUCT_BYTE4_COUNT_18058BB88 @ Get_MemoryOffset_LowBit);
/*80414544 00411344*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r5));
/*80414548 00411348*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*8041454C 0041134C*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0xc);
/*80414550 00411350*/ PPC::Runtime::ASM::add(context->r7, context->r0, context->r4);
/*80414554 00411354*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*80414558 00411358*/ PPC::Runtime::ASM::b(.L_80414598);
RUNTIME_PPC_JUMP_LABEL(.L_8041455C, 0x8041455C) //this is a jump label
/*8041455C 0041135C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*80414560 00411360*/ PPC::Runtime::ASM::addi(context->r4, context->r7, 0x8);
/*80414564 00411364*/ PPC::Runtime::ASM::b(.L_8041456C);
RUNTIME_PPC_JUMP_LABEL(.L_80414568, 0x80414568) //this is a jump label
/*80414568 00411368*/ PPC::Runtime::ASM::mr(context->r4, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8041456C, 0x8041456C) //this is a jump label
/*8041456C 0041136C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80414570 00411370*/ PPC::Runtime::ASM::cmplw(context->r0, context->r8);
/*80414574 00411374*/ PPC::Runtime::ASM::bne(.L_80414568);
/*80414578 00411378*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8041457C 0041137C*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*80414580 00411380*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r6));
/*80414584 00411384*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80414588 00411388*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*8041458C 0041138C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*80414590 00411390*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r6));
/*80414594 00411394*/ PPC::Runtime::ASM::mr(context->r8, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_80414598, 0x80414598) //this is a jump label
/*80414598 00411398*/ PPC::Runtime::ASM::cmplwi(context->r8, 0x0);
/*8041459C 0041139C*/ PPC::Runtime::ASM::bne(.L_8041455C);
/*804145A0 004113A0*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_804145A4, 0x804145A4) //this is a jump label
/*804145A4 004113A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804145A8 004113A8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*804145AC 004113AC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804145B0 004113B0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*804145B4 004113B4*/ PPC::Runtime::ASM::blr();
}