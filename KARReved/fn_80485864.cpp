//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_80485864(PPC::Runtime::GCContext* context)
{
/*80485864 00482664*/ PPC::Runtime::ASM::mflr(context->r0);
/*80485868 00482668*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8048586C 0048266C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*80485870 00482670*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80485874 00482674*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80485878 00482678*/ PPC::Runtime::ASM::b(.L_804858D8);
RUNTIME_PPC_JUMP_LABEL(.L_8048587C, 0x8048587C) //this is a jump label
/*8048587C 0048267C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80485880 00482680*/ PPC::Runtime::ASM::addi(context->r31, context->r4, 0x0);
/*80485884 00482684*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*80485888 00482688*/ PPC::Runtime::ASM::bne(.L_8048589C);
/*8048588C 0048268C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80485890 00482690*/ PPC::Runtime::ASM::li(context->r4, STRUCT_BYTE4_COUNT_1805DE6D4 @ Get_MemoryOffset_SDA21);
/*80485894 00482694*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80485898 00482698*/ PPC::Runtime::ASM::b(.L_804858A4);
RUNTIME_PPC_JUMP_LABEL(.L_8048589C, 0x8048589C) //this is a jump label
/*8048589C 0048269C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*804858A0 004826A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_804858A4, 0x804858A4) //this is a jump label
/*804858A4 004826A4*/ PPC::Runtime::ASM::stw(context->r5, STRUCT_BYTE4_COUNT_1805DE6D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804858A8 004826A8*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*804858AC 004826AC*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*804858B0 004826B0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*804858B4 004826B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*804858B8 004826B8*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*804858BC 004826BC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*804858C0 004826C0*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x0);
/*804858C4 004826C4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*804858C8 004826C8*/ PPC::Runtime::ASM::mtlr(context->r12);
/*804858CC 004826CC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/* 804858D0 004826D0  4E 80 00 21 */ blrl
/*804858D4 004826D4*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_804858D8, 0x804858D8) //this is a jump label
/*804858D8 004826D8*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE6D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804858DC 004826DC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*804858E0 004826E0*/ PPC::Runtime::ASM::bne(.L_8048587C);
/*804858E4 004826E4*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*804858E8 004826E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*804858EC 004826EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804858F0 004826F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*804858F4 004826F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804858F8 004826F8*/ PPC::Runtime::ASM::blr();
}