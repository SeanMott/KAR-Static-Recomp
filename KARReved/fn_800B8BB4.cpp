//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800B5F24.hpp"



void fn_800B8BB4(PPC::Runtime::GCContext* context)
{
/*800B8BB4 000B59B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800B8BB8 000B59B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800B8BBC 000B59BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800B8BC0 000B59C0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800B8BC4 000B59C4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*800B8BC8 000B59C8*/ PPC::Runtime::ASM::bl(fn_800B5F24);
/*800B8BCC 000B59CC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B8BD0 000B59D0*/ PPC::Runtime::ASM::beq(.L_800B8BF4);
/*800B8BD4 000B59D4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r3));
/*800B8BD8 000B59D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r3));
/*800B8BDC 000B59DC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B8BE0 000B59E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800B8BE4 000B59E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xfc, context->r3));
/*800B8BE8 000B59E8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800B8BEC 000B59EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800B8BF0 000B59F0*/ PPC::Runtime::ASM::b(.L_800B8BF8);
RUNTIME_PPC_JUMP_LABEL(.L_800B8BF4, 0x800B8BF4) //this is a jump label
/*800B8BF4 000B59F4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800B8BF8, 0x800B8BF8) //this is a jump label
/*800B8BF8 000B59F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800B8BFC 000B59FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800B8C00 000B5A00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800B8C04 000B5A04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800B8C08 000B5A08*/ PPC::Runtime::ASM::blr();
}