//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C7BC4.hpp"
#include "fn_801B78D0.hpp"



void fn_801B77F4(PPC::Runtime::GCContext* context)
{
/*801B77F4 001B45F4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B77F8 001B45F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B77FC 001B45FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B7800 001B4600*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B7804 001B4604*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B7808 001B4608*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r3));
/*801B780C 001B460C*/ PPC::Runtime::ASM::bl(fn_801C7BC4);
/*801B7810 001B4610*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801B7814 001B4614*/ PPC::Runtime::ASM::beq(.L_801B782C);
/*801B7818 001B4618*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E16E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B781C 001B461C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B7820 001B4620*/ PPC::Runtime::ASM::bl(fn_801B78D0);
/*801B7824 001B4624*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801B7828 001B4628*/ PPC::Runtime::ASM::b(.L_801B7830);
RUNTIME_PPC_JUMP_LABEL(.L_801B782C, 0x801B782C) //this is a jump label
/*801B782C 001B462C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801B7830, 0x801B7830) //this is a jump label
/*801B7830 001B4630*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B7834 001B4634*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B7838 001B4638*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B783C 001B463C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B7840 001B4640*/ PPC::Runtime::ASM::blr();
}