//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AC8.hpp"
#include "fn_80138AB0.hpp"
#include "fn_801389D8.hpp"



void fn_8016411C(PPC::Runtime::GCContext* context)
{
/*8016411C 00160F1C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80164120 00160F20*/ PPC::Runtime::ASM::mflr(context->r0);
/*80164124 00160F24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80164128 00160F28*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016412C 00160F2C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80164130 00160F30*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80164134 00160F34*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*80164138 00160F38*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8016413C 00160F3C*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80164140 00160F40*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80164144 00160F44*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80164148 00160F48*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a8, context->r3));
/*8016414C 00160F4C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80164150 00160F50*/ PPC::Runtime::ASM::beq(.L_801641C0);
/*80164154 00160F54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*80164158 00160F58*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*8016415C 00160F5C*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80164160 00160F60*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80164164 00160F64*/ PPC::Runtime::ASM::stb(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
/*80164168 00160F68*/ PPC::Runtime::ASM::bne(.L_80164178);
/*8016416C 00160F6C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80164170 00160F70*/ PPC::Runtime::ASM::bl(fn_80138AC8);
/*80164174 00160F74*/ PPC::Runtime::ASM::b(.L_801641C0);
RUNTIME_PPC_JUMP_LABEL(.L_80164178, 0x80164178) //this is a jump label
/*80164178 00160F78*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016417C 00160F7C*/ PPC::Runtime::ASM::bl(fn_80138AB0);
/*80164180 00160F80*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*80164184 00160F84*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80164188 00160F88*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0xa);
/*8016418C 00160F8C*/ PPC::Runtime::ASM::extsb(context->r4, context->r29);
/*80164190 00160F90*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a4, context->r31));
/*80164194 00160F94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80164198 00160F98*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r3);
/*8016419C 00160F9C*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E0A08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801641A0 00160FA0*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*801641A4 00160FA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*801641A8 00160FA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801641AC 00160FAC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*801641B0 00160FB0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801641B4 00160FB4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0A00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801641B8 00160FB8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f1);
/*801641BC 00160FBC*/ PPC::Runtime::ASM::bl(fn_801389D8);
RUNTIME_PPC_JUMP_LABEL(.L_801641C0, 0x801641C0) //this is a jump label
/*801641C0 00160FC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801641C4 00160FC4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801641C8 00160FC8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801641CC 00160FCC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801641D0 00160FD0*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801641D4 00160FD4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801641D8 00160FD8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801641DC 00160FDC*/ PPC::Runtime::ASM::blr();
}