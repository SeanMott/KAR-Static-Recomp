//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019A588.hpp"
#include "fn_80064C18.hpp"
#include "fn_80062ECC.hpp"
#include "fn_80062DD0.hpp"
#include "fn_80062ECC.hpp"
#include "fn_80063610.hpp"
#include "fn_801A25B8.hpp"



void fn_801B8C28(PPC::Runtime::GCContext* context)
{
/*801B8C28 001B5A28*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r1));
/*801B8C2C 001B5A2C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B8C30 001B5A30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*801B8C34 001B5A34*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*801B8C38 001B5A38*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*801B8C3C 001B5A3C*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*801B8C40 001B5A40*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*801B8C44 001B5A44*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*801B8C48 001B5A48*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B8C4C 001B5A4C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B8C50 001B5A50*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r3));
/*801B8C54 001B5A54*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xa60);
/*801B8C58 001B5A58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r31));
/*801B8C5C 001B5A5C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B8C60 001B5A60*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801B8C64 001B5A64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801B8C68 001B5A68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r31));
/*801B8C6C 001B5A6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801B8C70 001B5A70*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa54, context->r31));
/*801B8C74 001B5A74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa58, context->r31));
/*801B8C78 001B5A78*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801B8C7C 001B5A7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*801B8C80 001B5A80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa5c, context->r31));
/*801B8C84 001B5A84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*801B8C88 001B5A88*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801B8C8C 001B5A8C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B8C90 001B5A90*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801B8C94 001B5A94*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801B8C98 001B5A98*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B8C9C 001B5A9C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801B8CA0 001B5AA0*/ PPC::Runtime::ASM::beq(.L_801B8E90);
/*801B8CA4 001B5AA4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x44);
/*801B8CA8 001B5AA8*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801B8CAC 001B5AAC*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*801B8CB0 001B5AB0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*801B8CB4 001B5AB4*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801B8CB8 001B5AB8*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*801B8CBC 001B5ABC*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E1714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B8CC0 001B5AC0*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801B8CC4 001B5AC4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B8CC8 001B5AC8*/ PPC::Runtime::ASM::fdivs(context->f7, context->f3, context->f30);
/*801B8CCC 001B5ACC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801B8CD0 001B5AD0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*801B8CD4 001B5AD4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x38);
/*801B8CD8 001B5AD8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*801B8CDC 001B5ADC*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801B8CE0 001B5AE0*/ PPC::Runtime::ASM::fdivs(context->f6, context->f3, context->f31);
/*801B8CE4 001B5AE4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801B8CE8 001B5AE8*/ PPC::Runtime::ASM::fmuls(context->f5, context->f5, context->f6);
/*801B8CEC 001B5AEC*/ PPC::Runtime::ASM::fmuls(context->f4, context->f4, context->f6);
/*801B8CF0 001B5AF0*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f6);
/*801B8CF4 001B5AF4*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f7);
/*801B8CF8 001B5AF8*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801B8CFC 001B5AFC*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f7);
/*801B8D00 001B5B00*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f7);
/*801B8D04 001B5B04*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801B8D08 001B5B08*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801B8D0C 001B5B0C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801B8D10 001B5B10*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*801B8D14 001B5B14*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*801B8D18 001B5B18*/ PPC::Runtime::ASM::bl(fn_8019A588);
/*801B8D1C 001B5B1C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*801B8D20 001B5B20*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x44);
/*801B8D24 001B5B24*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x2c);
/*801B8D28 001B5B28*/ PPC::Runtime::ASM::bl(fn_80064C18);
/*801B8D2C 001B5B2C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*801B8D30 001B5B30*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801B8D34 001B5B34*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B8D38 001B5B38*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*801B8D3C 001B5B3C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801B8D40 001B5B40*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*801B8D44 001B5B44*/ PPC::Runtime::ASM::fdivs(context->f3, context->f0, context->f1);
/*801B8D48 001B5B48*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801B8D4C 001B5B4C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801B8D50 001B5B50*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f3);
/*801B8D54 001B5B54*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f3);
/*801B8D58 001B5B58*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f3);
/*801B8D5C 001B5B5C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801B8D60 001B5B60*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801B8D64 001B5B64*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801B8D68 001B5B68*/ PPC::Runtime::ASM::bl(fn_80062ECC);
/*801B8D6C 001B5B6C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1718 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B8D70 001B5B70*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801B8D74 001B5B74*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*801B8D78 001B5B78*/ PPC::Runtime::ASM::bne(.L_801B8D98);
/*801B8D7C 001B5B7C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*801B8D80 001B5B80*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*801B8D84 001B5B84*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*801B8D88 001B5B88*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*801B8D8C 001B5B8C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*801B8D90 001B5B90*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*801B8D94 001B5B94*/ PPC::Runtime::ASM::bl(fn_80062ECC);
RUNTIME_PPC_JUMP_LABEL(.L_801B8D98, 0x801B8D98) //this is a jump label
/*801B8D98 001B5B98*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5ac, context->r31));
/*801B8D9C 001B5B9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801B8DA0 001B5BA0*/ PPC::Runtime::ASM::fdivs(context->f3, context->f31, context->f0);
/*801B8DA4 001B5BA4*/ PPC::Runtime::ASM::lfs(context->f5, STRUCT_FLOAT_COUNT_1805E171C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B8DA8 001B5BA8*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r3));
/*801B8DAC 001B5BAC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r3));
/*801B8DB0 001B5BB0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B8DB4 001B5BB4*/ PPC::Runtime::ASM::fmuls(context->f4, context->f5, context->f4);
/*801B8DB8 001B5BB8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*801B8DBC 001B5BBC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f4);
/*801B8DC0 001B5BC0*/ PPC::Runtime::ASM::fmadds(context->f0, context->f3, context->f0, context->f2);
/*801B8DC4 001B5BC4*/ PPC::Runtime::ASM::ble(.L_801B8E08);
/*801B8DC8 001B5BC8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*801B8DCC 001B5BCC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*801B8DD0 001B5BD0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*801B8DD4 001B5BD4*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*801B8DD8 001B5BD8*/ PPC::Runtime::ASM::fdivs(context->f1, context->f0, context->f1);
/*801B8DDC 001B5BDC*/ PPC::Runtime::ASM::bl(fn_80063610);
/*801B8DE0 001B5BE0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B8DE4 001B5BE4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B8DE8 001B5BE8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801B8DEC 001B5BEC*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f31);
/*801B8DF0 001B5BF0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f31);
/*801B8DF4 001B5BF4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f31);
/*801B8DF8 001B5BF8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B8DFC 001B5BFC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B8E00 001B5C00*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801B8E04 001B5C04*/ PPC::Runtime::ASM::b(.L_801B8E44);
RUNTIME_PPC_JUMP_LABEL(.L_801B8E08, 0x801B8E08) //this is a jump label
/*801B8E08 001B5C08*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801B8E0C 001B5C0C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801B8E10 001B5C10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801B8E14 001B5C14*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B8E18 001B5C18*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B8E1C 001B5C1C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B8E20 001B5C20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801B8E24 001B5C24*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B8E28 001B5C28*/ PPC::Runtime::ASM::fmuls(context->f2, context->f0, context->f31);
/*801B8E2C 001B5C2C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801B8E30 001B5C30*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f31);
/*801B8E34 001B5C34*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f31);
/*801B8E38 001B5C38*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B8E3C 001B5C3C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B8E40 001B5C40*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_801B8E44, 0x801B8E44) //this is a jump label
/*801B8E44 001B5C44*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B8E48 001B5C48*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r31));
/*801B8E4C 001B5C4C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d0, context->r31));
/*801B8E50 001B5C50*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*801B8E54 001B5C54*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B8E58 001B5C58*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r31));
/*801B8E5C 001B5C5C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801B8E60 001B5C60*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r31));
/*801B8E64 001B5C64*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801B8E68 001B5C68*/ PPC::Runtime::ASM::fsubs(context->f1, context->f5, context->f4);
/*801B8E6C 001B5C6C*/ PPC::Runtime::ASM::fsubs(context->f2, context->f3, context->f2);
/*801B8E70 001B5C70*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d0, context->r31));
/*801B8E74 001B5C74*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d4, context->r31));
/*801B8E78 001B5C78*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801B8E7C 001B5C7C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d4, context->r31));
/*801B8E80 001B5C80*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d8, context->r31));
/*801B8E84 001B5C84*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f0);
/*801B8E88 001B5C88*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d8, context->r31));
/*801B8E8C 001B5C8C*/ PPC::Runtime::ASM::b(.L_801B8EA0);
RUNTIME_PPC_JUMP_LABEL(.L_801B8E90, 0x801B8E90) //this is a jump label
/*801B8E90 001B5C90*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801B8E94 001B5C94*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B8E98 001B5C98*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r4));
/*801B8E9C 001B5C9C*/ PPC::Runtime::ASM::bl(fn_801A25B8);
RUNTIME_PPC_JUMP_LABEL(.L_801B8EA0, 0x801B8EA0) //this is a jump label
/*801B8EA0 001B5CA0*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*801B8EA4 001B5CA4*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*801B8EA8 001B5CA8*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*801B8EAC 001B5CAC*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*801B8EB0 001B5CB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*801B8EB4 001B5CB4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*801B8EB8 001B5CB8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B8EBC 001B5CBC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x80);
/*801B8EC0 001B5CC0*/ PPC::Runtime::ASM::blr();
}