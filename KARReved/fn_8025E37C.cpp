//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250954.hpp"
#include "fn_8025E3E0.hpp"
#include "fn_8025E460.hpp"



void fn_8025E37C(PPC::Runtime::GCContext* context)
{
/*8025E37C 0025B17C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025E380 0025B180*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025E384 0025B184*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025E388 0025B188*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025E38C 0025B18C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025E390 0025B190*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025E394 0025B194*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025E398 0025B198*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025E39C 0025B19C*/ PPC::Runtime::ASM::bl(fn_80250954);
/*8025E3A0 0025B1A0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x359, context->r31));
/* 8025E3A4 0025B1A4  54 00 F7 7F */ extrwi. context->r0 , context->r0 , 3 , 27
/*8025E3A8 0025B1A8*/ PPC::Runtime::ASM::bne(.L_8025E3B8);
/*8025E3AC 0025B1AC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025E3B0 0025B1B0*/ PPC::Runtime::ASM::bl(fn_8025E3E0);
/*8025E3B4 0025B1B4*/ PPC::Runtime::ASM::b(.L_8025E3C0);
RUNTIME_PPC_JUMP_LABEL(.L_8025E3B8, 0x8025E3B8) //this is a jump label
/*8025E3B8 0025B1B8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025E3BC 0025B1BC*/ PPC::Runtime::ASM::bl(fn_8025E460);
RUNTIME_PPC_JUMP_LABEL(.L_8025E3C0, 0x8025E3C0) //this is a jump label
/*8025E3C0 0025B1C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025E3C4 0025B1C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025E3C8 0025B1C8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025E3CC 0025B1CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025E3D0 0025B1D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025E3D4 0025B1D4*/ PPC::Runtime::ASM::blr();
}