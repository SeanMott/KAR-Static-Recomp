//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802F53DC.hpp"
#include "fn_802D8AC8.hpp"
#include "fn_802F4A48.hpp"



void fn_802D5760(PPC::Runtime::GCContext* context)
{
/*802D5760 002D2560*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802D5764 002D2564*/ PPC::Runtime::ASM::mflr(context->r0);
/*802D5768 002D2568*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802D576C 002D256C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802D5770 002D2570*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*802D5774 002D2574*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802D5778 002D2578*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*802D577C 002D257C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D5780 002D2580*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*802D5784 002D2584*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D5788 002D2588*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r12));
/*802D578C 002D258C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D5790 002D2590*/ PPC::Runtime::ASM::bctrl();
/* 802D5794 002D2594  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802D5798 002D2598*/ PPC::Runtime::ASM::beq(.L_802D57A4);
/*802D579C 002D259C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802D57A0 002D25A0*/ PPC::Runtime::ASM::b(.L_802D5818);
RUNTIME_PPC_JUMP_LABEL(.L_802D57A4, 0x802D57A4) //this is a jump label
/*802D57A4 002D25A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r29));
/*802D57A8 002D25A8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802D57AC 002D25AC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D90D0 @ Get_MemoryOffset_SDA21);
/*802D57B0 002D25B0*/ PPC::Runtime::ASM::li(context->r6, lbl_805D9098 @ Get_MemoryOffset_SDA21);
/*802D57B4 002D25B4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802D57B8 002D25B8*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802D57BC 002D25BC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802D57C0 002D25C0*/ PPC::Runtime::ASM::beq(.L_802D57D4);
/*802D57C4 002D25C4*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*802D57C8 002D25C8*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*802D57CC 002D25CC*/ PPC::Runtime::ASM::bl(fn_802F53DC);
/*802D57D0 002D25D0*/ PPC::Runtime::ASM::b(.L_802D5814);
RUNTIME_PPC_JUMP_LABEL(.L_802D57D4, 0x802D57D4) //this is a jump label
/*802D57D4 002D25D4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802D57D8 002D25D8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802D57DC 002D25DC*/ PPC::Runtime::ASM::bl(fn_802D8AC8);
/*802D57E0 002D25E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r29));
/*802D57E4 002D25E4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802D57E8 002D25E8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D57EC 002D25EC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802D57F0 002D25F0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D57F4 002D25F4*/ PPC::Runtime::ASM::bctrl();
/*802D57F8 002D25F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r29));
/*802D57FC 002D25FC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802D5800 002D2600*/ PPC::Runtime::ASM::beq(.L_802D5814);
/*802D5804 002D2604*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*802D5808 002D2608*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/*802D580C 002D260C*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x80);
/*802D5810 002D2610*/ PPC::Runtime::ASM::bl(fn_802F4A48);
RUNTIME_PPC_JUMP_LABEL(.L_802D5814, 0x802D5814) //this is a jump label
/*802D5814 002D2614*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802D5818, 0x802D5818) //this is a jump label
/*802D5818 002D2618*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802D581C 002D261C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802D5820 002D2620*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802D5824 002D2624*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D5828 002D2628*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802D582C 002D262C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802D5830 002D2630*/ PPC::Runtime::ASM::blr();
}