//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80222ED8.hpp"
#include "fn_802361A0.hpp"
#include "fn_abilityTimer_Plasma_removeEffect.hpp"
#include "fn_802361A0.hpp"
#include "fn_abilityTimer_Plasma_removeEffect.hpp"
#include "fn_8021F7DC.hpp"
#include "fn_80220230.hpp"
#include "fn_80229470.hpp"
#include "fn_80229470.hpp"
#include "fn_80236C40.hpp"
#include "fn_80229C9C.hpp"
#include "fn_80236C40.hpp"
#include "fn_8007A5B8.hpp"
#include "fn_8007A920.hpp"
#include "fn_80228D68.hpp"
#include "fn_80228D68.hpp"
#include "fn_8018CB04.hpp"



void fn_80229A2C(PPC::Runtime::GCContext* context)
{
/*80229A2C 0022682C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80229A30 00226830*/ PPC::Runtime::ASM::mflr(context->r0);
/*80229A34 00226834*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80229A38 00226838*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80229A3C 0022683C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80229A40 00226840*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bc, context->r3));
/*80229A44 00226844*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80229A48 00226848*/ PPC::Runtime::ASM::beq(.L_80229BF4);
/*80229A4C 0022684C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80229A50 00226850*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bc, context->r31));
/*80229A54 00226854*/ PPC::Runtime::ASM::bl(fn_80222ED8);
/*80229A58 00226858*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d8, context->r31));
/*80229A5C 0022685C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r31));
/*80229A60 00226860*/ PPC::Runtime::ASM::bl(fn_802361A0);
/*80229A64 00226864*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80229A68 00226868*/ PPC::Runtime::ASM::beq(.L_80229A78);
/*80229A6C 0022686C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d8, context->r31));
/*80229A70 00226870*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r31));
/*80229A74 00226874*/ PPC::Runtime::ASM::bl(fn_abilityTimer_Plasma_removeEffect);
RUNTIME_PPC_JUMP_LABEL(.L_80229A78, 0x80229A78) //this is a jump label
/*80229A78 00226878*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r31));
/*80229A7C 0022687C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r31));
/*80229A80 00226880*/ PPC::Runtime::ASM::bl(fn_802361A0);
/*80229A84 00226884*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80229A88 00226888*/ PPC::Runtime::ASM::beq(.L_80229A98);
/*80229A8C 0022688C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r31));
/*80229A90 00226890*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r31));
/*80229A94 00226894*/ PPC::Runtime::ASM::bl(fn_abilityTimer_Plasma_removeEffect);
RUNTIME_PPC_JUMP_LABEL(.L_80229A98, 0x80229A98) //this is a jump label
/*80229A98 00226898*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E29E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80229A9C 0022689C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80229AA0 002268A0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E29E4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80229AA4 002268A4*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*80229AA8 002268A8*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80229AAC 002268AC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80229AB0 002268B0*/ PPC::Runtime::ASM::bl(fn_8021F7DC);
/*80229AB4 002268B4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80229AB8 002268B8*/ PPC::Runtime::ASM::bl(fn_80220230);
/*80229ABC 002268BC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b6, context->r31));
/*80229AC0 002268C0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80229AC4 002268C4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*80229AC8 002268C8*/ PPC::Runtime::ASM::lis(context->r4, 0x5);
/*80229ACC 002268CC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b6, context->r31));
/*80229AD0 002268D0*/ PPC::Runtime::ASM::lis(context->r3, fn_80229470 @ Get_MemoryOffset_HighBit);
/*80229AD4 002268D4*/ PPC::Runtime::ASM::addi(context->r7, context->r3, fn_80229470 @ Get_MemoryOffset_LowBit);
/*80229AD8 002268D8*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*80229ADC 002268DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80229AE0 002268E0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x7e46);
/*80229AE4 002268E4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r31));
/*80229AE8 002268E8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80229AEC 002268EC*/ PPC::Runtime::ASM::bl(fn_80236C40);
/*80229AF0 002268F0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*80229AF4 002268F4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E29E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80229AF8 002268F8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e0, context->r31));
/*80229AFC 002268FC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80229B00 00226900*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r31));
/*80229B04 00226904*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*80229B08 00226908*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*80229B0C 0022690C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*80229B10 00226910*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ec, context->r31));
/*80229B14 00226914*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*80229B18 00226918*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*80229B1C 0022691C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f8, context->r31));
/*80229B20 00226920*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*80229B24 00226924*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*80229B28 00226928*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x200, context->r31));
/*80229B2C 0022692C*/ PPC::Runtime::ASM::bl(fn_80229C9C);
/*80229B30 00226930*/ PPC::Runtime::ASM::lis(context->r4, 0x6);
/*80229B34 00226934*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80229B38 00226938*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r31));
/*80229B3C 0022693C*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x5a5e);
/*80229B40 00226940*/ PPC::Runtime::ASM::addi(context->r8, context->r31, 0xac);
/*80229B44 00226944*/ PPC::Runtime::ASM::li(context->r6, 0x1fe);
/*80229B48 00226948*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80229B4C 0022694C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80229B50 00226950*/ PPC::Runtime::ASM::bl(fn_80236C40);
/*80229B54 00226954*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f4, context->r31));
/*80229B58 00226958*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E29E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80229B5C 0022695C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f0, context->r31));
/*80229B60 00226960*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x204, context->r31));
/*80229B64 00226964*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r31));
/*80229B68 00226968*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80229B6C 0022696C*/ PPC::Runtime::ASM::bne(.L_80229BC0);
/*80229B70 00226970*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*80229B74 00226974*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x50);
/*80229B78 00226978*/ PPC::Runtime::ASM::bl(fn_8007A5B8);
/*80229B7C 0022697C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r31));
/*80229B80 00226980*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r31));
/*80229B84 00226984*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80229B88 00226988*/ PPC::Runtime::ASM::beq(.L_80229BC0);
/*80229B8C 0022698C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r31));
/*80229B90 00226990*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80229B94 00226994*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r31));
/*80229B98 00226998*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80229B9C 0022699C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80229BA0 002269A0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80229BA4 002269A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r31));
/*80229BA8 002269A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80229BAC 002269AC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*80229BB0 002269B0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r5));
/*80229BB4 002269B4*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80229BB8 002269B8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80229BBC 002269BC*/ PPC::Runtime::ASM::bl(fn_8007A920);
RUNTIME_PPC_JUMP_LABEL(.L_80229BC0, 0x80229BC0) //this is a jump label
/*80229BC0 002269C0*/ PPC::Runtime::ASM::lis(context->r3, fn_80228D68 @ Get_MemoryOffset_HighBit);
/*80229BC4 002269C4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_80228D68 @ Get_MemoryOffset_LowBit);
/*80229BC8 002269C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x160, context->r31));
/*80229BCC 002269CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r31));
/*80229BD0 002269D0*/ PPC::Runtime::ASM::bl(fn_8018CB04);
/*80229BD4 002269D4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b5, context->r31));
/*80229BD8 002269D8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80229BDC 002269DC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 6, 25, 25);
/*80229BE0 002269E0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b5, context->r31));
/*80229BE4 002269E4*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 25);
/*80229BE8 002269E8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b5, context->r31));
/*80229BEC 002269EC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*80229BF0 002269F0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b5, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80229BF4, 0x80229BF4) //this is a jump label
/*80229BF4 002269F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80229BF8 002269F8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80229BFC 002269FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80229C00 00226A00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80229C04 00226A04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80229C08 00226A08*/ PPC::Runtime::ASM::blr();
}