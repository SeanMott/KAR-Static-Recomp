//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80047844.hpp"
#include "fn_80078C7C.hpp"
#include "fn_FuncWithAJumpTable_11.hpp"
#include "fn_FuncWithAJumpTable_11.hpp"



void fn_800485B0(PPC::Runtime::GCContext* context)
{
/*800485B0 000453B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800485B4 000453B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800485B8 000453B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800485BC 000453BC*/ PPC::Runtime::ASM::bl(fn_80047844);
/*800485C0 000453C0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r3));
/*800485C4 000453C4*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*800485C8 000453C8*/ PPC::Runtime::ASM::bne(.L_800485DC);
/*800485CC 000453CC*/ PPC::Runtime::ASM::bl(fn_80078C7C);
/*800485D0 000453D0*/ PPC::Runtime::ASM::li(context->r3, 0xb);
/*800485D4 000453D4*/ PPC::Runtime::ASM::bl(fn_FuncWithAJumpTable_11);
/*800485D8 000453D8*/ PPC::Runtime::ASM::b(.L_800485F0);
RUNTIME_PPC_JUMP_LABEL(.L_800485DC, 0x800485DC) //this is a jump label
/*800485DC 000453DC*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*800485E0 000453E0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800485E4 000453E4*/ PPC::Runtime::ASM::bne(.L_800485F0);
/*800485E8 000453E8*/ PPC::Runtime::ASM::li(context->r3, 0x1b);
/*800485EC 000453EC*/ PPC::Runtime::ASM::bl(fn_FuncWithAJumpTable_11);
RUNTIME_PPC_JUMP_LABEL(.L_800485F0, 0x800485F0) //this is a jump label
/*800485F0 000453F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800485F4 000453F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800485F8 000453F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800485FC 000453FC*/ PPC::Runtime::ASM::blr();
}