//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802DF844.hpp"
#include "fn_802D48BC.hpp"
#include "fn_802F0CC0.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80377C10.hpp"
#include "fn_802D4AB0.hpp"
#include "fn_802D4B3C.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802E498C.hpp"
#include "fn_802EFFB8.hpp"
#include "fn_802F0148.hpp"
#include "fn_80289768.hpp"
#include "fn_80379784.hpp"
#include "fn_80381D6C.hpp"



void fn_802F4068(PPC::Runtime::GCContext* context)
{
/*802F4068 002F0E68*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*802F406C 002F0E6C*/ PPC::Runtime::ASM::mflr(context->r0);
/*802F4070 002F0E70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802F4074 002F0E74*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802F4078 002F0E78*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*802F407C 002F0E7C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802F4080 002F0E80*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802F4084 002F0E84*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802F4088 002F0E88*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802F408C 002F0E8C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802F4090 002F0E90*/ PPC::Runtime::ASM::mr(context->r0, context->r30);
/*802F4094 002F0E94*/ PPC::Runtime::ASM::mr(context->r31, context->r0);
/*802F4098 002F0E98*/ PPC::Runtime::ASM::bl(fn_802DF844);
/*802F409C 002F0E9C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804DA158 @ Get_MemoryOffset_HighBit);
/*802F40A0 002F0EA0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804DA158 @ Get_MemoryOffset_LowBit);
/*802F40A4 002F0EA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802F40A8 002F0EA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802F40AC 002F0EAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802F40B0 002F0EB0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802F40B4 002F0EB4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r12));
/*802F40B8 002F0EB8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802F40BC 002F0EBC*/ PPC::Runtime::ASM::bctrl();
/*802F40C0 002F0EC0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD658 @ Get_MemoryOffset_HighBit);
/*802F40C4 002F0EC4*/ PPC::Runtime::ASM::addi(context->r28, context->r31, 0x8);
/*802F40C8 002F0EC8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD658 @ Get_MemoryOffset_LowBit);
/*802F40CC 002F0ECC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*802F40D0 002F0ED0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802F40D4 002F0ED4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802F40D8 002F0ED8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*802F40DC 002F0EDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*802F40E0 002F0EE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*802F40E4 002F0EE4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*802F40E8 002F0EE8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802F40EC 002F0EEC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802F40F0 002F0EF0*/ PPC::Runtime::ASM::bctrl();
/*802F40F4 002F0EF4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD6A0 @ Get_MemoryOffset_HighBit);
/*802F40F8 002F0EF8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F54B8 @ Get_MemoryOffset_HighBit);
/*802F40FC 002F0EFC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD6A0 @ Get_MemoryOffset_LowBit);
/*802F4100 002F0F00*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802F4104 002F0F04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*802F4108 002F0F08*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F54B8 @ Get_MemoryOffset_LowBit);
/*802F410C 002F0F0C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F4110 002F0F10*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*802F4114 002F0F14*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*802F4118 002F0F18*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*802F411C 002F0F1C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*802F4120 002F0F20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*802F4124 002F0F24*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*802F4128 002F0F28*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*802F412C 002F0F2C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802F4130 002F0F30*/ PPC::Runtime::ASM::bctrl();
/*802F4134 002F0F34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802F4138 002F0F38*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F413C 002F0F3C*/ PPC::Runtime::ASM::bl(fn_802D48BC);
/*802F4140 002F0F40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802F4144 002F0F44*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xe0);
/*802F4148 002F0F48*/ PPC::Runtime::ASM::bl(fn_802F0CC0);
/*802F414C 002F0F4C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802F4150 002F0F50*/ PPC::Runtime::ASM::lwzu(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3cc, context->r3));
/*802F4154 002F0F54*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*802F4158 002F0F58*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802F415C 002F0F5C*/ PPC::Runtime::ASM::bctrl();
/*802F4160 002F0F60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802F4164 002F0F64*/ PPC::Runtime::ASM::lwzu(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x424, context->r3));
/*802F4168 002F0F68*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*802F416C 002F0F6C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802F4170 002F0F70*/ PPC::Runtime::ASM::bctrl();
/*802F4174 002F0F74*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802F4178 002F0F78*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802F417C 002F0F7C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802F4180 002F0F80*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*802F4184 002F0F84*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbf0, context->r5));
/*802F4188 002F0F88*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0xbf8);
/*802F418C 002F0F8C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbf7, context->r5));
/*802F4190 002F0F90*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbf6, context->r5));
/*802F4194 002F0F94*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbf5, context->r5));
/*802F4198 002F0F98*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbf4, context->r5));
/*802F419C 002F0F9C*/ PPC::Runtime::ASM::bl(fn_803839BC);
/*802F41A0 002F0FA0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F41A4 002F0FA4*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802F41A8 002F0FA8*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802F41AC 002F0FAC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F41B0 002F0FB0*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802F41B4 002F0FB4*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*802F41B8 002F0FB8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F41BC 002F0FBC*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802F41C0 002F0FC0*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f31);
/*802F41C4 002F0FC4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F41C8 002F0FC8*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*802F41CC 002F0FCC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F41D0 002F0FD0*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802F41D4 002F0FD4*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*802F41D8 002F0FD8*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*802F41DC 002F0FDC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802F41E0 002F0FE0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D97F8 @ Get_MemoryOffset_SDA21);
/*802F41E4 002F0FE4*/ PPC::Runtime::ASM::li(context->r6, lbl_805D97F0 @ Get_MemoryOffset_SDA21);
/*802F41E8 002F0FE8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802F41EC 002F0FEC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*802F41F0 002F0FF0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r8));
/*802F41F4 002F0FF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802F41F8 002F0FF8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r8));
/*802F41FC 002F0FFC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*802F4200 002F1000*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*802F4204 002F1004*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802F4208 002F1008*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*802F420C 002F100C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802F4210 002F1010*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r3));
/*802F4214 002F1014*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802F4218 002F1018*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r3));
/*802F421C 002F101C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F4220 002F1020*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802F4224 002F1024*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802F4228 002F1028*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*802F422C 002F102C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D981C @ Get_MemoryOffset_SDA21);
/*802F4230 002F1030*/ PPC::Runtime::ASM::bl(fn_80377C10);
/*802F4234 002F1034*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*802F4238 002F1038*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*802F423C 002F103C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*802F4240 002F1040*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802F4244 002F1044*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r12));
/*802F4248 002F1048*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802F424C 002F104C*/ PPC::Runtime::ASM::bctrl();
/*802F4250 002F1050*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802F4254 002F1054*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*802F4258 002F1058*/ PPC::Runtime::ASM::bl(fn_802D4AB0);
/*802F425C 002F105C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802F4260 002F1060*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*802F4264 002F1064*/ PPC::Runtime::ASM::bl(fn_802D4B3C);
/*802F4268 002F1068*/ PPC::Runtime::ASM::lis(context->r3, lbl_804DA070 @ Get_MemoryOffset_HighBit);
/*802F426C 002F106C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804DA070 @ Get_MemoryOffset_LowBit);
/*802F4270 002F1070*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802F4274 002F1074*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*802F4278 002F1078*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802F427C 002F107C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802F4280 002F1080*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x84);
/*802F4284 002F1084*/ PPC::Runtime::ASM::bl(fn_802E498C);
/*802F4288 002F1088*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*802F428C 002F108C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*802F4290 002F1090*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*802F4294 002F1094*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D8FEC @ Get_MemoryOffset_HighBit);
/*802F4298 002F1098*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3B08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F429C 002F109C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*802F42A0 002F10A0*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804D8FEC @ Get_MemoryOffset_LowBit);
/*802F42A4 002F10A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802F42A8 002F10A8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802F42AC 002F10AC*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802F42B0 002F10B0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802F42B4 002F10B4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*802F42B8 002F10B8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802F42BC 002F10BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802F42C0 002F10C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r3));
/*802F42C4 002F10C4*/ PPC::Runtime::ASM::bl(fn_802EFFB8);
/*802F42C8 002F10C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802F42CC 002F10CC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802F42D0 002F10D0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F42D4 002F10D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r3));
/*802F42D8 002F10D8*/ PPC::Runtime::ASM::bl(fn_802F0148);
/*802F42DC 002F10DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802F42E0 002F10E0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802F42E4 002F10E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r3));
/*802F42E8 002F10E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802F42EC 002F10EC*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*802F42F0 002F10F0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F42F4 002F10F4*/ PPC::Runtime::ASM::li(context->r4, 0x20);
/*802F42F8 002F10F8*/ PPC::Runtime::ASM::bl(fn_80289768);
/*802F42FC 002F10FC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802F4300 002F1100*/ PPC::Runtime::ASM::lis(context->r3, 0x6);
/*802F4304 002F1104*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x25);
/*802F4308 002F1108*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802F430C 002F110C*/ PPC::Runtime::ASM::addi(context->r3, context->r6, 0x390);
/*802F4310 002F1110*/ PPC::Runtime::ASM::bl(fn_80379784);
/*802F4314 002F1114*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F4318 002F1118*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*802F431C 002F111C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802F4320 002F1120*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802F4324 002F1124*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F4328 002F1128*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802F432C 002F112C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a4, context->r3));
/*802F4330 002F1130*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802F4334 002F1134*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*802F4338 002F1138*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*802F433C 002F113C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*802F4340 002F1140*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802F4344 002F1144*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802F4348 002F1148*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802F434C 002F114C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xbb4);
/*802F4350 002F1150*/ PPC::Runtime::ASM::bl(fn_80381D6C);
/*802F4354 002F1154*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802F4358 002F1158*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*802F435C 002F115C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802F4360 002F1160*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802F4364 002F1164*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802F4368 002F1168*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802F436C 002F116C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802F4370 002F1170*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802F4374 002F1174*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802F4378 002F1178*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*802F437C 002F117C*/ PPC::Runtime::ASM::blr();
}