//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"



void fn_80410338(PPC::Runtime::GCContext* context)
{
/*80410338 0040D138*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8041033C 0040D13C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80410340 0040D140*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80410344 0040D144*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE2B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80410348 0040D148*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8041034C 0040D14C*/ PPC::Runtime::ASM::beq(.L_80410368);
/*80410350 0040D150*/ PPC::Runtime::ASM::lis(context->r3, lbl_80503C60 @ Get_MemoryOffset_HighBit);
/*80410354 0040D154*/ PPC::Runtime::ASM::lis(context->r5, lbl_80503CB4 @ Get_MemoryOffset_HighBit);
/*80410358 0040D158*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80503C60 @ Get_MemoryOffset_LowBit);
/*8041035C 0040D15C*/ PPC::Runtime::ASM::li(context->r4, 0x1d1);
/*80410360 0040D160*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_80503CB4 @ Get_MemoryOffset_LowBit);
/*80410364 0040D164*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80410368, 0x80410368) //this is a jump label
/*80410368 0040D168*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041036C 0040D16C*/ PPC::Runtime::ASM::lwz(context->r3, AllFs_4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80410370 0040D170*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80410374 0040D174*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80410378 0040D178*/ PPC::Runtime::ASM::blr();
}