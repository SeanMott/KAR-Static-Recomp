//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138934.hpp"
#include "fn_80158C30.hpp"
#include "fn_80158C30.hpp"
#include "fn_80138B10.hpp"
#include "fn_800550F4.hpp"
#include "fn_80138A00.hpp"
#include "fn_80138AC8.hpp"



void fn_80158D48(PPC::Runtime::GCContext* context)
{
/*80158D48 00155B48*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80158D4C 00155B4C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80158D50 00155B50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80158D54 00155B54*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80158D58 00155B58*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80158D5C 00155B5C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80158D60 00155B60*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80158D64 00155B64*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80158D68 00155B68*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80158D6C 00155B6C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x75c);
/*80158D70 00155B70*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*80158D74 00155B74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x75c, context->r3));
/*80158D78 00155B78*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80158D7C 00155B7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80158D80 00155B80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80158D84 00155B84*/ PPC::Runtime::ASM::bl(fn_80138934);
/*80158D88 00155B88*/ PPC::Runtime::ASM::lis(context->r4, fn_80158C30 @ Get_MemoryOffset_HighBit);
/*80158D8C 00155B8C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80158D90 00155B90*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80158D94 00155B94*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80158D98 00155B98*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80158C30 @ Get_MemoryOffset_LowBit);
/*80158D9C 00155B9C*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80158DA0 00155BA0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0810 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80158DA4 00155BA4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80158DA8 00155BA8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80158DAC 00155BAC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80158DB0 00155BB0*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*80158DB4 00155BB4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80158DB8 00155BB8*/ PPC::Runtime::ASM::bl(fn_80138B10);
/*80158DBC 00155BBC*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80158DC0 00155BC0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80158DC4 00155BC4*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80158DC8 00155BC8*/ PPC::Runtime::ASM::bl(fn_800550F4);
/*80158DCC 00155BCC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80158DD0 00155BD0*/ PPC::Runtime::ASM::li(context->r4, 0x3d);
/*80158DD4 00155BD4*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*80158DD8 00155BD8*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80158DDC 00155BDC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80158DE0 00155BE0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
/*80158DE4 00155BE4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r3));
/*80158DE8 00155BE8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80158DEC 00155BEC*/ PPC::Runtime::ASM::bl(fn_80138AC8);
/*80158DF0 00155BF0*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*80158DF4 00155BF4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80158DF8 00155BF8*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*80158DFC 00155BFC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80158E00 00155C00*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80158E04 00155C04*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80158E08 00155C08*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80158E0C 00155C0C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80158E10 00155C10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80158E14 00155C14*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80158E18 00155C18*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80158E1C 00155C1C*/ PPC::Runtime::ASM::blr();
}