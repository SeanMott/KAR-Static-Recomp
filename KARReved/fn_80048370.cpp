//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80047844.hpp"
#include "fn_debug_memCard_reqDelete.hpp"
#include "fn_FuncWithAJumpTable_11.hpp"
#include "fn_FuncWithAJumpTable_11.hpp"



void fn_80048370(PPC::Runtime::GCContext* context)
{
/*80048370 00045170*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80048374 00045174*/ PPC::Runtime::ASM::mflr(context->r0);
/*80048378 00045178*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004837C 0004517C*/ PPC::Runtime::ASM::bl(fn_80047844);
/*80048380 00045180*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r3));
/*80048384 00045184*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80048388 00045188*/ PPC::Runtime::ASM::bne(.L_8004839C);
/*8004838C 0004518C*/ PPC::Runtime::ASM::bl(fn_debug_memCard_reqDelete);
/*80048390 00045190*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*80048394 00045194*/ PPC::Runtime::ASM::bl(fn_FuncWithAJumpTable_11);
/*80048398 00045198*/ PPC::Runtime::ASM::b(.L_800483B0);
RUNTIME_PPC_JUMP_LABEL(.L_8004839C, 0x8004839C) //this is a jump label
/*8004839C 0004519C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*800483A0 000451A0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800483A4 000451A4*/ PPC::Runtime::ASM::bne(.L_800483B0);
/*800483A8 000451A8*/ PPC::Runtime::ASM::li(context->r3, 0x1b);
/*800483AC 000451AC*/ PPC::Runtime::ASM::bl(fn_FuncWithAJumpTable_11);
RUNTIME_PPC_JUMP_LABEL(.L_800483B0, 0x800483B0) //this is a jump label
/*800483B0 000451B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800483B4 000451B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800483B8 000451B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800483BC 000451BC*/ PPC::Runtime::ASM::blr();
}