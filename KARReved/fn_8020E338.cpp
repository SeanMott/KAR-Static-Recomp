//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D39A0.hpp"
#include "fn_80206E2C.hpp"
#include "fn_8020728C.hpp"
#include "fn_80207CE8.hpp"
#include "fn_802054E4.hpp"
#include "fn_8020E63C.hpp"
#include "fn_800D3A88.hpp"
#include "fn_800D3870.hpp"
#include "fn_800D3178.hpp"
#include "fn_800D334C.hpp"
#include "fn_801FD714.hpp"



void fn_8020E338(PPC::Runtime::GCContext* context)
{
/*8020E338 0020B138*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8020E33C 0020B13C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020E340 0020B140*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8020E344 0020B144*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8020E348 0020B148*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*8020E34C 0020B14C*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8020E350 0020B150*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8020E354 0020B154*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8020E358 0020B158*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8020E35C 0020B15C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8020E360 0020B160*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r3));
/*8020E364 0020B164*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 27);
/*8020E368 0020B168*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*8020E36C 0020B16C*/ PPC::Runtime::ASM::bne(.L_8020E5F4);
/*8020E370 0020B170*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8a8, context->r31));
/*8020E374 0020B174*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8ac, context->r31));
/*8020E378 0020B178*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*8020E37C 0020B17C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8a8, context->r31));
/*8020E380 0020B180*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8a8, context->r31));
/*8020E384 0020B184*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8a4, context->r31));
/*8020E388 0020B188*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8ac, context->r31));
/*8020E38C 0020B18C*/ PPC::Runtime::ASM::fmadds(context->f31, context->f1, context->f2, context->f0);
/*8020E390 0020B190*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f2);
/*8020E394 0020B194*/ PPC::Runtime::ASM::ble(.L_8020E4EC);
/*8020E398 0020B198*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88c, context->r31));
/*8020E39C 0020B19C*/ PPC::Runtime::ASM::bl(fn_800D39A0);
/*8020E3A0 0020B1A0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8020E3A4 0020B1A4*/ PPC::Runtime::ASM::cmpwi(context->r30, -0x1);
/*8020E3A8 0020B1A8*/ PPC::Runtime::ASM::bne(.L_8020E47C);
/*8020E3AC 0020B1AC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8020E3B0 0020B1B0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020E3B4 0020B1B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x654, context->r31));
/*8020E3B8 0020B1B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x654, context->r31));
/*8020E3BC 0020B1BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5f8, context->r31));
/*8020E3C0 0020B1C0*/ PPC::Runtime::ASM::bl(fn_80206E2C);
/*8020E3C4 0020B1C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5dc, context->r31));
/*8020E3C8 0020B1C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5e4, context->r31));
/*8020E3CC 0020B1CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8020E3D0 0020B1D0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x48);
/*8020E3D4 0020B1D4*/ PPC::Runtime::ASM::bge(.L_8020E3EC);
/*8020E3D8 0020B1D8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020E3DC 0020B1DC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8020E3E0 0020B1E0*/ PPC::Runtime::ASM::bl(fn_8020728C);
/*8020E3E4 0020B1E4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020E3E8 0020B1E8*/ PPC::Runtime::ASM::bl(fn_80207CE8);
RUNTIME_PPC_JUMP_LABEL(.L_8020E3EC, 0x8020E3EC) //this is a jump label
/*8020E3EC 0020B1EC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r31));
/*8020E3F0 0020B1F0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020E3F4 0020B1F4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8020E3F8 0020B1F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x334, context->r31));
/*8020E3FC 0020B1FC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8020E400 0020B200*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2ec, context->r31));
/*8020E404 0020B204*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x338, context->r31));
/*8020E408 0020B208*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8020E40C 0020B20C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f0, context->r31));
/*8020E410 0020B210*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r31));
/*8020E414 0020B214*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8020E418 0020B218*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f4, context->r31));
/*8020E41C 0020B21C*/ PPC::Runtime::ASM::bl(fn_802054E4);
/*8020E420 0020B220*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x878, context->r31));
/*8020E424 0020B224*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8020E428 0020B228*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c8, context->r31));
/*8020E42C 0020B22C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020E430 0020B230*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8020E434 0020B234*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r31));
/*8020E438 0020B238*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5cc, context->r31));
/*8020E43C 0020B23C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8020E440 0020B240*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r31));
/*8020E444 0020B244*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d0, context->r31));
/*8020E448 0020B248*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8020E44C 0020B24C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e8, context->r31));
/*8020E450 0020B250*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r31));
/*8020E454 0020B254*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r31));
/*8020E458 0020B258*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55c, context->r31));
/*8020E45C 0020B25C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x560, context->r31));
/*8020E460 0020B260*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r31));
/*8020E464 0020B264*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x564, context->r31));
/*8020E468 0020B268*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r31));
/*8020E46C 0020B26C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 3, 27, 28);
/*8020E470 0020B270*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r31));
/*8020E474 0020B274*/ PPC::Runtime::ASM::bl(fn_8020E63C);
/*8020E478 0020B278*/ PPC::Runtime::ASM::b(.L_8020E5F4);
RUNTIME_PPC_JUMP_LABEL(.L_8020E47C, 0x8020E47C) //this is a jump label
/*8020E47C 0020B27C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88c, context->r31));
/*8020E480 0020B280*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x894);
/*8020E484 0020B284*/ PPC::Runtime::ASM::bl(fn_800D3A88);
/*8020E488 0020B288*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 2);
/*8020E48C 0020B28C*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*8020E490 0020B290*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x894, context->r3));
/*8020E494 0020B294*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88c, context->r31));
/*8020E498 0020B298*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8a4, context->r31));
/*8020E49C 0020B29C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88c, context->r31));
/*8020E4A0 0020B2A0*/ PPC::Runtime::ASM::bl(fn_800D3870);
/*8020E4A4 0020B2A4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8a4, context->r31));
/*8020E4A8 0020B2A8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f31, context->f30);
/*8020E4AC 0020B2AC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8020E4B0 0020B2B0*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x8b0);
/*8020E4B4 0020B2B4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8a4, context->r31));
/*8020E4B8 0020B2B8*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*8020E4BC 0020B2BC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8a8, context->r31));
/*8020E4C0 0020B2C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88c, context->r31));
/*8020E4C4 0020B2C4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8a8, context->r31));
/*8020E4C8 0020B2C8*/ PPC::Runtime::ASM::bl(fn_800D3178);
/*8020E4CC 0020B2CC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E24D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020E4D0 0020B2D0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8a4, context->r31));
/*8020E4D4 0020B2D4*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*8020E4D8 0020B2D8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8ac, context->r31));
/*8020E4DC 0020B2DC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8ac, context->r31));
/*8020E4E0 0020B2E0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r31));
/*8020E4E4 0020B2E4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*8020E4E8 0020B2E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8ac, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8020E4EC, 0x8020E4EC) //this is a jump label
/*8020E4EC 0020B2EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88c, context->r31));
/*8020E4F0 0020B2F0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x8cc);
/*8020E4F4 0020B2F4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8a8, context->r31));
/*8020E4F8 0020B2F8*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x8c0);
/*8020E4FC 0020B2FC*/ PPC::Runtime::ASM::addi(context->r6, context->r31, 0x8b4);
/*8020E500 0020B300*/ PPC::Runtime::ASM::bl(fn_800D334C);
/*8020E504 0020B304*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8e4, context->r31));
/*8020E508 0020B308*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E24D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020E50C 0020B30C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*8020E510 0020B310*/ PPC::Runtime::ASM::ble(.L_8020E548);
/*8020E514 0020B314*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8d8, context->r31));
/*8020E518 0020B318*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8cc, context->r31));
/*8020E51C 0020B31C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*8020E520 0020B320*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r31));
/*8020E524 0020B324*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8dc, context->r31));
/*8020E528 0020B328*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8d0, context->r31));
/*8020E52C 0020B32C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*8020E530 0020B330*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r31));
/*8020E534 0020B334*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8e0, context->r31));
/*8020E538 0020B338*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8d4, context->r31));
/*8020E53C 0020B33C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*8020E540 0020B340*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r31));
/*8020E544 0020B344*/ PPC::Runtime::ASM::b(.L_8020E560);
RUNTIME_PPC_JUMP_LABEL(.L_8020E548, 0x8020E548) //this is a jump label
/*8020E548 0020B348*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8cc, context->r31));
/*8020E54C 0020B34C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8d0, context->r31));
/*8020E550 0020B350*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r31));
/*8020E554 0020B354*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r31));
/*8020E558 0020B358*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8d4, context->r31));
/*8020E55C 0020B35C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8020E560, 0x8020E560) //this is a jump label
/*8020E560 0020B360*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8e4, context->r31));
/*8020E564 0020B364*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E24D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020E568 0020B368*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f1);
/*8020E56C 0020B36C*/ PPC::Runtime::ASM::ble(.L_8020E5B0);
/*8020E570 0020B370*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E24DC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020E574 0020B374*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8020E578 0020B378*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8e4, context->r31));
/*8020E57C 0020B37C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8e4, context->r31));
/*8020E580 0020B380*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*8020E584 0020B384*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8020E588 0020B388*/ PPC::Runtime::ASM::bne(.L_8020E5B0);
/*8020E58C 0020B38C*/ PPC::Runtime::ASM::lis(context->r3, RandomBlobStuff_1 @ Get_MemoryOffset_HighBit);
/*8020E590 0020B390*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8e4, context->r31));
/*8020E594 0020B394*/ PPC::Runtime::ASM::addi(context->r4, context->r3, RandomBlobStuff_1 @ Get_MemoryOffset_LowBit);
/*8020E598 0020B398*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8020E59C 0020B39C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8020E5A0 0020B3A0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8d8, context->r31));
/*8020E5A4 0020B3A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8dc, context->r31));
/*8020E5A8 0020B3A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8020E5AC 0020B3AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8e0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8020E5B0, 0x8020E5B0) //this is a jump label
/*8020E5B0 0020B3B0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020E5B4 0020B3B4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x8c0);
/*8020E5B8 0020B3B8*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x8b4);
/*8020E5BC 0020B3BC*/ PPC::Runtime::ASM::bl(fn_801FD714);
/*8020E5C0 0020B3C0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x960, context->r31));
/*8020E5C4 0020B3C4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x340, context->r31));
/*8020E5C8 0020B3C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r31));
/*8020E5CC 0020B3CC*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*8020E5D0 0020B3D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r31));
/*8020E5D4 0020B3D4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x344, context->r31));
/*8020E5D8 0020B3D8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r31));
/*8020E5DC 0020B3DC*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*8020E5E0 0020B3E0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r31));
/*8020E5E4 0020B3E4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x348, context->r31));
/*8020E5E8 0020B3E8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r31));
/*8020E5EC 0020B3EC*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*8020E5F0 0020B3F0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8020E5F4, 0x8020E5F4) //this is a jump label
/*8020E5F4 0020B3F4*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*8020E5F8 0020B3F8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8020E5FC 0020B3FC*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8020E600 0020B400*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8020E604 0020B404*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8020E608 0020B408*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8020E60C 0020B40C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8020E610 0020B410*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8020E614 0020B414*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8020E618 0020B418*/ PPC::Runtime::ASM::blr();
}