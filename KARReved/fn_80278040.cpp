//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8000A958.hpp"
#include "fn_8005E7D8.hpp"
#include "fn_80061834.hpp"
#include "fn_8005E7D8.hpp"
#include "fn_80061834.hpp"



void fn_80278040(PPC::Runtime::GCContext* context)
{
/*80278040 00274E40*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80278044 00274E44*/ PPC::Runtime::ASM::mflr(context->r0);
/*80278048 00274E48*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055EC58 @ Get_MemoryOffset_HighBit);
/*8027804C 00274E4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80278050 00274E50*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80278054 00274E54*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80278058 00274E58*/ PPC::Runtime::ASM::addi(context->r30, context->r3, lbl_8055EC58 @ Get_MemoryOffset_LowBit);
/*8027805C 00274E5C*/ PPC::Runtime::ASM::bl(fn_8000A958);
/*80278060 00274E60*/ PPC::Runtime::ASM::extsb.(context->r31, context->r3);
/*80278064 00274E64*/ PPC::Runtime::ASM::bne(.L_80278074);
/*80278068 00274E68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35c, context->r30));
/*8027806C 00274E6C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80278070 00274E70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80278074, 0x80278074) //this is a jump label
/*80278074 00274E74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x360, context->r30));
/*80278078 00274E78*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8027807C 00274E7C*/ PPC::Runtime::ASM::ble(.L_80278118);
/* 80278080 00274E80  34 03 FF FF */ subic. context->r0 , context->r3 , 0x1
/*80278084 00274E84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x360, context->r30));
/*80278088 00274E88*/ PPC::Runtime::ASM::bne(.L_80278118);
/*8027808C 00274E8C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B9138 @ Get_MemoryOffset_HighBit);
/*80278090 00274E90*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055EC58 @ Get_MemoryOffset_HighBit);
/*80278094 00274E94*/ PPC::Runtime::ASM::addi(context->r6, context->r4, lbl_804B9138 @ Get_MemoryOffset_LowBit);
/*80278098 00274E98*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r6));
/*8027809C 00274E9C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_8055EC58 @ Get_MemoryOffset_LowBit);
/*802780A0 00274EA0*/ PPC::Runtime::ASM::mulli(context->r3, context->r4, 0xc);
/*802780A4 00274EA4*/ PPC::Runtime::ASM::add(context->r30, context->r0, context->r3);
/*802780A8 00274EA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802780AC 00274EAC*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*802780B0 00274EB0*/ PPC::Runtime::ASM::beq(.L_802780E0);
/*802780B4 00274EB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802780B8 00274EB8*/ PPC::Runtime::ASM::lha(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r6));
/*802780BC 00274EBC*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*802780C0 00274EC0*/ PPC::Runtime::ASM::add(context->r4, context->r6, context->r0);
/*802780C4 00274EC4*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*802780C8 00274EC8*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*802780CC 00274ECC*/ PPC::Runtime::ASM::bgt(.L_802780DC);
/*802780D0 00274ED0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802780D4 00274ED4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xf0);
/*802780D8 00274ED8*/ PPC::Runtime::ASM::ble(.L_80278118);
RUNTIME_PPC_JUMP_LABEL(.L_802780DC, 0x802780DC) //this is a jump label
/*802780DC 00274EDC*/ PPC::Runtime::ASM::bl(fn_8005E7D8);
RUNTIME_PPC_JUMP_LABEL(.L_802780E0, 0x802780E0) //this is a jump label
/*802780E0 00274EE0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B9138 @ Get_MemoryOffset_HighBit);
/*802780E4 00274EE4*/ PPC::Runtime::ASM::li(context->r4, 0x7f);
/*802780E8 00274EE8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B9138 @ Get_MemoryOffset_LowBit);
/*802780EC 00274EEC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802780F0 00274EF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r3));
/*802780F4 00274EF4*/ PPC::Runtime::ASM::bl(fn_80061834);
/*802780F8 00274EF8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802780FC 00274EFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80278100 00274F00*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80278104 00274F04*/ PPC::Runtime::ASM::beq(.L_80278118);
/*80278108 00274F08*/ PPC::Runtime::ASM::li(context->r3, 0x6);
/*8027810C 00274F0C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80278110 00274F10*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80278114 00274F14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80278118, 0x80278118) //this is a jump label
/*80278118 00274F18*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x1);
/*8027811C 00274F1C*/ PPC::Runtime::ASM::bne(.L_802781AC);
/*80278120 00274F20*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B9138 @ Get_MemoryOffset_HighBit);
/*80278124 00274F24*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055EC58 @ Get_MemoryOffset_HighBit);
/*80278128 00274F28*/ PPC::Runtime::ASM::addi(context->r6, context->r4, lbl_804B9138 @ Get_MemoryOffset_LowBit);
/*8027812C 00274F2C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r6));
/*80278130 00274F30*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_8055EC58 @ Get_MemoryOffset_LowBit);
/*80278134 00274F34*/ PPC::Runtime::ASM::mulli(context->r3, context->r4, 0xc);
/*80278138 00274F38*/ PPC::Runtime::ASM::add(context->r30, context->r0, context->r3);
/*8027813C 00274F3C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80278140 00274F40*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*80278144 00274F44*/ PPC::Runtime::ASM::beq(.L_80278174);
/*80278148 00274F48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8027814C 00274F4C*/ PPC::Runtime::ASM::lha(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r6));
/*80278150 00274F50*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*80278154 00274F54*/ PPC::Runtime::ASM::add(context->r4, context->r6, context->r0);
/*80278158 00274F58*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8027815C 00274F5C*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*80278160 00274F60*/ PPC::Runtime::ASM::bgt(.L_80278170);
/*80278164 00274F64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80278168 00274F68*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xf0);
/*8027816C 00274F6C*/ PPC::Runtime::ASM::ble(.L_802781AC);
RUNTIME_PPC_JUMP_LABEL(.L_80278170, 0x80278170) //this is a jump label
/*80278170 00274F70*/ PPC::Runtime::ASM::bl(fn_8005E7D8);
RUNTIME_PPC_JUMP_LABEL(.L_80278174, 0x80278174) //this is a jump label
/*80278174 00274F74*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B9138 @ Get_MemoryOffset_HighBit);
/*80278178 00274F78*/ PPC::Runtime::ASM::li(context->r4, 0x7f);
/*8027817C 00274F7C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B9138 @ Get_MemoryOffset_LowBit);
/*80278180 00274F80*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80278184 00274F84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r3));
/*80278188 00274F88*/ PPC::Runtime::ASM::bl(fn_80061834);
/*8027818C 00274F8C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80278190 00274F90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80278194 00274F94*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80278198 00274F98*/ PPC::Runtime::ASM::beq(.L_802781AC);
/*8027819C 00274F9C*/ PPC::Runtime::ASM::li(context->r3, 0x6);
/*802781A0 00274FA0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802781A4 00274FA4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802781A8 00274FA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802781AC, 0x802781AC) //this is a jump label
/*802781AC 00274FAC*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055EC58 @ Get_MemoryOffset_HighBit);
/*802781B0 00274FB0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055EC58 @ Get_MemoryOffset_LowBit);
/*802781B4 00274FB4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x358, context->r3));
/*802781B8 00274FB8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802781BC 00274FBC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802781C0 00274FC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802781C4 00274FC4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802781C8 00274FC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802781CC 00274FCC*/ PPC::Runtime::ASM::blr();
}