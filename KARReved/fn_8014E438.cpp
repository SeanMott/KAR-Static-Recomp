//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801388A8.hpp"
#include "fn_8014E340.hpp"
#include "fn_8014E340.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_JObj_GetWorldPosition.hpp"



void fn_8014E438(PPC::Runtime::GCContext* context)
{
/*8014E438 0014B238*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8014E43C 0014B23C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014E440 0014B240*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014E444 0014B244*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8014E448 0014B248*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8014E44C 0014B24C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014E450 0014B250*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8014E454 0014B254*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x47c, context->r3));
/*8014E458 0014B258*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8014E45C 0014B25C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8014E460 0014B260*/ PPC::Runtime::ASM::bl(fn_801388A8);
/*8014E464 0014B264*/ PPC::Runtime::ASM::lis(context->r4, fn_8014E340 @ Get_MemoryOffset_HighBit);
/*8014E468 0014B268*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8014E46C 0014B26C*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8014E470 0014B270*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8014E474 0014B274*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8014E340 @ Get_MemoryOffset_LowBit);
/*8014E478 0014B278*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8014E47C 0014B27C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x47c, context->r30));
/*8014E480 0014B280*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8014E484 0014B284*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0654 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014E488 0014B288*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8014E48C 0014B28C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0658 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014E490 0014B290*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*8014E494 0014B294*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8014E498 0014B298*/ PPC::Runtime::ASM::li(context->r4, 0x29);
/*8014E49C 0014B29C*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*8014E4A0 0014B2A0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8014E4A4 0014B2A4*/ PPC::Runtime::ASM::li(context->r0, 0xa);
/*8014E4A8 0014B2A8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8014E4AC 0014B2AC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8014E4B0 0014B2B0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8014E4B4 0014B2B4*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8014E4B8 0014B2B8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r31));
/*8014E4BC 0014B2BC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8014E4C0 0014B2C0*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8014E4C4 0014B2C4*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8014E4C8 0014B2C8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r31));
/*8014E4CC 0014B2CC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8014E4D0 0014B2D0*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8014E4D4 0014B2D4*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8014E4D8 0014B2D8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r31));
/*8014E4DC 0014B2DC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8014E4E0 0014B2E0*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8014E4E4 0014B2E4*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8014E4E8 0014B2E8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*8014E4EC 0014B2EC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8014E4F0 0014B2F0*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8014E4F4 0014B2F4*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8014E4F8 0014B2F8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r31));
/*8014E4FC 0014B2FC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8014E500 0014B300*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*8014E504 0014B304*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8014E508 0014B308*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*8014E50C 0014B30C*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8014E510 0014B310*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8014E514 0014B314*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8014E518 0014B318*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r31));
/*8014E51C 0014B31C*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8014E520 0014B320*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8014E524 0014B324*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8014E528 0014B328*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r31));
/*8014E52C 0014B32C*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8014E530 0014B330*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*8014E534 0014B334*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8014E538 0014B338*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r31));
/*8014E53C 0014B33C*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8014E540 0014B340*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r27));
/*8014E544 0014B344*/ PPC::Runtime::ASM::mr(context->r28, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_8014E548, 0x8014E548) //this is a jump label
/*8014E548 0014B348*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r28));
/*8014E54C 0014B34C*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x10);
/*8014E550 0014B350*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8014E554 0014B354*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8014E558 0014B358*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8014E55C 0014B35C*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*8014E560 0014B360*/ PPC::Runtime::ASM::cmpwi(context->r31, 0xa);
/*8014E564 0014B364*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0xc);
/*8014E568 0014B368*/ PPC::Runtime::ASM::blt(.L_8014E548);
/*8014E56C 0014B36C*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x480, context->r30));
/*8014E570 0014B370*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8014E574 0014B374*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8014E578 0014B378*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014E57C 0014B37C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014E580 0014B380*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8014E584 0014B384*/ PPC::Runtime::ASM::blr();
}