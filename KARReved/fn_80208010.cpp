//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80208010(PPC::Runtime::GCContext* context)
{
/*80208010 00204E10*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d4, context->r3));
/*80208014 00204E14*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x394, context->r3));
/*80208018 00204E18*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8020801C 00204E1C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2370 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80208020 00204E20*/ PPC::Runtime::ASM::beq(.L_8020803C);
/*80208024 00204E24*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*80208028 00204E28*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f2);
/*8020802C 00204E2C*/ PPC::Runtime::ASM::beq(.L_8020803C);
/*80208030 00204E30*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2374 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80208034 00204E34*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f2);
/*80208038 00204E38*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_8020803C, 0x8020803C) //this is a jump label
/*8020803C 00204E3C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2370 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80208040 00204E40*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x968, context->r3));
/*80208044 00204E44*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f2);
/*80208048 00204E48*/ PPC::Runtime::ASM::bge(.L_80208080);
/*8020804C 00204E4C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d4, context->r3));
/*80208050 00204E50*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x394, context->r3));
/*80208054 00204E54*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80208058 00204E58*/ PPC::Runtime::ASM::beq(.L_80208074);
/*8020805C 00204E5C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*80208060 00204E60*/ PPC::Runtime::ASM::fcmpu(cr0, context->f2, context->f3);
/*80208064 00204E64*/ PPC::Runtime::ASM::beq(.L_80208074);
/*80208068 00204E68*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2374 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020806C 00204E6C*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f3);
/*80208070 00204E70*/ PPC::Runtime::ASM::fmuls(context->f2, context->f0, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_80208074, 0x80208074) //this is a jump label
/*80208074 00204E74*/ PPC::Runtime::ASM::fneg(context->f3, context->f2);
/*80208078 00204E78*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x968, context->r3));
/*8020807C 00204E7C*/ PPC::Runtime::ASM::b(.L_802080B0);
RUNTIME_PPC_JUMP_LABEL(.L_80208080, 0x80208080) //this is a jump label
/*80208080 00204E80*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d4, context->r3));
/*80208084 00204E84*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x394, context->r3));
/*80208088 00204E88*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8020808C 00204E8C*/ PPC::Runtime::ASM::beq(.L_802080A8);
/*80208090 00204E90*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*80208094 00204E94*/ PPC::Runtime::ASM::fcmpu(cr0, context->f2, context->f3);
/*80208098 00204E98*/ PPC::Runtime::ASM::beq(.L_802080A8);
/*8020809C 00204E9C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2374 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802080A0 00204EA0*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f3);
/*802080A4 00204EA4*/ PPC::Runtime::ASM::fmuls(context->f2, context->f0, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_802080A8, 0x802080A8) //this is a jump label
/*802080A8 00204EA8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x968, context->r3));
/*802080AC 00204EAC*/ PPC::Runtime::ASM::fmr(context->f3, context->f2);
RUNTIME_PPC_JUMP_LABEL(.L_802080B0, 0x802080B0) //this is a jump label
/*802080B0 00204EB0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d4, context->r3));
/*802080B4 00204EB4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r3));
/*802080B8 00204EB8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802080BC 00204EBC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2370 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802080C0 00204EC0*/ PPC::Runtime::ASM::beq(.L_802080DC);
/*802080C4 00204EC4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*802080C8 00204EC8*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f2);
/*802080CC 00204ECC*/ PPC::Runtime::ASM::beq(.L_802080DC);
/*802080D0 00204ED0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2374 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802080D4 00204ED4*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f2);
/*802080D8 00204ED8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_802080DC, 0x802080DC) //this is a jump label
/*802080DC 00204EDC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2370 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802080E0 00204EE0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x96c, context->r3));
/*802080E4 00204EE4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f2);
/*802080E8 00204EE8*/ PPC::Runtime::ASM::bge(.L_80208120);
/*802080EC 00204EEC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d4, context->r3));
/*802080F0 00204EF0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r3));
/*802080F4 00204EF4*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802080F8 00204EF8*/ PPC::Runtime::ASM::beq(.L_80208114);
/*802080FC 00204EFC*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*80208100 00204F00*/ PPC::Runtime::ASM::fcmpu(cr0, context->f2, context->f4);
/*80208104 00204F04*/ PPC::Runtime::ASM::beq(.L_80208114);
/*80208108 00204F08*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2374 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020810C 00204F0C*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f4);
/*80208110 00204F10*/ PPC::Runtime::ASM::fmuls(context->f2, context->f0, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_80208114, 0x80208114) //this is a jump label
/*80208114 00204F14*/ PPC::Runtime::ASM::fneg(context->f4, context->f2);
/*80208118 00204F18*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x96c, context->r3));
/*8020811C 00204F1C*/ PPC::Runtime::ASM::b(.L_80208150);
RUNTIME_PPC_JUMP_LABEL(.L_80208120, 0x80208120) //this is a jump label
/*80208120 00204F20*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d4, context->r3));
/*80208124 00204F24*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r3));
/*80208128 00204F28*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8020812C 00204F2C*/ PPC::Runtime::ASM::beq(.L_80208148);
/*80208130 00204F30*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*80208134 00204F34*/ PPC::Runtime::ASM::fcmpu(cr0, context->f2, context->f4);
/*80208138 00204F38*/ PPC::Runtime::ASM::beq(.L_80208148);
/*8020813C 00204F3C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2374 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80208140 00204F40*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f4);
/*80208144 00204F44*/ PPC::Runtime::ASM::fmuls(context->f2, context->f0, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_80208148, 0x80208148) //this is a jump label
/*80208148 00204F48*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x96c, context->r3));
/*8020814C 00204F4C*/ PPC::Runtime::ASM::fmr(context->f4, context->f2);
RUNTIME_PPC_JUMP_LABEL(.L_80208150, 0x80208150) //this is a jump label
/*80208150 00204F50*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d4, context->r3));
/*80208154 00204F54*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x39c, context->r3));
/*80208158 00204F58*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8020815C 00204F5C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2370 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80208160 00204F60*/ PPC::Runtime::ASM::beq(.L_8020817C);
/*80208164 00204F64*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*80208168 00204F68*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f2);
/*8020816C 00204F6C*/ PPC::Runtime::ASM::beq(.L_8020817C);
/*80208170 00204F70*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2374 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80208174 00204F74*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f2);
/*80208178 00204F78*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_8020817C, 0x8020817C) //this is a jump label
/*8020817C 00204F7C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x970, context->r3));
/*80208180 00204F80*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2370 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80208184 00204F84*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x964, context->r3));
/*80208188 00204F88*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x970, context->r3));
/*8020818C 00204F8C*/ PPC::Runtime::ASM::fadds(context->f1, context->f2, context->f1);
/*80208190 00204F90*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x964, context->r3));
/*80208194 00204F94*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x964, context->r3));
/*80208198 00204F98*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8020819C 00204F9C*/ PPC::Runtime::ASM::ble(.L_802081C0);
/*802081A0 00204FA0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f3);
/*802081A4 00204FA4*/ PPC::Runtime::ASM::ble(.L_802081B0);
/*802081A8 00204FA8*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x964, context->r3));
/*802081AC 00204FAC*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_802081B0, 0x802081B0) //this is a jump label
/*802081B0 00204FB0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f4);
/*802081B4 00204FB4*/ PPC::Runtime::ASM::bgelr();
/*802081B8 00204FB8*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x964, context->r3));
/*802081BC 00204FBC*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_802081C0, 0x802081C0) //this is a jump label
/*802081C0 00204FC0*/ PPC::Runtime::ASM::bgelr();
/*802081C4 00204FC4*/ PPC::Runtime::ASM::fneg(context->f0, context->f3);
/*802081C8 00204FC8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802081CC 00204FCC*/ PPC::Runtime::ASM::bge(.L_802081D8);
/*802081D0 00204FD0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x964, context->r3));
/*802081D4 00204FD4*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_802081D8, 0x802081D8) //this is a jump label
/*802081D8 00204FD8*/ PPC::Runtime::ASM::fneg(context->f0, context->f4);
/*802081DC 00204FDC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/* 802081E0 00204FE0  4C 81 00 20 */ blelr
/*802081E4 00204FE4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x964, context->r3));
/*802081E8 00204FE8*/ PPC::Runtime::ASM::blr();
}