//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800D7A40(PPC::Runtime::GCContext* context)
{
/*800D7A40 000D4840*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800D7A44 000D4844*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D7A48 000D4848*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*800D7A4C 000D484C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800D7A50 000D4850*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D7A54 000D4854*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*800D7A58 000D4858*/ PPC::Runtime::ASM::mtctr(context->r0);
/*800D7A5C 000D485C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800D7A60 000D4860*/ PPC::Runtime::ASM::ble(.L_800D7AA8);
RUNTIME_PPC_JUMP_LABEL(.L_800D7A64, 0x800D7A64) //this is a jump label
/*800D7A64 000D4864*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*800D7A68 000D4868*/ PPC::Runtime::ASM::add(context->r8, context->r0, context->r7);
/*800D7A6C 000D486C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*800D7A70 000D4870*/ PPC::Runtime::ASM::cmplw(context->r0, context->r4);
/*800D7A74 000D4874*/ PPC::Runtime::ASM::bne(.L_800D7A9C);
/*800D7A78 000D4878*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r8));
/*800D7A7C 000D487C*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 7);
/*800D7A80 000D4880*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*800D7A84 000D4884*/ PPC::Runtime::ASM::bne(.L_800D7A9C);
/*800D7A88 000D4888*/ PPC::Runtime::ASM::cmplwi(context->r6, 0x0);
/*800D7A8C 000D488C*/ PPC::Runtime::ASM::beq(.L_800D7A94);
/*800D7A90 000D4890*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
RUNTIME_PPC_JUMP_LABEL(.L_800D7A94, 0x800D7A94) //this is a jump label
/*800D7A94 000D4894*/ PPC::Runtime::ASM::mr(context->r3, context->r8);
/*800D7A98 000D4898*/ PPC::Runtime::ASM::b(.L_800D7AC0);
RUNTIME_PPC_JUMP_LABEL(.L_800D7A9C, 0x800D7A9C) //this is a jump label
/*800D7A9C 000D489C*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x140);
/*800D7AA0 000D48A0*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x1);
/*800D7AA4 000D48A4*/ PPC::Runtime::ASM::bdnz(.L_800D7A64);
RUNTIME_PPC_JUMP_LABEL(.L_800D7AA8, 0x800D7AA8) //this is a jump label
/*800D7AA8 000D48A8*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_922 @ Get_MemoryOffset_HighBit);
/*800D7AAC 000D48AC*/ PPC::Runtime::ASM::li(context->r4, 0x36c);
/*800D7AB0 000D48B0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_922 @ Get_MemoryOffset_LowBit);
/*800D7AB4 000D48B4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D60B0 @ Get_MemoryOffset_SDA21);
/*800D7AB8 000D48B8*/ PPC::Runtime::ASM::bl(fn___assert);
/*800D7ABC 000D48BC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800D7AC0, 0x800D7AC0) //this is a jump label
/*800D7AC0 000D48C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D7AC4 000D48C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D7AC8 000D48C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800D7ACC 000D48CC*/ PPC::Runtime::ASM::blr();
}