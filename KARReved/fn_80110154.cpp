//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80106658.hpp"



void fn_80110154(PPC::Runtime::GCContext* context)
{
/*80110154 0010CF54*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80110158 0010CF58*/ PPC::Runtime::ASM::mflr(context->r0);
/*8011015C 0010CF5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80110160 0010CF60*/ PPC::Runtime::ASM::mulli(context->r0, context->r4, 0x48);
/*80110164 0010CF64*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110168 0010CF68*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8011016C 0010CF6C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x218, context->r3));
/*80110170 0010CF70*/ PPC::Runtime::ASM::bl(fn_80106658);
/*80110174 0010CF74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80110178 0010CF78*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8011017C 0010CF7C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80110180 0010CF80*/ PPC::Runtime::ASM::blr();
}