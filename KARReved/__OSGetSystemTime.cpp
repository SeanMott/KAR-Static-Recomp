//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSGetTime.hpp"
#include "OSRestoreInterrupts.hpp"



void __OSGetSystemTime(PPC::Runtime::GCContext* context)
{
/*803DB538 003D8338*/ PPC::Runtime::ASM::mflr(context->r0);
/*803DB53C 003D833C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803DB540 003D8340*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803DB544 003D8344*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803DB548 003D8348*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803DB54C 003D834C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803DB550 003D8350*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803DB554 003D8354*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803DB558 003D8358*/ PPC::Runtime::ASM::bl(OSGetTime);
/*803DB55C 003D835C*/ PPC::Runtime::ASM::lis(context->r6, 0x8000);
/*803DB560 003D8360*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30dc, context->r6));
/*803DB564 003D8364*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30d8, context->r6));
/*803DB568 003D8368*/ PPC::Runtime::ASM::addc(context->r29, context->r5, context->r4);
/*803DB56C 003D836C*/ PPC::Runtime::ASM::adde(context->r30, context->r0, context->r3);
/*803DB570 003D8370*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803DB574 003D8374*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803DB578 003D8378*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*803DB57C 003D837C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803DB580 003D8380*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803DB584 003D8384*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803DB588 003D8388*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803DB58C 003D838C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803DB590 003D8390*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803DB594 003D8394*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803DB598 003D8398*/ PPC::Runtime::ASM::blr();
}