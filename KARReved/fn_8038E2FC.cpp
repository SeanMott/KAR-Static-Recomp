//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8038E840.hpp"
#include "fn_8038E840.hpp"
#include "fn_8038E83C.hpp"
#include "fn_8038E83C.hpp"
#include "fn_8038FF34.hpp"
#include "fn_8038FE20.hpp"
#include "fn_8038FD00.hpp"
#include "fn_8038FBE0.hpp"



void fn_8038E2FC(PPC::Runtime::GCContext* context)
{
/*8038E2FC 0038B0FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8038E300 0038B100*/ PPC::Runtime::ASM::mflr(context->r0);
/*8038E304 0038B104*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8038E308 0038B108*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8038E30C 0038B10C*/ PPC::Runtime::ASM::bl(_savegpr_22);
/*8038E310 0038B110*/ PPC::Runtime::ASM::lis(context->r7, lbl_804D22E4 @ Get_MemoryOffset_HighBit);
/*8038E314 0038B114*/ PPC::Runtime::ASM::mr(context->r28, context->r5);
/*8038E318 0038B118*/ PPC::Runtime::ASM::addi(context->r0, context->r7, lbl_804D22E4 @ Get_MemoryOffset_LowBit);
/*8038E31C 0038B11C*/ PPC::Runtime::ASM::mr(context->r29, context->r6);
/*8038E320 0038B120*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8038E324 0038B124*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8038E328 0038B128*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*8038E32C 0038B12C*/ PPC::Runtime::ASM::lis(context->r5, fn_8038E840 @ Get_MemoryOffset_HighBit);
/*8038E330 0038B130*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8038E334 0038B134*/ PPC::Runtime::ASM::addi(context->r4, context->r5, fn_8038E840 @ Get_MemoryOffset_LowBit);
/*8038E338 0038B138*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*8038E33C 0038B13C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4E80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038E340 0038B140*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8038E344 0038B144*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x28);
/*8038E348 0038B148*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8038E34C 0038B14C*/ PPC::Runtime::ASM::li(context->r6, 0x8);
/*8038E350 0038B150*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8038E354 0038B154*/ PPC::Runtime::ASM::li(context->r7, 0x8);
/*8038E358 0038B158*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*8038E35C 0038B15C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r26));
/*8038E360 0038B160*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*8038E364 0038B164*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
/*8038E368 0038B168*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r26));
/*8038E36C 0038B16C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r26));
/*8038E370 0038B170*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r26));
/*8038E374 0038B174*/ PPC::Runtime::ASM::bl(fn___construct_array);
/*8038E378 0038B178*/ PPC::Runtime::ASM::lis(context->r4, fn_8038E83C @ Get_MemoryOffset_HighBit);
/*8038E37C 0038B17C*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x68);
/*8038E380 0038B180*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8038E83C @ Get_MemoryOffset_LowBit);
/*8038E384 0038B184*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8038E388 0038B188*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*8038E38C 0038B18C*/ PPC::Runtime::ASM::li(context->r7, 0x2);
/*8038E390 0038B190*/ PPC::Runtime::ASM::bl(fn___construct_array);
/*8038E394 0038B194*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*8038E398 0038B198*/ PPC::Runtime::ASM::oris(context->r3, context->r3, 0x4);
/*8038E39C 0038B19C*/ PPC::Runtime::ASM::mtspr(context->GQR2, context->r3);
/*8038E3A0 0038B1A0*/ PPC::Runtime::ASM::li(context->r3, 0x5);
/*8038E3A4 0038B1A4*/ PPC::Runtime::ASM::oris(context->r3, context->r3, 0x5);
/*8038E3A8 0038B1A8*/ PPC::Runtime::ASM::mtspr(context->GQR3, context->r3);
/*8038E3AC 0038B1AC*/ PPC::Runtime::ASM::li(context->r3, 0x6);
/*8038E3B0 0038B1B0*/ PPC::Runtime::ASM::oris(context->r3, context->r3, 0x6);
/*8038E3B4 0038B1B4*/ PPC::Runtime::ASM::mtspr(context->GQR4, context->r3);
/*8038E3B8 0038B1B8*/ PPC::Runtime::ASM::li(context->r3, 0x7);
/*8038E3BC 0038B1BC*/ PPC::Runtime::ASM::oris(context->r3, context->r3, 0x7);
/*8038E3C0 0038B1C0*/ PPC::Runtime::ASM::mtspr(context->GQR5, context->r3);
/*8038E3C4 0038B1C4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4E80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038E3C8 0038B1C8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8038E3CC 0038B1CC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r26));
/*8038E3D0 0038B1D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r26));
/*8038E3D4 0038B1D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r26));
/*8038E3D8 0038B1D8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r26));
/*8038E3DC 0038B1DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*8038E3E0 0038B1E0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
/*8038E3E4 0038B1E4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r26));
/*8038E3E8 0038B1E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r26));
/*8038E3EC 0038B1EC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r26));
/*8038E3F0 0038B1F0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r26));
/*8038E3F4 0038B1F4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r26));
/*8038E3F8 0038B1F8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r26));
/*8038E3FC 0038B1FC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r26));
/*8038E400 0038B200*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r26));
/*8038E404 0038B204*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r26));
/*8038E408 0038B208*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r26));
/*8038E40C 0038B20C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r26));
/*8038E410 0038B210*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r26));
/*8038E414 0038B214*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r26));
/*8038E418 0038B218*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r26));
/*8038E41C 0038B21C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r26));
/*8038E420 0038B220*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r26));
/*8038E424 0038B224*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6b, context->r26));
/*8038E428 0038B228*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6a, context->r26));
/*8038E42C 0038B22C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x69, context->r26));
/*8038E430 0038B230*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r26));
/*8038E434 0038B234*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f, context->r26));
/*8038E438 0038B238*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6e, context->r26));
/*8038E43C 0038B23C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6d, context->r26));
/*8038E440 0038B240*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r26));
/*8038E444 0038B244*/ PPC::Runtime::ASM::b(.L_8038E814);
RUNTIME_PPC_JUMP_LABEL(.L_8038E448, 0x8038E448) //this is a jump label
/*8038E448 0038B248*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*8038E44C 0038B24C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8038E450 0038B250*/ PPC::Runtime::ASM::bne(.L_8038E470);
/*8038E454 0038B254*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8038E458 0038B258*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8038E45C 0038B25C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x2);
/*8038E460 0038B260*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*8038E464 0038B264*/ PPC::Runtime::ASM::rlwimi(context->r6, context->r5, 8, 16, 23);
/*8038E468 0038B268*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8038E46C 0038B26C*/ PPC::Runtime::ASM::b(.L_8038E480);
RUNTIME_PPC_JUMP_LABEL(.L_8038E470, 0x8038E470) //this is a jump label
/*8038E470 0038B270*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8038E474 0038B274*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*8038E478 0038B278*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8038E47C 0038B27C*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8038E480, 0x8038E480) //this is a jump label
/*8038E480 0038B280*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8038E484 0038B284*/ PPC::Runtime::ASM::cmpwi(context->r4, 0xb);
/*8038E488 0038B288*/ PPC::Runtime::ASM::beq(.L_8038E494);
/*8038E48C 0038B28C*/ PPC::Runtime::ASM::cmpwi(context->r4, 0xc);
/*8038E490 0038B290*/ PPC::Runtime::ASM::bne(.L_8038E5B8);
RUNTIME_PPC_JUMP_LABEL(.L_8038E494, 0x8038E494) //this is a jump label
/*8038E494 0038B294*/ PPC::Runtime::ASM::cmpwi(context->r4, 0xb);
/*8038E498 0038B298*/ PPC::Runtime::ASM::li(context->r0, 0xb);
/*8038E49C 0038B29C*/ PPC::Runtime::ASM::bne(.L_8038E4A4);
/*8038E4A0 0038B2A0*/ PPC::Runtime::ASM::li(context->r0, 0xa);
RUNTIME_PPC_JUMP_LABEL(.L_8038E4A4, 0x8038E4A4) //this is a jump label
/*8038E4A4 0038B2A4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8038E4A8 0038B2A8*/ PPC::Runtime::ASM::clrlwi(context->r9, context->r0, 20);
/*8038E4AC 0038B2AC*/ PPC::Runtime::ASM::and.(context->r4, context->r4, context->r9);
/*8038E4B0 0038B2B0*/ PPC::Runtime::ASM::beq(.L_8038E810);
/*8038E4B4 0038B2B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*8038E4B8 0038B2B8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8038E4BC 0038B2BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8038E4C0 0038B2C0*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*8038E4C4 0038B2C4*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*8038E4C8 0038B2C8*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 1, 26);
/*8038E4CC 0038B2CC*/ PPC::Runtime::ASM::subfic(context->r6, context->r4, 0xb);
/*8038E4D0 0038B2D0*/ PPC::Runtime::ASM::neg(context->r7, context->r0);
/*8038E4D4 0038B2D4*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0xb);
/*8038E4D8 0038B2D8*/ PPC::Runtime::ASM::addic.(context->r4, context->r7, 0x4);
/*8038E4DC 0038B2DC*/ PPC::Runtime::ASM::or(context->r7, context->r8, context->r9);
/*8038E4E0 0038B2E0*/ PPC::Runtime::ASM::or(context->r0, context->r6, context->r0);
/*8038E4E4 0038B2E4*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*8038E4E8 0038B2E8*/ PPC::Runtime::ASM::rlwinm(context->r6, context->r0, 3, 29, 29);
/*8038E4EC 0038B2EC*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x68);
/*8038E4F0 0038B2F0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8038E4F4 0038B2F4*/ PPC::Runtime::ASM::add(context->r0, context->r26, context->r0);
/*8038E4F8 0038B2F8*/ PPC::Runtime::ASM::ble(.L_8038E810);
/*8038E4FC 0038B2FC*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x8);
/*8038E500 0038B300*/ PPC::Runtime::ASM::subi(context->r7, context->r4, 0x8);
/*8038E504 0038B304*/ PPC::Runtime::ASM::ble(.L_8038E588);
/*8038E508 0038B308*/ PPC::Runtime::ASM::addi(context->r6, context->r7, 0x7);
/*8038E50C 0038B30C*/ PPC::Runtime::ASM::srwi(context->r6, context->r6, 3);
/*8038E510 0038B310*/ PPC::Runtime::ASM::mtctr(context->r6);
/*8038E514 0038B314*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x0);
/*8038E518 0038B318*/ PPC::Runtime::ASM::ble(.L_8038E588);
RUNTIME_PPC_JUMP_LABEL(.L_8038E51C, 0x8038E51C) //this is a jump label
/*8038E51C 0038B31C*/ PPC::Runtime::ASM::lwz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*8038E520 0038B320*/ PPC::Runtime::ASM::add(context->r23, context->r0, context->r5);
/*8038E524 0038B324*/ PPC::Runtime::ASM::lbzx(context->r7, context->r5, context->r22);
/*8038E528 0038B328*/ PPC::Runtime::ASM::addi(context->r6, context->r22, 0x1);
/*8038E52C 0038B32C*/ PPC::Runtime::ASM::addi(context->r11, context->r22, 0x2);
/*8038E530 0038B330*/ PPC::Runtime::ASM::addi(context->r10, context->r22, 0x3);
/*8038E534 0038B334*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r23));
/*8038E538 0038B338*/ PPC::Runtime::ASM::addi(context->r9, context->r22, 0x4);
/*8038E53C 0038B33C*/ PPC::Runtime::ASM::addi(context->r8, context->r22, 0x5);
/*8038E540 0038B340*/ PPC::Runtime::ASM::addi(context->r7, context->r22, 0x6);
/*8038E544 0038B344*/ PPC::Runtime::ASM::lbzx(context->r12, context->r5, context->r6);
/*8038E548 0038B348*/ PPC::Runtime::ASM::addi(context->r6, context->r22, 0x7);
/*8038E54C 0038B34C*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r23));
/*8038E550 0038B350*/ PPC::Runtime::ASM::lbzx(context->r11, context->r5, context->r11);
/*8038E554 0038B354*/ PPC::Runtime::ASM::stb(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r23));
/*8038E558 0038B358*/ PPC::Runtime::ASM::lbzx(context->r10, context->r5, context->r10);
/*8038E55C 0038B35C*/ PPC::Runtime::ASM::stb(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r23));
/*8038E560 0038B360*/ PPC::Runtime::ASM::lbzx(context->r9, context->r5, context->r9);
/*8038E564 0038B364*/ PPC::Runtime::ASM::stb(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r23));
/*8038E568 0038B368*/ PPC::Runtime::ASM::lbzx(context->r8, context->r5, context->r8);
/*8038E56C 0038B36C*/ PPC::Runtime::ASM::stb(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r23));
/*8038E570 0038B370*/ PPC::Runtime::ASM::lbzx(context->r7, context->r5, context->r7);
/*8038E574 0038B374*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r23));
/*8038E578 0038B378*/ PPC::Runtime::ASM::lbzx(context->r6, context->r5, context->r6);
/*8038E57C 0038B37C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x8);
/*8038E580 0038B380*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r23));
/*8038E584 0038B384*/ PPC::Runtime::ASM::bdnz(.L_8038E51C);
RUNTIME_PPC_JUMP_LABEL(.L_8038E588, 0x8038E588) //this is a jump label
/*8038E588 0038B388*/ PPC::Runtime::ASM::subf(context->r6, context->r5, context->r4);
/*8038E58C 0038B38C*/ PPC::Runtime::ASM::add(context->r7, context->r0, context->r5);
/*8038E590 0038B390*/ PPC::Runtime::ASM::mtctr(context->r6);
/*8038E594 0038B394*/ PPC::Runtime::ASM::cmpw(context->r5, context->r4);
/*8038E598 0038B398*/ PPC::Runtime::ASM::bge(.L_8038E810);
RUNTIME_PPC_JUMP_LABEL(.L_8038E59C, 0x8038E59C) //this is a jump label
/*8038E59C 0038B39C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*8038E5A0 0038B3A0*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*8038E5A4 0038B3A4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8038E5A8 0038B3A8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*8038E5AC 0038B3AC*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*8038E5B0 0038B3B0*/ PPC::Runtime::ASM::bdnz(.L_8038E59C);
/*8038E5B4 0038B3B4*/ PPC::Runtime::ASM::b(.L_8038E810);
RUNTIME_PPC_JUMP_LABEL(.L_8038E5B8, 0x8038E5B8) //this is a jump label
/*8038E5B8 0038B3B8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x9);
/*8038E5BC 0038B3BC*/ PPC::Runtime::ASM::bne(.L_8038E5EC);
/*8038E5C0 0038B3C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/* 8038E5C4 0038B3C4  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*8038E5C8 0038B3C8*/ PPC::Runtime::ASM::beq(.L_8038E810);
/*8038E5CC 0038B3CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*8038E5D0 0038B3D0*/ PPC::Runtime::ASM::addi(context->r30, context->r26, 0x10);
/*8038E5D4 0038B3D4*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*8038E5D8 0038B3D8*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 1, 26);
/*8038E5DC 0038B3DC*/ PPC::Runtime::ASM::neg(context->r4, context->r0);
/*8038E5E0 0038B3E0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x3);
/*8038E5E4 0038B3E4*/ PPC::Runtime::ASM::mr(context->r31, context->r0);
/*8038E5E8 0038B3E8*/ PPC::Runtime::ASM::b(.L_8038E674);
RUNTIME_PPC_JUMP_LABEL(.L_8038E5EC, 0x8038E5EC) //this is a jump label
/*8038E5EC 0038B3EC*/ PPC::Runtime::ASM::cmpwi(context->r4, 0xa);
/*8038E5F0 0038B3F0*/ PPC::Runtime::ASM::bne(.L_8038E618);
/*8038E5F4 0038B3F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8038E5F8 0038B3F8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 30, 30);
/*8038E5FC 0038B3FC*/ PPC::Runtime::ASM::beq(.L_8038E810);
/*8038E600 0038B400*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*8038E604 0038B404*/ PPC::Runtime::ASM::addi(context->r30, context->r26, 0x1c);
/*8038E608 0038B408*/ PPC::Runtime::ASM::li(context->r31, 0x3);
/*8038E60C 0038B40C*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x1);
/*8038E610 0038B410*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*8038E614 0038B414*/ PPC::Runtime::ASM::b(.L_8038E674);
RUNTIME_PPC_JUMP_LABEL(.L_8038E618, 0x8038E618) //this is a jump label
/*8038E618 0038B418*/ PPC::Runtime::ASM::cmpwi(context->r4, 0xd);
/*8038E61C 0038B41C*/ PPC::Runtime::ASM::blt(.L_8038E674);
/*8038E620 0038B420*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x14);
/*8038E624 0038B424*/ PPC::Runtime::ASM::bgt(.L_8038E674);
/*8038E628 0038B428*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0xd);
/*8038E62C 0038B42C*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8038E630 0038B430*/ PPC::Runtime::ASM::slw(context->r0, context->r0, context->r4);
/*8038E634 0038B434*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8038E638 0038B438*/ PPC::Runtime::ASM::clrlwi(context->r7, context->r0, 20);
/*8038E63C 0038B43C*/ PPC::Runtime::ASM::and.(context->r5, context->r5, context->r7);
/*8038E640 0038B440*/ PPC::Runtime::ASM::beq(.L_8038E810);
/*8038E644 0038B444*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*8038E648 0038B448*/ PPC::Runtime::ASM::slwi(context->r4, context->r4, 3);
/*8038E64C 0038B44C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*8038E650 0038B450*/ PPC::Runtime::ASM::addi(context->r30, context->r4, 0x28);
/*8038E654 0038B454*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*8038E658 0038B458*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 1, 26);
/*8038E65C 0038B45C*/ PPC::Runtime::ASM::or(context->r5, context->r5, context->r7);
/*8038E660 0038B460*/ PPC::Runtime::ASM::neg(context->r4, context->r0);
/*8038E664 0038B464*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*8038E668 0038B468*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x2);
/*8038E66C 0038B46C*/ PPC::Runtime::ASM::add(context->r30, context->r26, context->r30);
/*8038E670 0038B470*/ PPC::Runtime::ASM::mr(context->r31, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8038E674, 0x8038E674) //this is a jump label
/*8038E674 0038B474*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*8038E678 0038B478*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8038E67C 0038B47C*/ PPC::Runtime::ASM::bne(.L_8038E698);
/*8038E680 0038B480*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*8038E684 0038B484*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8038E688 0038B488*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*8038E68C 0038B48C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8038E690 0038B490*/ PPC::Runtime::ASM::bl(fn_8038FF34);
/*8038E694 0038B494*/ PPC::Runtime::ASM::b(.L_8038E810);
RUNTIME_PPC_JUMP_LABEL(.L_8038E698, 0x8038E698) //this is a jump label
/*8038E698 0038B498*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8038E69C 0038B49C*/ PPC::Runtime::ASM::bne(.L_8038E6B8);
/*8038E6A0 0038B4A0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*8038E6A4 0038B4A4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8038E6A8 0038B4A8*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*8038E6AC 0038B4AC*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8038E6B0 0038B4B0*/ PPC::Runtime::ASM::bl(fn_8038FE20);
/*8038E6B4 0038B4B4*/ PPC::Runtime::ASM::b(.L_8038E810);
RUNTIME_PPC_JUMP_LABEL(.L_8038E6B8, 0x8038E6B8) //this is a jump label
/*8038E6B8 0038B4B8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8038E6BC 0038B4BC*/ PPC::Runtime::ASM::bne(.L_8038E6D8);
/*8038E6C0 0038B4C0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*8038E6C4 0038B4C4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8038E6C8 0038B4C8*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*8038E6CC 0038B4CC*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8038E6D0 0038B4D0*/ PPC::Runtime::ASM::bl(fn_8038FD00);
/*8038E6D4 0038B4D4*/ PPC::Runtime::ASM::b(.L_8038E810);
RUNTIME_PPC_JUMP_LABEL(.L_8038E6D8, 0x8038E6D8) //this is a jump label
/*8038E6D8 0038B4D8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8038E6DC 0038B4DC*/ PPC::Runtime::ASM::bne(.L_8038E6F8);
/*8038E6E0 0038B4E0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*8038E6E4 0038B4E4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8038E6E8 0038B4E8*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*8038E6EC 0038B4EC*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8038E6F0 0038B4F0*/ PPC::Runtime::ASM::bl(fn_8038FBE0);
/*8038E6F4 0038B4F4*/ PPC::Runtime::ASM::b(.L_8038E810);
RUNTIME_PPC_JUMP_LABEL(.L_8038E6F8, 0x8038E6F8) //this is a jump label
/*8038E6F8 0038B4F8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*8038E6FC 0038B4FC*/ PPC::Runtime::ASM::bne(.L_8038E810);
/*8038E700 0038B500*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*8038E704 0038B504*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*8038E708 0038B508*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8038E70C 0038B50C*/ PPC::Runtime::ASM::ble(.L_8038E810);
/*8038E710 0038B510*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x8);
/*8038E714 0038B514*/ PPC::Runtime::ASM::subi(context->r11, context->r31, 0x8);
/*8038E718 0038B518*/ PPC::Runtime::ASM::ble(.L_8038E7D0);
/*8038E71C 0038B51C*/ PPC::Runtime::ASM::mullw(context->r0, context->r6, context->r31);
/*8038E720 0038B520*/ PPC::Runtime::ASM::addi(context->r9, context->r11, 0x7);
/*8038E724 0038B524*/ PPC::Runtime::ASM::mr(context->r8, context->r30);
/*8038E728 0038B528*/ PPC::Runtime::ASM::srwi(context->r9, context->r9, 3);
/*8038E72C 0038B52C*/ PPC::Runtime::ASM::mr(context->r7, context->r0);
/*8038E730 0038B530*/ PPC::Runtime::ASM::slwi(context->r10, context->r0, 2);
/*8038E734 0038B534*/ PPC::Runtime::ASM::mtctr(context->r9);
/*8038E738 0038B538*/ PPC::Runtime::ASM::cmpwi(context->r11, 0x0);
/*8038E73C 0038B53C*/ PPC::Runtime::ASM::ble(.L_8038E7D0);
RUNTIME_PPC_JUMP_LABEL(.L_8038E740, 0x8038E740) //this is a jump label
/*8038E740 0038B540*/ PPC::Runtime::ASM::lfsx(context->f0, context->r5, context->r10);
/*8038E744 0038B544*/ PPC::Runtime::ASM::add(context->r22, context->r4, context->r0);
/*8038E748 0038B548*/ PPC::Runtime::ASM::addi(context->r9, context->r22, 0x1);
/*8038E74C 0038B54C*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x8);
/*8038E750 0038B550*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*8038E754 0038B554*/ PPC::Runtime::ASM::slwi(context->r11, context->r9, 2);
/*8038E758 0038B558*/ PPC::Runtime::ASM::addi(context->r9, context->r22, 0x2);
/*8038E75C 0038B55C*/ PPC::Runtime::ASM::addi(context->r24, context->r22, 0x3);
/*8038E760 0038B560*/ PPC::Runtime::ASM::lfsx(context->f0, context->r5, context->r11);
/*8038E764 0038B564*/ PPC::Runtime::ASM::slwi(context->r23, context->r9, 2);
/*8038E768 0038B568*/ PPC::Runtime::ASM::addi(context->r25, context->r22, 0x4);
/*8038E76C 0038B56C*/ PPC::Runtime::ASM::addi(context->r12, context->r22, 0x5);
/*8038E770 0038B570*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*8038E774 0038B574*/ PPC::Runtime::ASM::addi(context->r11, context->r22, 0x6);
/*8038E778 0038B578*/ PPC::Runtime::ASM::addi(context->r9, context->r22, 0x7);
/*8038E77C 0038B57C*/ PPC::Runtime::ASM::slwi(context->r24, context->r24, 2);
/*8038E780 0038B580*/ PPC::Runtime::ASM::lfsx(context->f0, context->r5, context->r23);
/*8038E784 0038B584*/ PPC::Runtime::ASM::slwi(context->r25, context->r25, 2);
/*8038E788 0038B588*/ PPC::Runtime::ASM::slwi(context->r12, context->r12, 2);
/*8038E78C 0038B58C*/ PPC::Runtime::ASM::slwi(context->r11, context->r11, 2);
/*8038E790 0038B590*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*8038E794 0038B594*/ PPC::Runtime::ASM::slwi(context->r9, context->r9, 2);
/*8038E798 0038B598*/ PPC::Runtime::ASM::addi(context->r10, context->r10, 0x20);
/*8038E79C 0038B59C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x8);
/*8038E7A0 0038B5A0*/ PPC::Runtime::ASM::lfsx(context->f0, context->r5, context->r24);
/*8038E7A4 0038B5A4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r8));
/*8038E7A8 0038B5A8*/ PPC::Runtime::ASM::lfsx(context->f0, context->r5, context->r25);
/*8038E7AC 0038B5AC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r8));
/*8038E7B0 0038B5B0*/ PPC::Runtime::ASM::lfsx(context->f0, context->r5, context->r12);
/*8038E7B4 0038B5B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r8));
/*8038E7B8 0038B5B8*/ PPC::Runtime::ASM::lfsx(context->f0, context->r5, context->r11);
/*8038E7BC 0038B5BC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r8));
/*8038E7C0 0038B5C0*/ PPC::Runtime::ASM::lfsx(context->f0, context->r5, context->r9);
/*8038E7C4 0038B5C4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r8));
/*8038E7C8 0038B5C8*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x20);
/*8038E7CC 0038B5CC*/ PPC::Runtime::ASM::bdnz(.L_8038E740);
RUNTIME_PPC_JUMP_LABEL(.L_8038E7D0, 0x8038E7D0) //this is a jump label
/*8038E7D0 0038B5D0*/ PPC::Runtime::ASM::mullw(context->r7, context->r6, context->r31);
/*8038E7D4 0038B5D4*/ PPC::Runtime::ASM::slwi(context->r6, context->r4, 2);
/*8038E7D8 0038B5D8*/ PPC::Runtime::ASM::subf(context->r0, context->r4, context->r31);
/*8038E7DC 0038B5DC*/ PPC::Runtime::ASM::add(context->r8, context->r30, context->r6);
/*8038E7E0 0038B5E0*/ PPC::Runtime::ASM::add(context->r7, context->r4, context->r7);
/*8038E7E4 0038B5E4*/ PPC::Runtime::ASM::slwi(context->r6, context->r7, 2);
/*8038E7E8 0038B5E8*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8038E7EC 0038B5EC*/ PPC::Runtime::ASM::cmpw(context->r4, context->r31);
/*8038E7F0 0038B5F0*/ PPC::Runtime::ASM::bge(.L_8038E810);
RUNTIME_PPC_JUMP_LABEL(.L_8038E7F4, 0x8038E7F4) //this is a jump label
/*8038E7F4 0038B5F4*/ PPC::Runtime::ASM::lfsx(context->f0, context->r5, context->r6);
/*8038E7F8 0038B5F8*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*8038E7FC 0038B5FC*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x4);
/*8038E800 0038B600*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*8038E804 0038B604*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*8038E808 0038B608*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x4);
/*8038E80C 0038B60C*/ PPC::Runtime::ASM::bdnz(.L_8038E7F4);
RUNTIME_PPC_JUMP_LABEL(.L_8038E810, 0x8038E810) //this is a jump label
/*8038E810 0038B610*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x18);
RUNTIME_PPC_JUMP_LABEL(.L_8038E814, 0x8038E814) //this is a jump label
/*8038E814 0038B614*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8038E818 0038B618*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xff);
/*8038E81C 0038B61C*/ PPC::Runtime::ASM::bne(.L_8038E448);
/*8038E820 0038B620*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8038E824 0038B624*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8038E828 0038B628*/ PPC::Runtime::ASM::bl(_restgpr_22);
/*8038E82C 0038B62C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8038E830 0038B630*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8038E834 0038B634*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8038E838 0038B638*/ PPC::Runtime::ASM::blr();
}