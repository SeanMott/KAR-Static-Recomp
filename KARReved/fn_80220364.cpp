//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80220364(PPC::Runtime::GCContext* context)
{
/*80220364 0021D164*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80220368 0021D168*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022036C 0021D16C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B4338 @ Get_MemoryOffset_HighBit);
/*80220370 0021D170*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80220374 0021D174*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804B4338 @ Get_MemoryOffset_LowBit);
/*80220378 0021D178*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022037C 0021D17C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80220380 0021D180*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80220384 0021D184*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80220388 0021D188*/ PPC::Runtime::ASM::lwzx(context->r4, context->r4, context->r0);
/*8022038C 0021D18C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*80220390 0021D190*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*80220394 0021D194*/ PPC::Runtime::ASM::beq(.L_802203B4);
/*80220398 0021D198*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8022039C 0021D19C*/ PPC::Runtime::ASM::bctrl();
/*802203A0 0021D1A0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b5, context->r31));
/*802203A4 0021D1A4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802203A8 0021D1A8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 1, 30, 30);
/*802203AC 0021D1AC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b5, context->r31));
/*802203B0 0021D1B0*/ PPC::Runtime::ASM::b(.L_802203BC);
RUNTIME_PPC_JUMP_LABEL(.L_802203B4, 0x802203B4) //this is a jump label
/*802203B4 0021D1B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802203B8 0021D1B8*/ PPC::Runtime::ASM::bl(fn_80428F64);
RUNTIME_PPC_JUMP_LABEL(.L_802203BC, 0x802203BC) //this is a jump label
/*802203BC 0021D1BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802203C0 0021D1C0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802203C4 0021D1C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802203C8 0021D1C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802203CC 0021D1CC*/ PPC::Runtime::ASM::blr();
}