//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802EFE44.hpp"



void fn_802FA030(PPC::Runtime::GCContext* context)
{
/*802FA030 002F6E30*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802FA034 002F6E34*/ PPC::Runtime::ASM::mflr(context->r0);
/*802FA038 002F6E38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802FA03C 002F6E3C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802FA040 002F6E40*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802FA044 002F6E44*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802FA048 002F6E48*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FA04C 002F6E4C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802FA050 002F6E50*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x464, context->r3));
/*802FA054 002F6E54*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FA058 002F6E58*/ PPC::Runtime::ASM::beq(.L_802FA09C);
/*802FA05C 002F6E5C*/ PPC::Runtime::ASM::bne(.L_802FA070);
/*802FA060 002F6E60*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802FA064 002F6E64*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*802FA068 002F6E68*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802FA06C 002F6E6C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802FA070, 0x802FA070) //this is a jump label
/*802FA070 002F6E70*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802FA074 002F6E74*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802FA078 002F6E78*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*802FA07C 002F6E7C*/ PPC::Runtime::ASM::bne(.L_802FA08C);
/*802FA080 002F6E80*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*802FA084 002F6E84*/ PPC::Runtime::ASM::beq(.L_802FA08C);
/*802FA088 002F6E88*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802FA08C, 0x802FA08C) //this is a jump label
/* 802FA08C 002F6E8C  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802FA090 002F6E90*/ PPC::Runtime::ASM::beq(.L_802FA09C);
/*802FA094 002F6E94*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802FA098 002F6E98*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_802FA09C, 0x802FA09C) //this is a jump label
/*802FA09C 002F6E9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FA0A0 002F6EA0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802FA0A4 002F6EA4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x464, context->r3));
/*802FA0A8 002F6EA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a8, context->r3));
/*802FA0AC 002F6EAC*/ PPC::Runtime::ASM::addi(context->r29, context->r5, 0x44);
/*802FA0B0 002F6EB0*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 802FA0B4 002F6EB4  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802FA0B8 002F6EB8*/ PPC::Runtime::ASM::bne(.L_802FA0CC);
/*802FA0BC 002F6EBC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802FA0C0 002F6EC0*/ PPC::Runtime::ASM::li(context->r4, 0x495);
/*802FA0C4 002F6EC4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802FA0C8 002F6EC8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802FA0CC, 0x802FA0CC) //this is a jump label
/*802FA0CC 002F6ECC*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802FA0D0 002F6ED0*/ PPC::Runtime::ASM::bne(.L_802FA0E4);
/*802FA0D4 002F6ED4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802FA0D8 002F6ED8*/ PPC::Runtime::ASM::li(context->r4, 0x496);
/*802FA0DC 002F6EDC*/ PPC::Runtime::ASM::li(context->r5, String_ "mt" 3 @ Get_MemoryOffset_SDA21);
/*802FA0E0 002F6EE0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802FA0E4, 0x802FA0E4) //this is a jump label
/*802FA0E4 002F6EE4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802FA0E8 002F6EE8*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x44);
/*802FA0EC 002F6EEC*/ PPC::Runtime::ASM::bl(fn_PSMTXCopy);
/*802FA0F0 002F6EF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802FA0F4 002F6EF4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FA0F8 002F6EF8*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x380);
/*802FA0FC 002F6EFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802FA100 002F6F00*/ PPC::Runtime::ASM::beq(.L_802FA144);
/*802FA104 002F6F04*/ PPC::Runtime::ASM::bne(.L_802FA118);
/*802FA108 002F6F08*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802FA10C 002F6F0C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*802FA110 002F6F10*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802FA114 002F6F14*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802FA118, 0x802FA118) //this is a jump label
/*802FA118 002F6F18*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802FA11C 002F6F1C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802FA120 002F6F20*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*802FA124 002F6F24*/ PPC::Runtime::ASM::bne(.L_802FA134);
/*802FA128 002F6F28*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*802FA12C 002F6F2C*/ PPC::Runtime::ASM::beq(.L_802FA134);
/*802FA130 002F6F30*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802FA134, 0x802FA134) //this is a jump label
/* 802FA134 002F6F34  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802FA138 002F6F38*/ PPC::Runtime::ASM::bne(.L_802FA144);
/*802FA13C 002F6F3C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802FA140 002F6F40*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_802FA144, 0x802FA144) //this is a jump label
/*802FA144 002F6F44*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FA148 002F6F48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r3));
/*802FA14C 002F6F4C*/ PPC::Runtime::ASM::bl(fn_802EFE44);
/*802FA150 002F6F50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802FA154 002F6F54*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802FA158 002F6F58*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802FA15C 002F6F5C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FA160 002F6F60*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802FA164 002F6F64*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802FA168 002F6F68*/ PPC::Runtime::ASM::blr();
}