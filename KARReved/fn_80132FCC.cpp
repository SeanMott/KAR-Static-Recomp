//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80178DB0.hpp"
#include "fn_80179664.hpp"



void fn_80132FCC(PPC::Runtime::GCContext* context)
{
/*80132FCC 0012FDCC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80132FD0 0012FDD0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80132FD4 0012FDD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80132FD8 0012FDD8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80132FDC 0012FDDC*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*80132FE0 0012FDE0*/ PPC::Runtime::ASM::mr(context->r5, context->r6);
/*80132FE4 0012FDE4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80132FE8 0012FDE8*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80132FEC 0012FDEC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80132FF0 0012FDF0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80132FF4 0012FDF4*/ PPC::Runtime::ASM::bl(fn_80178DB0);
/*80132FF8 0012FDF8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80132FFC 0012FDFC*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80133000 0012FE00*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*80133004 0012FE04*/ PPC::Runtime::ASM::bl(fn_80179664);
/*80133008 0012FE08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8013300C 0012FE0C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80133010 0012FE10*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80133014 0012FE14*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80133018 0012FE18*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8013301C 0012FE1C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80133020 0012FE20*/ PPC::Runtime::ASM::blr();
}