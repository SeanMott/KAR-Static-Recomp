//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800FD890.hpp"



void fn_80110118(PPC::Runtime::GCContext* context)
{
/*80110118 0010CF18*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8011011C 0010CF1C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80110120 0010CF20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80110124 0010CF24*/ PPC::Runtime::ASM::mulli(context->r0, context->r4, 0x48);
/*80110128 0010CF28*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8011012C 0010CF2C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80110130 0010CF30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x218, context->r3));
/*80110134 0010CF34*/ PPC::Runtime::ASM::bl(fn_800FD890);
/*80110138 0010CF38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011013C 0010CF3C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80110140 0010CF40*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80110144 0010CF44*/ PPC::Runtime::ASM::blr();
}