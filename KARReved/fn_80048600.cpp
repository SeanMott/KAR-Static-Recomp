//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8007863C.hpp"
#include "fn_FuncWithAJumpTable_11.hpp"
#include "fn_FuncWithAJumpTable_11.hpp"



void fn_80048600(PPC::Runtime::GCContext* context)
{
/*80048600 00045400*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80048604 00045404*/ PPC::Runtime::ASM::mflr(context->r0);
/*80048608 00045408*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004860C 0004540C*/ PPC::Runtime::ASM::bl(fn_8007863C);
/*80048610 00045410*/ PPC::Runtime::ASM::cmpwi(context->r3, 0xb);
/*80048614 00045414*/ PPC::Runtime::ASM::beq(.L_80048634);
/*80048618 00045418*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004861C 0004541C*/ PPC::Runtime::ASM::bne(.L_8004862C);
/*80048620 00045420*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*80048624 00045424*/ PPC::Runtime::ASM::bl(fn_FuncWithAJumpTable_11);
/*80048628 00045428*/ PPC::Runtime::ASM::b(.L_80048634);
RUNTIME_PPC_JUMP_LABEL(.L_8004862C, 0x8004862C) //this is a jump label
/*8004862C 0004542C*/ PPC::Runtime::ASM::li(context->r3, 0xd);
/*80048630 00045430*/ PPC::Runtime::ASM::bl(fn_FuncWithAJumpTable_11);
RUNTIME_PPC_JUMP_LABEL(.L_80048634, 0x80048634) //this is a jump label
/*80048634 00045434*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80048638 00045438*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004863C 0004543C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80048640 00045440*/ PPC::Runtime::ASM::blr();
}