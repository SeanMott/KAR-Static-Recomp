//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801CF1B8.hpp"
#include "fn_801EF908.hpp"
#include "fn_801EF8A4.hpp"



void fn_801EF7D4(PPC::Runtime::GCContext* context)
{
/*801EF7D4 001EC5D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801EF7D8 001EC5D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801EF7DC 001EC5DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EF7E0 001EC5E0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EF7E4 001EC5E4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801EF7E8 001EC5E8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r3));
/*801EF7EC 001EC5EC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15c, context->r4));
/*801EF7F0 001EC5F0*/ PPC::Runtime::ASM::bl(fn_801CF1B8);
/*801EF7F4 001EC5F4*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/* 801EF7F8 001EC5F8  54 00 D9 7F */ srwi. context->r0 , context->r0 , 5
/*801EF7FC 001EC5FC*/ PPC::Runtime::ASM::beq(.L_801EF830);
/*801EF800 001EC600*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc34, context->r31));
/* 801EF804 001EC604  54 60 D7 FF */ extrwi. context->r0 , context->r3 , 1 , 25
/*801EF808 001EC608*/ PPC::Runtime::ASM::bne(.L_801EF814);
/* 801EF80C 001EC60C  54 60 DF FF */ extrwi. context->r0 , context->r3 , 1 , 26
/*801EF810 001EC610*/ PPC::Runtime::ASM::beq(.L_801EF820);
RUNTIME_PPC_JUMP_LABEL(.L_801EF814, 0x801EF814) //this is a jump label
/*801EF814 001EC614*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF818 001EC618*/ PPC::Runtime::ASM::bl(fn_801EF908);
/*801EF81C 001EC61C*/ PPC::Runtime::ASM::b(.L_801EF828);
RUNTIME_PPC_JUMP_LABEL(.L_801EF820, 0x801EF820) //this is a jump label
/*801EF820 001EC620*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF824 001EC624*/ PPC::Runtime::ASM::bl(fn_801EF8A4);
RUNTIME_PPC_JUMP_LABEL(.L_801EF828, 0x801EF828) //this is a jump label
/*801EF828 001EC628*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801EF82C 001EC62C*/ PPC::Runtime::ASM::b(.L_801EF834);
RUNTIME_PPC_JUMP_LABEL(.L_801EF830, 0x801EF830) //this is a jump label
/*801EF830 001EC630*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801EF834, 0x801EF834) //this is a jump label
/*801EF834 001EC634*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EF838 001EC638*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EF83C 001EC63C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801EF840 001EC640*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801EF844 001EC644*/ PPC::Runtime::ASM::blr();
}