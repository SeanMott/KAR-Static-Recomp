//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_803EEC28(PPC::Runtime::GCContext* context)
{
/*803EEC28 003EBA28*/ PPC::Runtime::ASM::mflr(context->r0);
/*803EEC2C 003EBA2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803EEC30 003EBA30*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803EEC34 003EBA34*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803EEC38 003EBA38*/ PPC::Runtime::ASM::addi(context->r31, context->r4, 0x0);
/*803EEC3C 003EBA3C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803EEC40 003EBA40*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/*803EEC44 003EBA44*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803EEC48 003EBA48*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803EEC4C 003EBA4C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19c, context->r30));
/*803EEC50 003EBA50*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*803EEC54 003EBA54*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19e, context->r30));
/*803EEC58 003EBA58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*803EEC5C 003EBA5C*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x200);
/*803EEC60 003EBA60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*803EEC64 003EBA64*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803EEC68 003EBA68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803EEC6C 003EBA6C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803EEC70 003EBA70*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803EEC74 003EBA74*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803EEC78 003EBA78*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803EEC7C 003EBA7C*/ PPC::Runtime::ASM::blr();
}