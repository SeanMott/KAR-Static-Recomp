//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800B5B94.hpp"



void fn_800B9244(PPC::Runtime::GCContext* context)
{
/*800B9244 000B6044*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800B9248 000B6048*/ PPC::Runtime::ASM::mflr(context->r0);
/*800B924C 000B604C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800B9250 000B6050*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800B9254 000B6054*/ PPC::Runtime::ASM::blt(.L_800B9260);
/*800B9258 000B6058*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x20);
/*800B925C 000B605C*/ PPC::Runtime::ASM::blt(.L_800B9268);
RUNTIME_PPC_JUMP_LABEL(.L_800B9260, 0x800B9260) //this is a jump label
/*800B9260 000B6060*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800B9264 000B6064*/ PPC::Runtime::ASM::b(.L_800B927C);
RUNTIME_PPC_JUMP_LABEL(.L_800B9268, 0x800B9268) //this is a jump label
/*800B9268 000B6068*/ PPC::Runtime::ASM::lis(context->r7, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800B926C 000B606C*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 2);
/*800B9270 000B6070*/ PPC::Runtime::ASM::addi(context->r3, context->r7, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800B9274 000B6074*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800B9278 000B6078*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800B927C, 0x800B927C) //this is a jump label
/*800B927C 000B607C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B9280 000B6080*/ PPC::Runtime::ASM::beq(.L_800B928C);
/*800B9284 000B6084*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800B9288 000B6088*/ PPC::Runtime::ASM::b(.L_800B9290);
RUNTIME_PPC_JUMP_LABEL(.L_800B928C, 0x800B928C) //this is a jump label
/*800B928C 000B608C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800B9290, 0x800B9290) //this is a jump label
/*800B9290 000B6090*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B9294 000B6094*/ PPC::Runtime::ASM::beq(.L_800B92A0);
/*800B9298 000B6098*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800B929C 000B609C*/ PPC::Runtime::ASM::b(.L_800B92A4);
RUNTIME_PPC_JUMP_LABEL(.L_800B92A0, 0x800B92A0) //this is a jump label
/*800B92A0 000B60A0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800B92A4, 0x800B92A4) //this is a jump label
/*800B92A4 000B60A4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B92A8 000B60A8*/ PPC::Runtime::ASM::beq(.L_800B92CC);
/*800B92AC 000B60AC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800B92B0 000B60B0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800B92B4 000B60B4*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*800B92B8 000B60B8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800B92BC 000B60BC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*800B92C0 000B60C0*/ PPC::Runtime::ASM::sth(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800B92C4 000B60C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800B92C8 000B60C8*/ PPC::Runtime::ASM::bl(fn_800B5B94);
RUNTIME_PPC_JUMP_LABEL(.L_800B92CC, 0x800B92CC) //this is a jump label
/*800B92CC 000B60CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800B92D0 000B60D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800B92D4 000B60D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800B92D8 000B60D8*/ PPC::Runtime::ASM::blr();
}