//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80047844.hpp"
#include "fn_FuncWithAJumpTable_11.hpp"



void fn_800486AC(PPC::Runtime::GCContext* context)
{
/*800486AC 000454AC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800486B0 000454B0*/ PPC::Runtime::ASM::mflr(context->r0);
/*800486B4 000454B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800486B8 000454B8*/ PPC::Runtime::ASM::bl(fn_80047844);
/*800486BC 000454BC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r3));
/*800486C0 000454C0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*800486C4 000454C4*/ PPC::Runtime::ASM::beq(.L_800486D0);
/*800486C8 000454C8*/ PPC::Runtime::ASM::li(context->r3, 0x1b);
/*800486CC 000454CC*/ PPC::Runtime::ASM::bl(fn_FuncWithAJumpTable_11);
RUNTIME_PPC_JUMP_LABEL(.L_800486D0, 0x800486D0) //this is a jump label
/*800486D0 000454D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800486D4 000454D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800486D8 000454D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800486DC 000454DC*/ PPC::Runtime::ASM::blr();
}