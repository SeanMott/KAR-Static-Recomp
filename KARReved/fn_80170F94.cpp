//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_JObj_GetWorldPosition.hpp"



void fn_80170F94(PPC::Runtime::GCContext* context)
{
/*80170F94 0016DD94*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80170F98 0016DD98*/ PPC::Runtime::ASM::mflr(context->r0);
/*80170F9C 0016DD9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80170FA0 0016DDA0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80170FA4 0016DDA4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80170FA8 0016DDA8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80170FAC 0016DDAC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80170FB0 0016DDB0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80170FB4 0016DDB4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80170FB8 0016DDB8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*80170FBC 0016DDBC*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80170FC0 0016DDC0*/ PPC::Runtime::ASM::mr(context->r29, context->r30);
RUNTIME_PPC_JUMP_LABEL(.L_80170FC4, 0x80170FC4) //this is a jump label
/*80170FC4 0016DDC4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*80170FC8 0016DDC8*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x1c);
/*80170FCC 0016DDCC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80170FD0 0016DDD0*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*80170FD4 0016DDD4*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*80170FD8 0016DDD8*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*80170FDC 0016DDDC*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x4);
/*80170FE0 0016DDE0*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0xc);
/*80170FE4 0016DDE4*/ PPC::Runtime::ASM::blt(.L_80170FC4);
/*80170FE8 0016DDE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80170FEC 0016DDEC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80170FF0 0016DDF0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80170FF4 0016DDF4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80170FF8 0016DDF8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80170FFC 0016DDFC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80171000 0016DE00*/ PPC::Runtime::ASM::blr();
}