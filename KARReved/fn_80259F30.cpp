//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80254CD8.hpp"
#include "fn_8025017C.hpp"
#include "fn_8025017C.hpp"
#include "fn_8025017C.hpp"
#include "fn_8024F488.hpp"



void fn_80259F30(PPC::Runtime::GCContext* context)
{
/*80259F30 00256D30*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80259F34 00256D34*/ PPC::Runtime::ASM::mflr(context->r0);
/*80259F38 00256D38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80259F3C 00256D3C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80259F40 00256D40*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80259F44 00256D44*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80259F48 00256D48*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80259F4C 00256D4C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80259F50 00256D50*/ PPC::Runtime::ASM::bl(fn_80254CD8);
/*80259F54 00256D54*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80259F58 00256D58*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*80259F5C 00256D5C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r31));
/*80259F60 00256D60*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80259F64 00256D64*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80259F68 00256D68*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r31));
/*80259F6C 00256D6C*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*80259F70 00256D70*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1cc, context->r31));
/*80259F74 00256D74*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80259F78 00256D78*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80259F7C 00256D7C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r31));
/*80259F80 00256D80*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*80259F84 00256D84*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r31));
/*80259F88 00256D88*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80259F8C 00256D8C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2E4C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80259F90 00256D90*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*80259F94 00256D94*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80259F98 00256D98*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2E48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80259F9C 00256D9C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80259FA0 00256DA0*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80259FA4 00256DA4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*80259FA8 00256DA8*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*80259FAC 00256DAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80259FB0 00256DB0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80259FB4 00256DB4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80259FB8 00256DB8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80259FBC 00256DBC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80259FC0 00256DC0*/ PPC::Runtime::ASM::blr();
}