//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F7A64.hpp"
#include "fn_800FEA5C.hpp"
#include "fn_800FF3E4.hpp"



void fn_800D2828(PPC::Runtime::GCContext* context)
{
/*800D2828 000CF628*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800D282C 000CF62C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D2830 000CF630*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800D2834 000CF634*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800D2838 000CF638*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*800D283C 000CF63C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800D2840 000CF640*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*800D2844 000CF644*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D2848 000CF648*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*800D284C 000CF64C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800D2850 000CF650*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*800D2854 000CF654*/ PPC::Runtime::ASM::bl(fn_800F7A64);
/*800D2858 000CF658*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2f);
/*800D285C 000CF65C*/ PPC::Runtime::ASM::beq(.L_800D28AC);
/*800D2860 000CF660*/ PPC::Runtime::ASM::bge(.L_800D2870);
/*800D2864 000CF664*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2e);
/*800D2868 000CF668*/ PPC::Runtime::ASM::bge(.L_800D287C);
/*800D286C 000CF66C*/ PPC::Runtime::ASM::b(.L_800D28AC);
RUNTIME_PPC_JUMP_LABEL(.L_800D2870, 0x800D2870) //this is a jump label
/*800D2870 000CF670*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x31);
/*800D2874 000CF674*/ PPC::Runtime::ASM::bge(.L_800D28AC);
/*800D2878 000CF678*/ PPC::Runtime::ASM::b(.L_800D2894);
RUNTIME_PPC_JUMP_LABEL(.L_800D287C, 0x800D287C) //this is a jump label
/*800D287C 000CF67C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800D2880 000CF680*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*800D2884 000CF684*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*800D2888 000CF688*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/*800D288C 000CF68C*/ PPC::Runtime::ASM::bl(fn_800FEA5C);
/*800D2890 000CF690*/ PPC::Runtime::ASM::b(.L_800D28BC);
RUNTIME_PPC_JUMP_LABEL(.L_800D2894, 0x800D2894) //this is a jump label
/*800D2894 000CF694*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800D2898 000CF698*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*800D289C 000CF69C*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*800D28A0 000CF6A0*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/*800D28A4 000CF6A4*/ PPC::Runtime::ASM::bl(fn_800FF3E4);
/*800D28A8 000CF6A8*/ PPC::Runtime::ASM::b(.L_800D28BC);
RUNTIME_PPC_JUMP_LABEL(.L_800D28AC, 0x800D28AC) //this is a jump label
/*800D28AC 000CF6AC*/ PPC::Runtime::ASM::li(context->r3, String_ "grlib." Get_MemoryOffset_SDA21);
/*800D28B0 000CF6B0*/ PPC::Runtime::ASM::li(context->r4, 0x96e);
/*800D28B4 000CF6B4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6098 @ Get_MemoryOffset_SDA21);
/*800D28B8 000CF6B8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D28BC, 0x800D28BC) //this is a jump label
/*800D28BC 000CF6BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800D28C0 000CF6C0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800D28C4 000CF6C4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800D28C8 000CF6C8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D28CC 000CF6CC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800D28D0 000CF6D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D28D4 000CF6D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800D28D8 000CF6D8*/ PPC::Runtime::ASM::blr();
}