//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005D64C.hpp"
#include "fn_8005E08C.hpp"



void fn_8025699C(PPC::Runtime::GCContext* context)
{
/*8025699C 0025379C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802569A0 002537A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802569A4 002537A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802569A8 002537A8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802569AC 002537AC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802569B0 002537B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x240, context->r3));
/*802569B4 002537B4*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*802569B8 002537B8*/ PPC::Runtime::ASM::beq(.L_802569D4);
/*802569BC 002537BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x244, context->r31));
/*802569C0 002537C0*/ PPC::Runtime::ASM::bl(fn_8005D64C);
/*802569C4 002537C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x240, context->r31));
/*802569C8 002537C8*/ PPC::Runtime::ASM::bl(fn_8005E08C);
/*802569CC 002537CC*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*802569D0 002537D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x240, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802569D4, 0x802569D4) //this is a jump label
/*802569D4 002537D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802569D8 002537D8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802569DC 002537DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802569E0 002537E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802569E4 002537E4*/ PPC::Runtime::ASM::blr();
}