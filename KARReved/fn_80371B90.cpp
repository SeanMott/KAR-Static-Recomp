//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"



void fn_80371B90(PPC::Runtime::GCContext* context)
{
/*80371B90 0036E990*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80371B94 0036E994*/ PPC::Runtime::ASM::mflr(context->r0);
/*80371B98 0036E998*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80371B9C 0036E99C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80371BA0 0036E9A0*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*80371BA4 0036E9A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80371BA8 0036E9A8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F1004 @ Get_MemoryOffset_HighBit);
/*80371BAC 0036E9AC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80371BB0 0036E9B0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804F1004 @ Get_MemoryOffset_LowBit);
/*80371BB4 0036E9B4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E49D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371BB8 0036E9B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80371BBC 0036E9BC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BCEE8 @ Get_MemoryOffset_HighBit);
/*80371BC0 0036E9C0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BCEE8 @ Get_MemoryOffset_LowBit);
/*80371BC4 0036E9C4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F0FE8 @ Get_MemoryOffset_HighBit);
/*80371BC8 0036E9C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80371BCC 0036E9CC*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x4);
/*80371BD0 0036E9D0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F0FE8 @ Get_MemoryOffset_LowBit);
/*80371BD4 0036E9D4*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E49E4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371BD8 0036E9D8*/ PPC::Runtime::ASM::stw(context->r5, STRUCT_BYTE4_COUNT_1805DDB78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371BDC 0036E9DC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0xc);
/*80371BE0 0036E9E0*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E49E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371BE4 0036E9E4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80371BE8 0036E9E8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E49EC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371BEC 0036E9EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80371BF0 0036E9F0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E49F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371BF4 0036E9F4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80371BF8 0036E9F8*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80371BFC 0036E9FC*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80371C00 0036EA00*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80371C04 0036EA04*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80371C08 0036EA08*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80371C0C 0036EA0C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80371C10 0036EA10*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E49D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371C14 0036EA14*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80371C18 0036EA18*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*80371C1C 0036EA1C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E49D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371C20 0036EA20*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80371C24 0036EA24*/ PPC::Runtime::ASM::fmuls(context->f3, context->f1, context->f31);
/*80371C28 0036EA28*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E49D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371C2C 0036EA2C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E49F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371C30 0036EA30*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E49D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371C34 0036EA34*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f3);
/*80371C38 0036EA38*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f2);
/*80371C3C 0036EA3C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80371C40 0036EA40*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80371C44 0036EA44*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80371C48 0036EA48*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E49D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371C4C 0036EA4C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80371C50 0036EA50*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*80371C54 0036EA54*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E49D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371C58 0036EA58*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80371C5C 0036EA5C*/ PPC::Runtime::ASM::fmuls(context->f3, context->f1, context->f31);
/*80371C60 0036EA60*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E49D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371C64 0036EA64*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E49DC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371C68 0036EA68*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E49D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371C6C 0036EA6C*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f3);
/*80371C70 0036EA70*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f2);
/*80371C74 0036EA74*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80371C78 0036EA78*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80371C7C 0036EA7C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80371C80 0036EA80*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E49D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371C84 0036EA84*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80371C88 0036EA88*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*80371C8C 0036EA8C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E49D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371C90 0036EA90*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80371C94 0036EA94*/ PPC::Runtime::ASM::fmuls(context->f3, context->f1, context->f31);
/*80371C98 0036EA98*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E49F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371C9C 0036EA9C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E49FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371CA0 0036EAA0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E49D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371CA4 0036EAA4*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f3);
/*80371CA8 0036EAA8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f2);
/*80371CAC 0036EAAC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80371CB0 0036EAB0*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80371CB4 0036EAB4*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80371CB8 0036EAB8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E49D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371CBC 0036EABC*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80371CC0 0036EAC0*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*80371CC4 0036EAC4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E49D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371CC8 0036EAC8*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80371CCC 0036EACC*/ PPC::Runtime::ASM::fmuls(context->f3, context->f1, context->f31);
/*80371CD0 0036EAD0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E49F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371CD4 0036EAD4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E49FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371CD8 0036EAD8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E49D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371CDC 0036EADC*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f3);
/*80371CE0 0036EAE0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f2);
/*80371CE4 0036EAE4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80371CE8 0036EAE8*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80371CEC 0036EAEC*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80371CF0 0036EAF0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E49D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371CF4 0036EAF4*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80371CF8 0036EAF8*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*80371CFC 0036EAFC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E49D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371D00 0036EB00*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80371D04 0036EB04*/ PPC::Runtime::ASM::fmuls(context->f3, context->f1, context->f31);
/*80371D08 0036EB08*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E49F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371D0C 0036EB0C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4A00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371D10 0036EB10*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E49D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371D14 0036EB14*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f3);
/*80371D18 0036EB18*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f2);
/*80371D1C 0036EB1C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80371D20 0036EB20*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80371D24 0036EB24*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80371D28 0036EB28*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E49D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371D2C 0036EB2C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80371D30 0036EB30*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*80371D34 0036EB34*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E49D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371D38 0036EB38*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80371D3C 0036EB3C*/ PPC::Runtime::ASM::fmuls(context->f3, context->f1, context->f31);
/*80371D40 0036EB40*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E49F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371D44 0036EB44*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A04 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371D48 0036EB48*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80371D4C 0036EB4C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4A08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371D50 0036EB50*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80371D54 0036EB54*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f3);
/*80371D58 0036EB58*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*80371D5C 0036EB5C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80371D60 0036EB60*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*80371D64 0036EB64*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80371D68 0036EB68*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x39, context->r31));
/*80371D6C 0036EB6C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*80371D70 0036EB70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80371D74 0036EB74*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80371D78 0036EB78*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80371D7C 0036EB7C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80371D80 0036EB80*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80371D84 0036EB84*/ PPC::Runtime::ASM::blr();
}