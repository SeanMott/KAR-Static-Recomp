//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022CB74.hpp"
#include "fn_80192110.hpp"



void fn_801FF80C(PPC::Runtime::GCContext* context)
{
/*801FF80C 001FC60C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801FF810 001FC610*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FF814 001FC614*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FF818 001FC618*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801FF81C 001FC61C*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*801FF820 001FC620*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801FF824 001FC624*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*801FF828 001FC628*/ PPC::Runtime::ASM::bl(fn_8022CB74);
/*801FF82C 001FC62C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801FF830 001FC630*/ PPC::Runtime::ASM::beq(.L_801FF848);
/*801FF834 001FC634*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801FF838 001FC638*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*801FF83C 001FC63C*/ PPC::Runtime::ASM::bl(fn_80192110);
/*801FF840 001FC640*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801FF844 001FC644*/ PPC::Runtime::ASM::b(.L_801FF84C);
RUNTIME_PPC_JUMP_LABEL(.L_801FF848, 0x801FF848) //this is a jump label
/*801FF848 001FC648*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801FF84C, 0x801FF84C) //this is a jump label
/*801FF84C 001FC64C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FF850 001FC650*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801FF854 001FC654*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801FF858 001FC658*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FF85C 001FC65C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801FF860 001FC660*/ PPC::Runtime::ASM::blr();
}