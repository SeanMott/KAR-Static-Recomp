//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_stGetCurrentStageKind.hpp"
#include "fn_stGetStageKind_38item?.hpp"
#include "fn_8000A250.hpp"
#include "fn_lbLoadArchive.hpp"



void fn_8024FF38(PPC::Runtime::GCContext* context)
{
/*8024FF38 0024CD38*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8024FF3C 0024CD3C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8024FF40 0024CD40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8024FF44 0024CD44*/ PPC::Runtime::ASM::bl(fn_stGetCurrentStageKind);
/*8024FF48 0024CD48*/ PPC::Runtime::ASM::bl(fn_stGetStageKind_38item?);
/*8024FF4C 0024CD4C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8024FF50 0024CD50*/ PPC::Runtime::ASM::beq(.L_8024FF84);
/*8024FF54 0024CD54*/ PPC::Runtime::ASM::bl(fn_8000A250);
/*8024FF58 0024CD58*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8024FF5C 0024CD5C*/ PPC::Runtime::ASM::beq(.L_8024FF84);
/*8024FF60 0024CD60*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1NULL_1 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8024FF64 0024CD64*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B61BC @ Get_MemoryOffset_HighBit);
/*8024FF68 0024CD68*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804B61BC @ Get_MemoryOffset_LowBit);
/*8024FF6C 0024CD6C*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7370 @ Get_MemoryOffset_SDA21);
/*8024FF70 0024CD70*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8024FF74 0024CD74*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x8);
/*8024FF78 0024CD78*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8024FF7C 0024CD7C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8024FF80 0024CD80*/ PPC::Runtime::ASM::bl(fn_lbLoadArchive);
RUNTIME_PPC_JUMP_LABEL(.L_8024FF84, 0x8024FF84) //this is a jump label
/*8024FF84 0024CD84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8024FF88 0024CD88*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8024FF8C 0024CD8C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8024FF90 0024CD90*/ PPC::Runtime::ASM::blr();
}