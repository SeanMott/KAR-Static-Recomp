//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801DD17C.hpp"



void fn_charge_whileMidAirCheck(PPC::Runtime::GCContext* context)
{
/*801EF100 001EBF00*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801EF104 001EBF04*/ PPC::Runtime::ASM::mflr(context->r0);
/*801EF108 001EBF08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EF10C 001EBF0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66c, context->r3));
/*801EF110 001EBF10*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801EF114 001EBF14*/ PPC::Runtime::ASM::beq(.L_801EF13C);
/*801EF118 001EBF18*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r3));
/* 801EF11C 001EBF1C  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*801EF120 001EBF20*/ PPC::Runtime::ASM::beq(.L_801EF134);
/*801EF124 001EBF24*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*801EF128 001EBF28*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1F20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801EF12C 001EBF2C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*801EF130 001EBF30*/ PPC::Runtime::ASM::bl(fn_801DD17C);
RUNTIME_PPC_JUMP_LABEL(.L_801EF134, 0x801EF134) //this is a jump label
/*801EF134 001EBF34*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801EF138 001EBF38*/ PPC::Runtime::ASM::b(.L_801EF140);
RUNTIME_PPC_JUMP_LABEL(.L_801EF13C, 0x801EF13C) //this is a jump label
/*801EF13C 001EBF3C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801EF140, 0x801EF140) //this is a jump label
/*801EF140 001EBF40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EF144 001EBF44*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801EF148 001EBF48*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801EF14C 001EBF4C*/ PPC::Runtime::ASM::blr();
}