//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138934.hpp"
#include "fn_80177550.hpp"
#include "fn_80177550.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"
#include "fn_80172C3C.hpp"
#include "fn_80172CA8.hpp"
#include "fn_80138AC8.hpp"



void fn_80177688(PPC::Runtime::GCContext* context)
{
/*80177688 00174488*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8017768C 0017448C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80177690 00174490*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80177694 00174494*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80177698 00174498*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*8017769C 0017449C*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*801776A0 001744A0*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*801776A4 001744A4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801776A8 001744A8*/ PPC::Runtime::ASM::extsb(context->r0, context->r26);
/*801776AC 001744AC*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0xd18);
/*801776B0 001744B0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801776B4 001744B4*/ PPC::Runtime::ASM::add(context->r31, context->r30, context->r0);
/*801776B8 001744B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*801776BC 001744BC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801776C0 001744C0*/ PPC::Runtime::ASM::beq(.L_801776D0);
/*801776C4 001744C4*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*801776C8 001744C8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801776CC 001744CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801776D0, 0x801776D0) //this is a jump label
/*801776D0 001744D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801776D4 001744D4*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*801776D8 001744D8*/ PPC::Runtime::ASM::li(context->r5, 0x1e);
/*801776DC 001744DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801776E0 001744E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801776E4 001744E4*/ PPC::Runtime::ASM::bl(fn_80138934);
/*801776E8 001744E8*/ PPC::Runtime::ASM::lis(context->r4, fn_80177550 @ Get_MemoryOffset_HighBit);
/*801776EC 001744EC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*801776F0 001744F0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801776F4 001744F4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*801776F8 001744F8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80177550 @ Get_MemoryOffset_LowBit);
/*801776FC 001744FC*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80177700 00174500*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80177704 00174504*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80177708 00174508*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8017770C 0017450C*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*80177710 00174510*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80177714 00174514*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*80177718 00174518*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8017771C 0017451C*/ PPC::Runtime::ASM::li(context->r4, 0x9a);
/*80177720 00174520*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*80177724 00174524*/ PPC::Runtime::ASM::stb(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80177728 00174528*/ PPC::Runtime::ASM::extsb(context->r0, context->r27);
/*8017772C 0017452C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80177730 00174530*/ PPC::Runtime::ASM::stb(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
/*80177734 00174534*/ PPC::Runtime::ASM::bgt(.L_80177748);
/*80177738 00174538*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8017773C 0017453C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80177740 00174540*/ PPC::Runtime::ASM::bl(fn_80172C3C);
/*80177744 00174544*/ PPC::Runtime::ASM::b(.L_80177754);
RUNTIME_PPC_JUMP_LABEL(.L_80177748, 0x80177748) //this is a jump label
/*80177748 00174548*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8017774C 0017454C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80177750 00174550*/ PPC::Runtime::ASM::bl(fn_80172CA8);
RUNTIME_PPC_JUMP_LABEL(.L_80177754, 0x80177754) //this is a jump label
/*80177754 00174554*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80177758 00174558*/ PPC::Runtime::ASM::bne(.L_8017776C);
/*8017775C 0017455C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6D28 @ Get_MemoryOffset_SDA21);
/*80177760 00174560*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*80177764 00174564*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6D30 @ Get_MemoryOffset_SDA21);
/*80177768 00174568*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8017776C, 0x8017776C) //this is a jump label
/*8017776C 0017456C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80177770 00174570*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80177774 00174574*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*80177778 00174578*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*8017777C 0017457C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80177780 00174580*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r28));
/*80177784 00174584*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*80177788 00174588*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8017778C 0017458C*/ PPC::Runtime::ASM::bne(.L_801777D8);
/*80177790 00174590*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80177794 00174594*/ PPC::Runtime::ASM::beq(.L_801777D8);
/*80177798 00174598*/ PPC::Runtime::ASM::bne(.L_801777AC);
/*8017779C 0017459C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6D28 @ Get_MemoryOffset_SDA21);
/*801777A0 001745A0*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801777A4 001745A4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6D30 @ Get_MemoryOffset_SDA21);
/*801777A8 001745A8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801777AC, 0x801777AC) //this is a jump label
/*801777AC 001745AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*801777B0 001745B0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801777B4 001745B4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801777B8 001745B8*/ PPC::Runtime::ASM::bne(.L_801777C8);
/*801777BC 001745BC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801777C0 001745C0*/ PPC::Runtime::ASM::beq(.L_801777C8);
/*801777C4 001745C4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801777C8, 0x801777C8) //this is a jump label
/*801777C8 001745C8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801777CC 001745CC*/ PPC::Runtime::ASM::bne(.L_801777D8);
/*801777D0 001745D0*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801777D4 001745D4*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_801777D8, 0x801777D8) //this is a jump label
/*801777D8 001745D8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*801777DC 001745DC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801777E0 001745E0*/ PPC::Runtime::ASM::bl(fn_80138AC8);
/*801777E4 001745E4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*801777E8 001745E8*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*801777EC 001745EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801777F0 001745F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801777F4 001745F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801777F8 001745F8*/ PPC::Runtime::ASM::blr();
}