//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_Cancel(PPC::Runtime::GCContext* context)
{
/*8047187C 0046E67C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80471880 0046E680*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80471884 0046E684*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*80471888 0046E688*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8047188C 0046E68C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80471890 0046E690*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80471894 0046E694*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE634 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80471898 0046E698*/ PPC::Runtime::ASM::cmplw(context->r0, context->r31);
/*8047189C 0046E69C*/ PPC::Runtime::ASM::bne(.L_804718B4);
/*804718A0 0046E6A0*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*804718A4 0046E6A4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE634 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804718A8 0046E6A8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*804718AC 0046E6AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*804718B0 0046E6B0*/ PPC::Runtime::ASM::b(.L_80471900);
RUNTIME_PPC_JUMP_LABEL(.L_804718B4, 0x804718B4) //this is a jump label
/*804718B4 0046E6B4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*804718B8 0046E6B8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*804718BC 0046E6BC*/ PPC::Runtime::ASM::beq(.L_80471900);
/*804718C0 0046E6C0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*804718C4 0046E6C4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*804718C8 0046E6C8*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*804718CC 0046E6CC*/ PPC::Runtime::ASM::bne(.L_804718D8);
/*804718D0 0046E6D0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*804718D4 0046E6D4*/ PPC::Runtime::ASM::b(.L_804718DC);
RUNTIME_PPC_JUMP_LABEL(.L_804718D8, 0x804718D8) //this is a jump label
/*804718D8 0046E6D8*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_804718DC, 0x804718DC) //this is a jump label
/*804718DC 0046E6DC*/ PPC::Runtime::ASM::cmplwi(context->r6, 0x0);
/*804718E0 0046E6E0*/ PPC::Runtime::ASM::bne(.L_804718F0);
/*804718E4 0046E6E4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*804718E8 0046E6E8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*804718EC 0046E6EC*/ PPC::Runtime::ASM::b(.L_804718F4);
RUNTIME_PPC_JUMP_LABEL(.L_804718F0, 0x804718F0) //this is a jump label
/*804718F0 0046E6F0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
RUNTIME_PPC_JUMP_LABEL(.L_804718F4, 0x804718F4) //this is a jump label
/*804718F4 0046E6F4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*804718F8 0046E6F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*804718FC 0046E6FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80471900, 0x80471900) //this is a jump label
/*80471900 0046E700*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80471904 0046E704*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80471908 0046E708*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8047190C 0046E70C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*80471910 0046E710*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80471914 0046E714*/ PPC::Runtime::ASM::blr();
}