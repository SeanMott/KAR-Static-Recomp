//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801CB90C.hpp"
#include "fn_801CB90C.hpp"



void fn_801F0D8C(PPC::Runtime::GCContext* context)
{
/*801F0D8C 001EDB8C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801F0D90 001EDB90*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F0D94 001EDB94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801F0D98 001EDB98*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801F0D9C 001EDB9C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801F0DA0 001EDBA0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801F0DA4 001EDBA4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801F0DA8 001EDBA8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F0DAC 001EDBAC*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801F0DB0 001EDBB0*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*801F0DB4 001EDBB4*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*801F0DB8 001EDBB8*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*801F0DBC 001EDBBC*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*801F0DC0 001EDBC0*/ PPC::Runtime::ASM::bl(fn_801CB90C);
/*801F0DC4 001EDBC4*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
/*801F0DC8 001EDBC8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1FAC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F0DCC 001EDBCC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801F0DD0 001EDBD0*/ PPC::Runtime::ASM::fmuls(context->f31, context->f0, context->f1);
/*801F0DD4 001EDBD4*/ PPC::Runtime::ASM::bl(fn_801CB90C);
/*801F0DD8 001EDBD8*/ PPC::Runtime::ASM::fneg(context->f2, context->f1);
/*801F0DDC 001EDBDC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1FAC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F0DE0 001EDBE0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1FA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F0DE4 001EDBE4*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f2);
/*801F0DE8 001EDBE8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*801F0DEC 001EDBEC*/ PPC::Runtime::ASM::ble(.L_801F0E0C);
/*801F0DF0 001EDBF0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1FB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F0DF4 001EDBF4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*801F0DF8 001EDBF8*/ PPC::Runtime::ASM::ble(.L_801F0E00);
/*801F0DFC 001EDBFC*/ PPC::Runtime::ASM::fmr(context->f2, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801F0E00, 0x801F0E00) //this is a jump label
/*801F0E00 001EDC00*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1FB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F0E04 001EDC04*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f0);
/*801F0E08 001EDC08*/ PPC::Runtime::ASM::b(.L_801F0E24);
RUNTIME_PPC_JUMP_LABEL(.L_801F0E0C, 0x801F0E0C) //this is a jump label
/*801F0E0C 001EDC0C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1FB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F0E10 001EDC10*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*801F0E14 001EDC14*/ PPC::Runtime::ASM::bge(.L_801F0E1C);
/*801F0E18 001EDC18*/ PPC::Runtime::ASM::fmr(context->f2, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801F0E1C, 0x801F0E1C) //this is a jump label
/*801F0E1C 001EDC1C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1FBC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F0E20 001EDC20*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801F0E24, 0x801F0E24) //this is a jump label
/*801F0E24 001EDC24*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1FB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F0E28 001EDC28*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*801F0E2C 001EDC2C*/ PPC::Runtime::ASM::ble(.L_801F0E34);
/*801F0E30 001EDC30*/ PPC::Runtime::ASM::fmr(context->f31, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801F0E34, 0x801F0E34) //this is a jump label
/*801F0E34 001EDC34*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1FC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F0E38 001EDC38*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*801F0E3C 001EDC3C*/ PPC::Runtime::ASM::fmuls(context->f31, context->f31, context->f1);
/*801F0E40 001EDC40*/ PPC::Runtime::ASM::fcmpu(cr0, context->f2, context->f0);
/*801F0E44 001EDC44*/ PPC::Runtime::ASM::beq(.L_801F0E50);
/*801F0E48 001EDC48*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f31);
/*801F0E4C 001EDC4C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_801F0E50, 0x801F0E50) //this is a jump label
/*801F0E50 001EDC50*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1FA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F0E54 001EDC54*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*801F0E58 001EDC58*/ PPC::Runtime::ASM::ble(.L_801F0E84);
/*801F0E5C 001EDC5C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*801F0E60 001EDC60*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*801F0E64 001EDC64*/ PPC::Runtime::ASM::bge(.L_801F0E6C);
/*801F0E68 001EDC68*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_801F0E6C, 0x801F0E6C) //this is a jump label
/*801F0E6C 001EDC6C*/ PPC::Runtime::ASM::fneg(context->f1, context->f2);
/*801F0E70 001EDC70*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*801F0E74 001EDC74*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801F0E78 001EDC78*/ PPC::Runtime::ASM::ble(.L_801F0EA8);
/*801F0E7C 001EDC7C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*801F0E80 001EDC80*/ PPC::Runtime::ASM::b(.L_801F0EA8);
RUNTIME_PPC_JUMP_LABEL(.L_801F0E84, 0x801F0E84) //this is a jump label
/*801F0E84 001EDC84*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*801F0E88 001EDC88*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*801F0E8C 001EDC8C*/ PPC::Runtime::ASM::ble(.L_801F0E94);
/*801F0E90 001EDC90*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_801F0E94, 0x801F0E94) //this is a jump label
/*801F0E94 001EDC94*/ PPC::Runtime::ASM::fneg(context->f1, context->f2);
/*801F0E98 001EDC98*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*801F0E9C 001EDC9C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801F0EA0 001EDCA0*/ PPC::Runtime::ASM::bge(.L_801F0EA8);
/*801F0EA4 001EDCA4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_801F0EA8, 0x801F0EA8) //this is a jump label
/*801F0EA8 001EDCA8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801F0EAC 001EDCAC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*801F0EB0 001EDCB0*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E1FC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F0EB4 001EDCB4*/ PPC::Runtime::ASM::fsubs(context->f3, context->f1, context->f0);
/*801F0EB8 001EDCB8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*801F0EBC 001EDCBC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*801F0EC0 001EDCC0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1FC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F0EC4 001EDCC4*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f0);
/*801F0EC8 001EDCC8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1FB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F0ECC 001EDCCC*/ PPC::Runtime::ASM::fmuls(context->f3, context->f4, context->f3);
/*801F0ED0 001EDCD0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*801F0ED4 001EDCD4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*801F0ED8 001EDCD8*/ PPC::Runtime::ASM::ble(.L_801F0EE4);
/*801F0EDC 001EDCDC*/ PPC::Runtime::ASM::fmr(context->f3, context->f0);
/*801F0EE0 001EDCE0*/ PPC::Runtime::ASM::b(.L_801F0EF4);
RUNTIME_PPC_JUMP_LABEL(.L_801F0EE4, 0x801F0EE4) //this is a jump label
/*801F0EE4 001EDCE4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1FB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F0EE8 001EDCE8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*801F0EEC 001EDCEC*/ PPC::Runtime::ASM::bge(.L_801F0EF4);
/*801F0EF0 001EDCF0*/ PPC::Runtime::ASM::fmr(context->f3, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801F0EF4, 0x801F0EF4) //this is a jump label
/*801F0EF4 001EDCF4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1FCC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F0EF8 001EDCF8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801F0EFC 001EDCFC*/ PPC::Runtime::ASM::ble(.L_801F0F08);
/*801F0F00 001EDD00*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
/*801F0F04 001EDD04*/ PPC::Runtime::ASM::b(.L_801F0F18);
RUNTIME_PPC_JUMP_LABEL(.L_801F0F08, 0x801F0F08) //this is a jump label
/*801F0F08 001EDD08*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1FD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F0F0C 001EDD0C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801F0F10 001EDD10*/ PPC::Runtime::ASM::bge(.L_801F0F18);
/*801F0F14 001EDD14*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801F0F18, 0x801F0F18) //this is a jump label
/*801F0F18 001EDD18*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801F0F1C 001EDD1C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f3);
/*801F0F20 001EDD20*/ PPC::Runtime::ASM::ble(.L_801F0F44);
/*801F0F24 001EDD24*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1FC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F0F28 001EDD28*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*801F0F2C 001EDD2C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801F0F30 001EDD30*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801F0F34 001EDD34*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f3);
/*801F0F38 001EDD38*/ PPC::Runtime::ASM::bge(.L_801F0F64);
/*801F0F3C 001EDD3C*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801F0F40 001EDD40*/ PPC::Runtime::ASM::b(.L_801F0F64);
RUNTIME_PPC_JUMP_LABEL(.L_801F0F44, 0x801F0F44) //this is a jump label
/*801F0F44 001EDD44*/ PPC::Runtime::ASM::bge(.L_801F0F64);
/*801F0F48 001EDD48*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1FC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F0F4C 001EDD4C*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f0);
/*801F0F50 001EDD50*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801F0F54 001EDD54*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801F0F58 001EDD58*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f3);
/*801F0F5C 001EDD5C*/ PPC::Runtime::ASM::ble(.L_801F0F64);
/*801F0F60 001EDD60*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_801F0F64, 0x801F0F64) //this is a jump label
/*801F0F64 001EDD64*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*801F0F68 001EDD68*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f1);
/*801F0F6C 001EDD6C*/ PPC::Runtime::ASM::ble(.L_801F0F90);
/*801F0F70 001EDD70*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1FD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F0F74 001EDD74*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*801F0F78 001EDD78*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*801F0F7C 001EDD7C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*801F0F80 001EDD80*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*801F0F84 001EDD84*/ PPC::Runtime::ASM::bge(.L_801F0FB0);
/*801F0F88 001EDD88*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*801F0F8C 001EDD8C*/ PPC::Runtime::ASM::b(.L_801F0FB0);
RUNTIME_PPC_JUMP_LABEL(.L_801F0F90, 0x801F0F90) //this is a jump label
/*801F0F90 001EDD90*/ PPC::Runtime::ASM::bge(.L_801F0FB0);
/*801F0F94 001EDD94*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1FD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F0F98 001EDD98*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f0);
/*801F0F9C 001EDD9C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*801F0FA0 001EDDA0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*801F0FA4 001EDDA4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*801F0FA8 001EDDA8*/ PPC::Runtime::ASM::ble(.L_801F0FB0);
/*801F0FAC 001EDDAC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_801F0FB0, 0x801F0FB0) //this is a jump label
/*801F0FB0 001EDDB0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*801F0FB4 001EDDB4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801F0FB8 001EDDB8*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801F0FBC 001EDDBC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801F0FC0 001EDDC0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*801F0FC4 001EDDC4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*801F0FC8 001EDDC8*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801F0FCC 001EDDCC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*801F0FD0 001EDDD0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*801F0FD4 001EDDD4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*801F0FD8 001EDDD8*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801F0FDC 001EDDDC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*801F0FE0 001EDDE0*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801F0FE4 001EDDE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801F0FE8 001EDDE8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801F0FEC 001EDDEC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801F0FF0 001EDDF0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801F0FF4 001EDDF4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F0FF8 001EDDF8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801F0FFC 001EDDFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F1000 001EDE00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801F1004 001EDE04*/ PPC::Runtime::ASM::blr();
}