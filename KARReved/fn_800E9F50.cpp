//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005DB20.hpp"
#include "fn_8005DB44.hpp"
#include "fn_8005DB98.hpp"



void fn_800E9F50(PPC::Runtime::GCContext* context)
{
/*800E9F50 000E6D50*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800E9F54 000E6D54*/ PPC::Runtime::ASM::mflr(context->r0);
/*800E9F58 000E6D58*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*800E9F5C 000E6D5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800E9F60 000E6D60*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800E9F64 000E6D64*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*800E9F68 000E6D68*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800E9F6C 000E6D6C*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*800E9F70 000E6D70*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800E9F74 000E6D74*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*800E9F78 000E6D78*/ PPC::Runtime::ASM::beq(.L_800E9FA4);
/*800E9F7C 000E6D7C*/ PPC::Runtime::ASM::bge(.L_800E9F8C);
/*800E9F80 000E6D80*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800E9F84 000E6D84*/ PPC::Runtime::ASM::bge(.L_800E9F98);
/*800E9F88 000E6D88*/ PPC::Runtime::ASM::b(.L_800EA000);
RUNTIME_PPC_JUMP_LABEL(.L_800E9F8C, 0x800E9F8C) //this is a jump label
/*800E9F8C 000E6D8C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x3);
/*800E9F90 000E6D90*/ PPC::Runtime::ASM::bge(.L_800EA000);
/*800E9F94 000E6D94*/ PPC::Runtime::ASM::b(.L_800E9FD4);
RUNTIME_PPC_JUMP_LABEL(.L_800E9F98, 0x800E9F98) //this is a jump label
/*800E9F98 000E6D98*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800E9F9C 000E6D9C*/ PPC::Runtime::ASM::bl(fn_8005DB20);
/*800E9FA0 000E6DA0*/ PPC::Runtime::ASM::b(.L_800EA000);
RUNTIME_PPC_JUMP_LABEL(.L_800E9FA4, 0x800E9FA4) //this is a jump label
/*800E9FA4 000E6DA4*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800E9FA8 000E6DA8*/ PPC::Runtime::ASM::bne(.L_800E9FC0);
/*800E9FAC 000E6DAC*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_961 @ Get_MemoryOffset_HighBit);
/*800E9FB0 000E6DB0*/ PPC::Runtime::ASM::li(context->r4, 0xfc);
/*800E9FB4 000E6DB4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_961 @ Get_MemoryOffset_LowBit);
/*800E9FB8 000E6DB8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D616C @ Get_MemoryOffset_SDA21);
/*800E9FBC 000E6DBC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E9FC0, 0x800E9FC0) //this is a jump label
/*800E9FC0 000E6DC0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*800E9FC4 000E6DC4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800E9FC8 000E6DC8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*800E9FCC 000E6DCC*/ PPC::Runtime::ASM::bl(fn_8005DB44);
/*800E9FD0 000E6DD0*/ PPC::Runtime::ASM::b(.L_800EA000);
RUNTIME_PPC_JUMP_LABEL(.L_800E9FD4, 0x800E9FD4) //this is a jump label
/*800E9FD4 000E6DD4*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800E9FD8 000E6DD8*/ PPC::Runtime::ASM::bne(.L_800E9FF0);
/*800E9FDC 000E6DDC*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_961 @ Get_MemoryOffset_HighBit);
/*800E9FE0 000E6DE0*/ PPC::Runtime::ASM::li(context->r4, 0x101);
/*800E9FE4 000E6DE4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_961 @ Get_MemoryOffset_LowBit);
/*800E9FE8 000E6DE8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D616C @ Get_MemoryOffset_SDA21);
/*800E9FEC 000E6DEC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E9FF0, 0x800E9FF0) //this is a jump label
/*800E9FF0 000E6DF0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*800E9FF4 000E6DF4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800E9FF8 000E6DF8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*800E9FFC 000E6DFC*/ PPC::Runtime::ASM::bl(fn_8005DB98);
RUNTIME_PPC_JUMP_LABEL(.L_800EA000, 0x800EA000) //this is a jump label
/*800EA000 000E6E00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800EA004 000E6E04*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800EA008 000E6E08*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800EA00C 000E6E0C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800EA010 000E6E10*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800EA014 000E6E14*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800EA018 000E6E18*/ PPC::Runtime::ASM::blr();
}