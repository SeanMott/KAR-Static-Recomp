//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800B7E90(PPC::Runtime::GCContext* context)
{
/*800B7E90 000B4C90*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800B7E94 000B4C94*/ PPC::Runtime::ASM::mflr(context->r0);
/*800B7E98 000B4C98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800B7E9C 000B4C9C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800B7EA0 000B4CA0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*800B7EA4 000B4CA4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800B7EA8 000B4CA8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800B7EAC 000B4CAC*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*800B7EB0 000B4CB0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF260 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B7EB4 000B4CB4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800B7EB8 000B4CB8*/ PPC::Runtime::ASM::bge(.L_800B7EC4);
/*800B7EBC 000B4CBC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF264 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B7EC0 000B4CC0*/ PPC::Runtime::ASM::b(.L_800B7FBC);
RUNTIME_PPC_JUMP_LABEL(.L_800B7EC4, 0x800B7EC4) //this is a jump label
/*800B7EC4 000B4CC4*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805DF268 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B7EC8 000B4CC8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800B7ECC 000B4CCC*/ PPC::Runtime::ASM::fdivs(context->f2, context->f3, context->f1);
/*800B7ED0 000B4CD0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f2);
/*800B7ED4 000B4CD4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B7ED8 000B4CD8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800B7EDC 000B4CDC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f2);
/*800B7EE0 000B4CE0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800B7EE4 000B4CE4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800B7EE8 000B4CE8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f2);
/*800B7EEC 000B4CEC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800B7EF0 000B4CF0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B7EF4 000B4CF4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f3);
/*800B7EF8 000B4CF8*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*800B7EFC 000B4CFC*/ PPC::Runtime::ASM::bne(.L_800B7F14);
/*800B7F00 000B4D00*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B7F04 000B4D04*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF264 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B7F08 000B4D08*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800B7F0C 000B4D0C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800B7F10 000B4D10*/ PPC::Runtime::ASM::b(.L_800B7FBC);
RUNTIME_PPC_JUMP_LABEL(.L_800B7F14, 0x800B7F14) //this is a jump label
/*800B7F14 000B4D14*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF26C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B7F18 000B4D18*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f2);
/*800B7F1C 000B4D1C*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*800B7F20 000B4D20*/ PPC::Runtime::ASM::bne(.L_800B7F38);
/*800B7F24 000B4D24*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B7F28 000B4D28*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF264 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B7F2C 000B4D2C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800B7F30 000B4D30*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800B7F34 000B4D34*/ PPC::Runtime::ASM::b(.L_800B7FBC);
RUNTIME_PPC_JUMP_LABEL(.L_800B7F38, 0x800B7F38) //this is a jump label
/*800B7F38 000B4D38*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800B7F3C 000B4D3C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f3);
/*800B7F40 000B4D40*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*800B7F44 000B4D44*/ PPC::Runtime::ASM::bne(.L_800B7F5C);
/*800B7F48 000B4D48*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF264 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B7F4C 000B4D4C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B7F50 000B4D50*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800B7F54 000B4D54*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800B7F58 000B4D58*/ PPC::Runtime::ASM::b(.L_800B7FBC);
RUNTIME_PPC_JUMP_LABEL(.L_800B7F5C, 0x800B7F5C) //this is a jump label
/*800B7F5C 000B4D5C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f2);
/*800B7F60 000B4D60*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*800B7F64 000B4D64*/ PPC::Runtime::ASM::bne(.L_800B7F7C);
/*800B7F68 000B4D68*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF264 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B7F6C 000B4D6C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B7F70 000B4D70*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800B7F74 000B4D74*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800B7F78 000B4D78*/ PPC::Runtime::ASM::b(.L_800B7FBC);
RUNTIME_PPC_JUMP_LABEL(.L_800B7F7C, 0x800B7F7C) //this is a jump label
/*800B7F7C 000B4D7C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800B7F80 000B4D80*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f3);
/*800B7F84 000B4D84*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*800B7F88 000B4D88*/ PPC::Runtime::ASM::bne(.L_800B7FA0);
/*800B7F8C 000B4D8C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF264 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B7F90 000B4D90*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B7F94 000B4D94*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800B7F98 000B4D98*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800B7F9C 000B4D9C*/ PPC::Runtime::ASM::b(.L_800B7FBC);
RUNTIME_PPC_JUMP_LABEL(.L_800B7FA0, 0x800B7FA0) //this is a jump label
/*800B7FA0 000B4DA0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f2);
/*800B7FA4 000B4DA4*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*800B7FA8 000B4DA8*/ PPC::Runtime::ASM::bne(.L_800B7FBC);
/*800B7FAC 000B4DAC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF264 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B7FB0 000B4DB0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B7FB4 000B4DB4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800B7FB8 000B4DB8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800B7FBC, 0x800B7FBC) //this is a jump label
/*800B7FBC 000B4DBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800B7FC0 000B4DC0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800B7FC4 000B4DC4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800B7FC8 000B4DC8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800B7FCC 000B4DCC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800B7FD0 000B4DD0*/ PPC::Runtime::ASM::blr();
}