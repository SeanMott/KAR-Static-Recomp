//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800ED5B0.hpp"



void fn_800ED784(PPC::Runtime::GCContext* context)
{
/*800ED784 000EA584*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800ED788 000EA588*/ PPC::Runtime::ASM::mflr(context->r0);
/*800ED78C 000EA58C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800ED790 000EA590*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800ED794 000EA594*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*800ED798 000EA598*/ PPC::Runtime::ASM::beq(.L_800ED7F0);
/*800ED79C 000EA59C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0xf);
/*800ED7A0 000EA5A0*/ PPC::Runtime::ASM::beq(.L_800ED7B4);
/*800ED7A4 000EA5A4*/ PPC::Runtime::ASM::bge(.L_800ED7C4);
/*800ED7A8 000EA5A8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x7);
/*800ED7AC 000EA5AC*/ PPC::Runtime::ASM::beq(.L_800ED7BC);
/*800ED7B0 000EA5B0*/ PPC::Runtime::ASM::b(.L_800ED7C4);
RUNTIME_PPC_JUMP_LABEL(.L_800ED7B4, 0x800ED7B4) //this is a jump label
/*800ED7B4 000EA5B4*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*800ED7B8 000EA5B8*/ PPC::Runtime::ASM::b(.L_800ED7C8);
RUNTIME_PPC_JUMP_LABEL(.L_800ED7BC, 0x800ED7BC) //this is a jump label
/*800ED7BC 000EA5BC*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*800ED7C0 000EA5C0*/ PPC::Runtime::ASM::b(.L_800ED7C8);
RUNTIME_PPC_JUMP_LABEL(.L_800ED7C4, 0x800ED7C4) //this is a jump label
/*800ED7C4 000EA5C4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800ED7C8, 0x800ED7C8) //this is a jump label
/*800ED7C8 000EA5C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r4));
/*800ED7CC 000EA5CC*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r5);
/*800ED7D0 000EA5D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r4));
/*800ED7D4 000EA5D4*/ PPC::Runtime::ASM::bl(fn_800ED5B0);
/*800ED7D8 000EA5D8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800ED7DC 000EA5DC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800ED7E0 000EA5E0*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*800ED7E4 000EA5E4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*800ED7E8 000EA5E8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800ED7EC 000EA5EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800ED7F0, 0x800ED7F0) //this is a jump label
/*800ED7F0 000EA5F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800ED7F4 000EA5F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800ED7F8 000EA5F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800ED7FC 000EA5FC*/ PPC::Runtime::ASM::blr();
}