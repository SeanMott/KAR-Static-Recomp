//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801E5838.hpp"



void fn_VehicleStatTableFuncCallbacks_Star_BreakDown_1(PPC::Runtime::GCContext* context)
{
/*801F0234 001ED034*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F0238 001ED038*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F023C 001ED03C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F0240 001ED040*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r3));
/* 801F0244 001ED044  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801F0248 001ED048*/ PPC::Runtime::ASM::beq(.L_801F0250);
/*801F024C 001ED04C*/ PPC::Runtime::ASM::bl(fn_801E5838);
RUNTIME_PPC_JUMP_LABEL(.L_801F0250, 0x801F0250) //this is a jump label
/*801F0250 001ED050*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F0254 001ED054*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F0258 001ED058*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F025C 001ED05C*/ PPC::Runtime::ASM::blr();
}