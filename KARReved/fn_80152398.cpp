//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801388A8.hpp"
#include "fn_801521F4.hpp"
#include "fn_801521F4.hpp"
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
#include "fn_8014F838.hpp"
#include "fn_8014F7CC.hpp"



void fn_80152398(PPC::Runtime::GCContext* context)
{
/*80152398 0014F198*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8015239C 0014F19C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801523A0 0014F1A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801523A4 0014F1A4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*801523A8 0014F1A8*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*801523AC 0014F1AC*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*801523B0 0014F1B0*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*801523B4 0014F1B4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801523B8 0014F1B8*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x4f8);
/*801523BC 0014F1BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f8, context->r3));
/*801523C0 0014F1C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801523C4 0014F1C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801523C8 0014F1C8*/ PPC::Runtime::ASM::bl(fn_801388A8);
/*801523CC 0014F1CC*/ PPC::Runtime::ASM::lis(context->r4, fn_801521F4 @ Get_MemoryOffset_HighBit);
/*801523D0 0014F1D0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*801523D4 0014F1D4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801523D8 0014F1D8*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*801523DC 0014F1DC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801521F4 @ Get_MemoryOffset_LowBit);
/*801523E0 0014F1E0*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*801523E4 0014F1E4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801523E8 0014F1E8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801523EC 0014F1EC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801523F0 0014F1F0*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*801523F4 0014F1F4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801523F8 0014F1F8*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*801523FC 0014F1FC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80152400 0014F200*/ PPC::Runtime::ASM::li(context->r4, 0x43);
/*80152404 0014F204*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*80152408 0014F208*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*8015240C 0014F20C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80152410 0014F210*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80152414 0014F214*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80152418 0014F218*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*8015241C 0014F21C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80152420 0014F220*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80152424 0014F224*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80152428 0014F228*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r26));
/*8015242C 0014F22C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80152430 0014F230*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*80152434 0014F234*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80152438 0014F238*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r26));
/*8015243C 0014F23C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80152440 0014F240*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*80152444 0014F244*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80152448 0014F248*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r26));
/*8015244C 0014F24C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80152450 0014F250*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*80152454 0014F254*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80152458 0014F258*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r26));
/*8015245C 0014F25C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80152460 0014F260*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*80152464 0014F264*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80152468 0014F268*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r26));
/*8015246C 0014F26C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80152470 0014F270*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*80152474 0014F274*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80152478 0014F278*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r26));
/*8015247C 0014F27C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80152480 0014F280*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*80152484 0014F284*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80152488 0014F288*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r26));
/*8015248C 0014F28C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80152490 0014F290*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*80152494 0014F294*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80152498 0014F298*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r26));
/*8015249C 0014F29C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801524A0 0014F2A0*/ PPC::Runtime::ASM::extsb.(context->r0, context->r28);
/*801524A4 0014F2A4*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r26));
/*801524A8 0014F2A8*/ PPC::Runtime::ASM::stb(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*801524AC 0014F2AC*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
/*801524B0 0014F2B0*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r26));
/*801524B4 0014F2B4*/ PPC::Runtime::ASM::bne(.L_801524C8);
/*801524B8 0014F2B8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*801524BC 0014F2BC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801524C0 0014F2C0*/ PPC::Runtime::ASM::bl(fn_8014F838);
/*801524C4 0014F2C4*/ PPC::Runtime::ASM::b(.L_801524D4);
RUNTIME_PPC_JUMP_LABEL(.L_801524C8, 0x801524C8) //this is a jump label
/*801524C8 0014F2C8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*801524CC 0014F2CC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801524D0 0014F2D0*/ PPC::Runtime::ASM::bl(fn_8014F7CC);
RUNTIME_PPC_JUMP_LABEL(.L_801524D4, 0x801524D4) //this is a jump label
/*801524D4 0014F2D4*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801524D8 0014F2D8*/ PPC::Runtime::ASM::bne(.L_801524EC);
/*801524DC 0014F2DC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D67B8 @ Get_MemoryOffset_SDA21);
/*801524E0 0014F2E0*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*801524E4 0014F2E4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D67C0 @ Get_MemoryOffset_SDA21);
/*801524E8 0014F2E8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801524EC, 0x801524EC) //this is a jump label
/*801524EC 0014F2EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801524F0 0014F2F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801524F4 0014F2F4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*801524F8 0014F2F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*801524FC 0014F2FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80152500 0014F300*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*80152504 0014F304*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80152508 0014F308*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8015250C 0014F30C*/ PPC::Runtime::ASM::bne(.L_80152558);
/*80152510 0014F310*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80152514 0014F314*/ PPC::Runtime::ASM::beq(.L_80152558);
/*80152518 0014F318*/ PPC::Runtime::ASM::bne(.L_8015252C);
/*8015251C 0014F31C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D67B8 @ Get_MemoryOffset_SDA21);
/*80152520 0014F320*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80152524 0014F324*/ PPC::Runtime::ASM::li(context->r5, lbl_805D67C0 @ Get_MemoryOffset_SDA21);
/*80152528 0014F328*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8015252C, 0x8015252C) //this is a jump label
/*8015252C 0014F32C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80152530 0014F330*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80152534 0014F334*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80152538 0014F338*/ PPC::Runtime::ASM::bne(.L_80152548);
/*8015253C 0014F33C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80152540 0014F340*/ PPC::Runtime::ASM::beq(.L_80152548);
/*80152544 0014F344*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80152548, 0x80152548) //this is a jump label
/*80152548 0014F348*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8015254C 0014F34C*/ PPC::Runtime::ASM::bne(.L_80152558);
/*80152550 0014F350*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80152554 0014F354*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80152558, 0x80152558) //this is a jump label
/*80152558 0014F358*/ PPC::Runtime::ASM::extsb(context->r3, context->r27);
/*8015255C 0014F35C*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*80152560 0014F360*/ PPC::Runtime::ASM::slwi(context->r3, context->r3, 3);
/*80152564 0014F364*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r3);
/*80152568 0014F368*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8015256C 0014F36C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80152570 0014F370*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80152574 0014F374*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80152578 0014F378*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*8015257C 0014F37C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80152580 0014F380*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80152584 0014F384*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80152588 0014F388*/ PPC::Runtime::ASM::blr();
}