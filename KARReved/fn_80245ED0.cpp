//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80241428.hpp"



void fn_80245ED0(PPC::Runtime::GCContext* context)
{
/*80245ED0 00242CD0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80245ED4 00242CD4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80245ED8 00242CD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80245EDC 00242CDC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80245EE0 00242CE0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80245EE4 00242CE4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80245EE8 00242CE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r3));
/*80245EEC 00242CEC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80245EF0 00242CF0*/ PPC::Runtime::ASM::beq(.L_80245F0C);
/*80245EF4 00242CF4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B57D8 @ Get_MemoryOffset_HighBit);
/*80245EF8 00242CF8*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B57E4 @ Get_MemoryOffset_HighBit);
/*80245EFC 00242CFC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B57D8 @ Get_MemoryOffset_LowBit);
/*80245F00 00242D00*/ PPC::Runtime::ASM::li(context->r4, 0xf9);
/*80245F04 00242D04*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B57E4 @ Get_MemoryOffset_LowBit);
/*80245F08 00242D08*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80245F0C, 0x80245F0C) //this is a jump label
/*80245F0C 00242D0C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x340, context->r30));
/*80245F10 00242D10*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*80245F14 00242D14*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80245F18 00242D18*/ PPC::Runtime::ASM::beq(.L_80245F28);
/*80245F1C 00242D1C*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055DC20 @ Get_MemoryOffset_HighBit);
/*80245F20 00242D20*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055DC20 @ Get_MemoryOffset_LowBit);
/*80245F24 00242D24*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
RUNTIME_PPC_JUMP_LABEL(.L_80245F28, 0x80245F28) //this is a jump label
/*80245F28 00242D28*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*80245F2C 00242D2C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80245F30 00242D30*/ PPC::Runtime::ASM::beq(.L_80245F40);
/*80245F34 00242D34*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055DC4C @ Get_MemoryOffset_HighBit);
/*80245F38 00242D38*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055DC4C @ Get_MemoryOffset_LowBit);
/*80245F3C 00242D3C*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
RUNTIME_PPC_JUMP_LABEL(.L_80245F40, 0x80245F40) //this is a jump label
/*80245F40 00242D40*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055DBF4 @ Get_MemoryOffset_HighBit);
/*80245F44 00242D44*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x340, context->r30));
/*80245F48 00242D48*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055DBF4 @ Get_MemoryOffset_LowBit);
/*80245F4C 00242D4C*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
/*80245F50 00242D50*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80245F54 00242D54*/ PPC::Runtime::ASM::bl(fn_80241428);
/*80245F58 00242D58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80245F5C 00242D5C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80245F60 00242D60*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80245F64 00242D64*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80245F68 00242D68*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80245F6C 00242D6C*/ PPC::Runtime::ASM::blr();
}