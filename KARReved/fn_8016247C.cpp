//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801622E8.hpp"
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80162880.hpp"
#include "fn_80138AE0.hpp"
#include "fn_80138AE0.hpp"
#include "fn_80161C4C.hpp"
#include "fn_80161C4C.hpp"
#include "fn_80138B10.hpp"
#include "fn_80138A00.hpp"



void fn_8016247C(PPC::Runtime::GCContext* context)
{
/*8016247C 0015F27C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80162480 0015F280*/ PPC::Runtime::ASM::mflr(context->r0);
/*80162484 0015F284*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80162488 0015F288*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8016248C 0015F28C*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80162490 0015F290*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*80162494 0015F294*/ PPC::Runtime::ASM::bl(fn_801622E8);
/*80162498 0015F298*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8016249C 0015F29C*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*801624A0 0015F2A0*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*801624A4 0015F2A4*/ PPC::Runtime::ASM::beq(.L_8016257C);
/*801624A8 0015F2A8*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801624AC 0015F2AC*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0x124);
/*801624B0 0015F2B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r3));
/*801624B4 0015F2B4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801624B8 0015F2B8*/ PPC::Runtime::ASM::beq(.L_801624C4);
/*801624BC 0015F2BC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801624C0 0015F2C0*/ PPC::Runtime::ASM::bl(fn_80162880);
RUNTIME_PPC_JUMP_LABEL(.L_801624C4, 0x801624C4) //this is a jump label
/*801624C4 0015F2C4*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*801624C8 0015F2C8*/ PPC::Runtime::ASM::li(context->r3, 0x26);
/*801624CC 0015F2CC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801624D0 0015F2D0*/ PPC::Runtime::ASM::li(context->r4, 0x1e);
/*801624D4 0015F2D4*/ PPC::Runtime::ASM::lwzx(context->r29, context->r28, context->r0);
/*801624D8 0015F2D8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801624DC 0015F2DC*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*801624E0 0015F2E0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*801624E4 0015F2E4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801624E8 0015F2E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801624EC 0015F2EC*/ PPC::Runtime::ASM::bl(fn_JObj_LoadJoint);
/*801624F0 0015F2F0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801624F4 0015F2F4*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801624F8 0015F2F8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801624FC 0015F2FC*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*80162500 0015F300*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*80162504 0015F304*/ PPC::Runtime::ASM::lis(context->r4, fn_80138AE0 @ Get_MemoryOffset_HighBit);
/*80162508 0015F308*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016250C 0015F30C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80138AE0 @ Get_MemoryOffset_LowBit);
/*80162510 0015F310*/ PPC::Runtime::ASM::li(context->r5, 0x1d);
/*80162514 0015F314*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80162518 0015F318*/ PPC::Runtime::ASM::bl(fn_GObj_AddGXLink);
/*8016251C 0015F31C*/ PPC::Runtime::ASM::lis(context->r4, fn_80161C4C @ Get_MemoryOffset_HighBit);
/*80162520 0015F320*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80162524 0015F324*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80161C4C @ Get_MemoryOffset_LowBit);
/*80162528 0015F328*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8016252C 0015F32C*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80162530 0015F330*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80162534 0015F334*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80162538 0015F338*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0998 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016253C 0015F33C*/ PPC::Runtime::ASM::extsb(context->r4, context->r27);
/*80162540 0015F340*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E099C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80162544 0015F344*/ PPC::Runtime::ASM::bl(fn_80138B10);
/*80162548 0015F348*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016254C 0015F34C*/ PPC::Runtime::ASM::li(context->r4, 0x18);
/*80162550 0015F350*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*80162554 0015F354*/ PPC::Runtime::ASM::extsb(context->r0, context->r27);
/*80162558 0015F358*/ PPC::Runtime::ASM::stb(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8016255C 0015F35C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80162560 0015F360*/ PPC::Runtime::ASM::bne(.L_80162570);
/*80162564 0015F364*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80162568 0015F368*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
/*8016256C 0015F36C*/ PPC::Runtime::ASM::b(.L_80162578);
RUNTIME_PPC_JUMP_LABEL(.L_80162570, 0x80162570) //this is a jump label
/*80162570 0015F370*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80162574 0015F374*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80162578, 0x80162578) //this is a jump label
/*80162578 0015F378*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_8016257C, 0x8016257C) //this is a jump label
/*8016257C 0015F37C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80162580 0015F380*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*80162584 0015F384*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80162588 0015F388*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016258C 0015F38C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80162590 0015F390*/ PPC::Runtime::ASM::blr();
}