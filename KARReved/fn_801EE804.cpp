//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801E106C.hpp"
#include "fn_801EE84C.hpp"



void fn_801EE804(PPC::Runtime::GCContext* context)
{
/*801EE804 001EB604*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801EE808 001EB608*/ PPC::Runtime::ASM::mflr(context->r0);
/*801EE80C 001EB60C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EE810 001EB610*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EE814 001EB614*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801EE818 001EB618*/ PPC::Runtime::ASM::bl(fn_801E106C);
/*801EE81C 001EB61C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801EE820 001EB620*/ PPC::Runtime::ASM::beq(.L_801EE834);
/*801EE824 001EB624*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EE828 001EB628*/ PPC::Runtime::ASM::bl(fn_801EE84C);
/*801EE82C 001EB62C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801EE830 001EB630*/ PPC::Runtime::ASM::b(.L_801EE838);
RUNTIME_PPC_JUMP_LABEL(.L_801EE834, 0x801EE834) //this is a jump label
/*801EE834 001EB634*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801EE838, 0x801EE838) //this is a jump label
/*801EE838 001EB638*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EE83C 001EB63C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EE840 001EB640*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801EE844 001EB644*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801EE848 001EB648*/ PPC::Runtime::ASM::blr();
}