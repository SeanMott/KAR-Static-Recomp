//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80200D10.hpp"
#include "fn_801FC398.hpp"
#include "fn_801FECD4.hpp"
#include "fn_801FECF8.hpp"



void fn_80212F04(PPC::Runtime::GCContext* context)
{
/*80212F04 0020FD04*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80212F08 0020FD08*/ PPC::Runtime::ASM::mflr(context->r0);
/*80212F0C 0020FD0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80212F10 0020FD10*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80212F14 0020FD14*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80212F18 0020FD18*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80212F1C 0020FD1C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80212F20 0020FD20*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb48, context->r3));
/*80212F24 0020FD24*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80212F28 0020FD28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80212F2C 0020FD2C*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*80212F30 0020FD30*/ PPC::Runtime::ASM::blt(.L_80212FC4);
/*80212F34 0020FD34*/ PPC::Runtime::ASM::bl(fn_80200D10);
/*80212F38 0020FD38*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80212F3C 0020FD3C*/ PPC::Runtime::ASM::beq(.L_80212FC4);
/*80212F40 0020FD40*/ PPC::Runtime::ASM::li(context->r3, 0x64);
/*80212F44 0020FD44*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*80212F48 0020FD48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80212F4C 0020FD4C*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*80212F50 0020FD50*/ PPC::Runtime::ASM::bge(.L_80212FBC);
/*80212F54 0020FD54*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2578 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80212F58 0020FD58*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80212F5C 0020FD5C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E257C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80212F60 0020FD60*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80212F64 0020FD64*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80212F68 0020FD68*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80212F6C 0020FD6C*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*80212F70 0020FD70*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80212F74 0020FD74*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4e, context->r30));
/*80212F78 0020FD78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb48, context->r30));
/*80212F7C 0020FD7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r30));
/*80212F80 0020FD80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80212F84 0020FD84*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*80212F88 0020FD88*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb54, context->r30));
/*80212F8C 0020FD8C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb50, context->r30));
/*80212F90 0020FD90*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4e, context->r30));
/*80212F94 0020FD94*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80212F98 0020FD98*/ PPC::Runtime::ASM::bne(.L_80212FAC);
/*80212F9C 0020FD9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r30));
/*80212FA0 0020FDA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80212FA4 0020FDA4*/ PPC::Runtime::ASM::bl(fn_801FECD4);
/*80212FA8 0020FDA8*/ PPC::Runtime::ASM::b(.L_80212FC4);
RUNTIME_PPC_JUMP_LABEL(.L_80212FAC, 0x80212FAC) //this is a jump label
/*80212FAC 0020FDAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r30));
/*80212FB0 0020FDB0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80212FB4 0020FDB4*/ PPC::Runtime::ASM::bl(fn_801FECF8);
/*80212FB8 0020FDB8*/ PPC::Runtime::ASM::b(.L_80212FC4);
RUNTIME_PPC_JUMP_LABEL(.L_80212FBC, 0x80212FBC) //this is a jump label
/*80212FBC 0020FDBC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80212FC0 0020FDC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb48, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80212FC4, 0x80212FC4) //this is a jump label
/*80212FC4 0020FDC4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb48, context->r30));
/*80212FC8 0020FDC8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80212FCC 0020FDCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb48, context->r30));
/*80212FD0 0020FDD0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80212FD4 0020FDD4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80212FD8 0020FDD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80212FDC 0020FDDC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80212FE0 0020FDE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80212FE4 0020FDE4*/ PPC::Runtime::ASM::blr();
}