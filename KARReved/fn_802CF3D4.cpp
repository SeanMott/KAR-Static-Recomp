//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802D1824.hpp"
#include "fn_802D1824.hpp"
#include "fn_802CE780.hpp"



void fn_802CF3D4(PPC::Runtime::GCContext* context)
{
/*802CF3D4 002CC1D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xf0, context->r1));
/*802CF3D8 002CC1D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802CF3DC 002CC1DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r1));
/*802CF3E0 002CC1E0*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r1));
/*802CF3E4 002CC1E4*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r1)0, context->qr0);
/*802CF3E8 002CC1E8*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*802CF3EC 002CC1EC*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1)0, context->qr0);
/*802CF3F0 002CC1F0*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*802CF3F4 002CC1F4*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1)0, context->qr0);
/*802CF3F8 002CC1F8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r1));
/*802CF3FC 002CC1FC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1));
/*802CF400 002CC200*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*802CF404 002CC204*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*802CF408 002CC208*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802CF40C 002CC20C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802CF410 002CC210*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802CF414 002CC214*/ PPC::Runtime::ASM::li(context->r5, lbl_805D8ED0 @ Get_MemoryOffset_SDA21);
/*802CF418 002CC218*/ PPC::Runtime::ASM::li(context->r6, lbl_805D8EC0 @ Get_MemoryOffset_SDA21);
/*802CF41C 002CC21C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802CF420 002CC220*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802CF424 002CC224*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802CF428 002CC228*/ PPC::Runtime::ASM::li(context->r5, lbl_805D8ED8 @ Get_MemoryOffset_SDA21);
/*802CF42C 002CC22C*/ PPC::Runtime::ASM::li(context->r6, lbl_805D8ED0 @ Get_MemoryOffset_SDA21);
/*802CF430 002CC230*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802CF434 002CC234*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802CF438 002CC238*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3690 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802CF43C 002CC23C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802CF440 002CC240*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802CF444 002CC244*/ PPC::Runtime::ASM::li(context->r5, lbl_805D8EB0 @ Get_MemoryOffset_SDA21);
/*802CF448 002CC248*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r1));
/*802CF44C 002CC24C*/ PPC::Runtime::ASM::li(context->r6, lbl_805D8EA8 @ Get_MemoryOffset_SDA21);
/*802CF450 002CC250*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802CF454 002CC254*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*802CF458 002CC258*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*802CF45C 002CC25C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*802CF460 002CC260*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r1));
/*802CF464 002CC264*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*802CF468 002CC268*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*802CF46C 002CC26C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*802CF470 002CC270*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*802CF474 002CC274*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*802CF478 002CC278*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802CF47C 002CC27C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*802CF480 002CC280*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*802CF484 002CC284*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*802CF488 002CC288*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*802CF48C 002CC28C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*802CF490 002CC290*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*802CF494 002CC294*/ PPC::Runtime::ASM::divwu(context->r0, context->r31, context->r3);
/*802CF498 002CC298*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r3);
/*802CF49C 002CC29C*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r31);
/*802CF4A0 002CC2A0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*802CF4A4 002CC2A4*/ PPC::Runtime::ASM::lwzx(context->r3, context->r8, context->r0);
/*802CF4A8 002CC2A8*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802CF4AC 002CC2AC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xa4);
/*802CF4B0 002CC2B0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x98);
/*802CF4B4 002CC2B4*/ PPC::Runtime::ASM::bl(fn_802D1824);
/*802CF4B8 002CC2B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*802CF4BC 002CC2BC*/ PPC::Runtime::ASM::addi(context->r8, context->r31, 0x1);
/*802CF4C0 002CC2C0*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*802CF4C4 002CC2C4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802CF4C8 002CC2C8*/ PPC::Runtime::ASM::divwu(context->r0, context->r8, context->r3);
/*802CF4CC 002CC2CC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D8EB0 @ Get_MemoryOffset_SDA21);
/*802CF4D0 002CC2D0*/ PPC::Runtime::ASM::li(context->r6, lbl_805D8EA8 @ Get_MemoryOffset_SDA21);
/*802CF4D4 002CC2D4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802CF4D8 002CC2D8*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r3);
/*802CF4DC 002CC2DC*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r8);
/*802CF4E0 002CC2E0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*802CF4E4 002CC2E4*/ PPC::Runtime::ASM::lwzx(context->r3, context->r9, context->r0);
/*802CF4E8 002CC2E8*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802CF4EC 002CC2EC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8c);
/*802CF4F0 002CC2F0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x80);
/*802CF4F4 002CC2F4*/ PPC::Runtime::ASM::bl(fn_802D1824);
/*802CF4F8 002CC2F8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*802CF4FC 002CC2FC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x5c);
/*802CF500 002CC300*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*802CF504 002CC304*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802CF508 002CC308*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*802CF50C 002CC30C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xa4);
/*802CF510 002CC310*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*802CF514 002CC314*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802CF518 002CC318*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802CF51C 002CC31C*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*802CF520 002CC320*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*802CF524 002CC324*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x68);
/*802CF528 002CC328*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802CF52C 002CC32C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802CF530 002CC330*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*802CF534 002CC334*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*802CF538 002CC338*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*802CF53C 002CC33C*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*802CF540 002CC340*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*802CF544 002CC344*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x44);
/*802CF548 002CC348*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802CF54C 002CC34C*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*802CF550 002CC350*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*802CF554 002CC354*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802CF558 002CC358*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802CF55C 002CC35C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x98);
/*802CF560 002CC360*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*802CF564 002CC364*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*802CF568 002CC368*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*802CF56C 002CC36C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802CF570 002CC370*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x50);
/*802CF574 002CC374*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*802CF578 002CC378*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*802CF57C 002CC37C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802CF580 002CC380*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*802CF584 002CC384*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*802CF588 002CC388*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*802CF58C 002CC38C*/ PPC::Runtime::ASM::fmr(context->f29, context->f1);
/*802CF590 002CC390*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*802CF594 002CC394*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r1));
/*802CF598 002CC398*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*802CF59C 002CC39C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*802CF5A0 002CC3A0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802CF5A4 002CC3A4*/ PPC::Runtime::ASM::fadds(context->f31, context->f30, context->f29);
/*802CF5A8 002CC3A8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802CF5AC 002CC3AC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802CF5B0 002CC3B0*/ PPC::Runtime::ASM::fdivs(context->f1, context->f30, context->f31);
/*802CF5B4 002CC3B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802CF5B8 002CC3B8*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*802CF5BC 002CC3BC*/ PPC::Runtime::ASM::fdivs(context->f1, context->f29, context->f31);
/*802CF5C0 002CC3C0*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802CF5C4 002CC3C4*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802CF5C8 002CC3C8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*802CF5CC 002CC3CC*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802CF5D0 002CC3D0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802CF5D4 002CC3D4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*802CF5D8 002CC3D8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*802CF5DC 002CC3DC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r1));
/*802CF5E0 002CC3E0*/ PPC::Runtime::ASM::stfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802CF5E4 002CC3E4*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802CF5E8 002CC3E8*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802CF5EC 002CC3EC*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802CF5F0 002CC3F0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802CF5F4 002CC3F4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802CF5F8 002CC3F8*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*802CF5FC 002CC3FC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802CF600 002CC400*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*802CF604 002CC404*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802CF608 002CC408*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802CF60C 002CC40C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802CF610 002CC410*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*802CF614 002CC414*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802CF618 002CC418*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802CF61C 002CC41C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802CF620 002CC420*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*802CF624 002CC424*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802CF628 002CC428*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*802CF62C 002CC42C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802CF630 002CC430*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*802CF634 002CC434*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802CF638 002CC438*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xa4);
/*802CF63C 002CC43C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*802CF640 002CC440*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x98);
/*802CF644 002CC444*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x74);
/*802CF648 002CC448*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*802CF64C 002CC44C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*802CF650 002CC450*/ PPC::Runtime::ASM::bl(fn_802CE780);
/*802CF654 002CC454*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802CF658 002CC458*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802CF65C 002CC45C*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802CF660 002CC460*/ PPC::Runtime::ASM::li(context->r5, lbl_805D8EB0 @ Get_MemoryOffset_SDA21);
/*802CF664 002CC464*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802CF668 002CC468*/ PPC::Runtime::ASM::li(context->r6, lbl_805D8EA8 @ Get_MemoryOffset_SDA21);
/*802CF66C 002CC46C*/ PPC::Runtime::ASM::stfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*802CF670 002CC470*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802CF674 002CC474*/ PPC::Runtime::ASM::stfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*802CF678 002CC478*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*802CF67C 002CC47C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*802CF680 002CC480*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*802CF684 002CC484*/ PPC::Runtime::ASM::divwu(context->r0, context->r31, context->r3);
/*802CF688 002CC488*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r3);
/*802CF68C 002CC48C*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r31);
/*802CF690 002CC490*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*802CF694 002CC494*/ PPC::Runtime::ASM::lwzx(context->r3, context->r8, context->r0);
/*802CF698 002CC498*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802CF69C 002CC49C*/ PPC::Runtime::ASM::stfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*802CF6A0 002CC4A0*/ PPC::Runtime::ASM::stfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r3));
/*802CF6A4 002CC4A4*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r3));
/*802CF6A8 002CC4A8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r1)0, context->qr0);
/*802CF6AC 002CC4AC*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r1));
/*802CF6B0 002CC4B0*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1)0, context->qr0);
/*802CF6B4 002CC4B4*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*802CF6B8 002CC4B8*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1)0, context->qr0);
/*802CF6BC 002CC4BC*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*802CF6C0 002CC4C0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r1));
/*802CF6C4 002CC4C4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1));
/*802CF6C8 002CC4C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r1));
/*802CF6CC 002CC4CC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*802CF6D0 002CC4D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802CF6D4 002CC4D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xf0);
/*802CF6D8 002CC4D8*/ PPC::Runtime::ASM::blr();
}