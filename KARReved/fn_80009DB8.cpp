//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_80009DB8(PPC::Runtime::GCContext* context)
{
/*80009DB8 00006BB8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80009DBC 00006BBC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80009DC0 00006BC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80009DC4 00006BC4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80009DC8 00006BC8*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*80009DCC 00006BCC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80009DD0 00006BD0*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*80009DD4 00006BD4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80009DD8 00006BD8*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*80009DDC 00006BDC*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80009DE0 00006BE0*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80009DE4 00006BE4*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80009DE8 00006BE8*/ PPC::Runtime::ASM::slwi(context->r0, context->r28, 2);
/*80009DEC 00006BEC*/ PPC::Runtime::ASM::lis(context->r4, 0x5);
/*80009DF0 00006BF0*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80009DF4 00006BF4*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8cc, context->r3));
/*80009DF8 00006BF8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x7e40);
/*80009DFC 00006BFC*/ PPC::Runtime::ASM::cmpw(context->r7, context->r0);
/*80009E00 00006C00*/ PPC::Runtime::ASM::blt(.L_80009E1C);
/*80009E04 00006C04*/ PPC::Runtime::ASM::li(context->r3, 0x63);
/*80009E08 00006C08*/ PPC::Runtime::ASM::li(context->r0, 0x3b);
/*80009E0C 00006C0C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80009E10 00006C10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80009E14 00006C14*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80009E18 00006C18*/ PPC::Runtime::ASM::b(.L_80009ED8);
RUNTIME_PPC_JUMP_LABEL(.L_80009E1C, 0x80009E1C) //this is a jump label
/*80009E1C 00006C1C*/ PPC::Runtime::ASM::lis(context->r5, 0x91a3);
/*80009E20 00006C20*/ PPC::Runtime::ASM::lis(context->r4, 0x8889);
/*80009E24 00006C24*/ PPC::Runtime::ASM::subi(context->r5, context->r5, 0x4c3b);
/*80009E28 00006C28*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/* 80009E2C 00006C2C  7C A5 38 96 */ mulhw context->r5 , context->r5 , context->r7
/*80009E30 00006C30*/ PPC::Runtime::ASM::subi(context->r6, context->r4, 0x7777);
/*80009E34 00006C34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80009E38 00006C38*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805DE748 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80009E3C 00006C3C*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805DE73C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80009E40 00006C40*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE740 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80009E44 00006C44*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r7);
/*80009E48 00006C48*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 11);
/*80009E4C 00006C4C*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*80009E50 00006C50*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*80009E54 00006C54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80009E58 00006C58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8cc, context->r3));
/* 80009E5C 00006C5C  7C 86 00 96 */ mulhw context->r4 , context->r6 , context->r0
/*80009E60 00006C60*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*80009E64 00006C64*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 5);
/*80009E68 00006C68*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*80009E6C 00006C6C*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r4);
/* 80009E70 00006C70  7C 06 28 96 */ mulhw context->r0 , context->r6 , context->r5
/*80009E74 00006C74*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*80009E78 00006C78*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 5);
/*80009E7C 00006C7C*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*80009E80 00006C80*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*80009E84 00006C84*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x3c);
/*80009E88 00006C88*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r5);
/*80009E8C 00006C8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80009E90 00006C90*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8cc, context->r3));
/* 80009E94 00006C94  7C 06 20 96 */ mulhw context->r0 , context->r6 , context->r4
/*80009E98 00006C98*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*80009E9C 00006C9C*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 5);
/*80009EA0 00006CA0*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*80009EA4 00006CA4*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*80009EA8 00006CA8*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x3c);
/*80009EAC 00006CAC*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r4);
/*80009EB0 00006CB0*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*80009EB4 00006CB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80009EB8 00006CB8*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80009EBC 00006CBC*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*80009EC0 00006CC0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f1);
/*80009EC4 00006CC4*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80009EC8 00006CC8*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*80009ECC 00006CCC*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80009ED0 00006CD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80009ED4 00006CD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80009ED8, 0x80009ED8) //this is a jump label
/*80009ED8 00006CD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80009EDC 00006CDC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80009EE0 00006CE0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80009EE4 00006CE4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80009EE8 00006CE8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80009EEC 00006CEC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80009EF0 00006CF0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80009EF4 00006CF4*/ PPC::Runtime::ASM::blr();
}