//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80191B4C.hpp"
#include "fn_8020407C.hpp"
#include "fn_8021F7DC.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_80236C40.hpp"



void fn_80227F68(PPC::Runtime::GCContext* context)
{
/*80227F68 00224D68*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*80227F6C 00224D6C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80227F70 00224D70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80227F74 00224D74*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80227F78 00224D78*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80227F7C 00224D7C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80227F80 00224D80*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80227F84 00224D84*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80227F88 00224D88*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80227F8C 00224D8C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80227F90 00224D90*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x11);
/*80227F94 00224D94*/ PPC::Runtime::ASM::bne(.L_80227FAC);
/*80227F98 00224D98*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80227F9C 00224D9C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x18);
/*80227FA0 00224DA0*/ PPC::Runtime::ASM::bl(fn_80191B4C);
/*80227FA4 00224DA4*/ PPC::Runtime::ASM::li(context->r29, 0x1);
/*80227FA8 00224DA8*/ PPC::Runtime::ASM::b(.L_80227FD0);
RUNTIME_PPC_JUMP_LABEL(.L_80227FAC, 0x80227FAC) //this is a jump label
/*80227FAC 00224DAC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x10);
/*80227FB0 00224DB0*/ PPC::Runtime::ASM::bne(.L_80227FBC);
/*80227FB4 00224DB4*/ PPC::Runtime::ASM::li(context->r29, 0x1);
/*80227FB8 00224DB8*/ PPC::Runtime::ASM::b(.L_80227FD0);
RUNTIME_PPC_JUMP_LABEL(.L_80227FBC, 0x80227FBC) //this is a jump label
/*80227FBC 00224DBC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x15);
/*80227FC0 00224DC0*/ PPC::Runtime::ASM::bne(.L_80227FD0);
/*80227FC4 00224DC4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80227FC8 00224DC8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x18);
/*80227FCC 00224DCC*/ PPC::Runtime::ASM::bl(fn_8020407C);
RUNTIME_PPC_JUMP_LABEL(.L_80227FD0, 0x80227FD0) //this is a jump label
/*80227FD0 00224DD0*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x1);
/*80227FD4 00224DD4*/ PPC::Runtime::ASM::bne(.L_802280D4);
/*80227FD8 00224DD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80227FDC 00224DDC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80227FE0 00224DE0*/ PPC::Runtime::ASM::beq(.L_802280D4);
/*80227FE4 00224DE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r30));
/*80227FE8 00224DE8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80227FEC 00224DEC*/ PPC::Runtime::ASM::beq(.L_802280D4);
/*80227FF0 00224DF0*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 1);
/*80227FF4 00224DF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r30));
/*80227FF8 00224DF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r30));
/*80227FFC 00224DFC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80228000 00224E00*/ PPC::Runtime::ASM::bne(.L_802280D4);
/*80228004 00224E04*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E29B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80228008 00224E08*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8022800C 00224E0C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E29B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80228010 00224E10*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80228014 00224E14*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80228018 00224E18*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8022801C 00224E1C*/ PPC::Runtime::ASM::bl(fn_8021F7DC);
/*80228020 00224E20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r30));
/*80228024 00224E24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80228028 00224E28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r30));
/*8022802C 00224E2C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r30));
/*80228030 00224E30*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80228034 00224E34*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80228038 00224E38*/ PPC::Runtime::ASM::bne(.L_8022804C);
/*8022803C 00224E3C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7220 @ Get_MemoryOffset_SDA21);
/*80228040 00224E40*/ PPC::Runtime::ASM::li(context->r4, 0x383);
/*80228044 00224E44*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7228 @ Get_MemoryOffset_SDA21);
/*80228048 00224E48*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8022804C, 0x8022804C) //this is a jump label
/*8022804C 00224E4C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*80228050 00224E50*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80228054 00224E54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80228058 00224E58*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E29B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8022805C 00224E5C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bc, context->r30));
/*80228060 00224E60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r30));
/*80228064 00224E64*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r30));
/*80228068 00224E68*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*8022806C 00224E6C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bc, context->r30));
/*80228070 00224E70*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80228074 00224E74*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*80228078 00224E78*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8022807C 00224E7C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f3, context->f1);
/*80228080 00224E80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80228084 00224E84*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*80228088 00224E88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8022808C 00224E8C*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80228090 00224E90*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r30));
/*80228094 00224E94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r30));
/*80228098 00224E98*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8022809C 00224E9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802280A0 00224EA0*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*802280A4 00224EA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802280A8 00224EA8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802280AC 00224EAC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*802280B0 00224EB0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c4, context->r30));
/*802280B4 00224EB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r30));
/*802280B8 00224EB8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c4, context->r30));
/*802280BC 00224EBC*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*802280C0 00224EC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802280C4 00224EC4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802280C8 00224EC8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*802280CC 00224ECC*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*802280D0 00224ED0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802280D4, 0x802280D4) //this is a jump label
/*802280D4 00224ED4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*802280D8 00224ED8*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*802280DC 00224EDC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802280E0 00224EE0*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*802280E4 00224EE4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E29B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802280E8 00224EE8*/ PPC::Runtime::ASM::lis(context->r3, 0x4);
/*802280EC 00224EEC*/ PPC::Runtime::ASM::subi(context->r4, context->r3, 0x564e);
/*802280F0 00224EF0*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0xc);
/*802280F4 00224EF4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802280F8 00224EF8*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x8);
/*802280FC 00224EFC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80228100 00224F00*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80228104 00224F04*/ PPC::Runtime::ASM::li(context->r6, 0x66);
/*80228108 00224F08*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8022810C 00224F0C*/ PPC::Runtime::ASM::bl(fn_80236C40);
/*80228110 00224F10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80228114 00224F14*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80228118 00224F18*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8022811C 00224F1C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80228120 00224F20*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80228124 00224F24*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80228128 00224F28*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*8022812C 00224F2C*/ PPC::Runtime::ASM::blr();
}