//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"



void fn_HSD_SListAppendList(PPC::Runtime::GCContext* context)
{
/*8041BDC8 00418BC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8041BDCC 00418BCC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8041BDD0 00418BD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041BDD4 00418BD4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 8041BDD8 00418BD8  7C 9F 23 79 */ mr. context->r31 , context->r4
/*8041BDDC 00418BDC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8041BDE0 00418BE0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8041BDE4 00418BE4*/ PPC::Runtime::ASM::bne(.L_8041BDF8);
/*8041BDE8 00418BE8*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_491 @ Get_MemoryOffset_SDA21);
/*8041BDEC 00418BEC*/ PPC::Runtime::ASM::li(context->r4, 0xb3);
/*8041BDF0 00418BF0*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_489 @ Get_MemoryOffset_SDA21);
/*8041BDF4 00418BF4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8041BDF8, 0x8041BDF8) //this is a jump label
/*8041BDF8 00418BF8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8041BDFC 00418BFC*/ PPC::Runtime::ASM::beq(.L_8041BE14);
/*8041BE00 00418C00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8041BE04 00418C04*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8041BE08 00418C08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8041BE0C 00418C0C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8041BE10 00418C10*/ PPC::Runtime::ASM::b(.L_8041BE20);
RUNTIME_PPC_JUMP_LABEL(.L_8041BE14, 0x8041BE14) //this is a jump label
/*8041BE14 00418C14*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8041BE18 00418C18*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8041BE1C 00418C1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8041BE20, 0x8041BE20) //this is a jump label
/*8041BE20 00418C20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041BE24 00418C24*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8041BE28 00418C28*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8041BE2C 00418C2C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8041BE30 00418C30*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8041BE34 00418C34*/ PPC::Runtime::ASM::blr();
}