//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802894BC.hpp"



void fn_8037EFB0(PPC::Runtime::GCContext* context)
{
/*8037EFB0 0037BDB0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8037EFB4 0037BDB4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8037EFB8 0037BDB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037EFBC 0037BDBC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8037EFC0 0037BDC0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8037EFC4 0037BDC4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8037EFC8 0037BDC8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8037EFCC 0037BDCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8037EFD0 0037BDD0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8037EFD4 0037BDD4*/ PPC::Runtime::ASM::bne(.L_8037F000);
/*8037EFD8 0037BDD8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8037EFDC 0037BDDC*/ PPC::Runtime::ASM::beq(.L_8037F000);
/*8037EFE0 0037BDE0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8037EFE4 0037BDE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8037EFE8 0037BDE8*/ PPC::Runtime::ASM::bl(fn_JObj_LoadJoint);
/*8037EFEC 0037BDEC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8037EFF0 0037BDF0*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8037EFF4 0037BDF4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8037EFF8 0037BDF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8037EFFC 0037BDFC*/ PPC::Runtime::ASM::bl(fn_802894BC);
RUNTIME_PPC_JUMP_LABEL(.L_8037F000, 0x8037F000) //this is a jump label
/*8037F000 0037BE00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037F004 0037BE04*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8037F008 0037BE08*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8037F00C 0037BE0C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8037F010 0037BE10*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8037F014 0037BE14*/ PPC::Runtime::ASM::blr();
}