//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80205160.hpp"
#include "fn_801FD118.hpp"
#include "fn_80062CA4.hpp"
#include "fn_80062DD0.hpp"
#include "fn_80062DD0.hpp"
#include "fn_801FD118.hpp"
#include "fn_80062CA4.hpp"
#include "fn_80062ECC.hpp"
#include "fn_80062CA4.hpp"
#include "fn_80062DD0.hpp"
#include "fn_80062DD0.hpp"
#include "fn_80062CA4.hpp"
#include "fn_80062DD0.hpp"
#include "fn_80062DD0.hpp"
#include "memset.hpp"
#include "fn_80062DD0.hpp"
#include "fn_80062DD0.hpp"
#include "memset.hpp"
#include "fn_801FD6B0.hpp"



void fn_8020B01C(PPC::Runtime::GCContext* context)
{
/*8020B01C 00207E1C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x90, context->r1));
/*8020B020 00207E20*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020B024 00207E24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*8020B028 00207E28*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8020B02C 00207E2C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*8020B030 00207E30*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8020B034 00207E34*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*8020B038 00207E38*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8020B03C 00207E3C*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*8020B040 00207E40*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8020B044 00207E44*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8020B048 00207E48*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x538);
/*8020B04C 00207E4C*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*8020B050 00207E50*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x95c, context->r31));
/*8020B054 00207E54*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020B058 00207E58*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E23DC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020B05C 00207E5C*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f1);
/*8020B060 00207E60*/ PPC::Runtime::ASM::bl(fn_80205160);
/*8020B064 00207E64*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8020B068 00207E68*/ PPC::Runtime::ASM::bne(.L_8020B074);
/*8020B06C 00207E6C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8020B070 00207E70*/ PPC::Runtime::ASM::b(.L_8020B464);
RUNTIME_PPC_JUMP_LABEL(.L_8020B074, 0x8020B074) //this is a jump label
/*8020B074 00207E74*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2f8);
/*8020B078 00207E78*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x808);
/*8020B07C 00207E7C*/ PPC::Runtime::ASM::bl(fn_801FD118);
/*8020B080 00207E80*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8020B084 00207E84*/ PPC::Runtime::ASM::bne(.L_8020B0A4);
/*8020B088 00207E88*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x808, context->r31));
/*8020B08C 00207E8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80c, context->r31));
/*8020B090 00207E90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x810, context->r31));
/*8020B094 00207E94*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8020B098 00207E98*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8020B09C 00207E9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8020B0A0 00207EA0*/ PPC::Runtime::ASM::b(.L_8020B0BC);
RUNTIME_PPC_JUMP_LABEL(.L_8020B0A4, 0x8020B0A4) //this is a jump label
/*8020B0A4 00207EA4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x814, context->r31));
/*8020B0A8 00207EA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x818, context->r31));
/*8020B0AC 00207EAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x81c, context->r31));
/*8020B0B0 00207EB0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8020B0B4 00207EB4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8020B0B8 00207EB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8020B0BC, 0x8020B0BC) //this is a jump label
/*8020B0BC 00207EBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8020B0C0 00207EC0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8020B0C4 00207EC4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8020B0C8 00207EC8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8020B0CC 00207ECC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8020B0D0 00207ED0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8020B0D4 00207ED4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r31));
/*8020B0D8 00207ED8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8020B0DC 00207EDC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8020B0E0 00207EE0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8020B0E4 00207EE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8020B0E8 00207EE8*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8020B0EC 00207EEC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8020B0F0 00207EF0*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8020B0F4 00207EF4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r31));
/*8020B0F8 00207EF8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f30);
/*8020B0FC 00207EFC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8020B100 00207F00*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r31));
/*8020B104 00207F04*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f29);
/*8020B108 00207F08*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8020B10C 00207F0C*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*8020B110 00207F10*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x658);
/*8020B114 00207F14*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8020B118 00207F18*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*8020B11C 00207F1C*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*8020B120 00207F20*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*8020B124 00207F24*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x658);
/*8020B128 00207F28*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8020B12C 00207F2C*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*8020B130 00207F30*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x844, context->r31));
/*8020B134 00207F34*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*8020B138 00207F38*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r31));
/*8020B13C 00207F3C*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66c, context->r31));
/*8020B140 00207F40*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8020B144 00207F44*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x664, context->r31));
/*8020B148 00207F48*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x668, context->r31));
/*8020B14C 00207F4C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8020B150 00207F50*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8020B154 00207F54*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f1);
/*8020B158 00207F58*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8020B15C 00207F5C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x848, context->r31));
/*8020B160 00207F60*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r31));
/*8020B164 00207F64*/ PPC::Runtime::ASM::fmadds(context->f2, context->f4, context->f3, context->f2);
/*8020B168 00207F68*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8020B16C 00207F6C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8020B170 00207F70*/ PPC::Runtime::ASM::fmadds(context->f31, context->f5, context->f3, context->f2);
/*8020B174 00207F74*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8020B178 00207F78*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84c, context->r31));
/*8020B17C 00207F7C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r31));
/*8020B180 00207F80*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8020B184 00207F84*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8020B188 00207F88*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*8020B18C 00207F8C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2370 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020B190 00207F90*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f1);
/*8020B194 00207F94*/ PPC::Runtime::ASM::bne(.L_8020B1F8);
/*8020B198 00207F98*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2f8);
/*8020B19C 00207F9C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x304);
/*8020B1A0 00207FA0*/ PPC::Runtime::ASM::bl(fn_801FD118);
/*8020B1A4 00207FA4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8020B1A8 00207FA8*/ PPC::Runtime::ASM::bne(.L_8020B1E0);
/*8020B1AC 00207FAC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x844, context->r31));
/*8020B1B0 00207FB0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x304, context->r31));
/*8020B1B4 00207FB4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8020B1B8 00207FB8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8020B1BC 00207FBC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x848, context->r31));
/*8020B1C0 00207FC0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x308, context->r31));
/*8020B1C4 00207FC4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8020B1C8 00207FC8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8020B1CC 00207FCC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84c, context->r31));
/*8020B1D0 00207FD0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30c, context->r31));
/*8020B1D4 00207FD4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8020B1D8 00207FD8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8020B1DC 00207FDC*/ PPC::Runtime::ASM::b(.L_8020B1F8);
RUNTIME_PPC_JUMP_LABEL(.L_8020B1E0, 0x8020B1E0) //this is a jump label
/*8020B1E0 00207FE0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x334, context->r31));
/*8020B1E4 00207FE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x338, context->r31));
/*8020B1E8 00207FE8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8020B1EC 00207FEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8020B1F0 00207FF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r31));
/*8020B1F4 00207FF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8020B1F8, 0x8020B1F8) //this is a jump label
/*8020B1F8 00207FF8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*8020B1FC 00207FFC*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8020B200 00208000*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*8020B204 00208004*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x658);
/*8020B208 00208008*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*8020B20C 0020800C*/ PPC::Runtime::ASM::bl(fn_80062ECC);
/*8020B210 00208010*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E23FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020B214 00208014*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8020B218 00208018*/ PPC::Runtime::ASM::blt(.L_8020B240);
/*8020B21C 0020801C*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E2398 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020B220 00208020*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E2408 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020B224 00208024*/ PPC::Runtime::ASM::fsub(context->f1, context->f2, context->f1);
/*8020B228 00208028*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8020B22C 0020802C*/ PPC::Runtime::ASM::bge(.L_8020B234);
/*8020B230 00208030*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_8020B234, 0x8020B234) //this is a jump label
/*8020B234 00208034*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E2410 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020B238 00208038*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8020B23C 0020803C*/ PPC::Runtime::ASM::bge(.L_8020B280);
RUNTIME_PPC_JUMP_LABEL(.L_8020B240, 0x8020B240) //this is a jump label
/*8020B240 00208040*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x664, context->r31));
/*8020B244 00208044*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*8020B248 00208048*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E23F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020B24C 0020804C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8020B250 00208050*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8020B254 00208054*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8020B258 00208058*/ PPC::Runtime::ASM::fmadds(context->f2, context->f2, context->f3, context->f0);
/*8020B25C 0020805C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8020B260 00208060*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8020B264 00208064*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x668, context->r31));
/*8020B268 00208068*/ PPC::Runtime::ASM::fmadds(context->f1, context->f2, context->f3, context->f1);
/*8020B26C 0020806C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8020B270 00208070*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66c, context->r31));
/*8020B274 00208074*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f3, context->f0);
/*8020B278 00208078*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8020B27C 0020807C*/ PPC::Runtime::ASM::bl(fn_80062CA4);
RUNTIME_PPC_JUMP_LABEL(.L_8020B280, 0x8020B280) //this is a jump label
/*8020B280 00208080*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x658);
/*8020B284 00208084*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*8020B288 00208088*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*8020B28C 0020808C*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*8020B290 00208090*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*8020B294 00208094*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x658);
/*8020B298 00208098*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x2c);
/*8020B29C 0020809C*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*8020B2A0 002080A0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r31));
/*8020B2A4 002080A4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8020B2A8 002080A8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r31));
/*8020B2AC 002080AC*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8020B2B0 002080B0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8020B2B4 002080B4*/ PPC::Runtime::ASM::fmuls(context->f4, context->f1, context->f0);
/*8020B2B8 002080B8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8020B2BC 002080BC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8020B2C0 002080C0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8020B2C4 002080C4*/ PPC::Runtime::ASM::fmuls(context->f6, context->f3, context->f4);
/*8020B2C8 002080C8*/ PPC::Runtime::ASM::fmuls(context->f5, context->f1, context->f4);
/*8020B2CC 002080CC*/ PPC::Runtime::ASM::fmuls(context->f4, context->f0, context->f4);
/*8020B2D0 002080D0*/ PPC::Runtime::ASM::stfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020B2D4 002080D4*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8020B2D8 002080D8*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8020B2DC 002080DC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r31));
/*8020B2E0 002080E0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r31));
/*8020B2E4 002080E4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r31));
/*8020B2E8 002080E8*/ PPC::Runtime::ASM::fadds(context->f5, context->f3, context->f5);
/*8020B2EC 002080EC*/ PPC::Runtime::ASM::fadds(context->f4, context->f1, context->f4);
/*8020B2F0 002080F0*/ PPC::Runtime::ASM::fadds(context->f3, context->f0, context->f6);
/*8020B2F4 002080F4*/ PPC::Runtime::ASM::fsubs(context->f1, context->f5, context->f30);
/*8020B2F8 002080F8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f29);
/*8020B2FC 002080FC*/ PPC::Runtime::ASM::fsubs(context->f2, context->f3, context->f2);
/*8020B300 00208100*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8020B304 00208104*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8020B308 00208108*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8020B30C 0020810C*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*8020B310 00208110*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x658);
/*8020B314 00208114*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8020B318 00208118*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*8020B31C 0020811C*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*8020B320 00208120*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*8020B324 00208124*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x658);
/*8020B328 00208128*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8020B32C 0020812C*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*8020B330 00208130*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x668, context->r31));
/*8020B334 00208134*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8020B338 00208138*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2370 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020B33C 0020813C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*8020B340 00208140*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x664, context->r31));
/*8020B344 00208144*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8020B348 00208148*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*8020B34C 0020814C*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66c, context->r31));
/*8020B350 00208150*/ PPC::Runtime::ASM::fmadds(context->f1, context->f3, context->f2, context->f1);
/*8020B354 00208154*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8020B358 00208158*/ PPC::Runtime::ASM::fmadds(context->f1, context->f4, context->f2, context->f1);
/*8020B35C 0020815C*/ PPC::Runtime::ASM::bgt(.L_8020B368);
/*8020B360 00208160*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8020B364 00208164*/ PPC::Runtime::ASM::ble(.L_8020B394);
RUNTIME_PPC_JUMP_LABEL(.L_8020B368, 0x8020B368) //this is a jump label
/*8020B368 00208168*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x844);
/*8020B36C 0020816C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8020B370 00208170*/ PPC::Runtime::ASM::li(context->r5, 0xc);
/*8020B374 00208174*/ PPC::Runtime::ASM::bl(memset);
/*8020B378 00208178*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2418 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020B37C 0020817C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x97c, context->r31));
/*8020B380 00208180*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*8020B384 00208184*/ PPC::Runtime::ASM::beq(.L_8020B460);
/*8020B388 00208188*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3cc, context->r31));
/*8020B38C 0020818C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x97c, context->r31));
/*8020B390 00208190*/ PPC::Runtime::ASM::b(.L_8020B460);
RUNTIME_PPC_JUMP_LABEL(.L_8020B394, 0x8020B394) //this is a jump label
/*8020B394 00208194*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x340);
/*8020B398 00208198*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8020B39C 0020819C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*8020B3A0 002081A0*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*8020B3A4 002081A4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*8020B3A8 002081A8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x340);
/*8020B3AC 002081AC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*8020B3B0 002081B0*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*8020B3B4 002081B4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r31));
/*8020B3B8 002081B8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8020B3BC 002081BC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r31));
/*8020B3C0 002081C0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8020B3C4 002081C4*/ PPC::Runtime::ASM::fadds(context->f4, context->f3, context->f1);
/*8020B3C8 002081C8*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r31));
/*8020B3CC 002081CC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020B3D0 002081D0*/ PPC::Runtime::ASM::fadds(context->f5, context->f2, context->f0);
/*8020B3D4 002081D4*/ PPC::Runtime::ASM::fsubs(context->f3, context->f4, context->f3);
/*8020B3D8 002081D8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2370 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020B3DC 002081DC*/ PPC::Runtime::ASM::fadds(context->f1, context->f6, context->f1);
/*8020B3E0 002081E0*/ PPC::Runtime::ASM::fsubs(context->f4, context->f5, context->f2);
/*8020B3E4 002081E4*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8020B3E8 002081E8*/ PPC::Runtime::ASM::fsubs(context->f5, context->f1, context->f6);
/*8020B3EC 002081EC*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8020B3F0 002081F0*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8020B3F4 002081F4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x338, context->r31));
/*8020B3F8 002081F8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x334, context->r31));
/*8020B3FC 002081FC*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f3);
/*8020B400 00208200*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r31));
/*8020B404 00208204*/ PPC::Runtime::ASM::fmadds(context->f1, context->f2, context->f5, context->f1);
/*8020B408 00208208*/ PPC::Runtime::ASM::fmadds(context->f1, context->f3, context->f4, context->f1);
/*8020B40C 0020820C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8020B410 00208210*/ PPC::Runtime::ASM::bge(.L_8020B448);
/*8020B414 00208214*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x844);
/*8020B418 00208218*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8020B41C 0020821C*/ PPC::Runtime::ASM::li(context->r5, 0xc);
/*8020B420 00208220*/ PPC::Runtime::ASM::bl(memset);
/*8020B424 00208224*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2418 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020B428 00208228*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x97c, context->r31));
/*8020B42C 0020822C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*8020B430 00208230*/ PPC::Runtime::ASM::beq(.L_8020B43C);
/*8020B434 00208234*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3cc, context->r31));
/*8020B438 00208238*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x97c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8020B43C, 0x8020B43C) //this is a jump label
/*8020B43C 0020823C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020B440 00208240*/ PPC::Runtime::ASM::bl(fn_801FD6B0);
/*8020B444 00208244*/ PPC::Runtime::ASM::b(.L_8020B460);
RUNTIME_PPC_JUMP_LABEL(.L_8020B448, 0x8020B448) //this is a jump label
/*8020B448 00208248*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020B44C 0020824C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8020B450 00208250*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2ec, context->r31));
/*8020B454 00208254*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f0, context->r31));
/*8020B458 00208258*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8020B45C 0020825C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8020B460, 0x8020B460) //this is a jump label
/*8020B460 00208260*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8020B464, 0x8020B464) //this is a jump label
/*8020B464 00208264*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*8020B468 00208268*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8020B46C 0020826C*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*8020B470 00208270*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8020B474 00208274*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*8020B478 00208278*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8020B47C 0020827C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*8020B480 00208280*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8020B484 00208284*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8020B488 00208288*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x90);
/*8020B48C 0020828C*/ PPC::Runtime::ASM::blr();
}