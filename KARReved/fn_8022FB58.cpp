//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D248.hpp"



void fn_8022FB58(PPC::Runtime::GCContext* context)
{
/*8022FB58 0022C958*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8022FB5C 0022C95C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022FB60 0022C960*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x5);
/*8022FB64 0022C964*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022FB68 0022C968*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022FB6C 0022C96C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8022FB70 0022C970*/ PPC::Runtime::ASM::bge(.L_8022FBB8);
/*8022FB74 0022C974*/ PPC::Runtime::ASM::bge(.L_8022FBB8);
/*8022FB78 0022C978*/ PPC::Runtime::ASM::cmpwi(context->r31, -0x1);
/*8022FB7C 0022C97C*/ PPC::Runtime::ASM::beq(.L_8022FBB8);
/*8022FB80 0022C980*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*8022FB84 0022C984*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*8022FB88 0022C988*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x2);
/*8022FB8C 0022C98C*/ PPC::Runtime::ASM::add(context->r5, context->r3, context->r0);
/*8022FB90 0022C990*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c8, context->r5));
/*8022FB94 0022C994*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*8022FB98 0022C998*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c8, context->r5));
/*8022FB9C 0022C99C*/ PPC::Runtime::ASM::ble(.L_8022FBB8);
/*8022FBA0 0022C9A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x604, context->r3));
/*8022FBA4 0022C9A4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8022FBA8 0022C9A8*/ PPC::Runtime::ASM::beq(.L_8022FBB8);
/*8022FBAC 0022C9AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x804, context->r3));
/*8022FBB0 0022C9B0*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*8022FBB4 0022C9B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x804, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8022FBB8, 0x8022FBB8) //this is a jump label
/*8022FBB8 0022C9B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022FBBC 0022C9BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022FBC0 0022C9C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022FBC4 0022C9C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8022FBC8 0022C9C8*/ PPC::Runtime::ASM::blr();
}