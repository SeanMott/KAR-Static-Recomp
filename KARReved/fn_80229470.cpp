//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_8022939C.hpp"
#include "fn_8022939C.hpp"
#include "fn_8023D9B0.hpp"



void fn_80229470(PPC::Runtime::GCContext* context)
{
/*80229470 00226270*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80229474 00226274*/ PPC::Runtime::ASM::mflr(context->r0);
/*80229478 00226278*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8022947C 0022627C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80229480 00226280*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80229484 00226284*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80229488 00226288*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8022948C 0022628C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80229490 00226290*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80229494 00226294*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r3));
/*80229498 00226298*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8022949C 0022629C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802294A0 002262A0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r5));
/*802294A4 002262A4*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*802294A8 002262A8*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*802294AC 002262AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*802294B0 002262B0*/ PPC::Runtime::ASM::mr(context->r28, context->r0);
/*802294B4 002262B4*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*802294B8 002262B8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*802294BC 002262BC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
/*802294C0 002262C0*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*802294C4 002262C4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E29F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802294C8 002262C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r29));
/*802294CC 002262CC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*802294D0 002262D0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*802294D4 002262D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802294D8 002262D8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802294DC 002262DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802294E0 002262E0*/ PPC::Runtime::ASM::bne(.L_802294F4);
/*802294E4 002262E4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7248 @ Get_MemoryOffset_SDA21);
/*802294E8 002262E8*/ PPC::Runtime::ASM::li(context->r4, 0x316);
/*802294EC 002262EC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7250 @ Get_MemoryOffset_SDA21);
/*802294F0 002262F0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802294F4, 0x802294F4) //this is a jump label
/*802294F4 002262F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802294F8 002262F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802294FC 002262FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*80229500 00226300*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80229504 00226304*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r28));
/*80229508 00226308*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
/*8022950C 0022630C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*80229510 00226310*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80229514 00226314*/ PPC::Runtime::ASM::bne(.L_80229560);
/*80229518 00226318*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8022951C 0022631C*/ PPC::Runtime::ASM::beq(.L_80229560);
/*80229520 00226320*/ PPC::Runtime::ASM::bne(.L_80229534);
/*80229524 00226324*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7248 @ Get_MemoryOffset_SDA21);
/*80229528 00226328*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8022952C 0022632C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7250 @ Get_MemoryOffset_SDA21);
/*80229530 00226330*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80229534, 0x80229534) //this is a jump label
/*80229534 00226334*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*80229538 00226338*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8022953C 0022633C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80229540 00226340*/ PPC::Runtime::ASM::bne(.L_80229550);
/*80229544 00226344*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80229548 00226348*/ PPC::Runtime::ASM::beq(.L_80229550);
/*8022954C 0022634C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80229550, 0x80229550) //this is a jump label
/*80229550 00226350*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80229554 00226354*/ PPC::Runtime::ASM::bne(.L_80229560);
/*80229558 00226358*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8022955C 0022635C*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80229560, 0x80229560) //this is a jump label
/*80229560 00226360*/ PPC::Runtime::ASM::lis(context->r4, fn_8022939C @ Get_MemoryOffset_HighBit);
/*80229564 00226364*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*80229568 00226368*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8022939C @ Get_MemoryOffset_LowBit);
/*8022956C 0022636C*/ PPC::Runtime::ASM::li(context->r5, 0xb);
/*80229570 00226370*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80229574 00226374*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r29));
/*80229578 00226378*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8022957C 0022637C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80229580 00226380*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80229584 00226384*/ PPC::Runtime::ASM::bl(fn_8023D9B0);
/*80229588 00226388*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8022958C 0022638C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80229590 00226390*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80229594 00226394*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80229598 00226398*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8022959C 0022639C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802295A0 002263A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*802295A4 002263A4*/ PPC::Runtime::ASM::blr();
}