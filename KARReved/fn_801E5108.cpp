//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801E3F4C.hpp"
#include "fn_802474D0.hpp"
#include "fn_800D1F3C.hpp"
#include "fn_80247594.hpp"
#include "fn_801CE49C.hpp"
#include "fn_801CE520.hpp"
#include "fn_80247284.hpp"
#include "fn_800D1F3C.hpp"
#include "fn_80247678.hpp"
#include "fn_800D1F3C.hpp"
#include "fn_800D2CE0.hpp"
#include "fn_800D2F80.hpp"
#include "fn_80062CA4.hpp"
#include "fn_80247F34.hpp"
#include "fn_80246F40.hpp"
#include "fn_800D1F3C.hpp"
#include "fn_80191FB8.hpp"
#include "fn_801CAA40.hpp"
#include "fn_80230F18.hpp"
#include "fn_802475B4.hpp"
#include "fn_800D1F3C.hpp"
#include "fn_802470DC.hpp"
#include "fn_800D1F3C.hpp"
#include "fn_800D2750.hpp"
#include "fn_80236C40.hpp"
#include "fn_802471A0.hpp"
#include "fn_801CAA40.hpp"
#include "fn_80231054.hpp"
#include "fn_8024773C.hpp"
#include "fn_800D1F3C.hpp"
#include "fn_802478C4.hpp"
#include "fn_802479F0.hpp"
#include "fn_800D1F3C.hpp"
#include "fn_801CAA40.hpp"
#include "fn_800D2C5C.hpp"
#include "fn_801E2140.hpp"
#include "fn_801CAA40.hpp"
#include "fn_800D2C7C.hpp"
#include "fn_801E2140.hpp"
#include "fn_80247800.hpp"
#include "fn_800D1F3C.hpp"
#include "fn_801CAA40.hpp"
#include "fn_8022FFF4.hpp"
#include "fn_8024692C.hpp"
#include "fn_800D1F3C.hpp"
#include "fn_80247348.hpp"
#include "fn_800D1F3C.hpp"
#include "fn_8024740C.hpp"
#include "fn_800D1F3C.hpp"
#include "fn_802471C0.hpp"
#include "fn_800D1F3C.hpp"
#include "fn_800D2790.hpp"



void fn_801E5108(PPC::Runtime::GCContext* context)
{
/*801E5108 001E1F08*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*801E510C 001E1F0C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E5110 001E1F10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801E5114 001E1F14*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801E5118 001E1F18*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*801E511C 001E1F1C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801E5120 001E1F20*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*801E5124 001E1F24*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801E5128 001E1F28*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801E512C 001E1F2C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r3));
/*801E5130 001E1F30*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 5, 26, 26);
/*801E5134 001E1F34*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801E5138 001E1F38*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r3));
/*801E513C 001E1F3C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r3));
/*801E5140 001E1F40*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 4, 27, 27);
/*801E5144 001E1F44*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r3));
/*801E5148 001E1F48*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r3));
/*801E514C 001E1F4C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 1, 30, 30);
/*801E5150 001E1F50*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r3));
/*801E5154 001E1F54*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r3));
/*801E5158 001E1F58*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 0, 31, 31);
/*801E515C 001E1F5C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r3));
/*801E5160 001E1F60*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r3));
/*801E5164 001E1F64*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 3, 28, 28);
/*801E5168 001E1F68*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r3));
/*801E516C 001E1F6C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r3));
/*801E5170 001E1F70*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 2, 29, 29);
/*801E5174 001E1F74*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r3));
/*801E5178 001E1F78*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc3a, context->r3));
/* 801E517C 001E1F7C  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*801E5180 001E1F80*/ PPC::Runtime::ASM::bne(.L_801E5600);
/*801E5184 001E1F84*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc39, context->r31));
/* 801E5188 001E1F88  54 00 EF FF */ extrwi. context->r0 , context->r0 , 1 , 28
/*801E518C 001E1F8C*/ PPC::Runtime::ASM::bne(.L_801E5600);
/*801E5190 001E1F90*/ PPC::Runtime::ASM::bl(fn_801E3F4C);
/*801E5194 001E1F94*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E5198 001E1F98*/ PPC::Runtime::ASM::beq(.L_801E51A4);
/*801E519C 001E1F9C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801E51A0 001E1FA0*/ PPC::Runtime::ASM::b(.L_801E5604);
RUNTIME_PPC_JUMP_LABEL(.L_801E51A4, 0x801E51A4) //this is a jump label
/*801E51A4 001E1FA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801E51A8 001E1FA8*/ PPC::Runtime::ASM::bl(fn_802474D0);
/*801E51AC 001E1FAC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801E51B0 001E1FB0*/ PPC::Runtime::ASM::bl(fn_800D1F3C);
/*801E51B4 001E1FB4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E51B8 001E1FB8*/ PPC::Runtime::ASM::bne(.L_801E51C8);
/*801E51BC 001E1FBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801E51C0 001E1FC0*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801E51C4 001E1FC4*/ PPC::Runtime::ASM::bl(fn_80247594);
RUNTIME_PPC_JUMP_LABEL(.L_801E51C8, 0x801E51C8) //this is a jump label
/*801E51C8 001E1FC8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E51CC 001E1FCC*/ PPC::Runtime::ASM::bl(fn_801CE49C);
/*801E51D0 001E1FD0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E51D4 001E1FD4*/ PPC::Runtime::ASM::bl(fn_801CE520);
/*801E51D8 001E1FD8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801E51DC 001E1FDC*/ PPC::Runtime::ASM::bl(fn_80247284);
/*801E51E0 001E1FE0*/ PPC::Runtime::ASM::bl(fn_800D1F3C);
/*801E51E4 001E1FE4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E51E8 001E1FE8*/ PPC::Runtime::ASM::bne(.L_801E51FC);
/*801E51EC 001E1FEC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r31));
/*801E51F0 001E1FF0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801E51F4 001E1FF4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 1, 30, 30);
/*801E51F8 001E1FF8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801E51FC, 0x801E51FC) //this is a jump label
/*801E51FC 001E1FFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801E5200 001E2000*/ PPC::Runtime::ASM::bl(fn_80247678);
/*801E5204 001E2004*/ PPC::Runtime::ASM::bl(fn_800D1F3C);
/*801E5208 001E2008*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E520C 001E200C*/ PPC::Runtime::ASM::bne(.L_801E5220);
/*801E5210 001E2010*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r31));
/*801E5214 001E2014*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801E5218 001E2018*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 0, 31, 31);
/*801E521C 001E201C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801E5220, 0x801E5220) //this is a jump label
/*801E5220 001E2020*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/* 801E5224 001E2024  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801E5228 001E2028*/ PPC::Runtime::ASM::beq(.L_801E5234);
/*801E522C 001E202C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x714, context->r31));
/*801E5230 001E2030*/ PPC::Runtime::ASM::b(.L_801E5238);
RUNTIME_PPC_JUMP_LABEL(.L_801E5234, 0x801E5234) //this is a jump label
/*801E5234 001E2034*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb58, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801E5238, 0x801E5238) //this is a jump label
/*801E5238 001E2038*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*801E523C 001E203C*/ PPC::Runtime::ASM::beq(.L_801E5244);
/*801E5240 001E2040*/ PPC::Runtime::ASM::bl(fn_800D2CE0);
RUNTIME_PPC_JUMP_LABEL(.L_801E5244, 0x801E5244) //this is a jump label
/*801E5244 001E2044*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/*801E5248 001E2048*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805E1DE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/* 801E524C 001E204C  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801E5250 001E2050*/ PPC::Runtime::ASM::beq(.L_801E5264);
/*801E5254 001E2054*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E5258 001E2058*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x714, context->r31));
/*801E525C 001E205C*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r3));
/*801E5260 001E2060*/ PPC::Runtime::ASM::b(.L_801E5268);
RUNTIME_PPC_JUMP_LABEL(.L_801E5264, 0x801E5264) //this is a jump label
/*801E5264 001E2064*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb58, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801E5268, 0x801E5268) //this is a jump label
/*801E5268 001E2068*/ PPC::Runtime::ASM::cmpwi(context->r30, -0x1);
/*801E526C 001E206C*/ PPC::Runtime::ASM::beq(.L_801E52B4);
/*801E5270 001E2070*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801E5274 001E2074*/ PPC::Runtime::ASM::bl(fn_800D2F80);
/*801E5278 001E2078*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E527C 001E207C*/ PPC::Runtime::ASM::beq(.L_801E52B4);
/*801E5280 001E2080*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x768);
/*801E5284 001E2084*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x1c);
/*801E5288 001E2088*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*801E528C 001E208C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x764, context->r31));
/*801E5290 001E2090*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801E5294 001E2094*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x46c, context->r31));
/*801E5298 001E2098*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x3e8);
/*801E529C 001E209C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801E52A0 001E20A0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x1c);
/*801E52A4 001E20A4*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f0, context->f31);
/*801E52A8 001E20A8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*801E52AC 001E20AC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801E52B0 001E20B0*/ PPC::Runtime::ASM::bl(fn_80247F34);
RUNTIME_PPC_JUMP_LABEL(.L_801E52B4, 0x801E52B4) //this is a jump label
/*801E52B4 001E20B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801E52B8 001E20B8*/ PPC::Runtime::ASM::bl(fn_80246F40);
/*801E52BC 001E20BC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801E52C0 001E20C0*/ PPC::Runtime::ASM::bl(fn_800D1F3C);
/*801E52C4 001E20C4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E52C8 001E20C8*/ PPC::Runtime::ASM::bne(.L_801E52FC);
/*801E52CC 001E20CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7e8, context->r31));
/*801E52D0 001E20D0*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*801E52D4 001E20D4*/ PPC::Runtime::ASM::beq(.L_801E5304);
/*801E52D8 001E20D8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7e8, context->r31));
/*801E52DC 001E20DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*801E52E0 001E20E0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801E52E4 001E20E4*/ PPC::Runtime::ASM::beq(.L_801E52EC);
/*801E52E8 001E20E8*/ PPC::Runtime::ASM::bl(fn_80191FB8);
RUNTIME_PPC_JUMP_LABEL(.L_801E52EC, 0x801E52EC) //this is a jump label
/*801E52EC 001E20EC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E52F0 001E20F0*/ PPC::Runtime::ASM::bl(fn_801CAA40);
/*801E52F4 001E20F4*/ PPC::Runtime::ASM::bl(fn_80230F18);
/*801E52F8 001E20F8*/ PPC::Runtime::ASM::b(.L_801E5304);
RUNTIME_PPC_JUMP_LABEL(.L_801E52FC, 0x801E52FC) //this is a jump label
/*801E52FC 001E20FC*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*801E5300 001E2100*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7e8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801E5304, 0x801E5304) //this is a jump label
/*801E5304 001E2104*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801E5308 001E2108*/ PPC::Runtime::ASM::bl(fn_802475B4);
/*801E530C 001E210C*/ PPC::Runtime::ASM::bl(fn_800D1F3C);
/*801E5310 001E2110*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E5314 001E2114*/ PPC::Runtime::ASM::bne(.L_801E5328);
/*801E5318 001E2118*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r31));
/*801E531C 001E211C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801E5320 001E2120*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 5, 26, 26);
/*801E5324 001E2124*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801E5328, 0x801E5328) //this is a jump label
/*801E5328 001E2128*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801E532C 001E212C*/ PPC::Runtime::ASM::bl(fn_802470DC);
/*801E5330 001E2130*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801E5334 001E2134*/ PPC::Runtime::ASM::bl(fn_800D1F3C);
/*801E5338 001E2138*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E533C 001E213C*/ PPC::Runtime::ASM::bne(.L_801E5410);
/*801E5340 001E2140*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801E5344 001E2144*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*801E5348 001E2148*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*801E534C 001E214C*/ PPC::Runtime::ASM::bl(fn_800D2750);
/*801E5350 001E2150*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801E5354 001E2154*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801E5358 001E2158*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f1, context->f0);
/*801E535C 001E215C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801E5360 001E2160*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E5364 001E2164*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801E5368 001E2168*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f1, context->f0);
/*801E536C 001E216C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801E5370 001E2170*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801E5374 001E2174*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
/*801E5378 001E2178*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f1, context->f0);
/*801E537C 001E217C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
/*801E5380 001E2180*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E5384 001E2184*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x4eaa);
/*801E5388 001E2188*/ PPC::Runtime::ASM::beq(.L_801E539C);
/*801E538C 001E218C*/ PPC::Runtime::ASM::bge(.L_801E53D4);
/*801E5390 001E2190*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x4e91);
/*801E5394 001E2194*/ PPC::Runtime::ASM::beq(.L_801E539C);
/*801E5398 001E2198*/ PPC::Runtime::ASM::b(.L_801E53D4);
RUNTIME_PPC_JUMP_LABEL(.L_801E539C, 0x801E539C) //this is a jump label
/*801E539C 001E219C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*801E53A0 001E21A0*/ PPC::Runtime::ASM::li(context->r5, STRUCT_BYTE4_COUNT_1805DD850 @ Get_MemoryOffset_SDA21);
/*801E53A4 001E21A4*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r31));
/*801E53A8 001E21A8*/ PPC::Runtime::ASM::li(context->r6, 0xca);
/*801E53AC 001E21AC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801E53B0 001E21B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801E53B4 001E21B4*/ PPC::Runtime::ASM::lwzx(context->r7, context->r5, context->r0);
/*801E53B8 001E21B8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x69c, context->r31));
/*801E53BC 001E21BC*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*801E53C0 001E21C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*801E53C4 001E21C4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*801E53C8 001E21C8*/ PPC::Runtime::ASM::lwzx(context->r7, context->r8, context->r0);
/*801E53CC 001E21CC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801E53D0 001E21D0*/ PPC::Runtime::ASM::bl(fn_80236C40);
RUNTIME_PPC_JUMP_LABEL(.L_801E53D4, 0x801E53D4) //this is a jump label
/*801E53D4 001E21D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801E53D8 001E21D8*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801E53DC 001E21DC*/ PPC::Runtime::ASM::bl(fn_802471A0);
/*801E53E0 001E21E0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r31));
/*801E53E4 001E21E4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801E53E8 001E21E8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 5, 26, 26);
/*801E53EC 001E21EC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r31));
/*801E53F0 001E21F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7ec, context->r31));
/*801E53F4 001E21F4*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*801E53F8 001E21F8*/ PPC::Runtime::ASM::beq(.L_801E5418);
/*801E53FC 001E21FC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7ec, context->r31));
/*801E5400 001E2200*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E5404 001E2204*/ PPC::Runtime::ASM::bl(fn_801CAA40);
/*801E5408 001E2208*/ PPC::Runtime::ASM::bl(fn_80231054);
/*801E540C 001E220C*/ PPC::Runtime::ASM::b(.L_801E5418);
RUNTIME_PPC_JUMP_LABEL(.L_801E5410, 0x801E5410) //this is a jump label
/*801E5410 001E2210*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*801E5414 001E2214*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7ec, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801E5418, 0x801E5418) //this is a jump label
/*801E5418 001E2218*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801E541C 001E221C*/ PPC::Runtime::ASM::bl(fn_8024773C);
/*801E5420 001E2220*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801E5424 001E2224*/ PPC::Runtime::ASM::bl(fn_800D1F3C);
/*801E5428 001E2228*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E542C 001E222C*/ PPC::Runtime::ASM::bne(.L_801E543C);
/*801E5430 001E2230*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801E5434 001E2234*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801E5438 001E2238*/ PPC::Runtime::ASM::bl(fn_802478C4);
RUNTIME_PPC_JUMP_LABEL(.L_801E543C, 0x801E543C) //this is a jump label
/*801E543C 001E223C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801E5440 001E2240*/ PPC::Runtime::ASM::bl(fn_802479F0);
/*801E5444 001E2244*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801E5448 001E2248*/ PPC::Runtime::ASM::bl(fn_800D1F3C);
/*801E544C 001E224C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E5450 001E2250*/ PPC::Runtime::ASM::bne(.L_801E54C8);
/*801E5454 001E2254*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E5458 001E2258*/ PPC::Runtime::ASM::bl(fn_801CAA40);
/*801E545C 001E225C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801E5460 001E2260*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x5);
/*801E5464 001E2264*/ PPC::Runtime::ASM::beq(.L_801E54C8);
/*801E5468 001E2268*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4cc, context->r31));
/*801E546C 001E226C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa18, context->r31));
/*801E5470 001E2270*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6b0, context->r31));
/*801E5474 001E2274*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*801E5478 001E2278*/ PPC::Runtime::ASM::fsubs(context->f31, context->f1, context->f0);
/*801E547C 001E227C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f2);
/*801E5480 001E2280*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*801E5484 001E2284*/ PPC::Runtime::ASM::beq(.L_801E54A0);
/*801E5488 001E2288*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B0F78 @ Get_MemoryOffset_HighBit);
/*801E548C 001E228C*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B0F84 @ Get_MemoryOffset_HighBit);
/*801E5490 001E2290*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B0F78 @ Get_MemoryOffset_LowBit);
/*801E5494 001E2294*/ PPC::Runtime::ASM::li(context->r4, 0x10f);
/*801E5498 001E2298*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B0F84 @ Get_MemoryOffset_LowBit);
/*801E549C 001E229C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801E54A0, 0x801E54A0) //this is a jump label
/*801E54A0 001E22A0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801E54A4 001E22A4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801E54A8 001E22A8*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801E54AC 001E22AC*/ PPC::Runtime::ASM::bl(fn_800D2C5C);
/*801E54B0 001E22B0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1DE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E54B4 001E22B4*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801E54B8 001E22B8*/ PPC::Runtime::ASM::beq(.L_801E54C8);
/*801E54BC 001E22BC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E54C0 001E22C0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801E54C4 001E22C4*/ PPC::Runtime::ASM::bl(fn_801E2140);
RUNTIME_PPC_JUMP_LABEL(.L_801E54C8, 0x801E54C8) //this is a jump label
/*801E54C8 001E22C8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E54CC 001E22CC*/ PPC::Runtime::ASM::bl(fn_801CAA40);
/*801E54D0 001E22D0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4cc, context->r31));
/*801E54D4 001E22D4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3e8);
/*801E54D8 001E22D8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa18, context->r31));
/*801E54DC 001E22DC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801E54E0 001E22E0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6b0, context->r31));
/*801E54E4 001E22E4*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*801E54E8 001E22E8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f0);
/*801E54EC 001E22EC*/ PPC::Runtime::ASM::bl(fn_800D2C7C);
/*801E54F0 001E22F0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E54F4 001E22F4*/ PPC::Runtime::ASM::beq(.L_801E5514);
/*801E54F8 001E22F8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801E54FC 001E22FC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1DE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E5500 001E2300*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801E5504 001E2304*/ PPC::Runtime::ASM::beq(.L_801E5514);
/*801E5508 001E2308*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E550C 001E230C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801E5510 001E2310*/ PPC::Runtime::ASM::bl(fn_801E2140);
RUNTIME_PPC_JUMP_LABEL(.L_801E5514, 0x801E5514) //this is a jump label
/*801E5514 001E2314*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801E5518 001E2318*/ PPC::Runtime::ASM::bl(fn_80247800);
/*801E551C 001E231C*/ PPC::Runtime::ASM::bl(fn_800D1F3C);
/*801E5520 001E2320*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E5524 001E2324*/ PPC::Runtime::ASM::bne(.L_801E553C);
/*801E5528 001E2328*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E552C 001E232C*/ PPC::Runtime::ASM::bl(fn_801CAA40);
/*801E5530 001E2330*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x5);
/*801E5534 001E2334*/ PPC::Runtime::ASM::beq(.L_801E553C);
/*801E5538 001E2338*/ PPC::Runtime::ASM::bl(fn_8022FFF4);
RUNTIME_PPC_JUMP_LABEL(.L_801E553C, 0x801E553C) //this is a jump label
/*801E553C 001E233C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801E5540 001E2340*/ PPC::Runtime::ASM::bl(fn_8024692C);
/*801E5544 001E2344*/ PPC::Runtime::ASM::bl(fn_800D1F3C);
/*801E5548 001E2348*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E554C 001E234C*/ PPC::Runtime::ASM::bne(.L_801E5560);
/*801E5550 001E2350*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r31));
/*801E5554 001E2354*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801E5558 001E2358*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 4, 27, 27);
/*801E555C 001E235C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801E5560, 0x801E5560) //this is a jump label
/*801E5560 001E2360*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc37, context->r31));
/* 801E5564 001E2364  54 00 DF FF */ extrwi. context->r0 , context->r0 , 1 , 26
/*801E5568 001E2368*/ PPC::Runtime::ASM::bne(.L_801E5590);
/*801E556C 001E236C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801E5570 001E2370*/ PPC::Runtime::ASM::bl(fn_80247348);
/*801E5574 001E2374*/ PPC::Runtime::ASM::bl(fn_800D1F3C);
/*801E5578 001E2378*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E557C 001E237C*/ PPC::Runtime::ASM::bne(.L_801E5590);
/*801E5580 001E2380*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r31));
/*801E5584 001E2384*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801E5588 001E2388*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 3, 28, 28);
/*801E558C 001E238C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801E5590, 0x801E5590) //this is a jump label
/*801E5590 001E2390*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc34, context->r31));
/* 801E5594 001E2394  54 00 F7 FF */ extrwi. context->r0 , context->r0 , 1 , 29
/*801E5598 001E2398*/ PPC::Runtime::ASM::beq(.L_801E55C0);
/*801E559C 001E239C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801E55A0 001E23A0*/ PPC::Runtime::ASM::bl(fn_8024740C);
/*801E55A4 001E23A4*/ PPC::Runtime::ASM::bl(fn_800D1F3C);
/*801E55A8 001E23A8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E55AC 001E23AC*/ PPC::Runtime::ASM::bne(.L_801E55C0);
/*801E55B0 001E23B0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r31));
/*801E55B4 001E23B4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801E55B8 001E23B8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 2, 29, 29);
/*801E55BC 001E23BC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801E55C0, 0x801E55C0) //this is a jump label
/*801E55C0 001E23C0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc37, context->r31));
/* 801E55C4 001E23C4  54 00 DF FF */ extrwi. context->r0 , context->r0 , 1 , 26
/*801E55C8 001E23C8*/ PPC::Runtime::ASM::bne(.L_801E5600);
/*801E55CC 001E23CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801E55D0 001E23D0*/ PPC::Runtime::ASM::bl(fn_802471C0);
/*801E55D4 001E23D4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801E55D8 001E23D8*/ PPC::Runtime::ASM::bl(fn_800D1F3C);
/*801E55DC 001E23DC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E55E0 001E23E0*/ PPC::Runtime::ASM::bne(.L_801E55F8);
/*801E55E4 001E23E4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801E55E8 001E23E8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801E55EC 001E23EC*/ PPC::Runtime::ASM::bl(fn_800D2790);
/*801E55F0 001E23F0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaf8, context->r31));
/*801E55F4 001E23F4*/ PPC::Runtime::ASM::b(.L_801E5600);
RUNTIME_PPC_JUMP_LABEL(.L_801E55F8, 0x801E55F8) //this is a jump label
/*801E55F8 001E23F8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801E55FC 001E23FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaf8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801E5600, 0x801E5600) //this is a jump label
/*801E5600 001E2400*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801E5604, 0x801E5604) //this is a jump label
/*801E5604 001E2404*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*801E5608 001E2408*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801E560C 001E240C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801E5610 001E2410*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801E5614 001E2414*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*801E5618 001E2418*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801E561C 001E241C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E5620 001E2420*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*801E5624 001E2424*/ PPC::Runtime::ASM::blr();
}