//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8027B524.hpp"
#include "fn_8027B534.hpp"



void fn_80195800(PPC::Runtime::GCContext* context)
{
/*80195800 00192600*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80195804 00192604*/ PPC::Runtime::ASM::mflr(context->r0);
/*80195808 00192608*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019580C 0019260C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x825, context->r3));
/* 80195810 00192610  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*80195814 00192614*/ PPC::Runtime::ASM::beq(.L_80195830);
/*80195818 00192618*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x821, context->r3));
/* 8019581C 0019261C  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*80195820 00192620*/ PPC::Runtime::ASM::beq(.L_80195830);
/*80195824 00192624*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66c, context->r3));
/*80195828 00192628*/ PPC::Runtime::ASM::bl(fn_8027B524);
/*8019582C 0019262C*/ PPC::Runtime::ASM::b(.L_80195838);
RUNTIME_PPC_JUMP_LABEL(.L_80195830, 0x80195830) //this is a jump label
/*80195830 00192630*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66c, context->r3));
/*80195834 00192634*/ PPC::Runtime::ASM::bl(fn_8027B534);
RUNTIME_PPC_JUMP_LABEL(.L_80195838, 0x80195838) //this is a jump label
/*80195838 00192638*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019583C 0019263C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80195840 00192640*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80195844 00192644*/ PPC::Runtime::ASM::blr();
}