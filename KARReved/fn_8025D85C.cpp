//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250954.hpp"
#include "fn_8025D8C0.hpp"
#include "fn_8025D940.hpp"



void fn_8025D85C(PPC::Runtime::GCContext* context)
{
/*8025D85C 0025A65C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025D860 0025A660*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025D864 0025A664*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025D868 0025A668*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025D86C 0025A66C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025D870 0025A670*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025D874 0025A674*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025D878 0025A678*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025D87C 0025A67C*/ PPC::Runtime::ASM::bl(fn_80250954);
/*8025D880 0025A680*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x359, context->r31));
/* 8025D884 0025A684  54 00 F7 7F */ extrwi. context->r0 , context->r0 , 3 , 27
/*8025D888 0025A688*/ PPC::Runtime::ASM::bne(.L_8025D898);
/*8025D88C 0025A68C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025D890 0025A690*/ PPC::Runtime::ASM::bl(fn_8025D8C0);
/*8025D894 0025A694*/ PPC::Runtime::ASM::b(.L_8025D8A0);
RUNTIME_PPC_JUMP_LABEL(.L_8025D898, 0x8025D898) //this is a jump label
/*8025D898 0025A698*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025D89C 0025A69C*/ PPC::Runtime::ASM::bl(fn_8025D940);
RUNTIME_PPC_JUMP_LABEL(.L_8025D8A0, 0x8025D8A0) //this is a jump label
/*8025D8A0 0025A6A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025D8A4 0025A6A4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025D8A8 0025A6A8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025D8AC 0025A6AC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025D8B0 0025A6B0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025D8B4 0025A6B4*/ PPC::Runtime::ASM::blr();
}