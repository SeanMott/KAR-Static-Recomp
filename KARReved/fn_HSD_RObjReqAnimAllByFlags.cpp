//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_AObjReqAnim.hpp"



void fn_HSD_RObjReqAnimAllByFlags(PPC::Runtime::GCContext* context)
{
/*80418588 00415388*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8041858C 0041538C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80418590 00415390*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80418594 00415394*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80418598 00415398*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8041859C 0041539C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804185A0 004153A0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/* 804185A4 004153A4  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*804185A8 004153A8*/ PPC::Runtime::ASM::bne(.L_804185E8);
/*804185AC 004153AC*/ PPC::Runtime::ASM::b(.L_804185F0);
/*804185B0 004153B0*/ PPC::Runtime::ASM::b(.L_804185DC);
RUNTIME_PPC_JUMP_LABEL(.L_804185B4, 0x804185B4) //this is a jump label
/*804185B4 004153B4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*804185B8 004153B8*/ PPC::Runtime::ASM::beq(.L_804185D8);
/*804185BC 004153BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*804185C0 004153C0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*804185C4 004153C4*/ PPC::Runtime::ASM::beq(.L_804185D8);
/*804185C8 004153C8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*804185CC 004153CC*/ PPC::Runtime::ASM::beq(.L_804185D8);
/*804185D0 004153D0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*804185D4 004153D4*/ PPC::Runtime::ASM::bl(fn_HSD_AObjReqAnim);
RUNTIME_PPC_JUMP_LABEL(.L_804185D8, 0x804185D8) //this is a jump label
/*804185D8 004153D8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_804185DC, 0x804185DC) //this is a jump label
/*804185DC 004153DC*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*804185E0 004153E0*/ PPC::Runtime::ASM::bne(.L_804185B4);
/*804185E4 004153E4*/ PPC::Runtime::ASM::b(.L_804185F0);
RUNTIME_PPC_JUMP_LABEL(.L_804185E8, 0x804185E8) //this is a jump label
/*804185E8 004153E8*/ PPC::Runtime::ASM::rlwinm(context->r31, context->r4, 0, 24, 24);
/*804185EC 004153EC*/ PPC::Runtime::ASM::b(.L_804185DC);
RUNTIME_PPC_JUMP_LABEL(.L_804185F0, 0x804185F0) //this is a jump label
/*804185F0 004153F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*804185F4 004153F4*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*804185F8 004153F8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804185FC 004153FC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80418600 00415400*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80418604 00415404*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80418608 00415408*/ PPC::Runtime::ASM::blr();
}