//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8017B654(PPC::Runtime::GCContext* context)
{
/*8017B654 00178454*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8017B658 00178458*/ PPC::Runtime::ASM::mflr(context->r0);
/*8017B65C 0017845C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017B660 00178460*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017B664 00178464*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8017B668 00178468*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8017B66C 0017846C*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8017B670 00178470*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8017B674 00178474*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1138, context->r3));
/*8017B678 00178478*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8017B67C 0017847C*/ PPC::Runtime::ASM::beq(.L_8017B6E0);
/*8017B680 00178480*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8017B684 00178484*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8017B688 00178488*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8017B68C 0017848C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8017B690 00178490*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8017B694 00178494*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8017B698 00178498*/ PPC::Runtime::ASM::bne(.L_8017B6AC);
/*8017B69C 0017849C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6DD0 @ Get_MemoryOffset_SDA21);
/*8017B6A0 001784A0*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*8017B6A4 001784A4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6DD8 @ Get_MemoryOffset_SDA21);
/*8017B6A8 001784A8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8017B6AC, 0x8017B6AC) //this is a jump label
/*8017B6AC 001784AC*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8017B6B0 001784B0*/ PPC::Runtime::ASM::bne(.L_8017B6C8);
/*8017B6B4 001784B4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804AD1B0 @ Get_MemoryOffset_HighBit);
/*8017B6B8 001784B8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6DD0 @ Get_MemoryOffset_SDA21);
/*8017B6BC 001784BC*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804AD1B0 @ Get_MemoryOffset_LowBit);
/*8017B6C0 001784C0*/ PPC::Runtime::ASM::li(context->r4, 0x3e5);
/*8017B6C4 001784C4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8017B6C8, 0x8017B6C8) //this is a jump label
/*8017B6C8 001784C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8017B6CC 001784CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*8017B6D0 001784D0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8017B6D4 001784D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8017B6D8 001784D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*8017B6DC 001784DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8017B6E0, 0x8017B6E0) //this is a jump label
/*8017B6E0 001784E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017B6E4 001784E4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017B6E8 001784E8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8017B6EC 001784EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8017B6F0 001784F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8017B6F4 001784F4*/ PPC::Runtime::ASM::blr();
}