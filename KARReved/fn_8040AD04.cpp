//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"
#include "fn_HSD_JObjSetupMatrixSub.hpp"



void fn_8040AD04(PPC::Runtime::GCContext* context)
{
/*8040AD04 00407B04*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8040AD08 00407B08*/ PPC::Runtime::ASM::mflr(context->r0);
/*8040AD0C 00407B0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8040AD10 00407B10*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 8040AD14 00407B14  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*8040AD18 00407B18*/ PPC::Runtime::ASM::beq(.L_8040AD60);
/*8040AD1C 00407B1C*/ PPC::Runtime::ASM::bne(.L_8040AD30);
/*8040AD20 00407B20*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_531 @ Get_MemoryOffset_SDA21);
/*8040AD24 00407B24*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8040AD28 00407B28*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_530 @ Get_MemoryOffset_SDA21);
/*8040AD2C 00407B2C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8040AD30, 0x8040AD30) //this is a jump label
/*8040AD30 00407B30*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8040AD34 00407B34*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8040AD38 00407B38*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8040AD3C 00407B3C*/ PPC::Runtime::ASM::bne(.L_8040AD4C);
/*8040AD40 00407B40*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8040AD44 00407B44*/ PPC::Runtime::ASM::beq(.L_8040AD4C);
/*8040AD48 00407B48*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8040AD4C, 0x8040AD4C) //this is a jump label
/*8040AD4C 00407B4C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8040AD50 00407B50*/ PPC::Runtime::ASM::bne(.L_8040AD58);
/*8040AD54 00407B54*/ PPC::Runtime::ASM::b(.L_8040AD60);
RUNTIME_PPC_JUMP_LABEL(.L_8040AD58, 0x8040AD58) //this is a jump label
/*8040AD58 00407B58*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8040AD5C 00407B5C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_8040AD60, 0x8040AD60) //this is a jump label
/*8040AD60 00407B60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8040AD64 00407B64*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8040AD68 00407B68*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8040AD6C 00407B6C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8040AD70 00407B70*/ PPC::Runtime::ASM::blr();
}