//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801388A8.hpp"
#include "fn_801389D8.hpp"
#include "fn_80185C88.hpp"
#include "fn_80138A00.hpp"



void fn_801866E8(PPC::Runtime::GCContext* context)
{
/*801866E8 001834E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*801866EC 001834EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801866F0 001834F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801866F4 001834F4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*801866F8 001834F8*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*801866FC 001834FC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80186700 00183500*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x11fc);
/*80186704 00183504*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80186708 00183508*/ PPC::Runtime::ASM::mr(context->r30, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_8018670C, 0x8018670C) //this is a jump label
/*8018670C 0018350C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x9);
/*80186710 00183510*/ PPC::Runtime::ASM::blt(.L_80186720);
/*80186714 00183514*/ PPC::Runtime::ASM::subi(context->r26, context->r31, 0x9);
/*80186718 00183518*/ PPC::Runtime::ASM::li(context->r25, 0x1);
/*8018671C 0018351C*/ PPC::Runtime::ASM::b(.L_80186728);
RUNTIME_PPC_JUMP_LABEL(.L_80186720, 0x80186720) //this is a jump label
/*80186720 00183520*/ PPC::Runtime::ASM::mr(context->r26, context->r31);
/*80186724 00183524*/ PPC::Runtime::ASM::li(context->r25, 0x2);
RUNTIME_PPC_JUMP_LABEL(.L_80186728, 0x80186728) //this is a jump label
/*80186728 00183528*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8018672C 0018352C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80186730 00183530*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80186734 00183534*/ PPC::Runtime::ASM::bl(fn_801388A8);
/*80186738 00183538*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0F08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018673C 0018353C*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80186740 00183540*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80186744 00183544*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*80186748 00183548*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8018674C 0018354C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80186750 00183550*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80186754 00183554*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*80186758 00183558*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*8018675C 0018355C*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r26, 24);
/*80186760 00183560*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80186764 00183564*/ PPC::Runtime::ASM::bl(fn_80185C88);
/*80186768 00183568*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*8018676C 0018356C*/ PPC::Runtime::ASM::bne(.L_80186780);
/*80186770 00183570*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6E78 @ Get_MemoryOffset_SDA21);
/*80186774 00183574*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*80186778 00183578*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6E80 @ Get_MemoryOffset_SDA21);
/*8018677C 0018357C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80186780, 0x80186780) //this is a jump label
/*80186780 00183580*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80186784 00183584*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80186788 00183588*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r27));
/*8018678C 0018358C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r27));
/*80186790 00183590*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80186794 00183594*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r27));
/*80186798 00183598*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*8018679C 0018359C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*801867A0 001835A0*/ PPC::Runtime::ASM::bne(.L_801867EC);
/*801867A4 001835A4*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*801867A8 001835A8*/ PPC::Runtime::ASM::beq(.L_801867EC);
/*801867AC 001835AC*/ PPC::Runtime::ASM::bne(.L_801867C0);
/*801867B0 001835B0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6E78 @ Get_MemoryOffset_SDA21);
/*801867B4 001835B4*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801867B8 001835B8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6E80 @ Get_MemoryOffset_SDA21);
/*801867BC 001835BC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801867C0, 0x801867C0) //this is a jump label
/*801867C0 001835C0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*801867C4 001835C4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801867C8 001835C8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801867CC 001835CC*/ PPC::Runtime::ASM::bne(.L_801867DC);
/*801867D0 001835D0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801867D4 001835D4*/ PPC::Runtime::ASM::beq(.L_801867DC);
/*801867D8 001835D8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801867DC, 0x801867DC) //this is a jump label
/*801867DC 001835DC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801867E0 001835E0*/ PPC::Runtime::ASM::bne(.L_801867EC);
/*801867E4 001835E4*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*801867E8 001835E8*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_801867EC, 0x801867EC) //this is a jump label
/*801867EC 001835EC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801867F0 001835F0*/ PPC::Runtime::ASM::li(context->r4, 0xc6);
/*801867F4 001835F4*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*801867F8 001835F8*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*801867FC 001835FC*/ PPC::Runtime::ASM::stwu(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80186800 00183600*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x12);
/*80186804 00183604*/ PPC::Runtime::ASM::blt(.L_8018670C);
/*80186808 00183608*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8018680C 0018360C*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*80186810 00183610*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80186814 00183614*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80186818 00183618*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8018681C 0018361C*/ PPC::Runtime::ASM::blr();
}