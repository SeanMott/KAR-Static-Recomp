//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800B7E90.hpp"
#include "fn_800B7E90.hpp"
#include "fn_80062ECC.hpp"



void fn_800BF42C(PPC::Runtime::GCContext* context)
{
/*800BF42C 000BC22C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*800BF430 000BC230*/ PPC::Runtime::ASM::mflr(context->r0);
/*800BF434 000BC234*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800BF438 000BC238*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*800BF43C 000BC23C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*800BF440 000BC240*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*800BF444 000BC244*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r3));
/*800BF448 000BC248*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r3));
/*800BF44C 000BC24C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r3));
/*800BF450 000BC250*/ PPC::Runtime::ASM::fsubs(context->f2, context->f1, context->f0);
/*800BF454 000BC254*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800BF458 000BC258*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r3));
/*800BF45C 000BC25C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r3));
/*800BF460 000BC260*/ PPC::Runtime::ASM::fsubs(context->f5, context->f1, context->f0);
/*800BF464 000BC264*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800BF468 000BC268*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r3));
/*800BF46C 000BC26C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r3));
/*800BF470 000BC270*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*800BF474 000BC274*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800BF478 000BC278*/ PPC::Runtime::ASM::fsubs(context->f4, context->f1, context->f0);
/*800BF47C 000BC27C*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800BF480 000BC280*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800BF484 000BC284*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800BF488 000BC288*/ PPC::Runtime::ASM::fmuls(context->f0, context->f5, context->f1);
/*800BF48C 000BC28C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800BF490 000BC290*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f6, context->f0);
/*800BF494 000BC294*/ PPC::Runtime::ASM::fmadds(context->f0, context->f4, context->f3, context->f0);
/*800BF498 000BC298*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*800BF49C 000BC29C*/ PPC::Runtime::ASM::fmadds(context->f2, context->f6, context->f0, context->f2);
/*800BF4A0 000BC2A0*/ PPC::Runtime::ASM::fmadds(context->f1, context->f1, context->f0, context->f5);
/*800BF4A4 000BC2A4*/ PPC::Runtime::ASM::fmadds(context->f0, context->f3, context->f0, context->f4);
/*800BF4A8 000BC2A8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800BF4AC 000BC2AC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800BF4B0 000BC2B0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800BF4B4 000BC2B4*/ PPC::Runtime::ASM::bl(fn_800B7E90);
/*800BF4B8 000BC2B8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF300 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF4BC 000BC2BC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800BF4C0 000BC2C0*/ PPC::Runtime::ASM::bge(.L_800BF4CC);
/*800BF4C4 000BC2C4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF4C8 000BC2C8*/ PPC::Runtime::ASM::b(.L_800BF614);
RUNTIME_PPC_JUMP_LABEL(.L_800BF4CC, 0x800BF4CC) //this is a jump label
/*800BF4CC 000BC2CC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*800BF4D0 000BC2D0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*800BF4D4 000BC2D4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800BF4D8 000BC2D8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800BF4DC 000BC2DC*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*800BF4E0 000BC2E0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f1);
/*800BF4E4 000BC2E4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800BF4E8 000BC2E8*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*800BF4EC 000BC2EC*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800BF4F0 000BC2F0*/ PPC::Runtime::ASM::fmadds(context->f0, context->f6, context->f2, context->f0);
/*800BF4F4 000BC2F4*/ PPC::Runtime::ASM::fmadds(context->f0, context->f5, context->f4, context->f0);
/*800BF4F8 000BC2F8*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*800BF4FC 000BC2FC*/ PPC::Runtime::ASM::fmadds(context->f2, context->f2, context->f0, context->f6);
/*800BF500 000BC300*/ PPC::Runtime::ASM::fmadds(context->f1, context->f1, context->f0, context->f3);
/*800BF504 000BC304*/ PPC::Runtime::ASM::fmadds(context->f0, context->f4, context->f0, context->f5);
/*800BF508 000BC308*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800BF50C 000BC30C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800BF510 000BC310*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800BF514 000BC314*/ PPC::Runtime::ASM::bl(fn_800B7E90);
/*800BF518 000BC318*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF300 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF51C 000BC31C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800BF520 000BC320*/ PPC::Runtime::ASM::bge(.L_800BF52C);
/*800BF524 000BC324*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF528 000BC328*/ PPC::Runtime::ASM::b(.L_800BF614);
RUNTIME_PPC_JUMP_LABEL(.L_800BF52C, 0x800BF52C) //this is a jump label
/*800BF52C 000BC32C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*800BF530 000BC330*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*800BF534 000BC334*/ PPC::Runtime::ASM::bl(fn_80062ECC);
/*800BF538 000BC338*/ PPC::Runtime::ASM::lis(context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800BF53C 000BC33C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF2F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF540 000BC340*/ PPC::Runtime::ASM::addi(context->r3, context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800BF544 000BC344*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r3));
/*800BF548 000BC348*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c8, context->r3));
/*800BF54C 000BC34C*/ PPC::Runtime::ASM::fmuls(context->f3, context->f2, context->f0);
/*800BF550 000BC350*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f3);
/*800BF554 000BC354*/ PPC::Runtime::ASM::bge(.L_800BF560);
/*800BF558 000BC358*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF55C 000BC35C*/ PPC::Runtime::ASM::b(.L_800BF584);
RUNTIME_PPC_JUMP_LABEL(.L_800BF560, 0x800BF560) //this is a jump label
/*800BF560 000BC360*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2cc, context->r3));
/*800BF564 000BC364*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*800BF568 000BC368*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800BF56C 000BC36C*/ PPC::Runtime::ASM::ble(.L_800BF578);
/*800BF570 000BC370*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF2F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF574 000BC374*/ PPC::Runtime::ASM::b(.L_800BF584);
RUNTIME_PPC_JUMP_LABEL(.L_800BF578, 0x800BF578) //this is a jump label
/*800BF578 000BC378*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f3);
/*800BF57C 000BC37C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*800BF580 000BC380*/ PPC::Runtime::ASM::fdivs(context->f2, context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_800BF584, 0x800BF584) //this is a jump label
/*800BF584 000BC384*/ PPC::Runtime::ASM::lfs(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800BF588 000BC388*/ PPC::Runtime::ASM::lfs(context->f10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800BF58C 000BC38C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d0, context->r3));
/*800BF590 000BC390*/ PPC::Runtime::ASM::fmuls(context->f0, context->f10, context->f7);
/*800BF594 000BC394*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800BF598 000BC398*/ PPC::Runtime::ASM::lfs(context->f9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800BF59C 000BC39C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*800BF5A0 000BC3A0*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800BF5A4 000BC3A4*/ PPC::Runtime::ASM::lfs(context->f8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800BF5A8 000BC3A8*/ PPC::Runtime::ASM::fmuls(context->f6, context->f3, context->f9);
/*800BF5AC 000BC3AC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800BF5B0 000BC3B0*/ PPC::Runtime::ASM::fmsubs(context->f3, context->f3, context->f5, context->f0);
/*800BF5B4 000BC3B4*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800BF5B8 000BC3B8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f8, context->f5);
/*800BF5BC 000BC3BC*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800BF5C0 000BC3C0*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800BF5C4 000BC3C4*/ PPC::Runtime::ASM::fmsubs(context->f6, context->f8, context->f7, context->f6);
/*800BF5C8 000BC3C8*/ PPC::Runtime::ASM::fmsubs(context->f3, context->f10, context->f9, context->f0);
/*800BF5CC 000BC3CC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BF5D0 000BC3D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800BF5D4 000BC3D4*/ PPC::Runtime::ASM::stfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800BF5D8 000BC3D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800BF5DC 000BC3DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800BF5E0 000BC3E0*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800BF5E4 000BC3E4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800BF5E8 000BC3E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800BF5EC 000BC3EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800BF5F0 000BC3F0*/ PPC::Runtime::ASM::fmuls(context->f2, context->f3, context->f2);
/*800BF5F4 000BC3F4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800BF5F8 000BC3F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800BF5FC 000BC3FC*/ PPC::Runtime::ASM::fmadds(context->f2, context->f3, context->f4, context->f2);
/*800BF600 000BC400*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800BF604 000BC404*/ PPC::Runtime::ASM::fmadds(context->f2, context->f3, context->f5, context->f2);
/*800BF608 000BC408*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*800BF60C 000BC40C*/ PPC::Runtime::ASM::bge(.L_800BF614);
/*800BF610 000BC410*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_800BF614, 0x800BF614) //this is a jump label
/*800BF614 000BC414*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800BF618 000BC418*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*800BF61C 000BC41C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*800BF620 000BC420*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800BF624 000BC424*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*800BF628 000BC428*/ PPC::Runtime::ASM::blr();
}