//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800E7854.hpp"
#include "fn_800E7854.hpp"



void fn_800E7108(PPC::Runtime::GCContext* context)
{
/*800E7108 000E3F08*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800E710C 000E3F0C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800E7110 000E3F10*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*800E7114 000E3F14*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800E7118 000E3F18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800E711C 000E3F1C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800E7120 000E3F20*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800E7124 000E3F24*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800E7128 000E3F28*/ PPC::Runtime::ASM::li(context->r3, 0xd);
/*800E712C 000E3F2C*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*800E7130 000E3F30*/ PPC::Runtime::ASM::lis(context->r4, lbl_80557608 @ Get_MemoryOffset_HighBit);
/*800E7134 000E3F34*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800E7138 000E3F38*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_80557608 @ Get_MemoryOffset_LowBit);
/*800E713C 000E3F3C*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
/*800E7140 000E3F40*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*800E7144 000E3F44*/ PPC::Runtime::ASM::lis(context->r4, fn_800E7854 @ Get_MemoryOffset_HighBit);
/*800E7148 000E3F48*/ PPC::Runtime::ASM::mr(context->r6, context->r3);
/*800E714C 000E3F4C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, fn_800E7854 @ Get_MemoryOffset_LowBit);
/*800E7150 000E3F50*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800E7154 000E3F54*/ PPC::Runtime::ASM::li(context->r4, 0xd);
/*800E7158 000E3F58*/ PPC::Runtime::ASM::bl(fn_GObj_AddUserData);
/*800E715C 000E3F5C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*800E7160 000E3F60*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*800E7164 000E3F64*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF73C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800E7168 000E3F68*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800E716C 000E3F6C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800E7170 000E3F70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800E7174 000E3F74*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800E7178 000E3F78*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*800E717C 000E3F7C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*800E7180 000E3F80*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800E7184 000E3F84*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800E7188 000E3F88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800E718C 000E3F8C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800E7190 000E3F90*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800E7194 000E3F94*/ PPC::Runtime::ASM::blr();
}