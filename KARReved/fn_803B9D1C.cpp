//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803B9D1C(PPC::Runtime::GCContext* context)
{
/*803B9D1C 003B6B1C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803B9D20 003B6B20*/ PPC::Runtime::ASM::lis(context->r0, 0x3ff0);
/*803B9D24 003B6B24*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803B9D28 003B6B28*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803B9D2C 003B6B2C*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r4, 1);
/*803B9D30 003B6B30*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*803B9D34 003B6B34*/ PPC::Runtime::ASM::blt(.L_803B9D68);
/*803B9D38 003B6B38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803B9D3C 003B6B3C*/ PPC::Runtime::ASM::subis(context->r3, context->r5, 0x3ff0);
/*803B9D40 003B6B40*/ PPC::Runtime::ASM::or.(context->r0, context->r3, context->r0);
/*803B9D44 003B6B44*/ PPC::Runtime::ASM::bne(.L_803B9D5C);
/*803B9D48 003B6B48*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5258 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9D4C 003B6B4C*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E5250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9D50 003B6B50*/ PPC::Runtime::ASM::fmul(context->f0, context->f0, context->f1);
/*803B9D54 003B6B54*/ PPC::Runtime::ASM::fmadd(context->f1, context->f2, context->f1, context->f0);
/*803B9D58 003B6B58*/ PPC::Runtime::ASM::b(.L_803B9F78);
RUNTIME_PPC_JUMP_LABEL(.L_803B9D5C, 0x803B9D5C) //this is a jump label
/*803B9D5C 003B6B5C*/ PPC::Runtime::ASM::lis(context->r3, StructValues_NaN @ Get_MemoryOffset_HighBit);
/*803B9D60 003B6B60*/ PPC::Runtime::ASM::lfs(context->f1, StructValues_NaN @ Get_MemoryOffset_LowBit ( context->r3 ));
/*803B9D64 003B6B64*/ PPC::Runtime::ASM::b(.L_803B9F78);
RUNTIME_PPC_JUMP_LABEL(.L_803B9D68, 0x803B9D68) //this is a jump label
/*803B9D68 003B6B68*/ PPC::Runtime::ASM::lis(context->r0, 0x3fe0);
/*803B9D6C 003B6B6C*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*803B9D70 003B6B70*/ PPC::Runtime::ASM::bge(.L_803B9E04);
/*803B9D74 003B6B74*/ PPC::Runtime::ASM::lis(context->r0, 0x3e40);
/*803B9D78 003B6B78*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*803B9D7C 003B6B7C*/ PPC::Runtime::ASM::bge(.L_803B9D98);
/*803B9D80 003B6B80*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E5260 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9D84 003B6B84*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5268 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9D88 003B6B88*/ PPC::Runtime::ASM::fadd(context->f3, context->f3, context->f1);
/*803B9D8C 003B6B8C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*803B9D90 003B6B90*/ PPC::Runtime::ASM::ble(.L_803B9D9C);
/*803B9D94 003B6B94*/ PPC::Runtime::ASM::b(.L_803B9F78);
RUNTIME_PPC_JUMP_LABEL(.L_803B9D98, 0x803B9D98) //this is a jump label
/*803B9D98 003B6B98*/ PPC::Runtime::ASM::fmul(context->f2, context->f1, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_803B9D9C, 0x803B9D9C) //this is a jump label
/*803B9D9C 003B6B9C*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E5298 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9DA0 003B6BA0*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5290 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9DA4 003B6BA4*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E5288 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9DA8 003B6BA8*/ PPC::Runtime::ASM::fmadd(context->f4, context->f1, context->f2, context->f0);
/*803B9DAC 003B6BAC*/ PPC::Runtime::ASM::lfd(context->f7, STRUCT_DOUBLE_COUNT_1805E5280 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9DB0 003B6BB0*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E52B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9DB4 003B6BB4*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E52B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9DB8 003B6BB8*/ PPC::Runtime::ASM::lfd(context->f6, STRUCT_DOUBLE_COUNT_1805E5278 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9DBC 003B6BBC*/ PPC::Runtime::ASM::fmadd(context->f8, context->f2, context->f4, context->f3);
/*803B9DC0 003B6BC0*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E52A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9DC4 003B6BC4*/ PPC::Runtime::ASM::fmadd(context->f4, context->f1, context->f2, context->f0);
/*803B9DC8 003B6BC8*/ PPC::Runtime::ASM::lfd(context->f5, STRUCT_DOUBLE_COUNT_1805E5270 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9DCC 003B6BCC*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E52A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9DD0 003B6BD0*/ PPC::Runtime::ASM::fmadd(context->f7, context->f2, context->f8, context->f7);
/*803B9DD4 003B6BD4*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5268 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9DD8 003B6BD8*/ PPC::Runtime::ASM::fmadd(context->f3, context->f2, context->f4, context->f3);
/*803B9DDC 003B6BDC*/ PPC::Runtime::ASM::lfd(context->f8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803B9DE0 003B6BE0*/ PPC::Runtime::ASM::fmadd(context->f4, context->f2, context->f7, context->f6);
/*803B9DE4 003B6BE4*/ PPC::Runtime::ASM::fmadd(context->f1, context->f2, context->f3, context->f1);
/*803B9DE8 003B6BE8*/ PPC::Runtime::ASM::fmadd(context->f3, context->f2, context->f4, context->f5);
/*803B9DEC 003B6BEC*/ PPC::Runtime::ASM::fmadd(context->f0, context->f2, context->f1, context->f0);
/*803B9DF0 003B6BF0*/ PPC::Runtime::ASM::fmul(context->f1, context->f2, context->f3);
/*803B9DF4 003B6BF4*/ PPC::Runtime::ASM::fdiv(context->f0, context->f1, context->f0);
/*803B9DF8 003B6BF8*/ PPC::Runtime::ASM::fmadd(context->f1, context->f8, context->f0, context->f8);
/*803B9DFC 003B6BFC*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803B9E00 003B6C00*/ PPC::Runtime::ASM::b(.L_803B9F78);
RUNTIME_PPC_JUMP_LABEL(.L_803B9E04, 0x803B9E04) //this is a jump label
/*803B9E04 003B6C04*/ PPC::Runtime::ASM::fabs(context->f1, context->f1);
/*803B9E08 003B6C08*/ PPC::Runtime::ASM::lfd(context->f12, STRUCT_DOUBLE_COUNT_1805E5268 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9E0C 003B6C0C*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E52C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9E10 003B6C10*/ PPC::Runtime::ASM::lfd(context->f6, STRUCT_DOUBLE_COUNT_1805E5298 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9E14 003B6C14*/ PPC::Runtime::ASM::fsub(context->f11, context->f12, context->f1);
/*803B9E18 003B6C18*/ PPC::Runtime::ASM::lfd(context->f4, STRUCT_DOUBLE_COUNT_1805E5290 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9E1C 003B6C1C*/ PPC::Runtime::ASM::lfd(context->f9, STRUCT_DOUBLE_COUNT_1805E5288 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9E20 003B6C20*/ PPC::Runtime::ASM::lfd(context->f8, STRUCT_DOUBLE_COUNT_1805E5280 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9E24 003B6C24*/ PPC::Runtime::ASM::fmul(context->f2, context->f0, context->f11);
/*803B9E28 003B6C28*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E52C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9E2C 003B6C2C*/ PPC::Runtime::ASM::lfd(context->f5, STRUCT_DOUBLE_COUNT_1805E52B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9E30 003B6C30*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E52B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9E34 003B6C34*/ PPC::Runtime::ASM::lfd(context->f7, STRUCT_DOUBLE_COUNT_1805E5278 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9E38 003B6C38*/ PPC::Runtime::ASM::fmadd(context->f10, context->f6, context->f2, context->f4);
/*803B9E3C 003B6C3C*/ PPC::Runtime::ASM::lfd(context->f4, STRUCT_DOUBLE_COUNT_1805E52A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9E40 003B6C40*/ PPC::Runtime::ASM::fmadd(context->f5, context->f5, context->f2, context->f3);
/*803B9E44 003B6C44*/ PPC::Runtime::ASM::lfd(context->f6, STRUCT_DOUBLE_COUNT_1805E5270 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9E48 003B6C48*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E52A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9E4C 003B6C4C*/ PPC::Runtime::ASM::fmadd(context->f9, context->f2, context->f10, context->f9);
/*803B9E50 003B6C50*/ PPC::Runtime::ASM::stfd(context->f11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803B9E54 003B6C54*/ PPC::Runtime::ASM::fmadd(context->f4, context->f2, context->f5, context->f4);
/*803B9E58 003B6C58*/ PPC::Runtime::ASM::fmadd(context->f5, context->f2, context->f9, context->f8);
/*803B9E5C 003B6C5C*/ PPC::Runtime::ASM::fmadd(context->f3, context->f2, context->f4, context->f3);
/*803B9E60 003B6C60*/ PPC::Runtime::ASM::fmadd(context->f4, context->f2, context->f5, context->f7);
/*803B9E64 003B6C64*/ PPC::Runtime::ASM::fmadd(context->f8, context->f2, context->f3, context->f12);
/*803B9E68 003B6C68*/ PPC::Runtime::ASM::fmadd(context->f3, context->f2, context->f4, context->f6);
/*803B9E6C 003B6C6C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f1);
/*803B9E70 003B6C70*/ PPC::Runtime::ASM::fmul(context->f5, context->f2, context->f3);
/*803B9E74 003B6C74*/ PPC::Runtime::ASM::ble(.L_803B9EC8);
/*803B9E78 003B6C78*/ PPC::Runtime::ASM::frsqrte(context->f3, context->f2);
/*803B9E7C 003B6C7C*/ PPC::Runtime::ASM::lfd(context->f4, STRUCT_DOUBLE_COUNT_1805E52D0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9E80 003B6C80*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f3);
/*803B9E84 003B6C84*/ PPC::Runtime::ASM::fmul(context->f3, context->f0, context->f3);
/*803B9E88 003B6C88*/ PPC::Runtime::ASM::fnmsub(context->f1, context->f2, context->f1, context->f4);
/*803B9E8C 003B6C8C*/ PPC::Runtime::ASM::fmul(context->f3, context->f3, context->f1);
/*803B9E90 003B6C90*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f3);
/*803B9E94 003B6C94*/ PPC::Runtime::ASM::fmul(context->f3, context->f0, context->f3);
/*803B9E98 003B6C98*/ PPC::Runtime::ASM::fnmsub(context->f1, context->f2, context->f1, context->f4);
/*803B9E9C 003B6C9C*/ PPC::Runtime::ASM::fmul(context->f3, context->f3, context->f1);
/*803B9EA0 003B6CA0*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f3);
/*803B9EA4 003B6CA4*/ PPC::Runtime::ASM::fmul(context->f3, context->f0, context->f3);
/*803B9EA8 003B6CA8*/ PPC::Runtime::ASM::fnmsub(context->f1, context->f2, context->f1, context->f4);
/*803B9EAC 003B6CAC*/ PPC::Runtime::ASM::fmul(context->f3, context->f3, context->f1);
/*803B9EB0 003B6CB0*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f3);
/*803B9EB4 003B6CB4*/ PPC::Runtime::ASM::fmul(context->f3, context->f0, context->f3);
/*803B9EB8 003B6CB8*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f2, context->f1, context->f4);
/*803B9EBC 003B6CBC*/ PPC::Runtime::ASM::fmul(context->f0, context->f3, context->f0);
/*803B9EC0 003B6CC0*/ PPC::Runtime::ASM::fmul(context->f1, context->f2, context->f0);
/*803B9EC4 003B6CC4*/ PPC::Runtime::ASM::b(.L_803B9EF0);
RUNTIME_PPC_JUMP_LABEL(.L_803B9EC8, 0x803B9EC8) //this is a jump label
/*803B9EC8 003B6CC8*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f2);
/*803B9ECC 003B6CCC*/ PPC::Runtime::ASM::bne(.L_803B9ED4);
/*803B9ED0 003B6CD0*/ PPC::Runtime::ASM::b(.L_803B9EF0);
RUNTIME_PPC_JUMP_LABEL(.L_803B9ED4, 0x803B9ED4) //this is a jump label
/*803B9ED4 003B6CD4*/ PPC::Runtime::ASM::fcmpu(cr0, context->f2, context->f1);
/*803B9ED8 003B6CD8*/ PPC::Runtime::ASM::beq(.L_803B9EE8);
/*803B9EDC 003B6CDC*/ PPC::Runtime::ASM::lis(context->r3, StructValues_NaN @ Get_MemoryOffset_HighBit);
/*803B9EE0 003B6CE0*/ PPC::Runtime::ASM::lfs(context->f1, StructValues_NaN @ Get_MemoryOffset_LowBit ( context->r3 ));
/*803B9EE4 003B6CE4*/ PPC::Runtime::ASM::b(.L_803B9EF0);
RUNTIME_PPC_JUMP_LABEL(.L_803B9EE8, 0x803B9EE8) //this is a jump label
/*803B9EE8 003B6CE8*/ PPC::Runtime::ASM::lis(context->r3, StructValues_Float_inf @ Get_MemoryOffset_HighBit);
/*803B9EEC 003B6CEC*/ PPC::Runtime::ASM::lfs(context->f1, StructValues_Float_inf @ Get_MemoryOffset_LowBit ( context->r3 ));
RUNTIME_PPC_JUMP_LABEL(.L_803B9EF0, 0x803B9EF0) //this is a jump label
/*803B9EF0 003B6CF0*/ PPC::Runtime::ASM::lis(context->r3, 0x3fef);
/*803B9EF4 003B6CF4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x3333);
/*803B9EF8 003B6CF8*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*803B9EFC 003B6CFC*/ PPC::Runtime::ASM::blt(.L_803B9F24);
/*803B9F00 003B6D00*/ PPC::Runtime::ASM::fdiv(context->f4, context->f5, context->f8);
/*803B9F04 003B6D04*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E52D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9F08 003B6D08*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5258 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9F0C 003B6D0C*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E5250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9F10 003B6D10*/ PPC::Runtime::ASM::fmadd(context->f1, context->f1, context->f4, context->f1);
/*803B9F14 003B6D14*/ PPC::Runtime::ASM::stfd(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803B9F18 003B6D18*/ PPC::Runtime::ASM::fmsub(context->f0, context->f2, context->f1, context->f0);
/*803B9F1C 003B6D1C*/ PPC::Runtime::ASM::fsub(context->f1, context->f3, context->f0);
/*803B9F20 003B6D20*/ PPC::Runtime::ASM::b(.L_803B9F68);
RUNTIME_PPC_JUMP_LABEL(.L_803B9F24, 0x803B9F24) //this is a jump label
/*803B9F24 003B6D24*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803B9F28 003B6D28*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803B9F2C 003B6D2C*/ PPC::Runtime::ASM::lfd(context->f7, STRUCT_DOUBLE_COUNT_1805E52D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9F30 003B6D30*/ PPC::Runtime::ASM::fdiv(context->f5, context->f5, context->f8);
/*803B9F34 003B6D34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803B9F38 003B6D38*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5258 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9F3C 003B6D3C*/ PPC::Runtime::ASM::lfd(context->f8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803B9F40 003B6D40*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E52E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803B9F44 003B6D44*/ PPC::Runtime::ASM::fnmsub(context->f4, context->f8, context->f8, context->f2);
/*803B9F48 003B6D48*/ PPC::Runtime::ASM::fadd(context->f2, context->f1, context->f8);
/*803B9F4C 003B6D4C*/ PPC::Runtime::ASM::fmul(context->f6, context->f7, context->f1);
/*803B9F50 003B6D50*/ PPC::Runtime::ASM::fdiv(context->f1, context->f4, context->f2);
/*803B9F54 003B6D54*/ PPC::Runtime::ASM::fnmsub(context->f1, context->f7, context->f1, context->f0);
/*803B9F58 003B6D58*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f7, context->f8, context->f3);
/*803B9F5C 003B6D5C*/ PPC::Runtime::ASM::fmsub(context->f1, context->f6, context->f5, context->f1);
/*803B9F60 003B6D60*/ PPC::Runtime::ASM::fsub(context->f0, context->f1, context->f0);
/*803B9F64 003B6D64*/ PPC::Runtime::ASM::fsub(context->f1, context->f3, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_803B9F68, 0x803B9F68) //this is a jump label
/*803B9F68 003B6D68*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*803B9F6C 003B6D6C*/ PPC::Runtime::ASM::ble(.L_803B9F74);
/*803B9F70 003B6D70*/ PPC::Runtime::ASM::b(.L_803B9F78);
RUNTIME_PPC_JUMP_LABEL(.L_803B9F74, 0x803B9F74) //this is a jump label
/*803B9F74 003B6D74*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_803B9F78, 0x803B9F78) //this is a jump label
/*803B9F78 003B6D78*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803B9F7C 003B6D7C*/ PPC::Runtime::ASM::blr();
}