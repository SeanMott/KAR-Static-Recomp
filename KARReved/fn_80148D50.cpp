//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138BA4.hpp"
#include "fn_80138C90.hpp"
#include "fn_80138BA4.hpp"



void fn_80148D50(PPC::Runtime::GCContext* context)
{
/*80148D50 00145B50*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80148D54 00145B54*/ PPC::Runtime::ASM::mflr(context->r0);
/*80148D58 00145B58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80148D5C 00145B5C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80148D60 00145B60*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80148D64 00145B64*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80148D68 00145B68*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80148D6C 00145B6C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80148D70 00145B70*/ PPC::Runtime::ASM::extsb(context->r4, context->r30);
/*80148D74 00145B74*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80148D78 00145B78*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0x18);
/*80148D7C 00145B7C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80148D80 00145B80*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r4);
/*80148D84 00145B84*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80148D88 00145B88*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r3));
/*80148D8C 00145B8C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80148D90 00145B90*/ PPC::Runtime::ASM::beq(.L_80148DEC);
/*80148D94 00145B94*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80148D98 00145B98*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80148D9C 00145B9C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0528 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80148DA0 00145BA0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80148DA4 00145BA4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r31));
/*80148DA8 00145BA8*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80148DAC 00145BAC*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80148DB0 00145BB0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80148DB4 00145BB4*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x3);
/*80148DB8 00145BB8*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*80148DBC 00145BBC*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*80148DC0 00145BC0*/ PPC::Runtime::ASM::bl(fn_80138BA4);
/*80148DC4 00145BC4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80148DC8 00145BC8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80148DCC 00145BCC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0528 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80148DD0 00145BD0*/ PPC::Runtime::ASM::bl(fn_80138C90);
/*80148DD4 00145BD4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80148DD8 00145BD8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0528 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80148DDC 00145BDC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r31));
/*80148DE0 00145BE0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80148DE4 00145BE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80148DE8 00145BE8*/ PPC::Runtime::ASM::bl(fn_80138BA4);
RUNTIME_PPC_JUMP_LABEL(.L_80148DEC, 0x80148DEC) //this is a jump label
/*80148DEC 00145BEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80148DF0 00145BF0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80148DF4 00145BF4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80148DF8 00145BF8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80148DFC 00145BFC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80148E00 00145C00*/ PPC::Runtime::ASM::blr();
}