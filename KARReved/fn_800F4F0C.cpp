//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F857C.hpp"
#include "fn_800F784C.hpp"
#include "fn_800F6414.hpp"
#include "fn_800F66A8.hpp"
#include "fn_800F7368.hpp"



void fn_800F4F0C(PPC::Runtime::GCContext* context)
{
/*800F4F0C 000F1D0C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800F4F10 000F1D10*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F4F14 000F1D14*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_978 @ Get_MemoryOffset_HighBit);
/*800F4F18 000F1D18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800F4F1C 000F1D1C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800F4F20 000F1D20*/ PPC::Runtime::ASM::addi(context->r31, context->r4, MemoryOffset_978 @ Get_MemoryOffset_LowBit);
/*800F4F24 000F1D24*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800F4F28 000F1D28*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F4F2C 000F1D2C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800F4F30 000F1D30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800F4F34 000F1D34*/ PPC::Runtime::ASM::lwz(context->r30, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F4F38 000F1D38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800F4F3C 000F1D3C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800F4F40 000F1D40*/ PPC::Runtime::ASM::beq(.L_800F4F54);
/*800F4F44 000F1D44*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3c);
/*800F4F48 000F1D48*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x1c8);
/*800F4F4C 000F1D4C*/ PPC::Runtime::ASM::li(context->r4, 0x1d5);
/*800F4F50 000F1D50*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800F4F54, 0x800F4F54) //this is a jump label
/*800F4F54 000F1D54*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*800F4F58 000F1D58*/ PPC::Runtime::ASM::lis(context->r3, StructWithStructs_80 @ Get_MemoryOffset_HighBit);
/*800F4F5C 000F1D5C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, StructWithStructs_80 @ Get_MemoryOffset_LowBit);
/*800F4F60 000F1D60*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800F4F64 000F1D64*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*800F4F68 000F1D68*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800F4F6C 000F1D6C*/ PPC::Runtime::ASM::beq(.L_800F4F88);
/*800F4F70 000F1D70*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800F4F74 000F1D74*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*800F4F78 000F1D78*/ PPC::Runtime::ASM::beq(.L_800F4F88);
/*800F4F7C 000F1D7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800F4F80 000F1D80*/ PPC::Runtime::ASM::mtctr(context->r12);
/*800F4F84 000F1D84*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_800F4F88, 0x800F4F88) //this is a jump label
/*800F4F88 000F1D88*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800F4F8C 000F1D8C*/ PPC::Runtime::ASM::bl(fn_800F857C);
/*800F4F90 000F1D90*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800F4F94 000F1D94*/ PPC::Runtime::ASM::bl(fn_800F784C);
/*800F4F98 000F1D98*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800F4F9C 000F1D9C*/ PPC::Runtime::ASM::bl(fn_800F6414);
/*800F4FA0 000F1DA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800F4FA4 000F1DA4*/ PPC::Runtime::ASM::bl(fn_800F66A8);
/*800F4FA8 000F1DA8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800F4FAC 000F1DAC*/ PPC::Runtime::ASM::bl(fn_800F7368);
/*800F4FB0 000F1DB0*/ PPC::Runtime::ASM::lis(context->r3, lbl_80557584 @ Get_MemoryOffset_HighBit);
/*800F4FB4 000F1DB4*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*800F4FB8 000F1DB8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80557584 @ Get_MemoryOffset_LowBit);
/*800F4FBC 000F1DBC*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
/*800F4FC0 000F1DC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6fc, context->r30));
/*800F4FC4 000F1DC4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800F4FC8 000F1DC8*/ PPC::Runtime::ASM::bgt(.L_800F4FDC);
/*800F4FCC 000F1DCC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3c);
/*800F4FD0 000F1DD0*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x1e4);
/*800F4FD4 000F1DD4*/ PPC::Runtime::ASM::li(context->r4, 0x1f0);
/*800F4FD8 000F1DD8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800F4FDC, 0x800F4FDC) //this is a jump label
/*800F4FDC 000F1DDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6fc, context->r30));
/*800F4FE0 000F1DE0*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*800F4FE4 000F1DE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6fc, context->r30));
/*800F4FE8 000F1DE8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800F4FEC 000F1DEC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800F4FF0 000F1DF0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F4FF4 000F1DF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800F4FF8 000F1DF8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F4FFC 000F1DFC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800F5000 000F1E00*/ PPC::Runtime::ASM::blr();
}