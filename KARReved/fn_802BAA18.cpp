//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80284C44.hpp"
#include "fn_80284C44.hpp"



void fn_802BAA18(PPC::Runtime::GCContext* context)
{
/*802BAA18 002B7818*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802BAA1C 002B781C*/ PPC::Runtime::ASM::mflr(context->r0);
/*802BAA20 002B7820*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802BAA24 002B7824*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802BAA28 002B7828*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802BAA2C 002B782C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802BAA30 002B7830  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802BAA34 002B7834*/ PPC::Runtime::ASM::beq(.L_802BAA98);
/*802BAA38 002B7838*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F608C @ Get_MemoryOffset_HighBit);
/*802BAA3C 002B783C*/ PPC::Runtime::ASM::lis(context->r4, fn_80284C44 @ Get_MemoryOffset_HighBit);
/*802BAA40 002B7840*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F608C @ Get_MemoryOffset_LowBit);
/*802BAA44 002B7844*/ PPC::Runtime::ASM::li(context->r5, 0xc);
/*802BAA48 002B7848*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802BAA4C 002B784C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1c);
/*802BAA50 002B7850*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80284C44 @ Get_MemoryOffset_LowBit);
/*802BAA54 002B7854*/ PPC::Runtime::ASM::li(context->r6, 0x13);
/*802BAA58 002B7858*/ PPC::Runtime::ASM::bl(fn___destroy_arr);
/*802BAA5C 002B785C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802BAA60 002B7860*/ PPC::Runtime::ASM::beq(.L_802BAA88);
/*802BAA64 002B7864*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F585C @ Get_MemoryOffset_HighBit);
/*802BAA68 002B7868*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F585C @ Get_MemoryOffset_LowBit);
/*802BAA6C 002B786C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802BAA70 002B7870*/ PPC::Runtime::ASM::beq(.L_802BAA88);
/*802BAA74 002B7874*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC338 @ Get_MemoryOffset_HighBit);
/*802BAA78 002B7878*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802BAA7C 002B787C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BC338 @ Get_MemoryOffset_LowBit);
/*802BAA80 002B7880*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802BAA84 002B7884*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDBB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_802BAA88, 0x802BAA88) //this is a jump label
/*802BAA88 002B7888*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802BAA8C 002B788C*/ PPC::Runtime::ASM::ble(.L_802BAA98);
/*802BAA90 002B7890*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802BAA94 002B7894*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802BAA98, 0x802BAA98) //this is a jump label
/*802BAA98 002B7898*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802BAA9C 002B789C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802BAAA0 002B78A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802BAAA4 002B78A4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802BAAA8 002B78A8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802BAAAC 002B78AC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802BAAB0 002B78B0*/ PPC::Runtime::ASM::blr();
}