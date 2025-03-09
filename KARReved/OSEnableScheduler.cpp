//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void OSEnableScheduler(PPC::Runtime::GCContext* context)
{
/*803D9B84 003D6984*/ PPC::Runtime::ASM::mflr(context->r0);
/*803D9B88 003D6988*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803D9B8C 003D698C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803D9B90 003D6990*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803D9B94 003D6994*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803D9B98 003D6998*/ PPC::Runtime::ASM::lwz(context->r4, Reschedule_805DDF30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D9B9C 003D699C*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*803D9BA0 003D69A0*/ PPC::Runtime::ASM::stw(context->r0, Reschedule_805DDF30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D9BA4 003D69A4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*803D9BA8 003D69A8*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803D9BAC 003D69AC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803D9BB0 003D69B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803D9BB4 003D69B4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803D9BB8 003D69B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803D9BBC 003D69BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803D9BC0 003D69C0*/ PPC::Runtime::ASM::blr();
}