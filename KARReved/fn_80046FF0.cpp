//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_80135E44.hpp"
#include "fn_80135F14.hpp"
#include "fn_80135F6C.hpp"
#include "fn_80046DF0.hpp"
#include "fn_80135F90.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_8013610C.hpp"
#include "fn_8000BB8C.hpp"
#include "fn_8013619C.hpp"
#include "fn_8000B9F4.hpp"
#include "fn_?loadData2.hpp"
#include "fn_8013610C.hpp"
#include "fn_8000BB8C.hpp"
#include "fn_8013619C.hpp"
#include "fn_801360CC.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_80135FCC.hpp"
#include "fn_80136084.hpp"
#include "fn_80135D08.hpp"
#include "fn_loadMainMenuMusic.hpp"



void fn_80046FF0(PPC::Runtime::GCContext* context)
{
/*80046FF0 00043DF0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*80046FF4 00043DF4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80046FF8 00043DF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80046FFC 00043DFC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80047000 00043E00*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80047004 00043E04*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80047008 00043E08*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8004700C 00043E0C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x484);
/*80047010 00043E10*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80047014 00043E14*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x488, context->r3));
/*80047018 00043E18*/ PPC::Runtime::ASM::bl(fn_80135E44);
/*8004701C 00043E1C*/ PPC::Runtime::ASM::bl(fn_80135F14);
/*80047020 00043E20*/ PPC::Runtime::ASM::bl(fn_80135F6C);
/*80047024 00043E24*/ PPC::Runtime::ASM::bl(fn_80046DF0);
/*80047028 00043E28*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
/*8004702C 00043E2C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80047030 00043E30*/ PPC::Runtime::ASM::bne(.L_8004703C);
/*80047034 00043E34*/ PPC::Runtime::ASM::bl(fn_80135F90);
/*80047038 00043E38*/ PPC::Runtime::ASM::b(.L_800472C4);
RUNTIME_PPC_JUMP_LABEL(.L_8004703C, 0x8004703C) //this is a jump label
/*8004703C 00043E3C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80047040 00043E40*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x8);
/*80047044 00043E44*/ PPC::Runtime::ASM::bgt(.L_80047054);
/*80047048 00043E48*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8004704C 00043E4C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
/*80047050 00043E50*/ PPC::Runtime::ASM::b(.L_800470B0);
RUNTIME_PPC_JUMP_LABEL(.L_80047054, 0x80047054) //this is a jump label
/*80047054 00043E54*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80047058 00043E58*/ PPC::Runtime::ASM::extsb(context->r3, context->r4);
/*8004705C 00043E5C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x8);
/*80047060 00043E60*/ PPC::Runtime::ASM::bge(.L_80047078);
/*80047064 00043E64*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
/*80047068 00043E68*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8004706C 00043E6C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*80047070 00043E70*/ PPC::Runtime::ASM::ble(.L_80047078);
/*80047074 00043E74*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80047078, 0x80047078) //this is a jump label
/*80047078 00043E78*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
/*8004707C 00043E7C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80047080 00043E80*/ PPC::Runtime::ASM::extsb(context->r5, context->r5);
/*80047084 00043E84*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*80047088 00043E88*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x8);
/*8004708C 00043E8C*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*80047090 00043E90*/ PPC::Runtime::ASM::blt(.L_800470B0);
/*80047094 00043E94*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
/*80047098 00043E98*/ PPC::Runtime::ASM::subf(context->r0, context->r4, context->r5);
/*8004709C 00043E9C*/ PPC::Runtime::ASM::subfic(context->r4, context->r0, 0x8);
/*800470A0 00043EA0*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*800470A4 00043EA4*/ PPC::Runtime::ASM::cmpw(context->r0, context->r4);
/*800470A8 00043EA8*/ PPC::Runtime::ASM::bge(.L_800470B0);
/*800470AC 00043EAC*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800470B0, 0x800470B0) //this is a jump label
/*800470B0 00043EB0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800470B4 00043EB4*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*800470B8 00043EB8*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*800470BC 00043EBC*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*800470C0 00043EC0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800470C4 00043EC4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r31));
/*800470C8 00043EC8*/ PPC::Runtime::ASM::lbz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r31));
/*800470CC 00043ECC*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800470D0 00043ED0*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*800470D4 00043ED4*/ PPC::Runtime::ASM::mulli(context->r4, context->r0, 0x14);
/*800470D8 00043ED8*/ PPC::Runtime::ASM::addi(context->r29, context->r4, 0x1324);
/*800470DC 00043EDC*/ PPC::Runtime::ASM::add(context->r29, context->r3, context->r29);
/*800470E0 00043EE0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800470E4 00043EE4*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*800470E8 00043EE8*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*800470EC 00043EEC*/ PPC::Runtime::ASM::bne(.L_8004711C);
/*800470F0 00043EF0*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*800470F4 00043EF4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*800470F8 00043EF8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800470FC 00043EFC*/ PPC::Runtime::ASM::bl(fn_8013610C);
/*80047100 00043F00*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r31));
/*80047104 00043F04*/ PPC::Runtime::ASM::bl(fn_8000BB8C);
/*80047108 00043F08*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DE8F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8004710C 00043F0C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*80047110 00043F10*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80047114 00043F14*/ PPC::Runtime::ASM::bl(fn_8013619C);
/*80047118 00043F18*/ PPC::Runtime::ASM::b(.L_80047170);
RUNTIME_PPC_JUMP_LABEL(.L_8004711C, 0x8004711C) //this is a jump label
/*8004711C 00043F1C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80047120 00043F20*/ PPC::Runtime::ASM::bne(.L_80047138);
/*80047124 00043F24*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r29));
/*80047128 00043F28*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r29));
/*8004712C 00043F2C*/ PPC::Runtime::ASM::bl(fn_8000B9F4);
/*80047130 00043F30*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80047134 00043F34*/ PPC::Runtime::ASM::b(.L_8004713C);
RUNTIME_PPC_JUMP_LABEL(.L_80047138, 0x80047138) //this is a jump label
/*80047138 00043F38*/ PPC::Runtime::ASM::li(context->r30, -0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8004713C, 0x8004713C) //this is a jump label
/*8004713C 00043F3C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r29));
/*80047140 00043F40*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*80047144 00043F44*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80047148 00043F48*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8004714C 00043F4C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80047150 00043F50*/ PPC::Runtime::ASM::bl(fn_8013610C);
/*80047154 00043F54*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80047158 00043F58*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r31));
/*8004715C 00043F5C*/ PPC::Runtime::ASM::bl(fn_8000BB8C);
/*80047160 00043F60*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80047164 00043F64*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80047168 00043F68*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*8004716C 00043F6C*/ PPC::Runtime::ASM::bl(fn_8013619C);
RUNTIME_PPC_JUMP_LABEL(.L_80047170, 0x80047170) //this is a jump label
/*80047170 00043F70*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
/*80047174 00043F74*/ PPC::Runtime::ASM::bl(fn_801360CC);
/*80047178 00043F78*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
/*8004717C 00043F7C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80047180 00043F80*/ PPC::Runtime::ASM::subf(context->r0, context->r3, context->r0);
/*80047184 00043F84*/ PPC::Runtime::ASM::extsb(context->r30, context->r0);
/*80047188 00043F88*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8004718C 00043F8C*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x484);
/*80047190 00043F90*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80047194 00043F94*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x489, context->r3));
/*80047198 00043F98*/ PPC::Runtime::ASM::extsb(context->r3, context->r0);
/* 8004719C 00043F9C  34 03 FF F8 */ subic. context->r0 , context->r3 , 0x8
/*800471A0 00043FA0*/ PPC::Runtime::ASM::bgt(.L_800471AC);
/*800471A4 00043FA4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DE8F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800471A8 00043FA8*/ PPC::Runtime::ASM::b(.L_800471E0);
RUNTIME_PPC_JUMP_LABEL(.L_800471AC, 0x800471AC) //this is a jump label
/*800471AC 00043FAC*/ PPC::Runtime::ASM::lis(context->r3, 0x4330);
/*800471B0 00043FB0*/ PPC::Runtime::ASM::xoris(context->r4, context->r30, 0x8000);
/*800471B4 00043FB4*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*800471B8 00043FB8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800471BC 00043FBC*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805DE8F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800471C0 00043FC0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800471C4 00043FC4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800471C8 00043FC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800471CC 00043FCC*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f2);
/*800471D0 00043FD0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800471D4 00043FD4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800471D8 00043FD8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*800471DC 00043FDC*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_800471E0, 0x800471E0) //this is a jump label
/*800471E0 00043FE0*/ PPC::Runtime::ASM::mulli(context->r3, context->r30, 0xc);
/*800471E4 00043FE4*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*800471E8 00043FE8*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x8);
/*800471EC 00043FEC*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x10);
/*800471F0 00043FF0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800471F4 00043FF4*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_800471F8, 0x800471F8) //this is a jump label
/*800471F8 00043FF8*/ PPC::Runtime::ASM::add(context->r10, context->r6, context->r3);
/*800471FC 00043FFC*/ PPC::Runtime::ASM::lbz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r10));
/*80047200 00044000*/ PPC::Runtime::ASM::extsb(context->r0, context->r9);
/*80047204 00044004*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80047208 00044008*/ PPC::Runtime::ASM::beq(.L_80047238);
/*8004720C 0004400C*/ PPC::Runtime::ASM::addi(context->r0, context->r9, 0x1);
/*80047210 00044010*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*80047214 00044014*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r10));
/*80047218 00044018*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*8004721C 0004401C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r10));
/*80047220 00044020*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80047224 00044024*/ PPC::Runtime::ASM::bne(.L_80047244);
/*80047228 00044028*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8004722C 0004402C*/ PPC::Runtime::ASM::slw(context->r0, context->r0, context->r4);
/*80047230 00044030*/ PPC::Runtime::ASM::or(context->r5, context->r5, context->r0);
/*80047234 00044034*/ PPC::Runtime::ASM::b(.L_80047244);
RUNTIME_PPC_JUMP_LABEL(.L_80047238, 0x80047238) //this is a jump label
/*80047238 00044038*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*8004723C 0004403C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*80047240 00044040*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
RUNTIME_PPC_JUMP_LABEL(.L_80047244, 0x80047244) //this is a jump label
/*80047244 00044044*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xc);
/*80047248 00044048*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*8004724C 0004404C*/ PPC::Runtime::ASM::add(context->r10, context->r6, context->r3);
/*80047250 00044050*/ PPC::Runtime::ASM::lbz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r10));
/*80047254 00044054*/ PPC::Runtime::ASM::extsb(context->r0, context->r9);
/*80047258 00044058*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8004725C 0004405C*/ PPC::Runtime::ASM::beq(.L_8004728C);
/*80047260 00044060*/ PPC::Runtime::ASM::addi(context->r0, context->r9, 0x1);
/*80047264 00044064*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r7));
/*80047268 00044068*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r10));
/*8004726C 0004406C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r8));
/*80047270 00044070*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r10));
/*80047274 00044074*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80047278 00044078*/ PPC::Runtime::ASM::bne(.L_80047298);
/*8004727C 0004407C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80047280 00044080*/ PPC::Runtime::ASM::slw(context->r0, context->r0, context->r4);
/*80047284 00044084*/ PPC::Runtime::ASM::or(context->r5, context->r5, context->r0);
/*80047288 00044088*/ PPC::Runtime::ASM::b(.L_80047298);
RUNTIME_PPC_JUMP_LABEL(.L_8004728C, 0x8004728C) //this is a jump label
/*8004728C 0004408C*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*80047290 00044090*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r7));
/*80047294 00044094*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r8));
RUNTIME_PPC_JUMP_LABEL(.L_80047298, 0x80047298) //this is a jump label
/*80047298 00044098*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*8004729C 0004409C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xc);
/*800472A0 000440A0*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x2);
/*800472A4 000440A4*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x2);
/*800472A8 000440A8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*800472AC 000440AC*/ PPC::Runtime::ASM::bdnz(.L_800471F8);
/*800472B0 000440B0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*800472B4 000440B4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*800472B8 000440B8*/ PPC::Runtime::ASM::bl(fn_80135FCC);
/*800472BC 000440BC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r31));
/*800472C0 000440C0*/ PPC::Runtime::ASM::bl(fn_80136084);
RUNTIME_PPC_JUMP_LABEL(.L_800472C4, 0x800472C4) //this is a jump label
/*800472C4 000440C4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800472C8 000440C8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800472CC 000440CC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*800472D0 000440D0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*800472D4 000440D4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800472D8 000440D8*/ PPC::Runtime::ASM::bne(.L_800472EC);
/*800472DC 000440DC*/ PPC::Runtime::ASM::li(context->r3, 0x6);
/*800472E0 000440E0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*800472E4 000440E4*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*800472E8 000440E8*/ PPC::Runtime::ASM::bl(fn_80135D08);
RUNTIME_PPC_JUMP_LABEL(.L_800472EC, 0x800472EC) //this is a jump label
/*800472EC 000440EC*/ PPC::Runtime::ASM::bl(fn_loadMainMenuMusic);
/*800472F0 000440F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800472F4 000440F4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*800472F8 000440F8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*800472FC 000440FC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80047300 00044100*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80047304 00044104*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*80047308 00044108*/ PPC::Runtime::ASM::blr();
}