//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F4B20.hpp"
#include "fn_800F91C8.hpp"
#include "fn_800F95C8.hpp"



void fn_800F9580(PPC::Runtime::GCContext* context)
{
/*800F9580 000F6380*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800F9584 000F6384*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F9588 000F6388*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*800F958C 000F638C*/ PPC::Runtime::ASM::mr(context->r4, context->r5);
/*800F9590 000F6390*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F9594 000F6394*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F9598 000F6398*/ PPC::Runtime::ASM::bl(fn_800F4B20);
/*800F959C 000F639C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800F95A0 000F63A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800F95A4 000F63A4*/ PPC::Runtime::ASM::bl(fn_800F91C8);
/*800F95A8 000F63A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800F95AC 000F63AC*/ PPC::Runtime::ASM::bl(fn_800F95C8);
/*800F95B0 000F63B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F95B4 000F63B4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800F95B8 000F63B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F95BC 000F63BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F95C0 000F63C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800F95C4 000F63C4*/ PPC::Runtime::ASM::blr();
}