//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80252C84.hpp"
#include "fn_80252C78.hpp"



void fn_800EC670(PPC::Runtime::GCContext* context)
{
/*800EC670 000E9470*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800EC674 000E9474*/ PPC::Runtime::ASM::mflr(context->r0);
/*800EC678 000E9478*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_964 @ Get_MemoryOffset_HighBit);
/*800EC67C 000E947C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800EC680 000E9480*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800EC684 000E9484*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800EC688 000E9488*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800EC68C 000E948C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800EC690 000E9490*/ PPC::Runtime::ASM::addi(context->r29, context->r4, MemoryOffset_964 @ Get_MemoryOffset_LowBit);
/*800EC694 000E9494*/ PPC::Runtime::ASM::bl(fn_80252C84);
/*800EC698 000E9498*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800EC69C 000E949C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800EC6A0 000E94A0*/ PPC::Runtime::ASM::bl(fn_80252C78);
/*800EC6A4 000E94A4*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1DbLevel @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC6A8 000E94A8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800EC6AC 000E94AC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*800EC6B0 000E94B0*/ PPC::Runtime::ASM::blt(.L_800EC6BC);
/*800EC6B4 000E94B4*/ PPC::Runtime::ASM::cmpwi(context->r31, -0x1);
/*800EC6B8 000E94B8*/ PPC::Runtime::ASM::beq(.L_800EC6FC);
RUNTIME_PPC_JUMP_LABEL(.L_800EC6BC, 0x800EC6BC) //this is a jump label
/*800EC6BC 000E94BC*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*800EC6C0 000E94C0*/ PPC::Runtime::ASM::bne(.L_800EC6FC);
/*800EC6C4 000E94C4*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC6C8 000E94C8*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r31);
/*800EC6CC 000E94CC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*800EC6D0 000E94D0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800EC6D4 000E94D4*/ PPC::Runtime::ASM::bne(.L_800EC6E8);
/*800EC6D8 000E94D8*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x30);
/*800EC6DC 000E94DC*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x17c);
/*800EC6E0 000E94E0*/ PPC::Runtime::ASM::li(context->r4, 0x541);
/*800EC6E4 000E94E4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800EC6E8, 0x800EC6E8) //this is a jump label
/*800EC6E8 000E94E8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC6EC 000E94EC*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r31);
/*800EC6F0 000E94F0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r4));
/*800EC6F4 000E94F4*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*800EC6F8 000E94F8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_800EC6FC, 0x800EC6FC) //this is a jump label
/*800EC6FC 000E94FC*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC700 000E9500*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*800EC704 000E9504*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*800EC708 000E9508*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*800EC70C 000E950C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1DbLevel @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC710 000E9510*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*800EC714 000E9514*/ PPC::Runtime::ASM::blt(.L_800EC738);
/*800EC718 000E9518*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC71C 000E951C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*800EC720 000E9520*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800EC724 000E9524*/ PPC::Runtime::ASM::bge(.L_800EC738);
/*800EC728 000E9528*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x30);
/*800EC72C 000E952C*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x11c);
/*800EC730 000E9530*/ PPC::Runtime::ASM::li(context->r4, 0x506);
/*800EC734 000E9534*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800EC738, 0x800EC738) //this is a jump label
/*800EC738 000E9538*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800EC73C 000E953C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800EC740 000E9540*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800EC744 000E9544*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800EC748 000E9548*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800EC74C 000E954C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800EC750 000E9550*/ PPC::Runtime::ASM::blr();
}